#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Disruptor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Disruptor.Ability_Disruptor_C.OnActivated
struct UAbility_Disruptor_C_OnActivated_Params
{
};

// Function Ability_Disruptor.Ability_Disruptor_C.OnCausedDeath_Event
struct UAbility_Disruptor_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Disruptor.Ability_Disruptor_C.OnCausedDamage
struct UAbility_Disruptor_C_OnCausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Disruptor.Ability_Disruptor_C.RemoveCDM
struct UAbility_Disruptor_C_RemoveCDM_Params
{
};

// Function Ability_Disruptor.Ability_Disruptor_C.OnDeactivated
struct UAbility_Disruptor_C_OnDeactivated_Params
{
};

// Function Ability_Disruptor.Ability_Disruptor_C.WeaponFired
struct UAbility_Disruptor_C_WeaponFired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Disruptor.Ability_Disruptor_C.ExecuteUbergraph_Ability_Disruptor
struct UAbility_Disruptor_C_ExecuteUbergraph_Ability_Disruptor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
