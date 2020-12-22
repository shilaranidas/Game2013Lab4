// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUpBase.generated.h"

UCLASS()
class LAB4_DAS_SHILA_API APowerUpBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUpBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*UFUNCTION(BlueprintCallable, Category = "powerup")
		void SetConsume();
	UFUNCTION(BlueprintCallable, Category = "powerup")
		bool GetConsume();*/
	
	
private:
	/*How much this power up is worth*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "powerup", meta = (AllowPrivateAccess = "true"))
		int Quantity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "powerup", meta = (AllowPrivateAccess = "true"))
		bool IsConsume;

};
