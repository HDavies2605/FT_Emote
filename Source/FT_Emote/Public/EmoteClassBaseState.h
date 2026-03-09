// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmoteClassBaseState.generated.h"

/**
 * 
 */
class EmoteClass;
UCLASS(abstract,NotBlueprintable)
class FT_EMOTE_API UEmoteClassBaseState : public UObject
{
	GENERATED_BODY()

public:
	void SetController(EmoteClass* MainController);
	virtual void EnterState();
	virtual void ExitState();
	virtual void UpdateState(float DeltaTime);
	virtual void HandleState();
protected:
	EmoteClass* Controller;
private:
};
