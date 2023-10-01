#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_MeansOfDestruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnActivated
struct UPassiveSkill_Gunner_MeansOfDestruction_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnCausedDamage_MeansOfDestruction
struct UPassiveSkill_Gunner_MeansOfDestruction_C_OnCausedDamage_MeansOfDestruction_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnGradeChanged
struct UPassiveSkill_Gunner_MeansOfDestruction_C_OnGradeChanged_Params
{
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.DetermineNewChance
struct UPassiveSkill_Gunner_MeansOfDestruction_C_DetermineNewChance_Params
{
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetMoDClamp_Ammo
struct UPassiveSkill_Gunner_MeansOfDestruction_C_ResetMoDClamp_Ammo_Params
{
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnAbilityTimerEnded
struct UPassiveSkill_Gunner_MeansOfDestruction_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetModClamp_Grenade
struct UPassiveSkill_Gunner_MeansOfDestruction_C_ResetModClamp_Grenade_Params
{
};

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction
struct UPassiveSkill_Gunner_MeansOfDestruction_C_ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
