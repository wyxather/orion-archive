// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_DoUntoOthers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.IsActionSkillActionActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_DoUntoOthers_C::IsActionSkillActionActive(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.IsActionSkillActionActive");

	UPassiveSkill_Siren_DoUntoOthers_C_IsActionSkillActionActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Siren_DoUntoOthers_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.CalculateAbilityState");

	UPassiveSkill_Siren_DoUntoOthers_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_DoUntoOthers_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.OnActivated");

	UPassiveSkill_Siren_DoUntoOthers_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.Do Harm On Took Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Siren_DoUntoOthers_C::Do_Harm_On_Took_Damage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.Do Harm On Took Damage");

	UPassiveSkill_Siren_DoUntoOthers_C_Do_Harm_On_Took_Damage_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_DoUntoOthers_C::ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers");

	UPassiveSkill_Siren_DoUntoOthers_C_ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
