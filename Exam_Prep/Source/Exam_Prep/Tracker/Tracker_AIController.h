// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tracker_AIController.generated.h"

/**
 * 
 */
UCLASS()
class EXAM_PREP_API ATracker_AIController : public AAIController
{
	GENERATED_BODY()

public:
	//Init Class
	ATracker_AIController();

	//Init OnPoses to overwrite
	virtual void OnPossess(APawn* InPawn) override;


	//___________Behaviour Tree_________________
	UPROPERTY(EditAnywhere, Category = "AI Controller")
	TObjectPtr<UBehaviorTree> mEnemyBT;


	UPROPERTY(VisibleAnywhere, Category = "AI Controller")
	TObjectPtr<class UBehaviorTreeComponent> mEnemyBTC;


	UPROPERTY(VisibleAnywhere, Category = "AI Controller")
	TObjectPtr<UBlackboardComponent> mEnemyBBC;
};
