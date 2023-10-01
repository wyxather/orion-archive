#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Juju_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Juju.Ability_Juju_C.OnActivated
struct UAbility_Juju_C_OnActivated_Params
{
};

// Function Ability_Juju.Ability_Juju_C.OnRegistered
struct UAbility_Juju_C_OnRegistered_Params
{
};

// Function Ability_Juju.Ability_Juju_C.ReloadStartedEvent
struct UAbility_Juju_C_ReloadStartedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Juju.Ability_Juju_C.OnUnregistered
struct UAbility_Juju_C_OnUnregistered_Params
{
};

// Function Ability_Juju.Ability_Juju_C.OnCausedDmg_CE
struct UAbility_Juju_C_OnCausedDmg_CE_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Juju.Ability_Juju_C.OnCausedDeath_CE
struct UAbility_Juju_C_OnCausedDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Juju.Ability_Juju_C.OnResumed
struct UAbility_Juju_C_OnResumed_Params
{
};

// Function Ability_Juju.Ability_Juju_C.ExecuteUbergraph_Ability_Juju
struct UAbility_Juju_C_ExecuteUbergraph_Ability_Juju_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
