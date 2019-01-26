// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MakeItGameMode.h"
#include "MakeItPlayerController.h"
#include "MakeItCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMakeItGameMode::AMakeItGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMakeItPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}