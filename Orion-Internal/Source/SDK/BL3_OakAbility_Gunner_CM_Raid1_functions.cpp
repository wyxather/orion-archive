// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Raid1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Raid1_C::CMRaid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_OnActionSkillActivated");

	UOakAbility_Gunner_CM_Raid1_C_CMRaid1_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_IronBear_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Gunner_CM_Raid1_C::CMRaid1_IronBear_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_IronBear_OnCausedDeath");

	UOakAbility_Gunner_CM_Raid1_C_CMRaid1_IronBear_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_IronBear_OnTakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Gunner_CM_Raid1_C::CMRaid1_IronBear_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_IronBear_OnTakeAnyDamage");

	UOakAbility_Gunner_CM_Raid1_C_CMRaid1_IronBear_OnTakeAnyDamage_Params params;
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


// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_CM_Raid1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.OnActivated");

	UOakAbility_Gunner_CM_Raid1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.ExecuteUbergraph_OakAbility_Gunner_CM_Raid1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Raid1_C::ExecuteUbergraph_OakAbility_Gunner_CM_Raid1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.ExecuteUbergraph_OakAbility_Gunner_CM_Raid1");

	UOakAbility_Gunner_CM_Raid1_C_ExecuteUbergraph_OakAbility_Gunner_CM_Raid1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
