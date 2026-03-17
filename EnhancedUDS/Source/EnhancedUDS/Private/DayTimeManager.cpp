// Fill out your copyright notice in the Description page of Project Settings.


#include "DayTimeManager.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffectExtension.h"
#include "UDSWManager.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMaterialLibrary.h"

namespace DayTimeManager_Helper
{
	float TIME_MINUTE = 60.f;
}

void UDayTimeManager::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Log, TEXT("DayTimeMDeini"));
}

void UDayTimeManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	/*BuffType = ESpiritBuffType::None;
	DayTimeState = EDayTimeState::None;
	VoteState =	EVoteState::None;
	EucharistState = EEucharistState::None;
	DayTimeMinutes = 0.f;
	//RestoreAttributeFlag = false;
	ActivatedDayTimeBuffMap.Empty();
	bChangeSpiritApplyStateFlag = true;
	
	DayTimeDataAssetId = FPrimaryAssetId(DayTimeConfigType, FName("DayTimeConfig"));
	UWerewolf_AssetManager& AssetManager = UWerewolf_AssetManager::Get();
	if(!AssetManager.IsInitialized()) return;
	FSoftObjectPath AssetPath = AssetManager.GetPrimaryAssetPath(DayTimeDataAssetId);
	
	UE_LOG(LogTemp, Log, TEXT("DayTimeMIni"));
	
	if(AssetPath.IsValid())
	{
		if(!AssetPath.ResolveObject())
		{
			UAssetManager::GetStreamableManager().LoadSynchronous(AssetPath, false, &StreamableHandle);
			if(StreamableHandle.IsValid())
			{
				DayTimeConfig = Cast<UWerewolf_DayTimeConfig>(StreamableHandle->GetLoadedAsset());
				if(DayTimeConfig)
				{
					UE_LOG(LogTemp, Log, TEXT("DayTimeConfig load"));
				}
			}
		}
		else
		{
			if(StreamableHandle.IsValid())
			{
				DayTimeConfig = Cast<UWerewolf_DayTimeConfig>(StreamableHandle->GetLoadedAsset());
				if(DayTimeConfig)
				{
					UE_LOG(LogTemp, Log, TEXT("DayTimeConfig load"));
				}
			}
			else
			{
				UObject* Asset = AssetPath.ResolveObject();
				DayTimeConfig = Cast<UWerewolf_DayTimeConfig>(Asset);
				if(DayTimeConfig)
				{
					UE_LOG(LogTemp, Log, TEXT("DayTimeConfig load"));
				}
			}
		}
	}

	OnDayNightEffectChange.AddUObject(this, &UDayTimeManager::ChangeGameplayDayNightBuff);*/
}

bool UDayTimeManager::ShouldCreateSubsystem(UObject* Outer) const
{
	return true;
}

//Only In Server
void UDayTimeManager::InitDay()
{
	if(OnDayInit.IsBound())
	{
		OnDayInit.Broadcast();
	}
}

void UDayTimeManager::InitStaticSky()
{
	InitDay();
}

void UDayTimeManager::SunriseAction()
{
	UUDSWManager* UDSWManager = GetWorld()->GetSubsystem<UUDSWManager>();
	if(ensure(UDSWManager))
	{
		UDSWManager->ChangeUDSWState(EDayTimeState::Sunrise);
	}
}

void UDayTimeManager::Day0Action()
{
	UUDSWManager* UDSWManager = GetWorld()->GetSubsystem<UUDSWManager>();
	if(ensure(UDSWManager))
	{
		UDSWManager->ChangeUDSWState(EDayTimeState::Day);
	}
}

void UDayTimeManager::Day1Action()
{
	UUDSWManager* UDSWManager = GetWorld()->GetSubsystem<UUDSWManager>();
	if(ensure(UDSWManager))
	{
		UDSWManager->ChangeUDSWState(EDayTimeState::Day1);
	}
}

void UDayTimeManager::Day2Action()
{
	UUDSWManager* UDSWManager = GetWorld()->GetSubsystem<UUDSWManager>();
	if(ensure(UDSWManager))
	{
		UDSWManager->ChangeUDSWState(EDayTimeState::Day2);
	}
}

void UDayTimeManager::SunsetAction()
{
	UUDSWManager* UDSWManager = GetWorld()->GetSubsystem<UUDSWManager>();
	if(ensure(UDSWManager))
	{
		UDSWManager->ChangeUDSWState(EDayTimeState::Sunset);
	}
}

void UDayTimeManager::NightAction()
{
	UUDSWManager* UDSWManager = GetWorld()->GetSubsystem<UUDSWManager>();
	if(ensure(UDSWManager))
	{
		UDSWManager->ChangeUDSWState(EDayTimeState::Night);
	}
}

void UDayTimeManager::RedMoonAction()
{
}

void UDayTimeManager::ChangeDayTimeState(EDayTimeState InDayTimeState)
{
	if(DayTimeState != InDayTimeState)
	{
		DayTimeState = InDayTimeState;
		if(DayTimeState == EDayTimeState::RedMoon)
		{
			RedMoonAction();
		}
	}
}

EDayTimeState UDayTimeManager::GetDayTimeState()
{
	return DayTimeState;
}
