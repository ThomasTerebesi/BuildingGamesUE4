// Fill out your copyright notice in the Description page of Project Settings.

#include "Monster.h"

// Sets default values
AMonster::AMonster(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 20.0f;
	HitPoints = 20.0f;
	Experience = 0;
	BPLoot = nullptr;
	BaseAttackDamage = 1.0f;
	AttackTimeout = 1.5f;
	TimeSinceLastStrike = 0.0f;

	SightSphere = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("SightSphere"));
	SightSphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	AttackRangeSphere = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("AttackRangeSphere"));
	AttackRangeSphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Basic intelligence: Move the monster towards the player character
	AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (!avatar)
	{
		return;
	}

	FVector toPlayer = avatar->GetActorLocation();
	//toPlayer.Normalize();	// Reduce to unit vector

	// Move the monster towards the player
	AddMovementInput(toPlayer, Speed * DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("toPlayer: %f, %f, %f"), toPlayer.X, toPlayer.Y, toPlayer.Z);

	// Rotate the monster towards the player
	FRotator toPlayerRotation = FRotator(toPlayer.X, toPlayer.Y, 0.0f);
	RootComponent->SetWorldRotation(toPlayerRotation);
}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

