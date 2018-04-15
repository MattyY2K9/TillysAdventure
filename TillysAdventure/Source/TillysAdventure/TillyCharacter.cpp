// Fill out your copyright notice in the Description page of Project Settings.

#include "TillyCharacter.h"
#include "TillyPlayerController.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"

// Sets default values
ATillyCharacter::ATillyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera and a visible object
	UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	OurCamera->bUsePawnControlRotation = true;
	OurCamera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATillyCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set player controller reference
	OurPlayerController = Cast<ATillyPlayerController>(GetController());
}

// Called every frame
void ATillyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATillyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Binding
	PlayerInputComponent->BindAxis("ForwardMovement", this, &ATillyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("StrafeMovement", this, &ATillyCharacter::Strafe);
	PlayerInputComponent->BindAxis("LookUp", this, &ATillyCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &ATillyCharacter::LookAround);

	// Jumping
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}

void ATillyCharacter::MoveForward(float ForwardValue)
{
	if (ForwardValue)
	{
		AddMovementInput(GetActorForwardVector(), ForwardValue * OurPlayerController->MaximumSpeed * GetWorld()->GetDeltaSeconds());
	}
}

void ATillyCharacter::Strafe(float StrafeValue)
{
	if (StrafeValue)
	{
		AddMovementInput(GetActorRightVector(), StrafeValue * OurPlayerController->MaximumSpeed * GetWorld()->GetDeltaSeconds());
	}
}

void ATillyCharacter::LookUp(float LookValue)
{
	// calculate delta for this frame from the rate information
	if (LookValue)
		AddControllerPitchInput(LookValue * OurPlayerController->LookYSensitivity * GetWorld()->GetDeltaSeconds());
}

void ATillyCharacter::LookAround(float LookValue)
{
	// calculate delta for this frame from the rate information
	if (LookValue)
		AddControllerYawInput(LookValue * OurPlayerController->LookXSensitivity * GetWorld()->GetDeltaSeconds());
}

