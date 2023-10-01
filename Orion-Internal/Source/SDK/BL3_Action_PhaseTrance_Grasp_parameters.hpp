#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Grasp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.DoDamageToImmuneTarget
struct UAction_PhaseTrance_Grasp_C_DoDamageToImmuneTarget_Params
{
	class AActor*                                      Enemey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.AnimNotify_CreateGraspingSphere
struct UAction_PhaseTrance_Grasp_C_AnimNotify_CreateGraspingSphere_Params
{
};

// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.HandleGraspTargetFound
struct UAction_PhaseTrance_Grasp_C_HandleGraspTargetFound_Params
{
	class AOakCharacter**                              GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.ExecuteUbergraph_Action_PhaseTrance_Grasp
struct UAction_PhaseTrance_Grasp_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
