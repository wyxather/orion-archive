// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Rakkman_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Obj_KillRakkman
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Rakkman_C::Obj_KillRakkman(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Obj_KillRakkman");

	UMission_Async_Rakkman_C_Obj_KillRakkman_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Set_KillRakkman
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Rakkman_C::Set_KillRakkman(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Set_KillRakkman");

	UMission_Async_Rakkman_C_Set_KillRakkman_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.MCE_RakkmanKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Rakkman_C::MCE_RakkmanKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.MCE_RakkmanKilled");

	UMission_Async_Rakkman_C_MCE_RakkmanKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.ExecuteUbergraph_Mission_Async_Rakkman
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Rakkman_C::ExecuteUbergraph_Mission_Async_Rakkman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.ExecuteUbergraph_Mission_Async_Rakkman");

	UMission_Async_Rakkman_C_ExecuteUbergraph_Mission_Async_Rakkman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
