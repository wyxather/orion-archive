#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Use_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerAbility_Use.PlayerAbility_Use_C.StopGiveUpInner
struct UPlayerAbility_Use_C_StopGiveUpInner_Params
{
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.StartGiveUpInner
struct UPlayerAbility_Use_C_StartGiveUpInner_Params
{
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GetFFYLComponent
struct UPlayerAbility_Use_C_GetFFYLComponent_Params
{
	class UFightForYourLifeComponent*                  res;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.FlushLatentUses
struct UPlayerAbility_Use_C_FlushLatentUses_Params
{
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GetUseComponent
struct UPlayerAbility_Use_C_GetUseComponent_Params
{
	class UUseComponent*                               res;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.StopUseInner
struct UPlayerAbility_Use_C_StopUseInner_Params
{
	EUsabilityType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.StartUseInner
struct UPlayerAbility_Use_C_StartUseInner_Params
{
	EUsabilityType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8
struct UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.OnPaused
struct UPlayerAbility_Use_C_OnPaused_Params
{
};

// Function PlayerAbility_Use.PlayerAbility_Use_C.ExecuteUbergraph_PlayerAbility_Use
struct UPlayerAbility_Use_C_ExecuteUbergraph_PlayerAbility_Use_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
