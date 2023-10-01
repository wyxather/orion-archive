// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_EnforcerUrist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.Obj_KillEnforcerUrist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_EnforcerUrist_C::Obj_KillEnforcerUrist(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.Obj_KillEnforcerUrist");

	UMission_Async_EnforcerUrist_C_Obj_KillEnforcerUrist_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.Set_KillEnforcerUrist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_EnforcerUrist_C::Set_KillEnforcerUrist(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.Set_KillEnforcerUrist");

	UMission_Async_EnforcerUrist_C_Set_KillEnforcerUrist_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.MCE_EnforcerUristKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_EnforcerUrist_C::MCE_EnforcerUristKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.MCE_EnforcerUristKilled");

	UMission_Async_EnforcerUrist_C_MCE_EnforcerUristKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.ExecuteUbergraph_Mission_Async_EnforcerUrist
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_EnforcerUrist_C::ExecuteUbergraph_Mission_Async_EnforcerUrist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.ExecuteUbergraph_Mission_Async_EnforcerUrist");

	UMission_Async_EnforcerUrist_C_ExecuteUbergraph_Mission_Async_EnforcerUrist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
