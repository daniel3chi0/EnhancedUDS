#pragma once
#include "DayTimeManager.h"
#include "UDSWComponent.generated.h"

UCLASS()
class ENHANCEDUDS_API UUDswComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(Replicated)
	EDayTimeState SkyState = EDayTimeState::None;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	EDayTimeState& GetSkyState();
	
	void SetSkyState(const EDayTimeState& InSkyState);
};
