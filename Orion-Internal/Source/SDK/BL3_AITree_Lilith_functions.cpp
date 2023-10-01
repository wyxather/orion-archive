// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Lilith_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_Lilith.AITree_Lilith_C.ExecuteUbergraph_AITree_Lilith
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_Lilith_C::ExecuteUbergraph_AITree_Lilith(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Lilith.AITree_Lilith_C.ExecuteUbergraph_AITree_Lilith");

	UAITree_Lilith_C_ExecuteUbergraph_AITree_Lilith_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
