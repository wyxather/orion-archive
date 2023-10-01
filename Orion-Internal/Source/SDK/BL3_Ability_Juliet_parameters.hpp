#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Juliet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Juliet.Ability_Juliet_C.OnResumed
struct UAbility_Juliet_C_OnResumed_Params
{
};

// Function Ability_Juliet.Ability_Juliet_C.OnActivated
struct UAbility_Juliet_C_OnActivated_Params
{
};

// Function Ability_Juliet.Ability_Juliet_C.OnRegistered
struct UAbility_Juliet_C_OnRegistered_Params
{
};

// Function Ability_Juliet.Ability_Juliet_C.ReloadStartedEvent
struct UAbility_Juliet_C_ReloadStartedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Juliet.Ability_Juliet_C.OnUnregistered
struct UAbility_Juliet_C_OnUnregistered_Params
{
};

// Function Ability_Juliet.Ability_Juliet_C.OnCausedDeath_CE
struct UAbility_Juliet_C_OnCausedDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Juliet.Ability_Juliet_C.ExecuteUbergraph_Ability_Juliet
struct UAbility_Juliet_C_ExecuteUbergraph_Ability_Juliet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
