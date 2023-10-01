#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Web_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.CreateWebSphere
struct UAction_PhaseTrance_Web_C_CreateWebSphere_Params
{
	class AOakCharacter*                               GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.AnimNotify_CreateGraspingSphere
struct UAction_PhaseTrance_Web_C_AnimNotify_CreateGraspingSphere_Params
{
};

// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.HandleGraspTargetFound
struct UAction_PhaseTrance_Web_C_HandleGraspTargetFound_Params
{
	class AOakCharacter**                              GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.ExecuteUbergraph_Action_PhaseTrance_Web
struct UAction_PhaseTrance_Web_C_ExecuteUbergraph_Action_PhaseTrance_Web_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
