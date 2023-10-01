// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_FadeActiveDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_FadeActiveDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnActivated");

	UAbility_Beast_FadeActiveDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_FadeActiveDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnDeactivated");

	UAbility_Beast_FadeActiveDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_FadeActiveDamage_C::FadeAwayStarted(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayStarted");

	UAbility_Beast_FadeActiveDamage_C_FadeAwayStarted_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayEnded
// (BlueprintCallable, BlueprintEvent)

void UAbility_Beast_FadeActiveDamage_C::FadeAwayEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayEnded");

	UAbility_Beast_FadeActiveDamage_C_FadeAwayEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ChangedSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData* SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_FadeActiveDamage_C::ChangedSkill(class UOakPlayerAbilitySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ChangedSkill");

	UAbility_Beast_FadeActiveDamage_C_ChangedSkill_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ExecuteUbergraph_Ability_Beast_FadeActiveDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_FadeActiveDamage_C::ExecuteUbergraph_Ability_Beast_FadeActiveDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ExecuteUbergraph_Ability_Beast_FadeActiveDamage");

	UAbility_Beast_FadeActiveDamage_C_ExecuteUbergraph_Ability_Beast_FadeActiveDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
