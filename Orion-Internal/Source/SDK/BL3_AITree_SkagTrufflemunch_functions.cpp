// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagTrufflemunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagTrufflemunch.AITree_SkagTrufflemunch_C.ExecuteUbergraph_AITree_SkagTrufflemunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagTrufflemunch_C::ExecuteUbergraph_AITree_SkagTrufflemunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagTrufflemunch.AITree_SkagTrufflemunch_C.ExecuteUbergraph_AITree_SkagTrufflemunch");

	UAITree_SkagTrufflemunch_C_ExecuteUbergraph_AITree_SkagTrufflemunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
