// Fill out your copyright notice in the Description page of Project Settings.


#include "WallControllerBaseState.h"

void UWallControllerBaseState::SetController(AWallController* ControllerMain)
{
	Controller = ControllerMain;
}

void UWallControllerBaseState::EnterState(){}
void UWallControllerBaseState::ExitState() {}
void UWallControllerBaseState::UpdateState(float DeltaTime) {}
void UWallControllerBaseState::HandleState() {}
