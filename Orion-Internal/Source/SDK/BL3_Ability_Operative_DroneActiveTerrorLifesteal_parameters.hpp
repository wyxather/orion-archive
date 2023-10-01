#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Operative_DroneActiveTerrorLifesteal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.OnActivated
struct UAbility_Operative_DroneActiveTerrorLifesteal_C_OnActivated_Params
{
};

// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneStarted
struct UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneStarted_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneEnded
struct UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneEnded_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.CausedDamage
struct UAbility_Operative_DroneActiveTerrorLifesteal_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal
struct UAbility_Operative_DroneActiveTerrorLifesteal_C_ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
