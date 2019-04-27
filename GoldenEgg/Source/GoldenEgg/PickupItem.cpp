// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupItem.h"
#include "Avatar.h"
#include "MyHUD.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickupItem::APickupItem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	name = "UNKNOWN ITEM";
	quantity = 0;

	proxSphere = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("ProxSphere"));
	mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));

	RootComponent = mesh;
	mesh->SetSimulatePhysics(true);

	proxSphere->OnComponentBeginOverlap.AddDynamic(this, &APickupItem::Prox);
	proxSphere->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
}

int APickupItem::Prox_Implementation(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// If the overlapped actor is not the player, you should just simply return from the function.
	if (Cast<AAvatar>(OtherActor) == nullptr)
		return -1;

	AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	avatar->PickUp(this);

	APlayerController* PController = GetWorld()->GetFirstPlayerController();

	AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());

	hud->AddMessage(Message(FString("Picked up ") + FString::FromInt(quantity) + FString(" ") + name, 5.0f, FColor::White, icon));

	Destroy();

	return 0;
}

// Called when the game starts or when spawned
void APickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

