// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Drone_VDayHeart_Fire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Drone_VDayHeart_Fire.Proj_Drone_VDayHeart_Fire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Fire.Proj_Drone_VDayHeart_Fire_C.UserConstructionScript");

	AProj_Drone_VDayHeart_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
