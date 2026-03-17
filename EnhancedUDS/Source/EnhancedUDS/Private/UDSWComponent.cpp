#include "UDSWComponent.h"
#include "Net/UnrealNetwork.h"

void UUDswComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UUDswComponent, SkyState);
}

EDayTimeState& UUDswComponent::GetSkyState()
{
	return SkyState;
}

void UUDswComponent::SetSkyState(const EDayTimeState& InSkyState)
{
	SkyState = InSkyState;
}
