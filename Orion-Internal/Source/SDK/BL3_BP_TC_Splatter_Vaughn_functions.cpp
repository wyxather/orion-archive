// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TC_Splatter_Vaughn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TC_Splatter_Vaughn.BP_TC_Splatter_Vaughn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TC_Splatter_Vaughn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TC_Splatter_Vaughn.BP_TC_Splatter_Vaughn_C.UserConstructionScript");

	ABP_TC_Splatter_Vaughn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
