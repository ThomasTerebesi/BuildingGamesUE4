// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Monster.generated.h"

UCLASS()
class GOLDENEGG_API AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonster(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	float HitPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	int32 Experience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	UClass* BPLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	float BaseAttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	float AttackTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	float TimeSinceLastStrike;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	USphereComponent* SightSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster Properties")
	USphereComponent* AttackRangeSphere;
};
