// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_ButcherAmmoRegen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_ButcherAmmoRegen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.OnActivated");

	UAbility_ButcherAmmoRegen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UAbility_ButcherAmmoRegen_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.WeaponFired");

	UAbility_ButcherAmmoRegen_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.ExecuteUbergraph_Ability_ButcherAmmoRegen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_ButcherAmmoRegen_C::ExecuteUbergraph_Ability_ButcherAmmoRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.ExecuteUbergraph_Ability_ButcherAmmoRegen");

	UAbility_ButcherAmmoRegen_C_ExecuteUbergraph_Ability_ButcherAmmoRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
