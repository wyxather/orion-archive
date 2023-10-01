// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_16_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Siren_DLCSkill_15_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.OnActivated");

	UPassive_Siren_DLCSkill_15_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.TriggerAbilityEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_DLCSkill_15_C::TriggerAbilityEffect(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.TriggerAbilityEffect");

	UPassive_Siren_DLCSkill_15_C_TriggerAbilityEffect_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.ExecuteUbergraph_Passive_Siren_DLCSkill_16
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_DLCSkill_15_C::ExecuteUbergraph_Passive_Siren_DLCSkill_16(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.ExecuteUbergraph_Passive_Siren_DLCSkill_16");

	UPassive_Siren_DLCSkill_15_C_ExecuteUbergraph_Passive_Siren_DLCSkill_16_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
