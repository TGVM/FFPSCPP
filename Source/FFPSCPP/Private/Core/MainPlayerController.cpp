// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/MainPlayerController.h"
#include "Characters/FFPS_BaseCharacter.h"

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MovementX", this, &AMainPlayerController::InputMoveRight);
	InputComponent->BindAxis("MovementY", this, &AMainPlayerController::InputMoveForward);

}

void AMainPlayerController::InputMoveRight(float value)
{
	AFFPS_BaseCharacter* BCPawn = Cast<AFFPS_BaseCharacter>(GetPawn());

	if (BCPawn) {
		BCPawn->MovementRight(value);
	}

}

void AMainPlayerController::InputMoveForward(float value)
{
	AFFPS_BaseCharacter* BCPawn = Cast<AFFPS_BaseCharacter>(GetPawn());

	if (BCPawn) {
		BCPawn->MovementForward(value);
	}

}

void AMainPlayerController::InputYaw(float value)
{
	AddYawInput(value * HorizontalSensibility);

	

}

void AMainPlayerController::InputPitch(float value)
{
	value *= VerticalSensibility;
	value *= -1;

	AFFPS_BaseCharacter* BCPawn = Cast<AFFPS_BaseCharacter>(GetPawn());

	if (BCPawn) {
		BCPawn->LookUpDown(value);
	}

}
