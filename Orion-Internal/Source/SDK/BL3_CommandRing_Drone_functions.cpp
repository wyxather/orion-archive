// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CommandRing_Drone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CommandRing_Drone.CommandRing_Drone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommandRing_Drone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRing_Drone.CommandRing_Drone_C.UserConstructionScript");

	ACommandRing_Drone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
