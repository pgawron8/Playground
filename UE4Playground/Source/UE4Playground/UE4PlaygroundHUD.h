// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE4PlaygroundHUD.generated.h"

UCLASS()
class AUE4PlaygroundHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUE4PlaygroundHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

