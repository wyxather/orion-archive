// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_ActionAbilityTriggered_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_ActionAbilityTriggered_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.OnActivated");

	UPassiveSkill_Siren_ActionAbilityTriggered_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.SirenActionAbilityTrigger
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_ActionAbilityTriggered_C::SirenActionAbilityTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.SirenActionAbilityTrigger");

	UPassiveSkill_Siren_ActionAbilityTriggered_C_SirenActionAbilityTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_ActionAbilityTriggered_C::ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered");

	UPassiveSkill_Siren_ActionAbilityTriggered_C_ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
