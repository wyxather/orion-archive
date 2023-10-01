// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_BSM_L01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_CM_Ixora_BSM_L01_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.CalculateAbilityState");

	UAbility_CM_Ixora_BSM_L01_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.BSMIxoraCM_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_CM_Ixora_BSM_L01_C::BSMIxoraCM_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.BSMIxoraCM_OnCausedAnyDamage");

	UAbility_CM_Ixora_BSM_L01_C_BSMIxoraCM_OnCausedAnyDamage_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CM_Ixora_BSM_L01_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.OnActivated");

	UAbility_CM_Ixora_BSM_L01_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.ExecuteUbergraph_Ability_CM_Ixora_BSM_L01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora_BSM_L01_C::ExecuteUbergraph_Ability_CM_Ixora_BSM_L01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.ExecuteUbergraph_Ability_CM_Ixora_BSM_L01");

	UAbility_CM_Ixora_BSM_L01_C_ExecuteUbergraph_Ability_CM_Ixora_BSM_L01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
