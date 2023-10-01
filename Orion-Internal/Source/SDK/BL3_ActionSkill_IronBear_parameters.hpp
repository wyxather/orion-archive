#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_IronBear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetActionSkillWidgetKeyframe
struct UActionSkill_IronBear_C_GetActionSkillWidgetKeyframe_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.CalculateAbilityState
struct UActionSkill_IronBear_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearClass
struct UActionSkill_IronBear_C_GetIronBearClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnRotation
struct UActionSkill_IronBear_C_GetIronBearSpawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnLocation
struct UActionSkill_IronBear_C_GetIronBearSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCooldownRestartPercent
struct UActionSkill_IronBear_C_GetCooldownRestartPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.ShouldAbortActivation
struct UActionSkill_IronBear_C_ShouldAbortActivation_Params
{
	unsigned char                                      OutAbortCode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCameraYaw
struct UActionSkill_IronBear_C_GetCameraYaw_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.StartSummoningIronCub
struct UActionSkill_IronBear_C_StartSummoningIronCub_Params
{
};

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.ExecuteUbergraph_ActionSkill_IronBear
struct UActionSkill_IronBear_C_ExecuteUbergraph_ActionSkill_IronBear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
