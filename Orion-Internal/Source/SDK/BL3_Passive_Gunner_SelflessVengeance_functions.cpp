// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_SelflessVengeance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ApplyBonusDamageToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DmgSource                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_SelflessVengeance_C::ApplyBonusDamageToTarget(float Damage, class UDamageSource* DmgSource, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ApplyBonusDamageToTarget");

	UPassive_Gunner_SelflessVengeance_C_ApplyBonusDamageToTarget_Params params;
	params.Damage = Damage;
	params.DmgSource = DmgSource;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_SelflessVengeance_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnActivated");

	UPassive_Gunner_SelflessVengeance_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ReloadEnded_SelflessVengeance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_SelflessVengeance_C::ReloadEnded_SelflessVengeance(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ReloadEnded_SelflessVengeance");

	UPassive_Gunner_SelflessVengeance_C_ReloadEnded_SelflessVengeance_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_SelflessVengeance_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerStarted");

	UPassive_Gunner_SelflessVengeance_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_SelflessVengeance_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerEnded");

	UPassive_Gunner_SelflessVengeance_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ExecuteUbergraph_Passive_Gunner_SelflessVengeance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_SelflessVengeance_C::ExecuteUbergraph_Passive_Gunner_SelflessVengeance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ExecuteUbergraph_Passive_Gunner_SelflessVengeance");

	UPassive_Gunner_SelflessVengeance_C_ExecuteUbergraph_Passive_Gunner_SelflessVengeance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
