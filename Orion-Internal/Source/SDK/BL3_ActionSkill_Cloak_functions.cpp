// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Cloak_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod4Effect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionSkill_Cloak_C::TryMod4Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod4Effect");

	UActionSkill_Cloak_C_TryMod4Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod1Effect
// (Public, BlueprintCallable, BlueprintEvent)

void UActionSkill_Cloak_C::TryMod1Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod1Effect");

	UActionSkill_Cloak_C_TryMod1Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Cloak.ActionSkill_Cloak_C.GetMaxDurationModifier
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EGbxAttributeModifierType      ModifierType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Cloak_C::GetMaxDurationModifier(EGbxAttributeModifierType* ModifierType, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Cloak.ActionSkill_Cloak_C.GetMaxDurationModifier");

	UActionSkill_Cloak_C_GetMaxDurationModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierType != nullptr)
		*ModifierType = params.ModifierType;
	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Cloak_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStartActionAbility");

	UActionSkill_Cloak_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStopActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Cloak_C::OnStopActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStopActionAbility");

	UActionSkill_Cloak_C_OnStopActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Cloak.ActionSkill_Cloak_C.ExecuteUbergraph_ActionSkill_Cloak
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Cloak_C::ExecuteUbergraph_ActionSkill_Cloak(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Cloak.ActionSkill_Cloak_C.ExecuteUbergraph_ActionSkill_Cloak");

	UActionSkill_Cloak_C_ExecuteUbergraph_ActionSkill_Cloak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
