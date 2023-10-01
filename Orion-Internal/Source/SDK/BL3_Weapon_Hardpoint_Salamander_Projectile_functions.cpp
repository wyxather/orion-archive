// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.UserConstructionScript");

	AWeapon_Hardpoint_Salamander_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.K2_InitializeMod
// (Event, Protected, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_Projectile_C::K2_InitializeMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.K2_InitializeMod");

	AWeapon_Hardpoint_Salamander_Projectile_C_K2_InitializeMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile
// (BlueprintEvent)

void AWeapon_Hardpoint_Salamander_Projectile_C::BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile");

	AWeapon_Hardpoint_Salamander_Projectile_C_BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_Salamander_Projectile_C::ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile");

	AWeapon_Hardpoint_Salamander_Projectile_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
