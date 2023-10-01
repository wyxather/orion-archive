// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VaughnTC_Letters_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VaughnTC_Letters.BP_VaughnTC_Letters_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VaughnTC_Letters_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaughnTC_Letters.BP_VaughnTC_Letters_C.UserConstructionScript");

	ABP_VaughnTC_Letters_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
