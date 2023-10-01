// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_WarlordAmmoRegen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_WarlordAmmoRegen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.OnActivated");

	UAbility_WarlordAmmoRegen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UAbility_WarlordAmmoRegen_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.WeaponFired");

	UAbility_WarlordAmmoRegen_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.Mode2Fired
// (BlueprintCallable, BlueprintEvent)

void UAbility_WarlordAmmoRegen_C::Mode2Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.Mode2Fired");

	UAbility_WarlordAmmoRegen_C_Mode2Fired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.ExecuteUbergraph_Ability_WarlordAmmoRegen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_WarlordAmmoRegen_C::ExecuteUbergraph_Ability_WarlordAmmoRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.ExecuteUbergraph_Ability_WarlordAmmoRegen");

	UAbility_WarlordAmmoRegen_C_ExecuteUbergraph_Ability_WarlordAmmoRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
