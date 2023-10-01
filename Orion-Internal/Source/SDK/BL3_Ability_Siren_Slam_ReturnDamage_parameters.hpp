#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Slam_ReturnDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnActivated
struct UAbility_Siren_Slam_ReturnDamage_C_OnActivated_Params
{
};

// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.SlamEnded
struct UAbility_Siren_Slam_ReturnDamage_C_SlamEnded_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnDeactivated
struct UAbility_Siren_Slam_ReturnDamage_C_OnDeactivated_Params
{
};

// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.UnregisterCDM
struct UAbility_Siren_Slam_ReturnDamage_C_UnregisterCDM_Params
{
};

// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage
struct UAbility_Siren_Slam_ReturnDamage_C_ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
