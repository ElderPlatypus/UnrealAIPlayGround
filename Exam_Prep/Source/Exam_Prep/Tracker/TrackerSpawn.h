// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrackerSpawn.generated.h"

UCLASS()
class EXAM_PREP_API ATrackerSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrackerSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//_____________Spawner & Parameters_____________
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<TObjectPtr<AActor>> TrackerSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AActor> TrackerToSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	int NumTrackers = 20;

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	FVector SpawnOrigin = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	FVector SpawnOffset= FVector::ZeroVector;

	UPROPERTY(EditAnywhere, meta = (UIMin = "100", UIMax = "500"), Category = "Spawn Member")
	float Speed = 0;

	//_____________Retrieve Tracker_____________
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TObjectPtr<class ATracker_Character> Tracker;

private:
	void Spawn();
	void Follow(float _deltaTime);
	void Turning(float _deltaTime);
};
