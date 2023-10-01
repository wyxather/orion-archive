#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Grasp_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GetGraspDuration
struct UAction_PhaseTrance_Grasp_Base_C_GetGraspDuration_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GraspTarget
struct UAction_PhaseTrance_Grasp_Base_C_GraspTarget_Params
{
	class AActor*                                      GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetSearchFailed
struct UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetSearchFailed_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetFound
struct UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetFound_Params
{
	class AOakCharacter*                               GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PerformGraspFeedback
struct UAction_PhaseTrance_Grasp_Base_C_PerformGraspFeedback_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindInstantPhaseWebGraspTarget
struct UAction_PhaseTrance_Grasp_Base_C_FindInstantPhaseWebGraspTarget_Params
{
	class AOakCharacter*                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Failure_08B09A8F480F3929252234B2AB30A873
struct UAction_PhaseTrance_Grasp_Base_C_Failure_08B09A8F480F3929252234B2AB30A873_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Success_08B09A8F480F3929252234B2AB30A873
struct UAction_PhaseTrance_Grasp_Base_C_Success_08B09A8F480F3929252234B2AB30A873_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillReactDialogue
struct UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillReactDialogue_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillUseDialogue
struct UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillUseDialogue_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.OnServerBegin
struct UAction_PhaseTrance_Grasp_Base_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartRumble
struct UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartRumble_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartCS
struct UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartCS_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PlayPhaseTranceHandEffects
struct UAction_PhaseTrance_Grasp_Base_C_PlayPhaseTranceHandEffects_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindGraspTargetAsync
struct UAction_PhaseTrance_Grasp_Base_C_FindGraspTargetAsync_Params
{
};

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.ExecuteUbergraph_Action_PhaseTrance_Grasp_Base
struct UAction_PhaseTrance_Grasp_Base_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
