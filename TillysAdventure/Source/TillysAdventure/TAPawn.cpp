// Fill out your copyright notice in the Description page of Project Settings.

#include "TAPawn.h"


// Sets default values
ATAPawn::ATAPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATAPawn::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentHealth = MaxHealth;
}

// Called every frame
void ATAPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATAPawn::GetMaxHealth()
{
	return MaxHealth;
}

float ATAPawn::GetHealth()
{
	return CurrentHealth;
}

void ATAPawn::TakeBulletDamage(float Damage)
{
	CurrentHealth -= Damage;
	if (CurrentHealth <= 0)
	{
		Death();
	}
}

void ATAPawn::Death()
{
	CurrentHealth = 0;
}

