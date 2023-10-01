// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_RoadDog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.Obj_KillRoadDog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RoadDog_C::Obj_KillRoadDog(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.Obj_KillRoadDog");

	UMission_Async_RoadDog_C_Obj_KillRoadDog_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.Set_KillRoadDog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RoadDog_C::Set_KillRoadDog(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.Set_KillRoadDog");

	UMission_Async_RoadDog_C_Set_KillRoadDog_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.MCE_RoadDogKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RoadDog_C::MCE_RoadDogKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.MCE_RoadDogKilled");

	UMission_Async_RoadDog_C_MCE_RoadDogKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.ExecuteUbergraph_Mission_Async_RoadDog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RoadDog_C::ExecuteUbergraph_Mission_Async_RoadDog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.ExecuteUbergraph_Mission_Async_RoadDog");

	UMission_Async_RoadDog_C_ExecuteUbergraph_Mission_Async_RoadDog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
