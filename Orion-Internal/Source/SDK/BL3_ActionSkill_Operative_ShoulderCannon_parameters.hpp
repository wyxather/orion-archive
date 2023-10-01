#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_ShoulderCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
struct UActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
struct UActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params
{
	TEnumAsByte<EShoulderCannonMods>                   Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
struct UActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params
{
	class AActor*                                      Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ShouldAbortActivation
struct UActionSkill_Operative_ShoulderCannon_C_ShouldAbortActivation_Params
{
	unsigned char                                      OutAbortCode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.TrySpawnCannon
struct UActionSkill_Operative_ShoulderCannon_C_TrySpawnCannon_Params
{
	class AInteractiveObject*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsActionSkillValid
struct UActionSkill_Operative_ShoulderCannon_C_IsActionSkillValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnPaused
struct UActionSkill_Operative_ShoulderCannon_C_OnPaused_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnResumed
struct UActionSkill_Operative_ShoulderCannon_C_OnResumed_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnChargeCountChanged
struct UActionSkill_Operative_ShoulderCannon_C_OnChargeCountChanged_Params
{
	int*                                               OldCharge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnActivated
struct UActionSkill_Operative_ShoulderCannon_C_OnActivated_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.SpawnShoulderCannon
struct UActionSkill_Operative_ShoulderCannon_C_SpawnShoulderCannon_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnStartActionAbility
struct UActionSkill_Operative_ShoulderCannon_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnDeactivated
struct UActionSkill_Operative_ShoulderCannon_C_OnDeactivated_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnRegistered
struct UActionSkill_Operative_ShoulderCannon_C_OnRegistered_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnUnregistered
struct UActionSkill_Operative_ShoulderCannon_C_OnUnregistered_Params
{
};

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon
struct UActionSkill_Operative_ShoulderCannon_C_ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
