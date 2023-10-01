#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_BioBetsy_Rad_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnRegistered
struct UAbility_Weapon_BioBetsy_Rad_C_OnRegistered_Params
{
};

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnDeactivated
struct UAbility_Weapon_BioBetsy_Rad_C_OnDeactivated_Params
{
};

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnPaused
struct UAbility_Weapon_BioBetsy_Rad_C_OnPaused_Params
{
};

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnKilled
struct UAbility_Weapon_BioBetsy_Rad_C_OnKilled_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.Reset
struct UAbility_Weapon_BioBetsy_Rad_C_Reset_Params
{
};

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad
struct UAbility_Weapon_BioBetsy_Rad_C_ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
