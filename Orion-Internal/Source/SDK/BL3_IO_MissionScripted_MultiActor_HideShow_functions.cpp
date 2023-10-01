// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_MultiActor_HideShow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_MultiActor_HideShow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.UserConstructionScript");

	AIO_MissionScripted_MultiActor_HideShow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.PostBlendTimeline__FinishedFunc
// (BlueprintEvent)

void AIO_MissionScripted_MultiActor_HideShow_C::PostBlendTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.PostBlendTimeline__FinishedFunc");

	AIO_MissionScripted_MultiActor_HideShow_C_PostBlendTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.PostBlendTimeline__UpdateFunc
// (BlueprintEvent)

void AIO_MissionScripted_MultiActor_HideShow_C::PostBlendTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.PostBlendTimeline__UpdateFunc");

	AIO_MissionScripted_MultiActor_HideShow_C_PostBlendTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_MissionScripted_MultiActor_HideShow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ReceiveBeginPlay");

	AIO_MissionScripted_MultiActor_HideShow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_Default
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FromLoad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_MultiActor_HideShow_C::Play_Feedback_Default(bool* FromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_Default");

	AIO_MissionScripted_MultiActor_HideShow_C_Play_Feedback_Default_Params params;
	params.FromLoad = FromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_ScriptedActionStarted
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_MultiActor_HideShow_C::Play_Feedback_ScriptedActionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_ScriptedActionStarted");

	AIO_MissionScripted_MultiActor_HideShow_C_Play_Feedback_ScriptedActionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_ScriptedActionFinished
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionScripted_MultiActor_HideShow_C::Play_Feedback_ScriptedActionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_ScriptedActionFinished");

	AIO_MissionScripted_MultiActor_HideShow_C_Play_Feedback_ScriptedActionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ShowAll
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorArray                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AIO_MissionScripted_MultiActor_HideShow_C::ShowAll(TArray<class AActor*> ActorArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ShowAll");

	AIO_MissionScripted_MultiActor_HideShow_C_ShowAll_Params params;
	params.ActorArray = ActorArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.HideAll
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorArray                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AIO_MissionScripted_MultiActor_HideShow_C::HideAll(TArray<class AActor*> ActorArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.HideAll");

	AIO_MissionScripted_MultiActor_HideShow_C_HideAll_Params params;
	params.ActorArray = ActorArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionScripted_MultiActor_HideShow_C::ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow");

	AIO_MissionScripted_MultiActor_HideShow_C_ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
