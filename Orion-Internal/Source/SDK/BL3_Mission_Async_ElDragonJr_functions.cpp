// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ElDragonJr_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.Obj_KillElDragonJr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ElDragonJr_C::Obj_KillElDragonJr(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.Obj_KillElDragonJr");

	UMission_Async_ElDragonJr_C_Obj_KillElDragonJr_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.Set_KillElDragonJr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ElDragonJr_C::Set_KillElDragonJr(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.Set_KillElDragonJr");

	UMission_Async_ElDragonJr_C_Set_KillElDragonJr_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.MCE_ElDragonJrKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ElDragonJr_C::MCE_ElDragonJrKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.MCE_ElDragonJrKilled");

	UMission_Async_ElDragonJr_C_MCE_ElDragonJrKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.ExecuteUbergraph_Mission_Async_ElDragonJr
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ElDragonJr_C::ExecuteUbergraph_Mission_Async_ElDragonJr(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.ExecuteUbergraph_Mission_Async_ElDragonJr");

	UMission_Async_ElDragonJr_C_ExecuteUbergraph_Mission_Async_ElDragonJr_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
