// Copyright Epic Games, Inc. All Rights Reserved.

#include "KnightGameGameMode.h"
#include "KnightGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKnightGameGameMode::AKnightGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
