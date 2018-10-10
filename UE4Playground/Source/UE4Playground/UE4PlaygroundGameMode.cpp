// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4PlaygroundGameMode.h"
#include "UE4PlaygroundHUD.h"
#include "UE4PlaygroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4PlaygroundGameMode::AUE4PlaygroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4PlaygroundHUD::StaticClass();
}
