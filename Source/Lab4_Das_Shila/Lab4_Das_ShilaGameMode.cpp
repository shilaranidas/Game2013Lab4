// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab4_Das_ShilaGameMode.h"
#include "Lab4_Das_ShilaPlayerController.h"
#include "Lab4_Das_ShilaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab4_Das_ShilaGameMode::ALab4_Das_ShilaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALab4_Das_ShilaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}