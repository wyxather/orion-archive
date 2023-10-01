// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Raid1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.FireRakk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::FireRakk(class AActor* SourceActor, class AActor* TargetActor, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.FireRakk");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_FireRakk_Params params;
	params.SourceActor = SourceActor;
	params.TargetActor = TargetActor;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnActivated");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BeastmasterClassModRaid1_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::BeastmasterClassModRaid1_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BeastmasterClassModRaid1_OnCausedAnyDamage");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_BeastmasterClassModRaid1_OnCausedAnyDamage_Params params;
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


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BreakLoop
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::BreakLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BreakLoop");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_BreakLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ResetGate
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ResetGate");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnResumed");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ClassMod_Raid1_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::ClassMod_Raid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ClassMod_Raid1_OnActionSkillActivated");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_ClassMod_Raid1_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnAbilityTimerEnded");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_Raid1_C::ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1");

	UOakAbility_Beastmaster_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
