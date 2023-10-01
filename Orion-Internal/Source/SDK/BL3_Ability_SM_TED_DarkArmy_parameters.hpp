#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SM_TED_DarkArmy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnRegistered
struct UAbility_SM_TED_DarkArmy_C_OnRegistered_Params
{
};

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ReloadStartedDelegate
struct UAbility_SM_TED_DarkArmy_C_ReloadStartedDelegate_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnDeactivated
struct UAbility_SM_TED_DarkArmy_C_OnDeactivated_Params
{
};

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnUnregistered
struct UAbility_SM_TED_DarkArmy_C_OnUnregistered_Params
{
};

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnPaused
struct UAbility_SM_TED_DarkArmy_C_OnPaused_Params
{
};

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnActivated
struct UAbility_SM_TED_DarkArmy_C_OnActivated_Params
{
};

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ExecuteUbergraph_Ability_SM_TED_DarkArmy
struct UAbility_SM_TED_DarkArmy_C_ExecuteUbergraph_Ability_SM_TED_DarkArmy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
