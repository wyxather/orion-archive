// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionUsable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionUsable.IO_MissionUsable_C.SetLastUser
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::SetLastUser(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.SetLastUser");

	AIO_MissionUsable_C_SetLastUser_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.CheckForMissionSequenceFailsafe
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::CheckForMissionSequenceFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.CheckForMissionSequenceFailsafe");

	AIO_MissionUsable_C_CheckForMissionSequenceFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.UserConstructionScript");

	AIO_MissionUsable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.SetUsableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_MissionUsableState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::SetUsableState(TEnumAsByte<Enum_MissionUsableState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.SetUsableState");

	AIO_MissionUsable_C_SetUsableState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_MissionUsable_C::BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable");

	AIO_MissionUsable_C_BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.PrimaryUse
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::PrimaryUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.PrimaryUse");

	AIO_MissionUsable_C_PrimaryUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_MissionUsable_C::BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable");

	AIO_MissionUsable_C_BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.SecondaryUse
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::SecondaryUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.SecondaryUse");

	AIO_MissionUsable_C_SecondaryUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_Used
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::Play_Feedback_Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_Used");

	AIO_MissionUsable_C_Play_Feedback_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_UsableDefault
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::Play_Feedback_UsableDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_UsableDefault");

	AIO_MissionUsable_C_Play_Feedback_UsableDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_InUse
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::Play_Feedback_InUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_InUse");

	AIO_MissionUsable_C_Play_Feedback_InUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_Usable
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::Play_Feedback_Usable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_Usable");

	AIO_MissionUsable_C_Play_Feedback_Usable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::__UserState_MissionUsableState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_1");

	AIO_MissionUsable_C___UserState_MissionUsableState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::__UserState_MissionUsableState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_2");

	AIO_MissionUsable_C___UserState_MissionUsableState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::__UserState_MissionUsableState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_3");

	AIO_MissionUsable_C___UserState_MissionUsableState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable
// (BlueprintEvent)

void AIO_MissionUsable_C::BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable");

	AIO_MissionUsable_C_BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.ExecuteUbergraph_IO_MissionUsable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::ExecuteUbergraph_IO_MissionUsable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.ExecuteUbergraph_IO_MissionUsable");

	AIO_MissionUsable_C_ExecuteUbergraph_IO_MissionUsable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsable_SequenceFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::MissionUsable_SequenceFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.MissionUsable_SequenceFinished__DelegateSignature");

	AIO_MissionUsable_C_MissionUsable_SequenceFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableIsUsable__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::MissionUsableIsUsable__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableIsUsable__DelegateSignature");

	AIO_MissionUsable_C_MissionUsableIsUsable__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableFinishedUse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionUsable_C::MissionUsableFinishedUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableFinishedUse__DelegateSignature");

	AIO_MissionUsable_C_MissionUsableFinishedUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableStartedUse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionUsable_C::MissionUsableStartedUse__DelegateSignature(class AController* UserController)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableStartedUse__DelegateSignature");

	AIO_MissionUsable_C_MissionUsableStartedUse__DelegateSignature_Params params;
	params.UserController = UserController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
