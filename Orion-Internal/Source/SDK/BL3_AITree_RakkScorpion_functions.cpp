// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_RakkScorpion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_RakkScorpion.AITree_RakkScorpion_C.ExecuteUbergraph_AITree_RakkScorpion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_RakkScorpion_C::ExecuteUbergraph_AITree_RakkScorpion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_RakkScorpion.AITree_RakkScorpion_C.ExecuteUbergraph_AITree_RakkScorpion");

	UAITree_RakkScorpion_C_ExecuteUbergraph_AITree_RakkScorpion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
