// Copyright Epic Games, Inc. All Rights Reserved.

#include "DGM_CodeGameMode.h"

#include "DGM_CodePlayerController.h"
#include "UObject/ConstructorHelpers.h"

ADGM_CodeGameMode::ADGM_CodeGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP_PlayerChar_Base"));
    if (PlayerPawnBPClass.Succeeded())
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
    PlayerControllerClass = ADGM_CodePlayerController::StaticClass();
}
