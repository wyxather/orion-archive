// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Empowered_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.GetModifier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UConditionalDamageTypeModifier* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Empowered_C::GetModifier(class UConditionalDamageTypeModifier** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.GetModifier");

	UPassiveSkill_Siren_Empowered_C_GetModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Empowered_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.OnActivated");

	UPassiveSkill_Siren_Empowered_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.OnAttunedElementChanged
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Empowered_C::OnAttunedElementChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.OnAttunedElementChanged");

	UPassiveSkill_Siren_Empowered_C_OnAttunedElementChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.RemoveModifier
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Empowered_C::RemoveModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.RemoveModifier");

	UPassiveSkill_Siren_Empowered_C_RemoveModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.AddModifier
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Empowered_C::AddModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.AddModifier");

	UPassiveSkill_Siren_Empowered_C_AddModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.ExecuteUbergraph_PassiveSkill_Siren_Empowered
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Empowered_C::ExecuteUbergraph_PassiveSkill_Siren_Empowered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.ExecuteUbergraph_PassiveSkill_Siren_Empowered");

	UPassiveSkill_Siren_Empowered_C_ExecuteUbergraph_PassiveSkill_Siren_Empowered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
