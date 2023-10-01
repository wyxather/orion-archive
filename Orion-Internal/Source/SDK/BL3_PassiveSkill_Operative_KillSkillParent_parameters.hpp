#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_KillSkillParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnActivated
struct UPassiveSkill_Operative_KillSkillParent_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeKillSkillOnKilledEnemy
struct UPassiveSkill_Operative_KillSkillParent_C_OperativeKillSkillOnKilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeTriggerKillSkillEffect
struct UPassiveSkill_Operative_KillSkillParent_C_OperativeTriggerKillSkillEffect_Params
{
	struct FVector                                     KillLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnSeeingRedActivated
struct UPassiveSkill_Operative_KillSkillParent_C_OnSeeingRedActivated_Params
{
};

// Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent
struct UPassiveSkill_Operative_KillSkillParent_C_ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
