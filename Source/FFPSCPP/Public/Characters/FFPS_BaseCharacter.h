// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Core/MainPlayerController.h"
#include <Camera/CameraComponent.h>
#include "FFPS_BaseCharacter.generated.h"

UCLASS()
class FFPSCPP_API AFFPS_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFFPS_BaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MovementRight(float valueRight);
	void MovementForward(float valueForward);

	void LookUpDown(float value);


	UFUNCTION()
	virtual void PossessedBy(AController* NewController) override;

	UFUNCTION(Client, reliable)
	void OC_AddHUD();


private:

	
	AMainPlayerController* MainPC;
	UPROPERTY(VisibleDefaultsOnly, Category="Mesh")
	UStaticMeshComponent* BodyMesh;
	UPROPERTY(VisibleAnywhere, Category="Camera")
	UCameraComponent* FPCamera;
};
