// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_11_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassive_Siren_DLCSkill_10_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.CalculateAbilityState");

	UPassive_Siren_DLCSkill_10_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Siren_DLCSkill_10_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.OnActivated");

	UPassive_Siren_DLCSkill_10_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.DLCSkill10_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Siren_DLCSkill_10_C::DLCSkill10_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.DLCSkill10_OnCausedDeath");

	UPassive_Siren_DLCSkill_10_C_DLCSkill10_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.DLCSkill10_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Siren_DLCSkill_10_C::DLCSkill10_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.DLCSkill10_OnCausedAnyDamage");

	UPassive_Siren_DLCSkill_10_C_DLCSkill10_OnCausedAnyDamage_Params params;
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


// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.SetupData
// (BlueprintCallable, BlueprintEvent)

void UPassive_Siren_DLCSkill_10_C::SetupData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.SetupData");

	UPassive_Siren_DLCSkill_10_C_SetupData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.ExecuteUbergraph_Passive_Siren_DLCSkill_11
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_DLCSkill_10_C::ExecuteUbergraph_Passive_Siren_DLCSkill_11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.ExecuteUbergraph_Passive_Siren_DLCSkill_11");

	UPassive_Siren_DLCSkill_10_C_ExecuteUbergraph_Passive_Siren_DLCSkill_11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
