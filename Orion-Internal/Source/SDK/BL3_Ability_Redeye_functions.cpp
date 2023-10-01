// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Redeye_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Redeye.Ability_Redeye_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Redeye_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Redeye.Ability_Redeye_C.OnActivated");

	UAbility_Redeye_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Redeye.Ability_Redeye_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Redeye_C::WeaponFired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Redeye.Ability_Redeye_C.WeaponFired");

	UAbility_Redeye_C_WeaponFired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Redeye.Ability_Redeye_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Redeye_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Redeye.Ability_Redeye_C.OnCausedDeath");

	UAbility_Redeye_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Redeye.Ability_Redeye_C.UpdateWeapon
// (BlueprintCallable, BlueprintEvent)

void UAbility_Redeye_C::UpdateWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Redeye.Ability_Redeye_C.UpdateWeapon");

	UAbility_Redeye_C_UpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Redeye.Ability_Redeye_C.ExecuteUbergraph_Ability_Redeye
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Redeye_C::ExecuteUbergraph_Ability_Redeye(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Redeye.Ability_Redeye_C.ExecuteUbergraph_Ability_Redeye");

	UAbility_Redeye_C_ExecuteUbergraph_Ability_Redeye_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
