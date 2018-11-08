// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4PlaygroundCharacter.h"
#include "UE4PlaygroundProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Engine/Public/TimerManager.h"
#include "Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AUE4PlaygroundCharacter

AUE4PlaygroundCharacter::AUE4PlaygroundCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;

}

void AUE4PlaygroundCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}

	//all guns start at full ammo
	CurrentBasicClip = BasicClipTotal;
	CurrentBurstClip = BurstClipTotal;
	CurrentTPClip = TPClipTotal;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AUE4PlaygroundCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AUE4PlaygroundCharacter::OnFire);

	// Bind alt fire event
	PlayerInputComponent->BindAction("AltFire", IE_Pressed, this, &AUE4PlaygroundCharacter::OnAltFire);

	PlayerInputComponent->BindAction("Fire2", IE_Pressed, this, &AUE4PlaygroundCharacter::OnFire2);
	//Bind Toggle Gun
	PlayerInputComponent->BindAction("ToggleGun", IE_Pressed, this, &AUE4PlaygroundCharacter::OnToggleGun);

	//Bind Reload
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AUE4PlaygroundCharacter::OnReload);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AUE4PlaygroundCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AUE4PlaygroundCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUE4PlaygroundCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AUE4PlaygroundCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AUE4PlaygroundCharacter::LookUpAtRate);
}

void AUE4PlaygroundCharacter::OnFire()
{
	//need world for every path anyways, get it now
	UWorld* const World = GetWorld();

	//if set to use TP gun and Projectile isn't null
	if (TPProjClass != NULL && CurrentWeapon == Teleport && CurrentActiveClip > 0)
	{
		if (World != NULL)
		{
			//limit TP shot to one bullet alive at a time
			if (LastTPShot != NULL)
			{
				LastTPShot->Destroy();
				LastTPShot = nullptr;
			}

			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AUE4PlaygroundProjectile>(TPProjClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				LastTPShot = World->SpawnActor<AUE4PlaygroundProjectile>(TPProjClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
				PlayGunSnd();
				PlayGunAnim();
				CurrentActiveClip--;
				DisplayAmmo(CurrentWeapon);
			}
		}
	}
	//If we're using the basic gun
	else if(ProjectileClass != NULL && CurrentWeapon == Basic && CurrentActiveClip > 0)
	{
		if (World != NULL)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AUE4PlaygroundProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AUE4PlaygroundProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
				PlayGunSnd();
				PlayGunAnim();
				CurrentActiveClip--;
				DisplayAmmo(CurrentWeapon);
			}
		}
	}
	//if we're using burst
	else if (CurrentWeapon == Burst && CurrentActiveClip >0)
	{
		//Set up Array of Timers
		BurstHandle2.SetNum(NumOfShots + 1, true);

		//For each timer
		for (int i = 0; i <= NumOfShots; i++)
		{
			//Set Timers to incriments of TimeBetweenBursts
			GetWorld()->GetTimerManager().SetTimer(BurstHandle2[i], this, &AUE4PlaygroundCharacter::OnFire2, (0.0f + (TimeBetweenBursts* i)), false);
			
		}
	}

	
}

void AUE4PlaygroundCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AUE4PlaygroundCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AUE4PlaygroundCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AUE4PlaygroundCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AUE4PlaygroundCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AUE4PlaygroundCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AUE4PlaygroundCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AUE4PlaygroundCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AUE4PlaygroundCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AUE4PlaygroundCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AUE4PlaygroundCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AUE4PlaygroundCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

void AUE4PlaygroundCharacter::OnFire2()
{
	UWorld* const World = GetWorld();
	if (World != NULL)
	{
		if (bUsingMotionControllers)
		{
			const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
			const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
			World->SpawnActor<AUE4PlaygroundProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		}
		else
		{
			const FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<AUE4PlaygroundProjectile>(AltProjClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			PlayGunSnd();
			PlayGunAnim();
			CurrentActiveClip--;
			DisplayAmmo(CurrentWeapon);
		}
	}
}

void AUE4PlaygroundCharacter::PlayGunSnd()
{
	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

}

void AUE4PlaygroundCharacter::PlayGunAnim()
{
	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AUE4PlaygroundCharacter::OnAltFire()
{
	//If TP Gun ult fire
	if (TPProjClass != NULL && bIsUsingTPGun && LastTPShot !=nullptr)
	{

		//Set location to projectile location, then destroy
		this->SetActorLocation(LastTPShot->GetActorLocation());
		LastTPShot->Destroy();
		LastTPShot = nullptr;
	}

	//set up other alt fires later
}

void AUE4PlaygroundCharacter::DisplayAmmo(Eweapon CWeap)
{

	FString sToScreen = "Ammo: ";
	//switch (CurrentWeapon)
	//{
	//case 0:
		sToScreen.AppendInt(CurrentActiveClip);
		sToScreen.Append("/");
		sToScreen.AppendInt(TotalActiveClip);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, sToScreen);
		/*break;
	case 1:
		sToScreen.AppendInt(CurrentBurstClip);
		sToScreen.Append("/");
		sToScreen.AppendInt(BurstClipTotal);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, sToScreen);
		break;
	case 2:
		sToScreen.AppendInt(CurrentTPClip);
		sToScreen.Append("/");
		sToScreen.AppendInt(TPClipTotal);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, sToScreen);
		break;
	default:
		break;
	}*/
}

void AUE4PlaygroundCharacter::OnToggleGun()
{
	switch (CurrentWeapon) {
	//basic to Burst
	case 0: 
		CurrentBasicClip = CurrentActiveClip;
		if (bBurstGunUnlocked)
		{
			CurrentWeapon = Burst;
			bIsUsingTPGun = false;
			FP_Gun->SetMaterial(0, BurstGunMat);
			TotalActiveClip = BurstClipTotal;
			CurrentActiveClip = CurrentBurstClip;
			DisplayAmmo(CurrentWeapon);
			break;
		}
	//burst to teleport gun
	case 1: 
		CurrentBurstClip = CurrentActiveClip;
		if (bTPGunUnlocked)
		{
			CurrentWeapon = Teleport;
			LastTPShot = nullptr;
			bIsUsingTPGun = true;
			FP_Gun->SetMaterial(0, TPGunMat);
			TotalActiveClip = TPClipTotal;
			CurrentActiveClip = CurrentTPClip;
			DisplayAmmo(CurrentWeapon);
			break;
		}
	case 2: 
		CurrentTPClip = CurrentActiveClip;
		CurrentWeapon = Basic;
		bIsUsingTPGun = false;
		FP_Gun->SetMaterial(0, BasicGunMat);
		TotalActiveClip = BasicClipTotal;
		CurrentActiveClip = CurrentBasicClip;
		DisplayAmmo(CurrentWeapon);
		break;
	default: break;

	}
}

void AUE4PlaygroundCharacter::SetGun(Eweapon GunToSet)
{
	switch (GunToSet) {
		//basic to Burst
	case 1:
		//CurrentBasicClip = CurrentActiveClip;
		if (bBurstGunUnlocked)
		{
			bIsUsingTPGun = false;
			FP_Gun->SetMaterial(0, BurstGunMat);
			TotalActiveClip = BurstClipTotal;
			CurrentActiveClip = CurrentBurstClip;
			DisplayAmmo(GunToSet);
			break;
		}
		//burst to teleport gun
	case 2:
		//CurrentBurstClip = CurrentActiveClip;
		if (bTPGunUnlocked)
		{
			LastTPShot = nullptr;
			bIsUsingTPGun = true;
			FP_Gun->SetMaterial(0, TPGunMat);
			TotalActiveClip = TPClipTotal;
			CurrentActiveClip = CurrentTPClip;
			DisplayAmmo(GunToSet);
			break;
		}
	case 0:
		//CurrentTPClip = CurrentActiveClip;
		bIsUsingTPGun = false;
		FP_Gun->SetMaterial(0, BasicGunMat);
		DisplayAmmo(GunToSet);
		TotalActiveClip = BasicClipTotal;
		CurrentActiveClip = CurrentBasicClip;
		break;
	default: break;

		
	}
	CurrentWeapon = GunToSet;
}

void AUE4PlaygroundCharacter::OnReload()
{
	switch (CurrentWeapon) {
	case 0: CurrentActiveClip = BasicClipTotal;
		TotalActiveClip = BasicClipTotal;
		DisplayAmmo(CurrentWeapon);
		break;
	case 1: CurrentActiveClip = BurstClipTotal;
		TotalActiveClip = BurstClipTotal;
		DisplayAmmo(CurrentWeapon);
		break;
	case 2: CurrentActiveClip = TPClipTotal;
		TotalActiveClip = TPClipTotal;
		DisplayAmmo(CurrentWeapon);
		break;
	default:
		break;
	}

}

