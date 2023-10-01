// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Switch_Parent_V1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchFeedbackState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::GetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback>* FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchFeedbackState");

	ABP_IO_Switch_Parent_V1_C_GetSwitchFeedbackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackState != nullptr)
		*FeedbackState = params.FeedbackState;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_State> SwitchState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::GetSwitchState(TEnumAsByte<Enum_Switch_State>* SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchState");

	ABP_IO_Switch_Parent_V1_C_GetSwitchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwitchState != nullptr)
		*SwitchState = params.SwitchState;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchLockedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::GetSwitchLockedState(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchLockedState");

	ABP_IO_Switch_Parent_V1_C_GetSwitchLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchInteractiveState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::GetSwitchInteractiveState(bool* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.GetSwitchInteractiveState");

	ABP_IO_Switch_Parent_V1_C_GetSwitchInteractiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactive != nullptr)
		*Interactive = params.Interactive;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayControllerAndCameraFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::PlayControllerAndCameraFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayControllerAndCameraFeedback");

	ABP_IO_Switch_Parent_V1_C_PlayControllerAndCameraFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.AddToDynamicMaterialArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::AddToDynamicMaterialArray(class UMeshComponent* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.AddToDynamicMaterialArray");

	ABP_IO_Switch_Parent_V1_C_AddToDynamicMaterialArray_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.UserConstructionScript");

	ABP_IO_Switch_Parent_V1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_State> SwitchState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::SetSwitchState(TEnumAsByte<Enum_Switch_State> SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchState");

	ABP_IO_Switch_Parent_V1_C_SetSwitchState_Params params;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::SetSwitchInteractiveState(bool Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchInteractiveState");

	ABP_IO_Switch_Parent_V1_C_SetSwitchInteractiveState_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::SetSwitchLockedState(bool Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchLockedState");

	ABP_IO_Switch_Parent_V1_C_SetSwitchLockedState_Params params;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedOnTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::PlayLockedOnTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedOnTimeline");

	ABP_IO_Switch_Parent_V1_C_PlayLockedOnTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedOffTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::PlayLockedOffTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedOffTimeline");

	ABP_IO_Switch_Parent_V1_C_PlayLockedOffTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.FinishedPlayingLockedTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::FinishedPlayingLockedTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.FinishedPlayingLockedTimeline");

	ABP_IO_Switch_Parent_V1_C_FinishedPlayingLockedTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlaySwitchMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_ReasonForMoving> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::PlaySwitchMovement(TEnumAsByte<Enum_Switch_ReasonForMoving> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlaySwitchMovement");

	ABP_IO_Switch_Parent_V1_C_PlaySwitchMovement_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SwitchMovementFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::SwitchMovementFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SwitchMovementFinished");

	ABP_IO_Switch_Parent_V1_C_SwitchMovementFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.ReceiveBeginPlay");

	ABP_IO_Switch_Parent_V1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_On
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Preview_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_On");

	ABP_IO_Switch_Parent_V1_C_Preview_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Off
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Preview_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Off");

	ABP_IO_Switch_Parent_V1_C_Preview_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_JustOn
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Switch_Feedback_JustOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_JustOn");

	ABP_IO_Switch_Parent_V1_C_Switch_Feedback_JustOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_JustOff
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Switch_Feedback_JustOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_JustOff");

	ABP_IO_Switch_Parent_V1_C_Switch_Feedback_JustOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_OffFromLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Switch_Feedback_OffFromLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_OffFromLoad");

	ABP_IO_Switch_Parent_V1_C_Switch_Feedback_OffFromLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_OnFromLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Switch_Feedback_OnFromLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_OnFromLoad");

	ABP_IO_Switch_Parent_V1_C_Switch_Feedback_OnFromLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PrepPlaySwitchMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_ReasonForMoving> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::PrepPlaySwitchMovement(TEnumAsByte<Enum_Switch_ReasonForMoving> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PrepPlaySwitchMovement");

	ABP_IO_Switch_Parent_V1_C_PrepPlaySwitchMovement_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedUse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::PlayLockedUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.PlayLockedUse");

	ABP_IO_Switch_Parent_V1_C_PlayLockedUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_LockedUseOn
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Switch_Feedback_LockedUseOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_LockedUseOn");

	ABP_IO_Switch_Parent_V1_C_Switch_Feedback_LockedUseOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_LockedUseOff
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Switch_Feedback_LockedUseOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Switch_Feedback_LockedUseOff");

	ABP_IO_Switch_Parent_V1_C_Switch_Feedback_LockedUseOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchPositionState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::__UserState_SwitchPositionState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchPositionState_2");

	ABP_IO_Switch_Parent_V1_C___UserState_SwitchPositionState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchPositionState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::__UserState_SwitchPositionState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchPositionState_1");

	ABP_IO_Switch_Parent_V1_C___UserState_SwitchPositionState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Unlocked
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Preview_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Unlocked");

	ABP_IO_Switch_Parent_V1_C_Preview_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Locked
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Preview_Locked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_Locked");

	ABP_IO_Switch_Parent_V1_C_Preview_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_NoFeedback
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::Preview_NoFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.Preview_NoFeedback");

	ABP_IO_Switch_Parent_V1_C_Preview_NoFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetLightColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::SetLightColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetLightColor");

	ABP_IO_Switch_Parent_V1_C_SetLightColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::__UserState_SwitchFeedbackState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_2");

	ABP_IO_Switch_Parent_V1_C___UserState_SwitchFeedbackState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::__UserState_SwitchFeedbackState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_1");

	ABP_IO_Switch_Parent_V1_C___UserState_SwitchFeedbackState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::__UserState_SwitchFeedbackState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.__UserState_SwitchFeedbackState_3");

	ABP_IO_Switch_Parent_V1_C___UserState_SwitchFeedbackState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_IO_Switch_Parent_V1_C::BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1");

	ABP_IO_Switch_Parent_V1_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::SetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.SetSwitchFeedbackState");

	ABP_IO_Switch_Parent_V1_C_SetSwitchFeedbackState_Params params;
	params.FeedbackState = FeedbackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.ExecuteUbergraph_BP_IO_Switch_Parent_V1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::ExecuteUbergraph_BP_IO_Switch_Parent_V1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.ExecuteUbergraph_BP_IO_Switch_Parent_V1");

	ABP_IO_Switch_Parent_V1_C_ExecuteUbergraph_BP_IO_Switch_Parent_V1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchLockedUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::On_SwitchLockedUsed__DelegateSignature(class AController* UserController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchLockedUsed__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchLockedUsed__DelegateSignature_Params params;
	params.UserController = UserController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::On_SwitchUsed__DelegateSignature(class AController* UserController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchUsed__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchUsed__DelegateSignature_Params params;
	params.UserController = UserController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchTurningOff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::On_SwitchTurningOff__DelegateSignature(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchTurningOff__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchTurningOff__DelegateSignature_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchTurningOn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::On_SwitchTurningOn__DelegateSignature(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchTurningOn__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchTurningOn__DelegateSignature_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchOff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::On_SwitchOff__DelegateSignature(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchOff__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchOff__DelegateSignature_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchOn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Switch_Parent_V1_C::On_SwitchOn__DelegateSignature(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchOn__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchOn__DelegateSignature_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::On_SwitchUnlocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchUnlocked__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchUnlocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchLocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_IO_Switch_Parent_V1_C::On_SwitchLocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C.On_SwitchLocked__DelegateSignature");

	ABP_IO_Switch_Parent_V1_C_On_SwitchLocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
