// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"

AEnemyController::AEnemyController()
{
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();
	auto character = GetWorld()->GetFirstPlayerController()->GetCharacter();
	player = (APlayerCharacter*)character;
}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	isActive = !*(player->GetIsSmall());
}
