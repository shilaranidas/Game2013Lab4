// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpBase.h"

// Sets default values
APowerUpBase::APowerUpBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APowerUpBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUpBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
//void APowerUpBase::SetConsume() {
//	IsConsume = true;
//}
//bool APowerUpBase::GetConsume() {
//	return IsConsume;
//}


