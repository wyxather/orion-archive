// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_ShieldOfThought_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Siren_ShieldOfThought_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.CalculateAbilityState");

	UPassiveSkill_Siren_ShieldOfThought_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.IsAffectedByActionSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_ShieldOfThought_C::IsAffectedByActionSkill(class AActor* Actor, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.IsAffectedByActionSkill");

	UPassiveSkill_Siren_ShieldOfThought_C_IsAffectedByActionSkill_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_ShieldOfThought_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.OnActivated");

	UPassiveSkill_Siren_ShieldOfThought_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.SirenSkillEvent_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Siren_ShieldOfThought_C::SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.SirenSkillEvent_OnCausedAnyDamage");

	UPassiveSkill_Siren_ShieldOfThought_C_SirenSkillEvent_OnCausedAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_ShieldOfThought_C::ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought");

	UPassiveSkill_Siren_ShieldOfThought_C_ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
