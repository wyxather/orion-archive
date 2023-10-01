// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_TinkBasic.AITree_TinkBasic_C.ExecuteUbergraph_AITree_TinkBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkBasic_C::ExecuteUbergraph_AITree_TinkBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkBasic.AITree_TinkBasic_C.ExecuteUbergraph_AITree_TinkBasic");

	UAITree_TinkBasic_C_ExecuteUbergraph_AITree_TinkBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
