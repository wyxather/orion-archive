// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagPup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagPup.AITree_SkagPup_C.ExecuteUbergraph_AITree_SkagPup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagPup_C::ExecuteUbergraph_AITree_SkagPup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagPup.AITree_SkagPup_C.ExecuteUbergraph_AITree_SkagPup");

	UAITree_SkagPup_C_ExecuteUbergraph_AITree_SkagPup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
