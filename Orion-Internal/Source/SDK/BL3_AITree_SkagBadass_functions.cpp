// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagBadass.AITree_SkagBadass_C.ExecuteUbergraph_AITree_SkagBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagBadass_C::ExecuteUbergraph_AITree_SkagBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagBadass.AITree_SkagBadass_C.ExecuteUbergraph_AITree_SkagBadass");

	UAITree_SkagBadass_C_ExecuteUbergraph_AITree_SkagBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
