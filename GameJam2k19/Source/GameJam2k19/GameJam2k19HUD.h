// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameJam2k19HUD.generated.h"

UCLASS()
class AGameJam2k19HUD : public AHUD
{
	GENERATED_BODY()

public:
	AGameJam2k19HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

