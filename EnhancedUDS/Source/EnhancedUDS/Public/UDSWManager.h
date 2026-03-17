// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UDSWManager.generated.h"

class UDayTimeManager;
enum class EDayTimeState : uint8;
struct FGameplayTag;
class UUDSWConfig;
/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class ENHANCEDUDS_API UUDSWManager : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Deinitialize() override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearAndApplyUDSWCfgEntry(FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool UDSIsValid();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool UDWIsValid();

	UFUNCTION(BlueprintCallable)
	UPrimaryDataAsset* GetUDSWCfg();

	UFUNCTION(BlueprintCallable)
	void BindToDayTimeManagerDelegate();

	UFUNCTION(BlueprintCallable)
	void ChangeUDSWState(EDayTimeState DayTimeState);

	UFUNCTION(BlueprintCallable)
	void InitOrReInitSkyState();
	
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSoftObjectPtr<UPrimaryDataAsset> UDSWConfig;

	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<AActor> UDSToCpp;

	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<AActor> UDWToCpp;
	

private:

	UDayTimeManager* DayTimeManager;

	UFUNCTION()
	void InitUDSW();
};
