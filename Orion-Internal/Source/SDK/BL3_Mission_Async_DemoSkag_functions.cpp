// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_DemoSkag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.Obj_KillDemoSkag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_DemoSkag_C::Obj_KillDemoSkag(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.Obj_KillDemoSkag");

	UMission_Async_DemoSkag_C_Obj_KillDemoSkag_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.Set_KillDemoSkag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_DemoSkag_C::Set_KillDemoSkag(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.Set_KillDemoSkag");

	UMission_Async_DemoSkag_C_Set_KillDemoSkag_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.MCE_DemoSkagKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_DemoSkag_C::MCE_DemoSkagKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.MCE_DemoSkagKilled");

	UMission_Async_DemoSkag_C_MCE_DemoSkagKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.ExecuteUbergraph_Mission_Async_DemoSkag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_DemoSkag_C::ExecuteUbergraph_Mission_Async_DemoSkag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.ExecuteUbergraph_Mission_Async_DemoSkag");

	UMission_Async_DemoSkag_C_ExecuteUbergraph_Mission_Async_DemoSkag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
