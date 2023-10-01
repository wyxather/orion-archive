// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Shocker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_Shocker.Mission_Async_Shocker_C.Obj_KillShocker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Shocker_C::Obj_KillShocker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.Obj_KillShocker");

	UMission_Async_Shocker_C_Obj_KillShocker_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Shocker.Mission_Async_Shocker_C.Set_KillShocker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Shocker_C::Set_KillShocker(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.Set_KillShocker");

	UMission_Async_Shocker_C_Set_KillShocker_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Shocker.Mission_Async_Shocker_C.MCE_ShockerKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Shocker_C::MCE_ShockerKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.MCE_ShockerKilled");

	UMission_Async_Shocker_C_MCE_ShockerKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Shocker.Mission_Async_Shocker_C.ExecuteUbergraph_Mission_Async_Shocker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Shocker_C::ExecuteUbergraph_Mission_Async_Shocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.ExecuteUbergraph_Mission_Async_Shocker");

	UMission_Async_Shocker_C_ExecuteUbergraph_Mission_Async_Shocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
