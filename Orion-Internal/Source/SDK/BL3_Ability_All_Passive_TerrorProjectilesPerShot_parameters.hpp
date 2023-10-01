#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorProjectilesPerShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.GetFiringComponent
struct UAbility_All_Passive_TerrorProjectilesPerShot_C_GetFiringComponent_Params
{
	class AWeapon*                                     InWeapon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponFireProjectileComponent*              FireComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponUsed
struct UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponChanged
struct UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponChanged_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.AddProjectilePerShot
struct UAbility_All_Passive_TerrorProjectilesPerShot_C_AddProjectilePerShot_Params
{
	class AWeapon*                                     InWeapon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.OnActivated
struct UAbility_All_Passive_TerrorProjectilesPerShot_C_OnActivated_Params
{
};

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot
struct UAbility_All_Passive_TerrorProjectilesPerShot_C_ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
