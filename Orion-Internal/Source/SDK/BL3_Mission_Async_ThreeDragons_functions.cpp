// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ThreeDragons_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.Obj_KillThreeDragons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ThreeDragons_C::Obj_KillThreeDragons(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.Obj_KillThreeDragons");

	UMission_Async_ThreeDragons_C_Obj_KillThreeDragons_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.Set_KillThreeDragons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ThreeDragons_C::Set_KillThreeDragons(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.Set_KillThreeDragons");

	UMission_Async_ThreeDragons_C_Set_KillThreeDragons_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.MCE_ThreeDragonsKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ThreeDragons_C::MCE_ThreeDragonsKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.MCE_ThreeDragonsKilled");

	UMission_Async_ThreeDragons_C_MCE_ThreeDragonsKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.ExecuteUbergraph_Mission_Async_ThreeDragons
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_ThreeDragons_C::ExecuteUbergraph_Mission_Async_ThreeDragons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.ExecuteUbergraph_Mission_Async_ThreeDragons");

	UMission_Async_ThreeDragons_C_ExecuteUbergraph_Mission_Async_ThreeDragons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
