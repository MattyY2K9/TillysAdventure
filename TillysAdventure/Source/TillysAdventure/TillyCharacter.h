// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TillyCharacter.generated.h"

UCLASS()
class TILLYSADVENTURE_API ATillyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATillyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// Our Player Controller
	class ATillyPlayerController * OurPlayerController;

	// Our Camera
	class UCameraComponent* OurCamera;

	float CameraTargetFOV;
private:
	// Sprinting
	void SprintRecovery(float DeltaTime);

	// Sprint Variables
	float SprintTimer;

	bool bSprinting;
	
public:
	// Movement Functions
	void MoveForward(float ForwardValue);
	void Strafe(float StrafeValue);
	
	// Looking Functions
	void LookUp(float LookValue);
	void LookAround(float LookValue);

	// Sprint Functions
	void SprintStart();
	void SprintEnd();

	// CameraFunctions
	void CameraUpdate(float DeltaTime);
};
