#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMag_Parent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointTriggerEffect
struct UAbility_Gunner_NextMag_Parent_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.OnActivated
struct UAbility_Gunner_NextMag_Parent_C_OnActivated_Params
{
};

// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ReloadedWeapon
struct UAbility_Gunner_NextMag_Parent_C_ReloadedWeapon_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointAutoBearStarted
struct UAbility_Gunner_NextMag_Parent_C_AnointAutoBearStarted_Params
{
};

// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ExecuteUbergraph_Ability_Gunner_NextMag_Parent
struct UAbility_Gunner_NextMag_Parent_C_ExecuteUbergraph_Ability_Gunner_NextMag_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
