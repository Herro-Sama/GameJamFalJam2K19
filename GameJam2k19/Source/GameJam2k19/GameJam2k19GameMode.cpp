// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GameJam2k19GameMode.h"
#include "GameJam2k19HUD.h"
#include "GameJam2k19Character.h"
#include "UObject/ConstructorHelpers.h"

AGameJam2k19GameMode::AGameJam2k19GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameJam2k19HUD::StaticClass();
}
