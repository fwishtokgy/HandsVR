// Fill out your copyright notice in the Description page of Project Settings.


#include "SwimPlayer3axiscpp.h"

// Sets default values
ASwimPlayer3axiscpp::ASwimPlayer3axiscpp()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASwimPlayer3axiscpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwimPlayer3axiscpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASwimPlayer3axiscpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

