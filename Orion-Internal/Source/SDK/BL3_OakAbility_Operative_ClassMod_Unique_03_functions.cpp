// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnSeeingRedActivated
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Operative_ClassMod_Unique_03_C::OnSeeingRedActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnSeeingRedActivated");

	UOakAbility_Operative_ClassMod_Unique_03_C_OnSeeingRedActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Operative_ClassMod_Unique_03_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActivated");

	UOakAbility_Operative_ClassMod_Unique_03_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Operative_ClassMod_Unique_03_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnCausedDeath");

	UOakAbility_Operative_ClassMod_Unique_03_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OperativeTriggerKillSkillEffect
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Operative_ClassMod_Unique_03_C::OperativeTriggerKillSkillEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OperativeTriggerKillSkillEffect");

	UOakAbility_Operative_ClassMod_Unique_03_C_OperativeTriggerKillSkillEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_ClassMod_Unique_03_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActionSkillActivated");

	UOakAbility_Operative_ClassMod_Unique_03_C_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_ClassMod_Unique_03_C::ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03");

	UOakAbility_Operative_ClassMod_Unique_03_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
