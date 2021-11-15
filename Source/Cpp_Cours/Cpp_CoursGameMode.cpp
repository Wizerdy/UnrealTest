// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cpp_CoursGameMode.h"
#include "Cpp_CoursCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACpp_CoursGameMode::ACpp_CoursGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
