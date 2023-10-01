#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_ComputedStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_ComputedStats.Weapon_ComputedStats_C.OnComputeDerivedStats
struct UWeapon_ComputedStats_C_OnComputeDerivedStats_Params
{
};

// Function Weapon_ComputedStats.Weapon_ComputedStats_C.ExecuteUbergraph_Weapon_ComputedStats
struct UWeapon_ComputedStats_C_ExecuteUbergraph_Weapon_ComputedStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
