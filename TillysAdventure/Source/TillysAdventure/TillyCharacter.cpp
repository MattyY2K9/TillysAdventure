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
	OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	OurCamera->bUsePawnControlRotation = true;
	OurCamera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATillyCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set player controller reference
	OurPlayerController = Cast<ATillyPlayerController>(GetController());

	// Set Camera Defaults
	CameraTargetFOV = OurPlayerController->CameraDefaultFOV;

	// Setup Sprint timer
	SprintTimer = OurPlayerController->SprintDuration;
}

// Called every frame
void ATillyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Recover sprint
	SprintRecovery(DeltaTime);

	// Camera Updates
	CameraUpdate(DeltaTime);
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

	// Sprinting
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ATillyCharacter::SprintStart);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ATillyCharacter::SprintEnd);
}

void ATillyCharacter::SprintRecovery(float DeltaTime)
{
	// If we're not sprinting we can recover
	if (!bSprinting && SprintTimer < OurPlayerController->SprintDuration)
	{
		SprintTimer += DeltaTime;

		if (SprintTimer > OurPlayerController->SprintDuration)
		{
			SprintTimer = OurPlayerController->SprintDuration;
		}
	}
}

void ATillyCharacter::MoveForward(float ForwardValue)
{
	if (ForwardValue)
	{
		// Apply sprint if necessary
		if (bSprinting && ForwardValue > 0.3f)
		{
			AddMovementInput(GetActorForwardVector(), ForwardValue * OurPlayerController->MaximumSpeed * OurPlayerController->SprintSpeed * GetWorld()->GetDeltaSeconds());
			
			// Sprint fatigue
			SprintTimer -= GetWorld()->GetDeltaSeconds();

			// CameraFOV
			CameraTargetFOV = OurPlayerController->SprintCameraFOV;

			// If we've run out of energy return to normal
			if (SprintTimer <= 0.0f)
			{
				SprintEnd();
			}
		}
		else
		{
			AddMovementInput(GetActorForwardVector(), ForwardValue * OurPlayerController->MaximumSpeed * GetWorld()->GetDeltaSeconds());
		}
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

void ATillyCharacter::SprintStart()
{
	if (SprintTimer >= OurPlayerController->SprintMinimumRecoveryTime)
	{
		bSprinting = true;
	}
}

void ATillyCharacter::SprintEnd()
{
	bSprinting = false;

	// Reset Camera FOV
	CameraTargetFOV = OurPlayerController->CameraDefaultFOV;
}

void ATillyCharacter::CameraUpdate(float DeltaTime)
{
	// Smooth our FOV Change
	float FOVDifference = OurCamera->FieldOfView - CameraTargetFOV;

	if (FOVDifference)
	{
		// If we are close enough to the value then set it 
		if (FOVDifference >= -OurPlayerController->CameraFOVChangeRate * DeltaTime
			&& FOVDifference <= OurPlayerController->CameraFOVChangeRate * DeltaTime)
		{
			OurCamera->FieldOfView = CameraTargetFOV;
		}
		// else change it by the correct rate
		else if (FOVDifference > OurPlayerController->CameraFOVChangeRate * DeltaTime)
		{
			OurCamera->FieldOfView -= OurPlayerController->CameraFOVChangeRate * DeltaTime;
		}
		else if (FOVDifference < OurPlayerController->CameraFOVChangeRate * DeltaTime)
		{
			OurCamera->FieldOfView += OurPlayerController->CameraFOVChangeRate * DeltaTime;
		}
	}
}

