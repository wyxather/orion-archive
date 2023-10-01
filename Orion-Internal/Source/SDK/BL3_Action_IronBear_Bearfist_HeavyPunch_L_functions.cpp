// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_Bearfist_HeavyPunch_L_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.AN_MeleeHit
// (BlueprintCallable, BlueprintEvent)

void UAction_IronBear_Bearfist_HeavyPunch_L_C::AN_MeleeHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.AN_MeleeHit");

	UAction_IronBear_Bearfist_HeavyPunch_L_C_AN_MeleeHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_Bearfist_HeavyPunch_L_C::ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L");

	UAction_IronBear_Bearfist_HeavyPunch_L_C_ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
