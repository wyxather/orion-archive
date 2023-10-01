// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_InfernalWish_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_InfernalWish.Ability_InfernalWish_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_InfernalWish_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_InfernalWish.Ability_InfernalWish_C.OnActivated");

	UAbility_InfernalWish_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_InfernalWish.Ability_InfernalWish_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_InfernalWish_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_InfernalWish.Ability_InfernalWish_C.OnDeactivated");

	UAbility_InfernalWish_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_InfernalWish.Ability_InfernalWish_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_InfernalWish_C::WeaponFired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_InfernalWish.Ability_InfernalWish_C.WeaponFired");

	UAbility_InfernalWish_C_WeaponFired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_InfernalWish.Ability_InfernalWish_C.ExecuteUbergraph_Ability_InfernalWish
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_InfernalWish_C::ExecuteUbergraph_Ability_InfernalWish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_InfernalWish.Ability_InfernalWish_C.ExecuteUbergraph_Ability_InfernalWish");

	UAbility_InfernalWish_C_ExecuteUbergraph_Ability_InfernalWish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
