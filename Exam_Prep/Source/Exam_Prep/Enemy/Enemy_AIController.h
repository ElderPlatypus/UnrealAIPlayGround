// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enemy_AIController.generated.h"

/**
 * 
 */
UCLASS()
class EXAM_PREP_API AEnemy_AIController : public AAIController
{
	GENERATED_BODY()

public:
	//Init Class
	AEnemy_AIController();

	//Init OnPoses to overwrite
	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(EditAnywhere,Category="AI Controller")
	TObjectPtr<UBehaviorTree> mEnemyBT;


	UPROPERTY(VisibleAnywhere, Category = "AI Controller")
	TObjectPtr<class UBehaviorTreeComponent> mEnemyBTC;


	UPROPERTY(VisibleAnywhere, Category = "AI Controller")
	TObjectPtr<UBlackboardComponent> mEnemyBBC;
};
