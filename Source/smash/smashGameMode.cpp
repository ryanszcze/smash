// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "smashGameMode.h"
#include "smashCharacter.h"

AsmashGameMode::AsmashGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AsmashCharacter::StaticClass();	
}
