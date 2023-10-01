#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Switch_Parent_V1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchFeedbackState
struct ABP_IO_Switch_Parent_V1_C_GetSwitchFeedbackState_Params
{
	TEnumAsByte<Enum_States_SwitchFeedback>            FeedbackState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchState
struct ABP_IO_Switch_Parent_V1_C_GetSwitchState_Params
{
	TEnumAsByte<Enum_Switch_State>                     SwitchState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchLockedState
struct ABP_IO_Switch_Parent_V1_C_GetSwitchLockedState_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchInteractiveState
struct ABP_IO_Switch_Parent_V1_C_GetSwitchInteractiveState_Params
{
	bool                                               Interactive;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayControllerAndCameraFeedback
struct ABP_IO_Switch_Parent_V1_C_PlayControllerAndCameraFeedback_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.AddToDynamicMaterialArray
struct ABP_IO_Switch_Parent_V1_C_AddToDynamicMaterialArray_Params
{
	class UMeshComponent*                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.UserConstructionScript
struct ABP_IO_Switch_Parent_V1_C_UserConstructionScript_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchState
struct ABP_IO_Switch_Parent_V1_C_SetSwitchState_Params
{
	TEnumAsByte<Enum_Switch_State>                     SwitchState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchInteractiveState
struct ABP_IO_Switch_Parent_V1_C_SetSwitchInteractiveState_Params
{
	bool                                               Interactive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchLockedState
struct ABP_IO_Switch_Parent_V1_C_SetSwitchLockedState_Params
{
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedOnTimeline
struct ABP_IO_Switch_Parent_V1_C_PlayLockedOnTimeline_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedOffTimeline
struct ABP_IO_Switch_Parent_V1_C_PlayLockedOffTimeline_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.FinishedPlayingLockedTimeline
struct ABP_IO_Switch_Parent_V1_C_FinishedPlayingLockedTimeline_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlaySwitchMovement
struct ABP_IO_Switch_Parent_V1_C_PlaySwitchMovement_Params
{
	TEnumAsByte<Enum_Switch_ReasonForMoving>           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SwitchMovementFinished
struct ABP_IO_Switch_Parent_V1_C_SwitchMovementFinished_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.ReceiveBeginPlay
struct ABP_IO_Switch_Parent_V1_C_ReceiveBeginPlay_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_On
struct ABP_IO_Switch_Parent_V1_C_Preview_On_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Off
struct ABP_IO_Switch_Parent_V1_C_Preview_Off_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_JustOn
struct ABP_IO_Switch_Parent_V1_C_Switch_Feedback_JustOn_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_JustOff
struct ABP_IO_Switch_Parent_V1_C_Switch_Feedback_JustOff_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_OffFromLoad
struct ABP_IO_Switch_Parent_V1_C_Switch_Feedback_OffFromLoad_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_OnFromLoad
struct ABP_IO_Switch_Parent_V1_C_Switch_Feedback_OnFromLoad_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PrepPlaySwitchMovement
struct ABP_IO_Switch_Parent_V1_C_PrepPlaySwitchMovement_Params
{
	TEnumAsByte<Enum_Switch_ReasonForMoving>           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedUse
struct ABP_IO_Switch_Parent_V1_C_PlayLockedUse_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_LockedUseOn
struct ABP_IO_Switch_Parent_V1_C_Switch_Feedback_LockedUseOn_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_LockedUseOff
struct ABP_IO_Switch_Parent_V1_C_Switch_Feedback_LockedUseOff_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchPositionState_2
struct ABP_IO_Switch_Parent_V1_C___UserState_SwitchPositionState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchPositionState_1
struct ABP_IO_Switch_Parent_V1_C___UserState_SwitchPositionState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Unlocked
struct ABP_IO_Switch_Parent_V1_C_Preview_Unlocked_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Locked
struct ABP_IO_Switch_Parent_V1_C_Preview_Locked_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_NoFeedback
struct ABP_IO_Switch_Parent_V1_C_Preview_NoFeedback_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetLightColor
struct ABP_IO_Switch_Parent_V1_C_SetLightColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_2
struct ABP_IO_Switch_Parent_V1_C___UserState_SwitchFeedbackState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_1
struct ABP_IO_Switch_Parent_V1_C___UserState_SwitchFeedbackState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_3
struct ABP_IO_Switch_Parent_V1_C___UserState_SwitchFeedbackState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1
struct ABP_IO_Switch_Parent_V1_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchFeedbackState
struct ABP_IO_Switch_Parent_V1_C_SetSwitchFeedbackState_Params
{
	TEnumAsByte<Enum_States_SwitchFeedback>            FeedbackState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.ExecuteUbergraph_BP_IO_Switch_Parent_V1
struct ABP_IO_Switch_Parent_V1_C_ExecuteUbergraph_BP_IO_Switch_Parent_V1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchLockedUsed__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchLockedUsed__DelegateSignature_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchUsed__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchUsed__DelegateSignature_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchTurningOff__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchTurningOff__DelegateSignature_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchTurningOn__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchTurningOn__DelegateSignature_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchOff__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchOff__DelegateSignature_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchOn__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchOn__DelegateSignature_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchUnlocked__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchUnlocked__DelegateSignature_Params
{
};

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchLocked__DelegateSignature
struct ABP_IO_Switch_Parent_V1_C_On_SwitchLocked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
