#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Common_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AssembleActivationCombo
struct UAction_Phasetrance_Common_C_AssembleActivationCombo_Params
{
	struct FPhaseTranceActivationComboData             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.PlayPhaseTranceHandEffects
struct UAction_Phasetrance_Common_C_PlayPhaseTranceHandEffects_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillReactDialogue
struct UAction_Phasetrance_Common_C_TriggerActionSkillReactDialogue_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillUseDialogue
struct UAction_Phasetrance_Common_C_TriggerActionSkillUseDialogue_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.Cleanup
struct UAction_Phasetrance_Common_C_Cleanup_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnEnd
struct UAction_Phasetrance_Common_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerEnd
struct UAction_Phasetrance_Common_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryEffectComponents
struct UAction_Phasetrance_Common_C_AN_TryEffectComponents_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerBegin
struct UAction_Phasetrance_Common_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnBegin
struct UAction_Phasetrance_Common_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryImpulse
struct UAction_Phasetrance_Common_C_AN_TryImpulse_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryNova
struct UAction_Phasetrance_Common_C_AN_TryNova_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove3pGhostArms
struct UAction_Phasetrance_Common_C_AN_Remove3pGhostArms_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove1pGhostArms
struct UAction_Phasetrance_Common_C_AN_Remove1pGhostArms_Params
{
};

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.ExecuteUbergraph_Action_Phasetrance_Common
struct UAction_Phasetrance_Common_C_ExecuteUbergraph_Action_Phasetrance_Common_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
