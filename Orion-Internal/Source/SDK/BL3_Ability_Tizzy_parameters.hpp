#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Tizzy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Tizzy.Ability_Tizzy_C.StopTizzy
struct UAbility_Tizzy_C_StopTizzy_Params
{
};

// Function Ability_Tizzy.Ability_Tizzy_C.StartTizzy
struct UAbility_Tizzy_C_StartTizzy_Params
{
};

// Function Ability_Tizzy.Ability_Tizzy_C.OnActivated
struct UAbility_Tizzy_C_OnActivated_Params
{
};

// Function Ability_Tizzy.Ability_Tizzy_C.NotifyHeatChange
struct UAbility_Tizzy_C_NotifyHeatChange_Params
{
};

// Function Ability_Tizzy.Ability_Tizzy_C.OnDeactivated
struct UAbility_Tizzy_C_OnDeactivated_Params
{
};

// Function Ability_Tizzy.Ability_Tizzy_C.WeaponUsed
struct UAbility_Tizzy_C_WeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Tizzy.Ability_Tizzy_C.ExecuteUbergraph_Ability_Tizzy
struct UAbility_Tizzy_C_ExecuteUbergraph_Ability_Tizzy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
