#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RangedWeapon_Mod_WeaponMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.UpdateWeaponModeForceFeedback
struct ARangedWeapon_Mod_WeaponMode_C_UpdateWeaponModeForceFeedback_Params
{
};

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnActivate
struct ARangedWeapon_Mod_WeaponMode_C_OnActivate_Params
{
};

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnAttached
struct ARangedWeapon_Mod_WeaponMode_C_OnAttached_Params
{
};

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnDetached
struct ARangedWeapon_Mod_WeaponMode_C_OnDetached_Params
{
};

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnActivateMod
struct ARangedWeapon_Mod_WeaponMode_C_OnActivateMod_Params
{
	EModActiveState*                                   ActiveState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.OnDeactivate
struct ARangedWeapon_Mod_WeaponMode_C_OnDeactivate_Params
{
};

// Function RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C.ExecuteUbergraph_RangedWeapon_Mod_WeaponMode
struct ARangedWeapon_Mod_WeaponMode_C_ExecuteUbergraph_RangedWeapon_Mod_WeaponMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
