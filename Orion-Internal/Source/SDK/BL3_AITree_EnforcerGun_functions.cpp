// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_EnforcerGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_EnforcerGun.AITree_EnforcerGun_C.ExecuteUbergraph_AITree_EnforcerGun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_EnforcerGun_C::ExecuteUbergraph_AITree_EnforcerGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_EnforcerGun.AITree_EnforcerGun_C.ExecuteUbergraph_AITree_EnforcerGun");

	UAITree_EnforcerGun_C_ExecuteUbergraph_AITree_EnforcerGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
