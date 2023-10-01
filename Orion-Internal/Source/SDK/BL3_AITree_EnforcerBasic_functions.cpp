// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_EnforcerBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_EnforcerBasic.AITree_EnforcerBasic_C.ExecuteUbergraph_AITree_EnforcerBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_EnforcerBasic_C::ExecuteUbergraph_AITree_EnforcerBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_EnforcerBasic.AITree_EnforcerBasic_C.ExecuteUbergraph_AITree_EnforcerBasic");

	UAITree_EnforcerBasic_C_ExecuteUbergraph_AITree_EnforcerBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
