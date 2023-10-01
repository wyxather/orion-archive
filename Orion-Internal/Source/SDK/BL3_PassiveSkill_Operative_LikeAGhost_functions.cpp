// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_LikeAGhost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_LikeAGhost_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.OnActivated");

	UPassiveSkill_Operative_LikeAGhost_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.OOO_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_LikeAGhost_C::OOO_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.OOO_OnActionSkillActivated");

	UPassiveSkill_Operative_LikeAGhost_C_OOO_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.LikeAGhost_OnTakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Operative_LikeAGhost_C::LikeAGhost_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.LikeAGhost_OnTakeAnyDamage");

	UPassiveSkill_Operative_LikeAGhost_C_LikeAGhost_OnTakeAnyDamage_Params params;
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


// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_LikeAGhost_C::ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost");

	UPassiveSkill_Operative_LikeAGhost_C_ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
