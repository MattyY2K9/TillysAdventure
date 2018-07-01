// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TAPawn.generated.h"

UCLASS()
class TILLYSADVENTURE_API ATAPawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATAPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Getters/Setters
public:
	
	float GetMaxHealth();

	float GetHealth();

public:
	// Health changes
	virtual void TakeBulletDamage(float Damage);

	virtual void Death();

	// Projectile variables
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	float MaxHealth;

private:
	float CurrentHealth;
};
