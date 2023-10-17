// Copyright Epic Games, Inc. All Rights Reserved.

#include "AleksandrLaskusTestTGameMode.h"
#include "AleksandrLaskusTestTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAleksandrLaskusTestTGameMode::AAleksandrLaskusTestTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
