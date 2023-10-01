// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagButtmunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagButtmunch.AITree_SkagButtmunch_C.ExecuteUbergraph_AITree_SkagButtmunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagButtmunch_C::ExecuteUbergraph_AITree_SkagButtmunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagButtmunch.AITree_SkagButtmunch_C.ExecuteUbergraph_AITree_SkagButtmunch");

	UAITree_SkagButtmunch_C_ExecuteUbergraph_AITree_SkagButtmunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
