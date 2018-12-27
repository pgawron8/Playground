// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Target.generated.h"

UCLASS(config=Game)
class UE4PLAYGROUND_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

	/** Sphere collision component */
	UPROPERTY(BlueprintReadWrite, Category = mesh)
		class UBoxComponent* CollisionComp;

	UPROPERTY(BlueprintReadWrite, Category = mesh)
		class UStaticMeshComponent* StatMesh;

	UPROPERTY(BlueprintReadOnly)
		bool bAddScore = false;


	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	/** Returns CollisionComp subobject **/
	FORCEINLINE class UBoxComponent* GetCollisionComp() const { return CollisionComp; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
