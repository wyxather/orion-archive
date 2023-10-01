#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SparkyBoom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnDeactivated
struct UAbility_SparkyBoom_v2_C_OnDeactivated_Params
{
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnUnregistered
struct UAbility_SparkyBoom_v2_C_OnUnregistered_Params
{
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnPaused
struct UAbility_SparkyBoom_v2_C_OnPaused_Params
{
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadStarted
struct UAbility_SparkyBoom_v2_C_Event_ReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnActivated
struct UAbility_SparkyBoom_v2_C_OnActivated_Params
{
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadEnded
struct UAbility_SparkyBoom_v2_C_Event_ReloadEnded_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_EnteredDownState
struct UAbility_SparkyBoom_v2_C_Event_EnteredDownState_Params
{
};

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.ExecuteUbergraph_Ability_SparkyBoom_v2
struct UAbility_SparkyBoom_v2_C_ExecuteUbergraph_Ability_SparkyBoom_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
