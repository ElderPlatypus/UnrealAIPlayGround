// Fill out your copyright notice in the Description page of Project Settings.


#include "Tracker_Character.h"

//Includes Internal
#include "Kismet/KismetMathLibrary.h"

//Includes
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ATracker_Character::ATracker_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATracker_Character::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATracker_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATracker_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FQuat ATracker_Character::LookAt(const FVector& lookAt, const FVector& upDirection)
{
	return FRotationMatrix::MakeFromXZ(lookAt, upDirection).ToQuat();
}

