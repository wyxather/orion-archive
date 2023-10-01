#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ElDragonJr_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_ElDragonJr.Ability_Artifact_ElDragonJr_C.OnActivated
struct UAbility_Artifact_ElDragonJr_C_OnActivated_Params
{
};

// Function Ability_Artifact_ElDragonJr.Ability_Artifact_ElDragonJr_C.OnDeactivated
struct UAbility_Artifact_ElDragonJr_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_ElDragonJr.Ability_Artifact_ElDragonJr_C.Caused Damage
struct UAbility_Artifact_ElDragonJr_C_Caused_Damage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Artifact_ElDragonJr.Ability_Artifact_ElDragonJr_C.ExecuteUbergraph_Ability_Artifact_ElDragonJr
struct UAbility_Artifact_ElDragonJr_C_ExecuteUbergraph_Ability_Artifact_ElDragonJr_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
