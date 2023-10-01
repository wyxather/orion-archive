// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_IronCubActiveDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_IronCubActiveDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnActivated");

	UAbility_Gunner_IronCubActiveDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_IronCubActiveDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnDeactivated");

	UAbility_Gunner_IronCubActiveDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ChangedSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData* SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_IronCubActiveDamage_C::ChangedSkill(class UOakPlayerAbilitySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ChangedSkill");

	UAbility_Gunner_IronCubActiveDamage_C_ChangedSkill_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_IronCubActiveDamage_C::IronCubStarted(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubStarted");

	UAbility_Gunner_IronCubActiveDamage_C_IronCubStarted_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_IronCubActiveDamage_C::IronCubEnded(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubEnded");

	UAbility_Gunner_IronCubActiveDamage_C_IronCubEnded_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_IronCubActiveDamage_C::ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage");

	UAbility_Gunner_IronCubActiveDamage_C_ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
