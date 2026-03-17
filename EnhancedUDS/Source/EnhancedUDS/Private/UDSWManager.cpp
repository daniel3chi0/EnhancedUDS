// Fill out your copyright notice in the Description page of Project Settings.


#include "UDSWManager.h"
#include "GameplayTagContainer.h"
#include "Kismet/GameplayStatics.h"
#include "DayTimeManager.h"
#include "UDSWComponent.h"
#include "GameFramework/GameStateBase.h"

void UUDSWManager::Deinitialize()
{
	Super::Deinitialize();
}

void UUDSWManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	Collection.InitializeDependency(UDayTimeManager::StaticClass());
	UWorld* World = GetWorld();
	DayTimeManager = World->GetSubsystem<UDayTimeManager>();
	BindToDayTimeManagerDelegate();
	//InitOrReInitSkyState();
}

bool UUDSWManager::ShouldCreateSubsystem(UObject* Outer) const
{
	return true;
}

UPrimaryDataAsset* UUDSWManager::GetUDSWCfg()
{
	UPrimaryDataAsset* UDSWCfg = UDSWConfig.Get();
	return UDSWCfg != nullptr ? UDSWCfg : UDSWConfig.LoadSynchronous(); 
}

void UUDSWManager::BindToDayTimeManagerDelegate()
{
	if(DayTimeManager)
	{
		DayTimeManager->OnDayInit.AddDynamic(this, &UUDSWManager::InitUDSW);
	}
}

void UUDSWManager::ChangeUDSWState(EDayTimeState DayTimeState)
{
	if(!UDSToCpp.IsValid() || !UDWToCpp.IsValid())
	{
		return;
	}
	
	FGameplayTag StateTag;
	switch (DayTimeState)
	{
	case EDayTimeState::None:
		break;
	case EDayTimeState::Sunrise:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.Sunrise"));
		break;
	case EDayTimeState::Day:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.Day"));
		break;
	case EDayTimeState::Day1:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.Day1"));
		break;
	case EDayTimeState::Day2:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.Day2"));
		break;
	case EDayTimeState::Sunset:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.Sunset"));
		break;
	case EDayTimeState::Night:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.Night"));
		break;
	case EDayTimeState::RedMoon:
		StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.RedMoon"));
		
		break;
	default:
		break;
	}
	
	if(DayTimeManager)
	{
		DayTimeManager->ChangeDayTimeState(DayTimeState);
	}

	if(DayTimeState != EDayTimeState::RedMoon)
		ClearAndApplyUDSWCfgEntry(StateTag);
	
	AGameStateBase* GS = UGameplayStatics::GetGameState(this);
	if(GS)
	{
		UUDswComponent* UdsComponent = GS->FindComponentByClass<UUDswComponent>();
		if(UdsComponent)
		{
			UdsComponent->SetSkyState(DayTimeState);
		}
	}
}

void UUDSWManager::InitOrReInitSkyState()
{
	AGameStateBase* GS = UGameplayStatics::GetGameState(this);
	if(GS)
	{
		UUDswComponent* UdsComponent = GS->FindComponentByClass<UUDswComponent>();
		if(UdsComponent)
		{
			EDayTimeState SkyState = UdsComponent->GetSkyState();
			ChangeUDSWState(SkyState);
		}
	}
}

void UUDSWManager::InitUDSW()
{
	if(!UDSToCpp.IsValid() || !UDWToCpp.IsValid())
	{
		return;
	}
	
	FGameplayTag StateTag = FGameplayTag::RequestGameplayTag(FName("UDSW.DayStatic"));
	ClearAndApplyUDSWCfgEntry(StateTag);
}
