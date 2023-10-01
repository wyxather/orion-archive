// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorFeedbackState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_DoorLocked> FeedbackState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::GetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked>* FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.GetDoorFeedbackState");

	AIO_Door_Parent_C_GetDoorFeedbackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackState != nullptr)
		*FeedbackState = params.FeedbackState;
}


// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorInteractiveState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::GetDoorInteractiveState(bool* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.GetDoorInteractiveState");

	AIO_Door_Parent_C_GetDoorInteractiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactive != nullptr)
		*Interactive = params.Interactive;
}


// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorLockedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::GetDoorLockedState(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.GetDoorLockedState");

	AIO_Door_Parent_C_GetDoorLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function IO_Door_Parent.IO_Door_Parent_C.GetDoorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_State>   DoorState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::GetDoorState(TEnumAsByte<Enum_Door_State>* DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.GetDoorState");

	AIO_Door_Parent_C_GetDoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorState != nullptr)
		*DoorState = params.DoorState;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_LockedUse
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Audio_Play_LockedUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_LockedUse");

	AIO_Door_Parent_C_Audio_Play_LockedUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Stop_Closing
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Audio_Stop_Closing()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Audio_Stop_Closing");

	AIO_Door_Parent_C_Audio_Stop_Closing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_Closing
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Audio_Play_Closing()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_Closing");

	AIO_Door_Parent_C_Audio_Play_Closing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Stop_Opening
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Audio_Stop_Opening()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Audio_Stop_Opening");

	AIO_Door_Parent_C_Audio_Stop_Opening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_Opening
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Audio_Play_Opening()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Audio_Play_Opening");

	AIO_Door_Parent_C_Audio_Play_Opening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.EvaluateDoorTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::EvaluateDoorTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.EvaluateDoorTrigger");

	AIO_Door_Parent_C_EvaluateDoorTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.StopControllerAndCameraFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::StopControllerAndCameraFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.StopControllerAndCameraFeedback");

	AIO_Door_Parent_C_StopControllerAndCameraFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.StartControllerAndCameraFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::StartControllerAndCameraFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.StartControllerAndCameraFeedback");

	AIO_Door_Parent_C_StartControllerAndCameraFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.UserConstructionScript");

	AIO_Door_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedClosedTimeline
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::PlayLockedClosedTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedClosedTimeline");

	AIO_Door_Parent_C_PlayLockedClosedTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.FinishedPlayingLockedTimeline
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::FinishedPlayingLockedTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.FinishedPlayingLockedTimeline");

	AIO_Door_Parent_C_FinishedPlayingLockedTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedOpenTimeline
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::PlayLockedOpenTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedOpenTimeline");

	AIO_Door_Parent_C_PlayLockedOpenTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AIO_Door_Parent_C::BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3");

	AIO_Door_Parent_C_BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3");

	AIO_Door_Parent_C_BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.PlayDoorMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_ReasonForTimeline> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::PlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.PlayDoorMovement");

	AIO_Door_Parent_C_PlayDoorMovement_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.DoorMovementFinished
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::DoorMovementFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.DoorMovementFinished");

	AIO_Door_Parent_C_DoorMovementFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Door_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.ReceiveBeginPlay");

	AIO_Door_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_State>   DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::SetDoorState(TEnumAsByte<Enum_Door_State> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.SetDoorState");

	AIO_Door_Parent_C_SetDoorState_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::SetDoorLockedState(bool Locked_)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.SetDoorLockedState");

	AIO_Door_Parent_C_SetDoorLockedState_Params params;
	params.Locked_ = Locked_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::SetDoorInteractiveState(bool Interactive_)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.SetDoorInteractiveState");

	AIO_Door_Parent_C_SetDoorInteractiveState_Params params;
	params.Interactive_ = Interactive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.SetLightColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AIO_Door_Parent_C::SetLightColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.SetLightColor");

	AIO_Door_Parent_C_SetLightColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Unlocked
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Preview_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Preview_Unlocked");

	AIO_Door_Parent_C_Preview_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Locked
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Preview_Locked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Preview_Locked");

	AIO_Door_Parent_C_Preview_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Preview_NoFeedback
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Preview_NoFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Preview_NoFeedback");

	AIO_Door_Parent_C_Preview_NoFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorTriggerable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Triggerable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::SetDoorTriggerable(bool Triggerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.SetDoorTriggerable");

	AIO_Door_Parent_C_SetDoorTriggerable_Params params;
	params.Triggerable = Triggerable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::__UserState_DoorFeedbackState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_2");

	AIO_Door_Parent_C___UserState_DoorFeedbackState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::__UserState_DoorFeedbackState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_1");

	AIO_Door_Parent_C___UserState_DoorFeedbackState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::__UserState_DoorFeedbackState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorFeedbackState_3");

	AIO_Door_Parent_C___UserState_DoorFeedbackState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_JustOpened
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Door_Feedback_JustOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_JustOpened");

	AIO_Door_Parent_C_Door_Feedback_JustOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_JustClosed
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Door_Feedback_JustClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_JustClosed");

	AIO_Door_Parent_C_Door_Feedback_JustClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_ClosedFromLoad
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Door_Feedback_ClosedFromLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_ClosedFromLoad");

	AIO_Door_Parent_C_Door_Feedback_ClosedFromLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_OpenedFromLoad
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Door_Feedback_OpenedFromLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_OpenedFromLoad");

	AIO_Door_Parent_C_Door_Feedback_OpenedFromLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.PrepPlayDoorMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_ReasonForTimeline> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::PrepPlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.PrepPlayDoorMovement");

	AIO_Door_Parent_C_PrepPlayDoorMovement_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_LockedUseOpen
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Door_Feedback_LockedUseOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_LockedUseOpen");

	AIO_Door_Parent_C_Door_Feedback_LockedUseOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_LockedUseClosed
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Door_Feedback_LockedUseClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Door_Feedback_LockedUseClosed");

	AIO_Door_Parent_C_Door_Feedback_LockedUseClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedUse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::PlayLockedUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.PlayLockedUse");

	AIO_Door_Parent_C_PlayLockedUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Closed
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Preview_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Preview_Closed");

	AIO_Door_Parent_C_Preview_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Preview_Open
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Preview_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Preview_Open");

	AIO_Door_Parent_C_Preview_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorPositionState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::__UserState_DoorPositionState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorPositionState_2");

	AIO_Door_Parent_C___UserState_DoorPositionState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorPositionState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::__UserState_DoorPositionState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.__UserState_DoorPositionState_1");

	AIO_Door_Parent_C___UserState_DoorPositionState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AIO_Door_Parent_C::BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent");

	AIO_Door_Parent_C_BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.SetDoorFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_DoorLocked> FeedbackState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::SetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked> FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.SetDoorFeedbackState");

	AIO_Door_Parent_C_SetDoorFeedbackState_Params params;
	params.FeedbackState = FeedbackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.Test
// (BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.Test");

	AIO_Door_Parent_C_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.ExecuteUbergraph_IO_Door_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::ExecuteUbergraph_IO_Door_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.ExecuteUbergraph_IO_Door_Parent");

	AIO_Door_Parent_C_ExecuteUbergraph_IO_Door_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorLockedUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::On_DoorLockedUsed__DelegateSignature(class AController* UserController)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorLockedUsed__DelegateSignature");

	AIO_Door_Parent_C_On_DoorLockedUsed__DelegateSignature_Params params;
	params.UserController = UserController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Door_Parent_C::On_DoorUsed__DelegateSignature(class AController* UserController)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorUsed__DelegateSignature");

	AIO_Door_Parent_C_On_DoorUsed__DelegateSignature_Params params;
	params.UserController = UserController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorClosing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::On_DoorClosing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorClosing__DelegateSignature");

	AIO_Door_Parent_C_On_DoorClosing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorOpening__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::On_DoorOpening__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorOpening__DelegateSignature");

	AIO_Door_Parent_C_On_DoorOpening__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::On_DoorClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorClosed__DelegateSignature");

	AIO_Door_Parent_C_On_DoorClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::On_DoorOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorOpened__DelegateSignature");

	AIO_Door_Parent_C_On_DoorOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::On_DoorUnlocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorUnlocked__DelegateSignature");

	AIO_Door_Parent_C_On_DoorUnlocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Door_Parent.IO_Door_Parent_C.On_DoorLocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Door_Parent_C::On_DoorLocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Door_Parent.IO_Door_Parent_C.On_DoorLocked__DelegateSignature");

	AIO_Door_Parent_C_On_DoorLocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
