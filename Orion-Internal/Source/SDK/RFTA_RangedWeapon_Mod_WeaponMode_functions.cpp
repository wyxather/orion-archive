// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RangedWeapon_Mod_WeaponMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.UpdateWeaponModeForceFeedback
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_WeaponMode_C::UpdateWeaponModeForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.UpdateWeaponModeForceFeedback");

	ARangedWeapon_Mod_WeaponMode_C_UpdateWeaponModeForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_WeaponMode_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnActivate");

	ARangedWeapon_Mod_WeaponMode_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnAttached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_WeaponMode_C::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnAttached");

	ARangedWeapon_Mod_WeaponMode_C_OnAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnDetached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_WeaponMode_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnDetached");

	ARangedWeapon_Mod_WeaponMode_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnActivateMod
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EModActiveState*               ActiveState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_WeaponMode_C::OnActivateMod(EModActiveState* ActiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnActivateMod");

	ARangedWeapon_Mod_WeaponMode_C_OnActivateMod_Params params;
	params.ActiveState = ActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnDeactivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_WeaponMode_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnDeactivate");

	ARangedWeapon_Mod_WeaponMode_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.ExecuteUbergraph_RangedWeapon_Mod_WeaponMode
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_WeaponMode_C::ExecuteUbergraph_RangedWeapon_Mod_WeaponMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.ExecuteUbergraph_RangedWeapon_Mod_WeaponMode");

	ARangedWeapon_Mod_WeaponMode_C_ExecuteUbergraph_RangedWeapon_Mod_WeaponMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
