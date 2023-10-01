// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_EllieTC_Letters_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EllieTC_Letters.BP_EllieTC_Letters_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EllieTC_Letters_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EllieTC_Letters.BP_EllieTC_Letters_C.UserConstructionScript");

	ABP_EllieTC_Letters_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
