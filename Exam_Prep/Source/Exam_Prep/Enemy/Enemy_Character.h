// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy_Character.generated.h"


UCLASS()
class EXAM_PREP_API AEnemy_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy_Character();

	//Chose class

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Properties
	UPROPERTY(EditAnywhere,Category="Targets")
	TArray<TObjectPtr<AActor>> mRetriveObjects;

	UPROPERTY(EditAnywhere, Category = "Targets")
	TArray<TObjectPtr<class AEnemy_TargetPoint>> mRetriveTargets;


	UPROPERTY(EditAnywhere, Category = "Targets")
	TObjectPtr<AEnemy_TargetPoint> mStartPos;

	UPROPERTY(EditAnywhere, Category = "Speed Control")
	float mMaxSpeed = 10000.f;

	UPROPERTY(EditAnywhere, Category = "Speed Control")
	float mMinSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Speed Control")
	float mMaxAcceleration = 10000.f;
};
