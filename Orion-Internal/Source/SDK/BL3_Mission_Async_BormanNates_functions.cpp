// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_BormanNates_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.Obj_KillBormanNates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_BormanNates_C::Obj_KillBormanNates(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.Obj_KillBormanNates");

	UMission_Async_BormanNates_C_Obj_KillBormanNates_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.Set_KillBormanNates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_BormanNates_C::Set_KillBormanNates(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.Set_KillBormanNates");

	UMission_Async_BormanNates_C_Set_KillBormanNates_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.MCE_BormanNatesKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_BormanNates_C::MCE_BormanNatesKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.MCE_BormanNatesKilled");

	UMission_Async_BormanNates_C_MCE_BormanNatesKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.ExecuteUbergraph_Mission_Async_BormanNates
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_BormanNates_C::ExecuteUbergraph_Mission_Async_BormanNates(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.ExecuteUbergraph_Mission_Async_BormanNates");

	UMission_Async_BormanNates_C_ExecuteUbergraph_Mission_Async_BormanNates_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
