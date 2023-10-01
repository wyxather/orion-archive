// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ZealotPilfer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.Obj_KillZealotPilfer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ZealotPilfer_C::Obj_KillZealotPilfer(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.Obj_KillZealotPilfer");

	UMission_Async_ZealotPilfer_C_Obj_KillZealotPilfer_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.Set_KillZealotPilfer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ZealotPilfer_C::Set_KillZealotPilfer(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.Set_KillZealotPilfer");

	UMission_Async_ZealotPilfer_C_Set_KillZealotPilfer_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.MCE_ZealotPilferKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ZealotPilfer_C::MCE_ZealotPilferKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.MCE_ZealotPilferKilled");

	UMission_Async_ZealotPilfer_C_MCE_ZealotPilferKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.ExecuteUbergraph_Mission_Async_ZealotPilfer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ZealotPilfer_C::ExecuteUbergraph_Mission_Async_ZealotPilfer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.ExecuteUbergraph_Mission_Async_ZealotPilfer");

	UMission_Async_ZealotPilfer_C_ExecuteUbergraph_Mission_Async_ZealotPilfer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
