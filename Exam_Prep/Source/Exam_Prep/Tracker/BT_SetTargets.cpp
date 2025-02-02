// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_SetTargets.h"

//Includes internal
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

//Includes
#include "Tracker_AIController.h"
#include "Tracker_Character.h"
#include "Tracking_TargetPoint.h" 

EBTNodeResult::Type UBT_SetTargets::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Init Super
	Super::ExecuteTask(OwnerComp, NodeMemory);

	// Retrieve AI Controller
	TObjectPtr<ATracker_AIController> AIController = Cast<ATracker_AIController>(OwnerComp.GetOwner());
	if (!AIController)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No AIController Found"));
		return EBTNodeResult::Failed;
	}

	// Retrieve Character
	TObjectPtr<ATracker_Character> Tracker = Cast<ATracker_Character>(AIController->GetPawn());
	if (!Tracker)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No Character Found"));
		return EBTNodeResult::Failed;
	}

	// Retrieve BlackBoard

	TObjectPtr<UBlackboardComponent> BlackBoard = Cast<UBlackboardComponent>(AIController->GetBlackboardComponent());
	if (!BlackBoard)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No BlackBoardFound Found"));
		return EBTNodeResult::Failed;
	}

	// Flag:Check if empty
	if (Tracker->mRetriveTargets.IsEmpty())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No Object Found"));
		BlackBoard->SetValueAsObject("Targets", nullptr);
		return EBTNodeResult::Failed;
	}

	if (Tracker->currentIndex >= Tracker->mRetriveTargets.Num())
	{
		Tracker->currentIndex = 0;
	}
	// Retrieve Update item to steal
	TObjectPtr<ATracking_TargetPoint> CurrentTarget = Tracker->mRetriveTargets[Tracker->currentIndex];
	BlackBoard->SetValueAsObject("Targets", Cast<UObject>(CurrentTarget));
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, FString::Printf(TEXT("Item set: %s"), *CurrentTarget->GetName()));
	Tracker->currentIndex += 1;
	return EBTNodeResult::Succeeded;
}