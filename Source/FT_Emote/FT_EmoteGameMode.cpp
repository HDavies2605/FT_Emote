// Copyright Epic Games, Inc. All Rights Reserved.

#include "FT_EmoteGameMode.h"
#include "FT_EmoteCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFT_EmoteGameMode::AFT_EmoteGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
