// Copyright Epic Games, Inc. All Rights Reserved.

#include "LessonGameMode.h"
#include "LessonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALessonGameMode::ALessonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
