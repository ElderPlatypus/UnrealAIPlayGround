// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Allocate.h"

//Includes internal
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"

//Includes
#include "Enemy_AIController.h"
#include "Enemy_Character.h"

EBTNodeResult::Type UBT_Allocate::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Init Super
	Super::ExecuteTask(OwnerComp, NodeMemory);

	// Retrieve AI Controller
	TObjectPtr<AEnemy_AIController> AIController = Cast<AEnemy_AIController>(OwnerComp.GetOwner());
	if (!AIController)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No AIController Found"));
		return EBTNodeResult::Failed;
	}

	// Retrieve Character
	TObjectPtr<AEnemy_Character> Enemy = Cast<AEnemy_Character>(AIController->GetPawn());
	if (!Enemy)
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
	if (Enemy->mRetriveObjects.IsEmpty())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: No Object Found"));
		BlackBoard->SetValueAsObject("Items", nullptr);
		return EBTNodeResult::Failed;
	}

	// Retrieve Update item to steal
	TObjectPtr<AActor> CurrentItem = Cast<AActor>(BlackBoard->GetValueAsObject("Items"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Item Allocated is: %s"), *CurrentItem->GetName()));

	CurrentItem->SetActorEnableCollision(false);
	CurrentItem->DisableComponentsSimulatePhysics();
	CurrentItem->AttachToComponent(Enemy->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
	return EBTNodeResult::Succeeded;
}
