// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FlappyTune.h"
#include "FlappyTuneGameMode.h"
#include "FlappyTuneCharacter.h"

AFlappyTuneGameMode::AFlappyTuneGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AFlappyTuneCharacter::StaticClass();	
}
