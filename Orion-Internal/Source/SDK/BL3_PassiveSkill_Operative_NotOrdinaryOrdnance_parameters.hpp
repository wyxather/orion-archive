#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_NotOrdinaryOrdnance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_NotOrdinaryOrdnance.PassiveSkill_Operative_NotOrdinaryOrdnance_C.OperativeTriggerKillSkillEffect
struct UPassiveSkill_Operative_NotOrdinaryOrdnance_C_OperativeTriggerKillSkillEffect_Params
{
	struct FVector*                                    KillLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_NotOrdinaryOrdnance.PassiveSkill_Operative_NotOrdinaryOrdnance_C.ExecuteUbergraph_PassiveSkill_Operative_NotOrdinaryOrdnance
struct UPassiveSkill_Operative_NotOrdinaryOrdnance_C_ExecuteUbergraph_PassiveSkill_Operative_NotOrdinaryOrdnance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
