// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_TOR_HW_RampagerWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_TOR_HW_RampagerWeapon_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.OnRegistered");

	UAbility_TOR_HW_RampagerWeapon_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UAbility_TOR_HW_RampagerWeapon_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.WeaponFired");

	UAbility_TOR_HW_RampagerWeapon_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_TOR_HW_RampagerWeapon_C::ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon");

	UAbility_TOR_HW_RampagerWeapon_C_ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
