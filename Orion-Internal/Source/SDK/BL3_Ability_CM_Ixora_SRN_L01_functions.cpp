// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_SRN_L01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_CM_Ixora_SRN_L01_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.CalculateAbilityState");

	UAbility_CM_Ixora_SRN_L01_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CM_Ixora_SRN_L01_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.OnActivated");

	UAbility_CM_Ixora_SRN_L01_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.SirenIxoraClassMod_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora_SRN_L01_C::SirenIxoraClassMod_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.SirenIxoraClassMod_OnActionSkillActivated");

	UAbility_CM_Ixora_SRN_L01_C_SirenIxoraClassMod_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_CM_Ixora_SRN_L01_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.OnDeactivated");

	UAbility_CM_Ixora_SRN_L01_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_SRN_L01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora_SRN_L01_C::ExecuteUbergraph_Ability_CM_Ixora_SRN_L01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_SRN_L01");

	UAbility_CM_Ixora_SRN_L01_C_ExecuteUbergraph_Ability_CM_Ixora_SRN_L01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
