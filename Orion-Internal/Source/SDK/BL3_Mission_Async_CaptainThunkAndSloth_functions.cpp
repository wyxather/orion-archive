// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_CaptainThunkAndSloth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Obj_KillCaptainThunkAndSloth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_CaptainThunkAndSloth_C::Obj_KillCaptainThunkAndSloth(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Obj_KillCaptainThunkAndSloth");

	UMission_Async_CaptainThunkAndSloth_C_Obj_KillCaptainThunkAndSloth_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Set_KillCaptainThunkAndSloth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_CaptainThunkAndSloth_C::Set_KillCaptainThunkAndSloth(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Set_KillCaptainThunkAndSloth");

	UMission_Async_CaptainThunkAndSloth_C_Set_KillCaptainThunkAndSloth_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.MCE_CaptainThunkAndSlothKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_CaptainThunkAndSloth_C::MCE_CaptainThunkAndSlothKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.MCE_CaptainThunkAndSlothKilled");

	UMission_Async_CaptainThunkAndSloth_C_MCE_CaptainThunkAndSlothKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_CaptainThunkAndSloth_C::ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth");

	UMission_Async_CaptainThunkAndSloth_C_ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
