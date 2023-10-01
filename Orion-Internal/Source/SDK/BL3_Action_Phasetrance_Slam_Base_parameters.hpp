#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.GetSlamDamage
struct UAction_Phasetrance_Slam_Base_C_GetSlamDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.SlamFeedbackLaunch
struct UAction_Phasetrance_Slam_Base_C_SlamFeedbackLaunch_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlam
struct UAction_Phasetrance_Slam_Base_C_InnerDoSlam_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlamDamage
struct UAction_Phasetrance_Slam_Base_C_InnerDoSlamDamage_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerShowSlamLandFX
struct UAction_Phasetrance_Slam_Base_C_InnerShowSlamLandFX_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamEnded
struct UAction_Phasetrance_Slam_Base_C_InnerOnSlamEnded_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamStarted
struct UAction_Phasetrance_Slam_Base_C_InnerOnSlamStarted_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBegin
struct UAction_Phasetrance_Slam_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_StartDive
struct UAction_Phasetrance_Slam_Base_C_AN_StartDive_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnEnd
struct UAction_Phasetrance_Slam_Base_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnFallEnded
struct UAction_Phasetrance_Slam_Base_C_OnFallEnded_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnServerEnd
struct UAction_Phasetrance_Slam_Base_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_DoSlam
struct UAction_Phasetrance_Slam_Base_C_AN_DoSlam_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBeginBringUpWeapon
struct UAction_Phasetrance_Slam_Base_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.HandlePlayerLanded
struct UAction_Phasetrance_Slam_Base_C_HandlePlayerLanded_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillReactDialogue
struct UAction_Phasetrance_Slam_Base_C_TriggerActionSkillReactDialogue_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillUseDialogue
struct UAction_Phasetrance_Slam_Base_C_TriggerActionSkillUseDialogue_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Begin Dialogue
struct UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Begin_Dialogue_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Impact Dialogue
struct UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Impact_Dialogue_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger slam Taunt Dialogue
struct UAction_Phasetrance_Slam_Base_C_Trigger_slam_Taunt_Dialogue_Params
{
};

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.ExecuteUbergraph_Action_Phasetrance_Slam_Base
struct UAction_Phasetrance_Slam_Base_C_ExecuteUbergraph_Action_Phasetrance_Slam_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
