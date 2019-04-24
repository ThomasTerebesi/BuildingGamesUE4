// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
	// call superclass DrawHUD() function first
	Super::DrawHUD();

	sizeX = Canvas->SizeX;
	
	DrawMessages();
	DrawHealthBar();
}

void AMyHUD::DrawMessages()
{
	// Iterate from back to front through the list, so if we remove
	// an item while iterating, there won't be any problems.
	for (int c = messages.Num() - 1; c >= 0; c--)
	{
		// Draw the background box the right size for the message.
		float outputWidth, outputHeight, pad = 10.0f;
		GetTextSize(messages[c].message, outputWidth, outputHeight, hudFont, 1.0f);

		float messageH = outputHeight + 2.0f * pad;
		float x = 0.0f, y = c * messageH;

		// Black background.
		DrawRect(FLinearColor::Black, x, y, sizeX, messageH);

		// Draw texture
		DrawTexture(messages[c].tex, x, y, messageH, messageH, 0, 0, 1, 1);

		// Draw our message using the 'hudFont'.
		DrawText(messages[c].message, messages[c].color, x + pad + messageH, y + pad, hudFont);

		

		// Reduce lifetime by the time that passed since last frame.
		messages[c].time -= GetWorld()->GetDeltaSeconds();

		// If the message's time is up, remove it.
		if (messages[c].time < 0)
		{
			messages.RemoveAt(c);
		}
	}
}

void AMyHUD::AddMessage(Message msg)
{
	messages.Add(msg);
}

void AMyHUD::DrawHealthBar()
{
	AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	
	float barWidth = 200.0f, barHeight = 50.0f, barPad = 12, barMargin = 50;
	float percHp = avatar->Hp / avatar->MaxHp;

	const FVector2D ViewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());

	DrawRect(FLinearColor(0, 0, 0, 1),
		ViewportSize.X - barWidth - barPad - barMargin,
		ViewportSize.Y - barHeight - barPad - barMargin,
		barWidth + 2 * barPad,
		barHeight + 2 * barPad);

	DrawRect(FLinearColor(1.0f - percHp, percHp, 0.0f, 1.0f),
		ViewportSize.X - barWidth - barMargin,
		ViewportSize.Y - barHeight - barMargin,
		barWidth * percHp,
		barHeight);
}

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	Message testMsg("Printing to the HUD...", 4.0f, FColor::White, nullptr);
	AddMessage(testMsg);
}

