// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UE4PlaygroundCharacter.generated.h"


//declare Enum class for what weapon we're on
class UInputComponent;
UENUM()
enum Eweapon
{
	Basic  UMETA(DisplayName = "Basic"),
	Burst  UMETA(DisplayName = "Burst"),
	Teleport UMETA(DisplayName = "Teleport")
};

UCLASS(config=Game)
class AUE4PlaygroundCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

public:
	AUE4PlaygroundCharacter();

//Material for Basic gun
	UPROPERTY(EditAnywhere)
	class UMaterial* BasicGunMat;

	//Material for TPGun
	UPROPERTY(EditAnywhere)
	class UMaterial* TPGunMat;

	//Material for BurstGun
	UPROPERTY(EditAnywhere)
	class UMaterial* BurstGunMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bTPGunUnlocked = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bBurstGunUnlocked = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bFirstTPGrab = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bFirstBurstGrab = true;

	int PlayerScore = 0;
		
protected:
	virtual void BeginPlay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AUE4PlaygroundProjectile> ProjectileClass;

	/** Projectile class to spawn  for alt fire*/
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AUE4PlaygroundProjectile> AltProjClass;

	//Projectile Class for TP proj
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AUE4PlaygroundProjectile> TPProjClass;

	//Keeping track of last shot for TP so that you can't have two things to TP to at once)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AUE4PlaygroundProjectile* LastTPShot;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint32 bUsingMotionControllers : 1;

	//Time to set between each shot for burst
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BurstShoot)
		float TimeBetweenBursts = 0.5f;
	
	//Number of shots in a burst
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BurstShoot)
		int NumOfShots = 3;

	//timers for burst shooting
	TArray<FTimerHandle> BurstHandle2;

	//bool for checking if using TP Gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TeleportGun)
		bool bIsUsingTPGun = false;

	//Holder for current weapon type
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<Eweapon> CurrentWeapon = Basic;

	//Total Gun Clips. eventually make this BP readwrite so that you can edit without going into code

	const int BasicClipTotal = 5;
	const int BurstClipTotal = 9;  //Should be devisible by NumOfShots
	const int TPClipTotal = 3;

	//Current Gun Clips
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int CurrentBasicClip;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int CurrentBurstClip;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int CurrentTPClip;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int CurrentActiveClip =5;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int TotalActiveClip = 5;


	void IncreaseScore();

protected:

	//void IncreaseScore();

	void DisplayScore();

	//printing ammo hopefully
	void DisplayAmmo(Eweapon CWeap);

	//Swapping Guns
	UFUNCTION(BlueprintCallable)
	void OnToggleGun();

	UFUNCTION(BlueprintCallable)
	void SetGun(Eweapon GunToSet);

	//Reload
	void OnReload();

	//setting up a burst shot
	UFUNCTION()
	void OnFire2();

	//function to play sound
	void PlayGunSnd();

	//function to play anim
	void PlayGunAnim();

	//creating alt fire
	void OnAltFire();

	/** Fires a projectile. */
	void OnFire();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

