// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_TheUnstoppable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.Obj_KillTheUnstoppable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_TheUnstoppable_C::Obj_KillTheUnstoppable(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.Obj_KillTheUnstoppable");

	UMission_Async_TheUnstoppable_C_Obj_KillTheUnstoppable_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.Set_KillTheUnstoppable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_TheUnstoppable_C::Set_KillTheUnstoppable(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.Set_KillTheUnstoppable");

	UMission_Async_TheUnstoppable_C_Set_KillTheUnstoppable_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.MCE_TheUnstoppableKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_TheUnstoppable_C::MCE_TheUnstoppableKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.MCE_TheUnstoppableKilled");

	UMission_Async_TheUnstoppable_C_MCE_TheUnstoppableKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.ExecuteUbergraph_Mission_Async_TheUnstoppable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_TheUnstoppable_C::ExecuteUbergraph_Mission_Async_TheUnstoppable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.ExecuteUbergraph_Mission_Async_TheUnstoppable");

	UMission_Async_TheUnstoppable_C_ExecuteUbergraph_Mission_Async_TheUnstoppable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
