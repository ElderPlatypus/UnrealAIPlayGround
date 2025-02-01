// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_AIController.h"

//Includes UE5
#include "Enemy_Character.h"
#include "Enemy_TargetPoint.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

AEnemy_AIController::AEnemy_AIController()
{
	mEnemyBTC = CreateDefaultSubobject<UBehaviorTreeComponent>("Enemy AI Behaviour Tree Component");
	mEnemyBBC = CreateDefaultSubobject<UBlackboardComponent>("Enemy AI Black Board Component");
}

void AEnemy_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (!mEnemyBT)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No Behaviour Tree Found"));
	}


	mEnemyBBC->InitializeBlackboard(*mEnemyBT->BlackboardAsset);

	// Retrieve Character
	TObjectPtr<AEnemy_Character> Enemy = Cast<AEnemy_Character>(InPawn);
	//if (!Enemy)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No Character Found"));
	//	return;
	//}
	mEnemyBBC->SetValueAsObject("StartPos", Cast<UObject>(Enemy->mStartPos));

	mEnemyBTC->StartTree(*mEnemyBT);
}
