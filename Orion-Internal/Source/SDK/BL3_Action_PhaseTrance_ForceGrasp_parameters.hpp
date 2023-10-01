#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_ForceGrasp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.CreateSlamSphere
struct UAction_PhaseTrance_ForceGrasp_C_CreateSlamSphere_Params
{
	class AOakCharacter*                               GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.TriggerActionSkillUseDialogue
struct UAction_PhaseTrance_ForceGrasp_C_TriggerActionSkillUseDialogue_Params
{
};

// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.AnimNotify_CreateGraspingSphere
struct UAction_PhaseTrance_ForceGrasp_C_AnimNotify_CreateGraspingSphere_Params
{
};

// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.HandleGraspTargetFound
struct UAction_PhaseTrance_ForceGrasp_C_HandleGraspTargetFound_Params
{
	class AOakCharacter**                              GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.ExecuteUbergraph_Action_PhaseTrance_ForceGrasp
struct UAction_PhaseTrance_ForceGrasp_C_ExecuteUbergraph_Action_PhaseTrance_ForceGrasp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
