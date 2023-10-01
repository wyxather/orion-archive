#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_LastStand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.LastStandArtifactAbility
struct UAbility_Artifact_LastStand_C_LastStandArtifactAbility_Params
{
};

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.SetVariables
struct UAbility_Artifact_LastStand_C_SetVariables_Params
{
};

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnActivated
struct UAbility_Artifact_LastStand_C_OnActivated_Params
{
};

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.TakeDamage_LastStand
struct UAbility_Artifact_LastStand_C_TakeDamage_LastStand_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnAbilityTimerStarted
struct UAbility_Artifact_LastStand_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnAbilityTimerEnded
struct UAbility_Artifact_LastStand_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.ExecuteUbergraph_Ability_Artifact_LastStand
struct UAbility_Artifact_LastStand_C_ExecuteUbergraph_Ability_Artifact_LastStand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
