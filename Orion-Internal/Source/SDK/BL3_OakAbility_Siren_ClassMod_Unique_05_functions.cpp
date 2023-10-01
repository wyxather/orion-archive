// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_05_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Unique_05_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActivated");

	UOakAbility_Siren_ClassMod_Unique_05_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnGraspedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxCharacter*           GraspedTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_05_C::OnGraspedTarget(class AGbxCharacter* GraspedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnGraspedTarget");

	UOakAbility_Siren_ClassMod_Unique_05_C_OnGraspedTarget_Params params;
	params.GraspedTarget = GraspedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_05_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActionSkillActivated");

	UOakAbility_Siren_ClassMod_Unique_05_C_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Siren_ClassMod_Unique_05_C::OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnCausedAnyDamage");

	UOakAbility_Siren_ClassMod_Unique_05_C_OnCausedAnyDamage_Params params;
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


// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OpenDamageGate
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Unique_05_C::OpenDamageGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OpenDamageGate");

	UOakAbility_Siren_ClassMod_Unique_05_C_OpenDamageGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_05_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05");

	UOakAbility_Siren_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
