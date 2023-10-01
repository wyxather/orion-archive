// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Beastmaster_DLCSkill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Beastmaster_DLCSkill_C::TrapFailedToSpawn(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn");

	UActionSkill_Beastmaster_DLCSkill_C_TrapFailedToSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Beastmaster_DLCSkill_C::EndTrapEarly(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly");

	UActionSkill_Beastmaster_DLCSkill_C_EndTrapEarly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_Beastmaster_DLCSkill_C::GetCooldownRestartPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.GetCooldownRestartPercent");

	UActionSkill_Beastmaster_DLCSkill_C_GetCooldownRestartPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UActionSkill_Beastmaster_DLCSkill_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnActivated");

	UActionSkill_Beastmaster_DLCSkill_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.BeastmasterDLCSkill_OnTakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UActionSkill_Beastmaster_DLCSkill_C::BeastmasterDLCSkill_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.BeastmasterDLCSkill_OnTakeAnyDamage");

	UActionSkill_Beastmaster_DLCSkill_C_BeastmasterDLCSkill_OnTakeAnyDamage_Params params;
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


// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Beastmaster_DLCSkill_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnStartActionAbility");

	UActionSkill_Beastmaster_DLCSkill_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Beastmaster_DLCSkill_C::ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill");

	UActionSkill_Beastmaster_DLCSkill_C_ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
