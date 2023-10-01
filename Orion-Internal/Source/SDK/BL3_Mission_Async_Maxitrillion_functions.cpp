// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Maxitrillion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.Obj_KillMaxitrillion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Maxitrillion_C::Obj_KillMaxitrillion(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.Obj_KillMaxitrillion");

	UMission_Async_Maxitrillion_C_Obj_KillMaxitrillion_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.Set_KillMaxitrillion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Maxitrillion_C::Set_KillMaxitrillion(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.Set_KillMaxitrillion");

	UMission_Async_Maxitrillion_C_Set_KillMaxitrillion_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.MCE_MaxitrillionKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Maxitrillion_C::MCE_MaxitrillionKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.MCE_MaxitrillionKilled");

	UMission_Async_Maxitrillion_C_MCE_MaxitrillionKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.ExecuteUbergraph_Mission_Async_Maxitrillion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Maxitrillion_C::ExecuteUbergraph_Mission_Async_Maxitrillion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.ExecuteUbergraph_Mission_Async_Maxitrillion");

	UMission_Async_Maxitrillion_C_ExecuteUbergraph_Mission_Async_Maxitrillion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
