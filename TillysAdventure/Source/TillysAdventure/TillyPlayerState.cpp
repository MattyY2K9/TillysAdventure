// Fill out your copyright notice in the Description page of Project Settings.

#include "TillyPlayerState.h"

ATillyPlayerState::ATillyPlayerState()
{
	// Create a dummy root component we can attach things to.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

