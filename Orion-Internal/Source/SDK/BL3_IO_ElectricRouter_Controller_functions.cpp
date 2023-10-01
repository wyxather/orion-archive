// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricRouter_Controller_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_State>   DoorState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::GetDoorState(TEnumAsByte<Enum_Door_State>* DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorState");

	AIO_ElectricRouter_Controller_C_GetDoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorState != nullptr)
		*DoorState = params.DoorState;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorLockedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::GetDoorLockedState(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorLockedState");

	AIO_ElectricRouter_Controller_C_GetDoorLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorInteractiveState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::GetDoorInteractiveState(bool* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorInteractiveState");

	AIO_ElectricRouter_Controller_C_GetDoorInteractiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactive != nullptr)
		*Interactive = params.Interactive;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorFeedbackState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_DoorLocked> FeedbackState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::GetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked>* FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorFeedbackState");

	AIO_ElectricRouter_Controller_C_GetDoorFeedbackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackState != nullptr)
		*FeedbackState = params.FeedbackState;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_ElectricRouter_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.UserConstructionScript");

	AIO_ElectricRouter_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__FinishedFunc
// (BlueprintEvent)

void AIO_ElectricRouter_Controller_C::TimeLine01__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__FinishedFunc");

	AIO_ElectricRouter_Controller_C_TimeLine01__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__UpdateFunc
// (BlueprintEvent)

void AIO_ElectricRouter_Controller_C::TimeLine01__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__UpdateFunc");

	AIO_ElectricRouter_Controller_C_TimeLine01__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__EventTrigger__EventFunc
// (BlueprintEvent)

void AIO_ElectricRouter_Controller_C::TimeLine01__EventTrigger__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__EventTrigger__EventFunc");

	AIO_ElectricRouter_Controller_C_TimeLine01__EventTrigger__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_State>   DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::SetDoorState(TEnumAsByte<Enum_Door_State> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorState");

	AIO_ElectricRouter_Controller_C_SetDoorState_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::SetDoorLockedState(bool Locked_)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorLockedState");

	AIO_ElectricRouter_Controller_C_SetDoorLockedState_Params params;
	params.Locked_ = Locked_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::SetDoorInteractiveState(bool Interactive_)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorInteractiveState");

	AIO_ElectricRouter_Controller_C_SetDoorInteractiveState_Params params;
	params.Interactive_ = Interactive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_DoorLocked> FeedbackState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::SetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked> FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorFeedbackState");

	AIO_ElectricRouter_Controller_C_SetDoorFeedbackState_Params params;
	params.FeedbackState = FeedbackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.StartElectrifiedFeedback
// (BlueprintCallable, BlueprintEvent)

void AIO_ElectricRouter_Controller_C::StartElectrifiedFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.StartElectrifiedFeedback");

	AIO_ElectricRouter_Controller_C_StartElectrifiedFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.StopElectrifiedFeedback
// (BlueprintCallable, BlueprintEvent)

void AIO_ElectricRouter_Controller_C::StopElectrifiedFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.StopElectrifiedFeedback");

	AIO_ElectricRouter_Controller_C_StopElectrifiedFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric
// (BlueprintEvent)
// Parameters:
// class UElementalInteractionData* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInitialState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric(class UElementalInteractionData* State, bool bIsInitialState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric");

	AIO_ElectricRouter_Controller_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric_Params params;
	params.State = State;
	params.bIsInitialState = bIsInitialState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_ElectricState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::__UserState_ElectricState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_ElectricState_2");

	AIO_ElectricRouter_Controller_C___UserState_ElectricState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_ElectricState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::__UserState_ElectricState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_ElectricState_1");

	AIO_ElectricRouter_Controller_C___UserState_ElectricState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_Overload_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::__UserState_Overload_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_Overload_2");

	AIO_ElectricRouter_Controller_C___UserState_Overload_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.ExecuteUbergraph_IO_ElectricRouter_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricRouter_Controller_C::ExecuteUbergraph_IO_ElectricRouter_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.ExecuteUbergraph_IO_ElectricRouter_Controller");

	AIO_ElectricRouter_Controller_C_ExecuteUbergraph_IO_ElectricRouter_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
