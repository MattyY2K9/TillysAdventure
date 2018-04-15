// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TillyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TILLYSADVENTURE_API ATillyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Movement
	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite)
		float MaximumSpeed;

	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite)
		float SprintSpeed;

	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite)
		float JumpHeight;	

	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite)
		float GravityStrength;

	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite)
		float LookXSensitivity;

	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite)
		float LookYSensitivity;
};
