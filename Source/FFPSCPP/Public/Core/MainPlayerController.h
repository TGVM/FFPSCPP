// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FFPSCPP_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void SetupInputComponent() override;

	void InputMoveRight(float value);

	void InputMoveForward(float value);

	void InputYaw(float value);

	void InputPitch(float value);



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sensibility")
	float HorizontalSensibility = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensibility")
	float VerticalSensibility = 1.f;
};
