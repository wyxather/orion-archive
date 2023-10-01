// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagSucculent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagSucculent.AITree_SkagSucculent_C.ExecuteUbergraph_AITree_SkagSucculent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagSucculent_C::ExecuteUbergraph_AITree_SkagSucculent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagSucculent.AITree_SkagSucculent_C.ExecuteUbergraph_AITree_SkagSucculent");

	UAITree_SkagSucculent_C_ExecuteUbergraph_AITree_SkagSucculent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
