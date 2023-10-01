// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_KillSkillParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_KillSkillParent_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnActivated");

	UPassiveSkill_Operative_KillSkillParent_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeKillSkillOnKilledEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Operative_KillSkillParent_C::OperativeKillSkillOnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeKillSkillOnKilledEnemy");

	UPassiveSkill_Operative_KillSkillParent_C_OperativeKillSkillOnKilledEnemy_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeTriggerKillSkillEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 KillLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_KillSkillParent_C::OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeTriggerKillSkillEffect");

	UPassiveSkill_Operative_KillSkillParent_C_OperativeTriggerKillSkillEffect_Params params;
	params.KillLocation = KillLocation;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnSeeingRedActivated
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_KillSkillParent_C::OnSeeingRedActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnSeeingRedActivated");

	UPassiveSkill_Operative_KillSkillParent_C_OnSeeingRedActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_KillSkillParent_C::ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent");

	UPassiveSkill_Operative_KillSkillParent_C_ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
