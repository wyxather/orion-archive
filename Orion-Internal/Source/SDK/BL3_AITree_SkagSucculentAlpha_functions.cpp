// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagSucculentAlpha_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagSucculentAlpha.AITree_SkagSucculentAlpha_C.ExecuteUbergraph_AITree_SkagSucculentAlpha
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagSucculentAlpha_C::ExecuteUbergraph_AITree_SkagSucculentAlpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagSucculentAlpha.AITree_SkagSucculentAlpha_C.ExecuteUbergraph_AITree_SkagSucculentAlpha");

	UAITree_SkagSucculentAlpha_C_ExecuteUbergraph_AITree_SkagSucculentAlpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
