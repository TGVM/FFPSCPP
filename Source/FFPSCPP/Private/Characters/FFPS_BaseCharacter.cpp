// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/FFPS_BaseCharacter.h"

// Sets default values
AFFPS_BaseCharacter::AFFPS_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(RootComponent);
	
	FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPCamera"));
	FPCamera->SetupAttachment(RootComponent);

	
}

// Called when the game starts or when spawned
void AFFPS_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFFPS_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFFPS_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFFPS_BaseCharacter::MovementRight(float valueRight)
{
	AddMovementInput(GetActorRightVector(), valueRight, false);

}

void AFFPS_BaseCharacter::MovementForward(float valueForward)
{
	AddMovementInput(GetActorForwardVector(), valueForward, false);

}

void AFFPS_BaseCharacter::LookUpDown(float value)
{
	FPCamera->AddRelativeRotation(FQuat(FRotator(0, value, 0)), false, nullptr, ETeleportType::None);

}

void AFFPS_BaseCharacter::PossessedBy(AController* NewController)
{
	MainPC = Cast<AMainPlayerController>(NewController);

}

void AFFPS_BaseCharacter::OC_AddHUD_Implementation()
{
}





