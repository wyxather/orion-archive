#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_Fearmonger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.OnRegistered
struct UAbility_Weapon_Fearmonger_C_OnRegistered_Params
{
};

// Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.TerrorUpdated
struct UAbility_Weapon_Fearmonger_C_TerrorUpdated_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.ExecuteUbergraph_Ability_Weapon_Fearmonger
struct UAbility_Weapon_Fearmonger_C_ExecuteUbergraph_Ability_Weapon_Fearmonger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
