// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoidSpawner.generated.h"

UCLASS()
class EXAM_PREP_API ABoidSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoidSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//_____________Spawner & Parameters_____________
	UPROPERTY(EditAnywhere, Category = "Spawn Object")
	TSubclassOf<class ABoidCharacter> SubBoid;

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	int NumBoids = 20;

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	FVector SpawnOrigin = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "Spawn Member")
	FVector SwimLimits = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, meta = (UIMin = "100", UIMax = "500"), Category = "Spawn Member")
	float MinSpeed = 0;

	UPROPERTY(EditAnywhere, meta = (UIMin = "100", UIMax = "500"), Category = "Spawn Member")
	float MaxSpeed = 0;
};
