// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWallControllerBaseState_PAUSE.h"
#include "WallController.h"

void UMyWallControllerBaseState_PAUSE::EnterState()
{
	UE_LOG(LogTemp, Warning, TEXT("Entering PAUSE State"));
	TimePassed = 0;
}

void UMyWallControllerBaseState_PAUSE::UpdateState(float DeltaTime)
{
	// count how long has passed
	TimePassed += DeltaTime;
}

void UMyWallControllerBaseState_PAUSE::HandleState()
{
	if (TimePassed > Delay)
	{
		Controller->ChangeState(Controller->PlayState);
	}
}

void UMyWallControllerBaseState_PAUSE::ExitState()
{
	UE_LOG(LogTemp, Warning, TEXT("Exiting PAUSE State"));
}