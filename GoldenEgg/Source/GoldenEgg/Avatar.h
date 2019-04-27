// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"
#include "Avatar.generated.h"


class APickupItem;


UCLASS()
class GOLDENEGG_API AAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAvatar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float amount);
	void MoveBackward(float amount);

	void MoveRight(float amount);
	void MoveLeft(float amount);

	void Yaw(float amount);
	void Pitch(float amount);

	float Hp;
	float MaxHp;

	TMap<FString, int> backpack;
	TMap<FString, UTexture2D*> icons;

	bool inventoryShowing;

	void PickUp(APickupItem* item);

	void ToggleInventory();
};
