// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearfisT_HeavyPunch_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.AN_MeleeHit
// (BlueprintCallable, BlueprintEvent)

void UAction_IronBear_BearfisT_HeavyPunch_R_C::AN_MeleeHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.AN_MeleeHit");

	UAction_IronBear_BearfisT_HeavyPunch_R_C_AN_MeleeHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_BearfisT_HeavyPunch_R_C::ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R");

	UAction_IronBear_BearfisT_HeavyPunch_R_C_ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
