// Fill out your copyright notice in the Description page of Project Settings.

#include "Avatar.h"
#include "MyHUD.h"
#include "PickupItem.h"

// Sets default values
AAvatar::AAvatar()
	: Hp(24.0f), MaxHp(100.0f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &AAvatar::MoveForward);
	PlayerInputComponent->BindAxis("Forward", this, &AAvatar::MoveBackward);

	PlayerInputComponent->BindAxis("Strafe", this, &AAvatar::MoveRight);
	PlayerInputComponent->BindAxis("Strafe", this, &AAvatar::MoveLeft);

	PlayerInputComponent->BindAxis("Yaw", this, &AAvatar::Yaw);
	PlayerInputComponent->BindAxis("Pitch", this, &AAvatar::Pitch);

	PlayerInputComponent->BindAction("Inventory", IE_Pressed, this, &AAvatar::ToggleInventory);

	PlayerInputComponent->BindAction("MouseClickedLMB", IE_Pressed, this, &AAvatar::MouseClicked);
}

void AAvatar::MoveForward(float amount)
{
	if (!inventoryShowing)
		if (Controller && amount)
		{
			FVector forward = GetActorForwardVector();
			AddMovementInput(forward, amount);
		}
}

void AAvatar::MoveBackward(float amount)
{
	if (!inventoryShowing)
		if (Controller && amount)
		{
			FVector backward = GetActorForwardVector();
			AddMovementInput(backward, amount);
		}
}

void AAvatar::MoveRight(float amount)
{
	if (!inventoryShowing)
		if (Controller && amount)
		{
			FVector right = GetActorRightVector();
			AddMovementInput(right, amount);
		}
}

void AAvatar::MoveLeft(float amount)
{
	if (!inventoryShowing)
		if (Controller && amount)
		{
			FVector left = GetActorRightVector();
			AddMovementInput(left, amount);
		}
}

void AAvatar::Yaw(float amount)
{
	if (inventoryShowing)
	{
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
		hud->MouseMoved();
		return;
	}
	else
	{
		AddControllerYawInput(200.0f * amount * GetWorld()->GetDeltaSeconds());
	}

}

void AAvatar::Pitch(float amount)
{
	if (inventoryShowing)
	{
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
		hud->MouseMoved();
		return;
	}
	else
	{
		AddControllerPitchInput(-200.0f * amount * GetWorld()->GetDeltaSeconds());
	}
}

void AAvatar::PickUp(APickupItem * item)
{
	if (backpack.Find(item->name))
	{
		backpack[item->name] += item->quantity;
	}
	else
	{
		backpack.Add(item->name, item->quantity);
		icons.Add(item->name, item->icon);
	}
}

void AAvatar::ToggleInventory()
{
	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());

	if (inventoryShowing)
	{
		hud->ClearWidgets();
		inventoryShowing = false;
		PController->bShowMouseCursor = false;
		return;
	}

	inventoryShowing = true;
	PController->bShowMouseCursor = true;

	for (TMap<FString, int32>::TIterator iter = backpack.CreateIterator(); iter; ++iter)
	{
		FString fs = iter->Key + FString::Printf(TEXT(" x %d"), iter->Value);
		UTexture2D* tex;

		if (icons.Find(iter->Key))
		{
			tex = icons[iter->Key];
			hud->AddWidget(Widget(Icon(fs, tex)));
		}
	}
}

void AAvatar::MouseClicked()
{
	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());

	hud->MouseClicked();
}

