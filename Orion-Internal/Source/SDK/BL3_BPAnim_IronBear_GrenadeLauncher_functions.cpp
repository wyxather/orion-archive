// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_IronBear_GrenadeLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_IronBear_GrenadeLauncher.BPAnim_IronBear_GrenadeLauncher_C.ExecuteUbergraph_BPAnim_IronBear_GrenadeLauncher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_IronBear_GrenadeLauncher_C::ExecuteUbergraph_BPAnim_IronBear_GrenadeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_GrenadeLauncher.BPAnim_IronBear_GrenadeLauncher_C.ExecuteUbergraph_BPAnim_IronBear_GrenadeLauncher");

	UBPAnim_IronBear_GrenadeLauncher_C_ExecuteUbergraph_BPAnim_IronBear_GrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
