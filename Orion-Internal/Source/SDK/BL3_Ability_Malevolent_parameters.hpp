#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Malevolent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Malevolent.Ability_Malevolent_C.OnActivated
struct UAbility_Malevolent_C_OnActivated_Params
{
};

// Function Ability_Malevolent.Ability_Malevolent_C.ReloadEndedDelegate
struct UAbility_Malevolent_C_ReloadEndedDelegate_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Malevolent.Ability_Malevolent_C.OnDeactivated
struct UAbility_Malevolent_C_OnDeactivated_Params
{
};

// Function Ability_Malevolent.Ability_Malevolent_C.OnUnregistered
struct UAbility_Malevolent_C_OnUnregistered_Params
{
};

// Function Ability_Malevolent.Ability_Malevolent_C.OnPaused
struct UAbility_Malevolent_C_OnPaused_Params
{
};

// Function Ability_Malevolent.Ability_Malevolent_C.ExecuteUbergraph_Ability_Malevolent
struct UAbility_Malevolent_C_ExecuteUbergraph_Ability_Malevolent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
