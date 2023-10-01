#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_CloudKill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnRegistered
struct UAbility_Weapon_CloudKill_C_OnRegistered_Params
{
};

// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnCausedDamage
struct UAbility_Weapon_CloudKill_C_OnCausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnDeactivated
struct UAbility_Weapon_CloudKill_C_OnDeactivated_Params
{
};

// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.OnPaused
struct UAbility_Weapon_CloudKill_C_OnPaused_Params
{
};

// Function Ability_Weapon_CloudKill.Ability_Weapon_CloudKill_C.ExecuteUbergraph_Ability_Weapon_CloudKill
struct UAbility_Weapon_CloudKill_C_ExecuteUbergraph_Ability_Weapon_CloudKill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
