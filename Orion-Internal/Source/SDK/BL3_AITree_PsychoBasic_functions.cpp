// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PsychoBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PsychoBasic.AITree_PsychoBasic_C.ExecuteUbergraph_AITree_PsychoBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PsychoBasic_C::ExecuteUbergraph_AITree_PsychoBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PsychoBasic.AITree_PsychoBasic_C.ExecuteUbergraph_AITree_PsychoBasic");

	UAITree_PsychoBasic_C_ExecuteUbergraph_AITree_PsychoBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
