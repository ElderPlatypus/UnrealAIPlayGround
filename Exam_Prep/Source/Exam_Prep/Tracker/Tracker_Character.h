// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Exam_Prep/Tracker/Tracking_TargetPoint.h" 
#include "Tracker_Character.generated.h"

UCLASS()
class EXAM_PREP_API ATracker_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATracker_Character();

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
	TArray<TObjectPtr<ATracking_TargetPoint>> mRetriveTargets;
	int32 currentIndex = 0;


	//_____________Follow Player_____________
	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	bool isFollowing = false;

	//_____________Follow Player_____________
	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	bool isTurning = false;

	//_____________Util_____________
	FQuat LookAt(const FVector& lookAt, const FVector& upDirection);

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	float speedControl = 0.f;
};
