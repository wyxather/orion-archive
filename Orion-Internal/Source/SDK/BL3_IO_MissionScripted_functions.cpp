// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionScripted.IO_MissionScripted_C.CheckForMissionSequenceFailsafe
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_C::CheckForMissionSequenceFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.CheckForMissionSequenceFailsafe");

	AIO_MissionScripted_C_CheckForMissionSequenceFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.SetMissionScriptedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_MissionScriptedState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_C::SetMissionScriptedState(TEnumAsByte<Enum_MissionScriptedState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.SetMissionScriptedState");

	AIO_MissionScripted_C_SetMissionScriptedState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.UserConstructionScript");

	AIO_MissionScripted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_Default
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromLoad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_C::Play_Feedback_Default(bool FromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_Default");

	AIO_MissionScripted_C_Play_Feedback_Default_Params params;
	params.FromLoad = FromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_ScriptedActionStarted
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_C::Play_Feedback_ScriptedActionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_ScriptedActionStarted");

	AIO_MissionScripted_C_Play_Feedback_ScriptedActionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_ScriptedActionFinished
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_C::Play_Feedback_ScriptedActionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_ScriptedActionFinished");

	AIO_MissionScripted_C_Play_Feedback_ScriptedActionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.__UserState_MissionScriptedState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_C::__UserState_MissionScriptedState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.__UserState_MissionScriptedState_1");

	AIO_MissionScripted_C___UserState_MissionScriptedState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.__UserState_MissionScriptedState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_C::__UserState_MissionScriptedState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.__UserState_MissionScriptedState_2");

	AIO_MissionScripted_C___UserState_MissionScriptedState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted
// (BlueprintEvent)

void AIO_MissionScripted_C::BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted");

	AIO_MissionScripted_C_BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.ExecuteUbergraph_IO_MissionScripted
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_C::ExecuteUbergraph_IO_MissionScripted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.ExecuteUbergraph_IO_MissionScripted");

	AIO_MissionScripted_C_ExecuteUbergraph_IO_MissionScripted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.MissionScripted_SequenceFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_C::MissionScripted_SequenceFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.MissionScripted_SequenceFinished__DelegateSignature");

	AIO_MissionScripted_C_MissionScripted_SequenceFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted.IO_MissionScripted_C.MissionScripted_ScriptedActionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_C::MissionScripted_ScriptedActionStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted.IO_MissionScripted_C.MissionScripted_ScriptedActionStarted__DelegateSignature");

	AIO_MissionScripted_C_MissionScripted_ScriptedActionStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
