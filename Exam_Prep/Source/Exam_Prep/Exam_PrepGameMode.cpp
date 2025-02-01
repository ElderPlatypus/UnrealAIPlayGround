// Copyright Epic Games, Inc. All Rights Reserved.

#include "Exam_PrepGameMode.h"
#include "Exam_PrepCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExam_PrepGameMode::AExam_PrepGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
