// Fill out your copyright notice in the Description page of Project Settings.


#include "Tracker_AIController.h"

//Includes UE5
#include "Tracker_Character.h"
//#include "Enemy_TargetPoint.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"


ATracker_AIController::ATracker_AIController()
{
	mEnemyBTC = CreateDefaultSubobject<UBehaviorTreeComponent>("Tracker AI Behaviour Tree Component");
	mEnemyBBC = CreateDefaultSubobject<UBlackboardComponent>("Tracker AI Black Board Component");
}

void ATracker_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (!mEnemyBT)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No Behaviour Tree Found"));
	}


	mEnemyBBC->InitializeBlackboard(*mEnemyBT->BlackboardAsset);


	mEnemyBTC->StartTree(*mEnemyBT);
}