#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_Parent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorFeedbackState
struct AIO_Door_Parent_C_GetDoorFeedbackState_Params
{
	TEnumAsByte<Enum_States_DoorLocked>                FeedbackState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorInteractiveState
struct AIO_Door_Parent_C_GetDoorInteractiveState_Params
{
	bool                                               Interactive;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorLockedState
struct AIO_Door_Parent_C_GetDoorLockedState_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorState
struct AIO_Door_Parent_C_GetDoorState_Params
{
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_LockedUse
struct AIO_Door_Parent_C_Audio_Play_LockedUse_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Stop_Closing
struct AIO_Door_Parent_C_Audio_Stop_Closing_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_Closing
struct AIO_Door_Parent_C_Audio_Play_Closing_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Stop_Opening
struct AIO_Door_Parent_C_Audio_Stop_Opening_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_Opening
struct AIO_Door_Parent_C_Audio_Play_Opening_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.EvaluateDoorTrigger
struct AIO_Door_Parent_C_EvaluateDoorTrigger_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.StopControllerAndCameraFeedback
struct AIO_Door_Parent_C_StopControllerAndCameraFeedback_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.StartControllerAndCameraFeedback
struct AIO_Door_Parent_C_StartControllerAndCameraFeedback_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.UserConstructionScript
struct AIO_Door_Parent_C_UserConstructionScript_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedClosedTimeline
struct AIO_Door_Parent_C_PlayLockedClosedTimeline_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.FinishedPlayingLockedTimeline
struct AIO_Door_Parent_C_FinishedPlayingLockedTimeline_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedOpenTimeline
struct AIO_Door_Parent_C_PlayLockedOpenTimeline_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3
struct AIO_Door_Parent_C_BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3
struct AIO_Door_Parent_C_BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.PlayDoorMovement
struct AIO_Door_Parent_C_PlayDoorMovement_Params
{
	TEnumAsByte<Enum_Door_ReasonForTimeline>           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.DoorMovementFinished
struct AIO_Door_Parent_C_DoorMovementFinished_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.ReceiveBeginPlay
struct AIO_Door_Parent_C_ReceiveBeginPlay_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorState
struct AIO_Door_Parent_C_SetDoorState_Params
{
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorLockedState
struct AIO_Door_Parent_C_SetDoorLockedState_Params
{
	bool                                               Locked_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorInteractiveState
struct AIO_Door_Parent_C_SetDoorInteractiveState_Params
{
	bool                                               Interactive_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.SetLightColor
struct AIO_Door_Parent_C_SetLightColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Unlocked
struct AIO_Door_Parent_C_Preview_Unlocked_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Locked
struct AIO_Door_Parent_C_Preview_Locked_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Preview_NoFeedback
struct AIO_Door_Parent_C_Preview_NoFeedback_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorTriggerable
struct AIO_Door_Parent_C_SetDoorTriggerable_Params
{
	bool                                               Triggerable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_2
struct AIO_Door_Parent_C___UserState_DoorFeedbackState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_1
struct AIO_Door_Parent_C___UserState_DoorFeedbackState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_3
struct AIO_Door_Parent_C___UserState_DoorFeedbackState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_JustOpened
struct AIO_Door_Parent_C_Door_Feedback_JustOpened_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_JustClosed
struct AIO_Door_Parent_C_Door_Feedback_JustClosed_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_ClosedFromLoad
struct AIO_Door_Parent_C_Door_Feedback_ClosedFromLoad_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_OpenedFromLoad
struct AIO_Door_Parent_C_Door_Feedback_OpenedFromLoad_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.PrepPlayDoorMovement
struct AIO_Door_Parent_C_PrepPlayDoorMovement_Params
{
	TEnumAsByte<Enum_Door_ReasonForTimeline>           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_LockedUseOpen
struct AIO_Door_Parent_C_Door_Feedback_LockedUseOpen_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_LockedUseClosed
struct AIO_Door_Parent_C_Door_Feedback_LockedUseClosed_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedUse
struct AIO_Door_Parent_C_PlayLockedUse_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Closed
struct AIO_Door_Parent_C_Preview_Closed_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Open
struct AIO_Door_Parent_C_Preview_Open_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorPositionState_2
struct AIO_Door_Parent_C___UserState_DoorPositionState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorPositionState_1
struct AIO_Door_Parent_C___UserState_DoorPositionState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent
struct AIO_Door_Parent_C_BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorFeedbackState
struct AIO_Door_Parent_C_SetDoorFeedbackState_Params
{
	TEnumAsByte<Enum_States_DoorLocked>                FeedbackState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.Test
struct AIO_Door_Parent_C_Test_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.ExecuteUbergraph_IO_Door_Parent
struct AIO_Door_Parent_C_ExecuteUbergraph_IO_Door_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorLockedUsed__DelegateSignature
struct AIO_Door_Parent_C_On_DoorLockedUsed__DelegateSignature_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorUsed__DelegateSignature
struct AIO_Door_Parent_C_On_DoorUsed__DelegateSignature_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorClosing__DelegateSignature
struct AIO_Door_Parent_C_On_DoorClosing__DelegateSignature_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorOpening__DelegateSignature
struct AIO_Door_Parent_C_On_DoorOpening__DelegateSignature_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorClosed__DelegateSignature
struct AIO_Door_Parent_C_On_DoorClosed__DelegateSignature_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorOpened__DelegateSignature
struct AIO_Door_Parent_C_On_DoorOpened__DelegateSignature_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorUnlocked__DelegateSignature
struct AIO_Door_Parent_C_On_DoorUnlocked__DelegateSignature_Params
{
};

// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorLocked__DelegateSignature
struct AIO_Door_Parent_C_On_DoorLocked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
