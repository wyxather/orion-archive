#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_DLCSkill_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.GetPhaseFlareSpawnLocation
struct UAction_Phasetrance_DLCSkill_Base_C_GetPhaseFlareSpawnLocation_Params
{
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SetPhaseFlareSpawnLocation
struct UAction_Phasetrance_DLCSkill_Base_C_SetPhaseFlareSpawnLocation_Params
{
	struct FVector                                     Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnRep_SpawnLocation
struct UAction_Phasetrance_DLCSkill_Base_C_OnRep_SpawnLocation_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.StartSummonAnimation
struct UAction_Phasetrance_DLCSkill_Base_C_StartSummonAnimation_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.HideArmsMesh
struct UAction_Phasetrance_DLCSkill_Base_C_HideArmsMesh_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ResetArmsMesh
struct UAction_Phasetrance_DLCSkill_Base_C_ResetArmsMesh_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.CacheSummonMeshes
struct UAction_Phasetrance_DLCSkill_Base_C_CacheSummonMeshes_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SummonActionSkillOrb
struct UAction_Phasetrance_DLCSkill_Base_C_SummonActionSkillOrb_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   Orb;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerBegin
struct UAction_Phasetrance_DLCSkill_Base_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerEnd
struct UAction_Phasetrance_DLCSkill_Base_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.DetachOrb
struct UAction_Phasetrance_DLCSkill_Base_C_DetachOrb_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_SummonOrb
struct UAction_Phasetrance_DLCSkill_Base_C_AN_SummonOrb_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_DetachOrb
struct UAction_Phasetrance_DLCSkill_Base_C_AN_DetachOrb_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SendOrb
struct UAction_Phasetrance_DLCSkill_Base_C_SendOrb_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_Remove3pGhostArms
struct UAction_Phasetrance_DLCSkill_Base_C_AN_Remove3pGhostArms_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnBegin
struct UAction_Phasetrance_DLCSkill_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillUseDialogue
struct UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillUseDialogue_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillReactDialogue
struct UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillReactDialogue_Params
{
};

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base
struct UAction_Phasetrance_DLCSkill_Base_C_ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
