#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_PlayingDirty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.GetManualHUDIconValues
struct UPassiveSkill_Operative_PlayingDirty_C_GetManualHUDIconValues_Params
{
	int                                                outStackCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.PlayingDirtyOnWeaponUsed
struct UPassiveSkill_Operative_PlayingDirty_C_PlayingDirtyOnWeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.OperativeTriggerKillSkillEffect
struct UPassiveSkill_Operative_PlayingDirty_C_OperativeTriggerKillSkillEffect_Params
{
	struct FVector*                                    KillLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty
struct UPassiveSkill_Operative_PlayingDirty_C_ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
