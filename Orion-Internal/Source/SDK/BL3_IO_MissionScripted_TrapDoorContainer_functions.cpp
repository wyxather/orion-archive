// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_TrapDoorContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_TrapDoorContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.UserConstructionScript");

	AIO_MissionScripted_TrapDoorContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIO_MissionScripted_TrapDoorContainer_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Timeline_0__FinishedFunc");

	AIO_MissionScripted_TrapDoorContainer_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIO_MissionScripted_TrapDoorContainer_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Timeline_0__UpdateFunc");

	AIO_MissionScripted_TrapDoorContainer_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Play_Feedback_ScriptedActionFinished
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_TrapDoorContainer_C::Play_Feedback_ScriptedActionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Play_Feedback_ScriptedActionFinished");

	AIO_MissionScripted_TrapDoorContainer_C_Play_Feedback_ScriptedActionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Play_Feedback_ScriptedActionStarted
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_TrapDoorContainer_C::Play_Feedback_ScriptedActionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Play_Feedback_ScriptedActionStarted");

	AIO_MissionScripted_TrapDoorContainer_C_Play_Feedback_ScriptedActionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Play_Feedback_Default
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FromLoad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_TrapDoorContainer_C::Play_Feedback_Default(bool* FromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.Play_Feedback_Default");

	AIO_MissionScripted_TrapDoorContainer_C_Play_Feedback_Default_Params params;
	params.FromLoad = FromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.ExecuteUbergraph_IO_MissionScripted_TrapDoorContainer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_TrapDoorContainer_C::ExecuteUbergraph_IO_MissionScripted_TrapDoorContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C.ExecuteUbergraph_IO_MissionScripted_TrapDoorContainer");

	AIO_MissionScripted_TrapDoorContainer_C_ExecuteUbergraph_IO_MissionScripted_TrapDoorContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
