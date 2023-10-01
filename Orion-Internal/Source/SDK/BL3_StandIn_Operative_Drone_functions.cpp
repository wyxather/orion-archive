// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Drone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandIn_Operative_Drone.StandIn_Operative_Drone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandIn_Operative_Drone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Drone.StandIn_Operative_Drone_C.UserConstructionScript");

	AStandIn_Operative_Drone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
