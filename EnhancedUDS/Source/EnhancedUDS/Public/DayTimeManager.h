// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "Subsystems/WorldSubsystem.h"
#include "DayTimeManager.generated.h"

class UWerewolf_TimeComponent;
class AWerewolf_Hero;

UENUM(BlueprintType)
enum class EDayTimeState : uint8
{
	None,
	Sunrise,
	Day,
	Day1,
	Day2,
	Sunset,
	Night,
	RedMoon,
};

struct FStreamableHandle;
struct FOnAttributeChangeData;

DECLARE_MULTICAST_DELEGATE_OneParam(FDayTimeEffectChangeDelegate, float);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDayTimeInitDelegate);
/**
 * 
 */
UCLASS()
class ENHANCEDUDS_API UDayTimeManager : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Deinitialize() override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	UFUNCTION(BlueprintCallable)
	void InitDay();

	void ChangeDayTimeState(EDayTimeState InDayTimeState);

	UFUNCTION(BlueprintCallable)
	EDayTimeState GetDayTimeState();
	
private:
	FPrimaryAssetId DayTimeDataAssetId;

	TSharedPtr<FStreamableHandle> StreamableHandle;
	
	FDayTimeEffectChangeDelegate OnDayNightEffectChange;

	EDayTimeState DayTimeState;

private:
	UFUNCTION()
	void InitStaticSky();
	
	UFUNCTION()
	void SunriseAction();

	UFUNCTION()
	void Day0Action();

	UFUNCTION()
	void Day1Action();

	UFUNCTION()
	void Day2Action();

	UFUNCTION()
	void SunsetAction();

	UFUNCTION()
	void NightAction();

	UFUNCTION()
	void RedMoonAction();

public:

	UPROPERTY(BlueprintAssignable)
	FDayTimeInitDelegate OnDayInit;
};
