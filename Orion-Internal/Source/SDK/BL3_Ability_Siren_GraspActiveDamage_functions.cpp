// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_GraspActiveDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_GraspActiveDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnActivated");

	UAbility_Siren_GraspActiveDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_GraspActiveDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnDeactivated");

	UAbility_Siren_GraspActiveDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ChangedSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData* SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_GraspActiveDamage_C::ChangedSkill(class UOakPlayerAbilitySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ChangedSkill");

	UAbility_Siren_GraspActiveDamage_C_ChangedSkill_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPhaseTranceElementalType      Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_GraspActiveDamage_C::PhasegraspStarted(class AActor* Enemy, EPhaseTranceElementalType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspStarted");

	UAbility_Siren_GraspActiveDamage_C_PhasegraspStarted_Params params;
	params.Enemy = Enemy;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_GraspActiveDamage_C::PhasegraspEnded(bool Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspEnded");

	UAbility_Siren_GraspActiveDamage_C_PhasegraspEnded_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ExecuteUbergraph_Ability_Siren_GraspActiveDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_GraspActiveDamage_C::ExecuteUbergraph_Ability_Siren_GraspActiveDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ExecuteUbergraph_Ability_Siren_GraspActiveDamage");

	UAbility_Siren_GraspActiveDamage_C_ExecuteUbergraph_Ability_Siren_GraspActiveDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
