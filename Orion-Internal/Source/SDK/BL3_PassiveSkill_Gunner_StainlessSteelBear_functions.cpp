// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_StainlessSteelBear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_StainlessSteelBear_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.OnActivated");

	UPassiveSkill_Gunner_StainlessSteelBear_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_AutoBearStarted
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Gunner_StainlessSteelBear_C::StainlessSteelBear_AutoBearStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_AutoBearStarted");

	UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_AutoBearStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_IronBearEnteredAndReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_StainlessSteelBear_C::StainlessSteelBear_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_IronBearEnteredAndReady");

	UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_IronBearEnteredAndReady_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_StainlessSteelBear_C::ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear");

	UPassiveSkill_Gunner_StainlessSteelBear_C_ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
