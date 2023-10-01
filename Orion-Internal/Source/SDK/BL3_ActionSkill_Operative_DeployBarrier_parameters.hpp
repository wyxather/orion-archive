#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_DeployBarrier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.IsHoldingBarrier
struct UActionSkill_Operative_DeployBarrier_C_IsHoldingBarrier_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.RefillBarrierHealth
struct UActionSkill_Operative_DeployBarrier_C_RefillBarrierHealth_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GiveBarrierHealth
struct UActionSkill_Operative_DeployBarrier_C_GiveBarrierHealth_Params
{
	float                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              New_Health;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierReference
struct UActionSkill_Operative_DeployBarrier_C_GetBarrierReference_Params
{
	class AActor*                                      Barrier;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierHealthPercent
struct UActionSkill_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params
{
	float                                              HealthPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ShouldStopAbilityOnPawnSlotComponentAttach
struct UActionSkill_Operative_DeployBarrier_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.SpawnNewBarrier
struct UActionSkill_Operative_DeployBarrier_C_SpawnNewBarrier_Params
{
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AOperativeBarrier*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetCooldownRestartPercent
struct UActionSkill_Operative_DeployBarrier_C_GetCooldownRestartPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.StartHoldingBarrier
struct UActionSkill_Operative_DeployBarrier_C_StartHoldingBarrier_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstable
struct UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params
{
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
struct UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params
{
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStartActionAbility
struct UActionSkill_Operative_DeployBarrier_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierInHand
struct UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.TryDropPickup
struct UActionSkill_Operative_DeployBarrier_C_TryDropPickup_Params
{
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
struct UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params
{
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStopActionAbility
struct UActionSkill_Operative_DeployBarrier_C_OnStopActionAbility_Params
{
};

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ExecuteUbergraph_ActionSkill_Operative_DeployBarrier
struct UActionSkill_Operative_DeployBarrier_C_ExecuteUbergraph_ActionSkill_Operative_DeployBarrier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
