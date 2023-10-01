#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Tankman_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Tankman.Ability_Tankman_C.OnResumed
struct UAbility_Tankman_C_OnResumed_Params
{
};

// Function Ability_Tankman.Ability_Tankman_C.OnActivated
struct UAbility_Tankman_C_OnActivated_Params
{
};

// Function Ability_Tankman.Ability_Tankman_C.OnRegistered
struct UAbility_Tankman_C_OnRegistered_Params
{
};

// Function Ability_Tankman.Ability_Tankman_C.ReloadStartedEvent
struct UAbility_Tankman_C_ReloadStartedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Tankman.Ability_Tankman_C.ReloadEndedEvent
struct UAbility_Tankman_C_ReloadEndedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Tankman.Ability_Tankman_C.OnUnregistered
struct UAbility_Tankman_C_OnUnregistered_Params
{
};

// Function Ability_Tankman.Ability_Tankman_C.OnCauseDeath_CE
struct UAbility_Tankman_C_OnCauseDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Tankman.Ability_Tankman_C.OnDownStateStart_CE
struct UAbility_Tankman_C_OnDownStateStart_CE_Params
{
};

// Function Ability_Tankman.Ability_Tankman_C.ExecuteUbergraph_Ability_Tankman
struct UAbility_Tankman_C_ExecuteUbergraph_Ability_Tankman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
