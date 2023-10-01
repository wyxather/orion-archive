#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Cast_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.CacheSummonMeshes
struct UAction_PhaseTrance_Cast_Base_C_CacheSummonMeshes_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.FirePhaseCastProjectile
struct UAction_PhaseTrance_Cast_Base_C_FirePhaseCastProjectile_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ResetCastMesh
struct UAction_PhaseTrance_Cast_Base_C_ResetCastMesh_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.StartCastSummonAnimation
struct UAction_PhaseTrance_Cast_Base_C_StartCastSummonAnimation_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastFeedback
struct UAction_PhaseTrance_Cast_Base_C_AN_PerformCastFeedback_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_CreateCastProjectile
struct UAction_PhaseTrance_Cast_Base_C_AN_CreateCastProjectile_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnBegin
struct UAction_PhaseTrance_Cast_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillReactDialogue
struct UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillReactDialogue_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillUseDialogue
struct UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillUseDialogue_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnServerEnd
struct UAction_PhaseTrance_Cast_Base_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part1
struct UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part1_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part2
struct UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part2_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.PlayPhaseTranceHandEffects
struct UAction_PhaseTrance_Cast_Base_C_PlayPhaseTranceHandEffects_Params
{
};

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Base
struct UAction_PhaseTrance_Cast_Base_C_ExecuteUbergraph_Action_PhaseTrance_Cast_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
