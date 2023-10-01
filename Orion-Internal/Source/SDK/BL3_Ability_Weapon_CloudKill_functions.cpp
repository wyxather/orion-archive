// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_CloudKill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_CloudKill_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnRegistered");

	UAbility_Weapon_CloudKill_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnCausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Weapon_CloudKill_C::OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnCausedDamage");

	UAbility_Weapon_CloudKill_C_OnCausedDamage_Params params;
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


// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_CloudKill_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnDeactivated");

	UAbility_Weapon_CloudKill_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_CloudKill_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnPaused");

	UAbility_Weapon_CloudKill_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.ExecuteUbergraph_Ability_Weapon_CloudKill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Weapon_CloudKill_C::ExecuteUbergraph_Ability_Weapon_CloudKill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.ExecuteUbergraph_Ability_Weapon_CloudKill");

	UAbility_Weapon_CloudKill_C_ExecuteUbergraph_Ability_Weapon_CloudKill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
