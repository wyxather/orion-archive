// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_GunnerSeat_Technical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vehicle_GunnerSeat_Technical.Vehicle_GunnerSeat_Technical_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicle_GunnerSeat_Technical_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_GunnerSeat_Technical.Vehicle_GunnerSeat_Technical_C.UserConstructionScript");

	AVehicle_GunnerSeat_Technical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
