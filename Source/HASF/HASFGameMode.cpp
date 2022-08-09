// Copyright Epic Games, Inc. All Rights Reserved.

#include "HASFGameMode.h"
#include "HASFCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHASFGameMode::AHASFGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
