// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BoidCharacter.generated.h"

UCLASS()
class EXAM_PREP_API ABoidCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABoidCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//_____________Speed_____________
	float GetSpeed() const;
	void SetSpeed(float newSpeed);

	//_____________Spawner_____________
	TObjectPtr<class ABoidSpawner> spawner;

protected:
	float speedControl = 0.f;
	bool isTurning;


	FQuat LookAt(const FVector& lookAt, const FVector& upDirection);
};
