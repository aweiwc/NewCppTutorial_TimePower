// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TimeManager.h"
#include "NewCppTutorial_TPGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NEWCPPTUTORIAL_TP_API ANewCppTutorial_TPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    // Called before actor initializations
    virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

public:
    // Get the global managing time manger
    UFUNCTION(BlueprintCallable)
    ATimeManager* GetTimeManager();

protected:
    UPROPERTY(BlueprintReadOnly)
    ATimeManager* TimeManager = nullptr;
};
