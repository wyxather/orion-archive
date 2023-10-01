// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_GravitySnareActiveDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_GravitySnareActiveDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnActivated");

	UAbility_Beast_GravitySnareActiveDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_GravitySnareActiveDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnDeactivated");

	UAbility_Beast_GravitySnareActiveDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_GravitySnareActiveDamage_C::GravitySnareStarted(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareStarted");

	UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareStarted_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_GravitySnareActiveDamage_C::GravitySnareEnded(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareEnded");

	UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareEnded_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ChangedSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData* SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_GravitySnareActiveDamage_C::ChangedSkill(class UOakPlayerAbilitySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ChangedSkill");

	UAbility_Beast_GravitySnareActiveDamage_C_ChangedSkill_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_GravitySnareActiveDamage_C::ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage");

	UAbility_Beast_GravitySnareActiveDamage_C_ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
