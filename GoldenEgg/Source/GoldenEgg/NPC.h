// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "NPC.generated.h"

UCLASS()
class GOLDENEGG_API ANPC : public ACharacter
{
	GENERATED_BODY()

public:
	// The sphere the player character can collide with.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision)
		USphereComponent* ProxSphere;

	// The NPC's message that will show up on the screen.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NPCMessage)
		FString NpcMessage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = NPCMessage)
		FString NpcName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NPCMessage)
		UTexture2D* NpcFace;

	UFUNCTION(BlueprintNativeEvent, Category = "Collision")
		void Prox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual int Prox_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Sets default values for this character's properties
	ANPC(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
