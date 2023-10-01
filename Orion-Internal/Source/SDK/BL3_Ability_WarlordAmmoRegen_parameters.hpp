#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_WarlordAmmoRegen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.OnActivated
struct UAbility_WarlordAmmoRegen_C_OnActivated_Params
{
};

// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.WeaponFired
struct UAbility_WarlordAmmoRegen_C_WeaponFired_Params
{
};

// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.Mode2Fired
struct UAbility_WarlordAmmoRegen_C_Mode2Fired_Params
{
};

// Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.ExecuteUbergraph_Ability_WarlordAmmoRegen
struct UAbility_WarlordAmmoRegen_C_ExecuteUbergraph_Ability_WarlordAmmoRegen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
