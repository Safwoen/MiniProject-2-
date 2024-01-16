// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP3GameMode.h"
#include "MP3PlayerController.h"
#include "MP3Character.h"
#include "UObject/ConstructorHelpers.h"

AMP3GameMode::AMP3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMP3PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}