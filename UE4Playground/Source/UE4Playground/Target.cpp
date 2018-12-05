// Fill out your copyright notice in the Description page of Project Settings.

#include "Target.h"
#include "Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "UE4PlaygroundProjectile.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StatMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));

	StatMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StatMeshAsset(TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));
	if (StatMeshAsset.Succeeded())
	{
		StatMesh->SetStaticMesh(StatMeshAsset.Object);
		StatMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//RootComponent = StatMesh;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("SphereComp"));
	//CollisionComp->InitBoxExtent(FVector(1.0f, 1.0f, 1.0f));
	CollisionComp->BodyInstance.SetCollisionProfileName("Target");
	CollisionComp->OnComponentHit.AddDynamic(this, &ATarget::OnHit);		// set up a notification for when this component hits something blocking

	
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATarget::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor == Cast<AUE4PlaygroundProjectile>(OtherActor) )
	{
		bAddScore = true;

	}
}

