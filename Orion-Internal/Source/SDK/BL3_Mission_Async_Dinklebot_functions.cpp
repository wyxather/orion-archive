// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Dinklebot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.Obj_KillDinklebot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Dinklebot_C::Obj_KillDinklebot(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.Obj_KillDinklebot");

	UMission_Async_Dinklebot_C_Obj_KillDinklebot_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.Set_KillDinklebot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Dinklebot_C::Set_KillDinklebot(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.Set_KillDinklebot");

	UMission_Async_Dinklebot_C_Set_KillDinklebot_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.MCE_DinklebotKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Dinklebot_C::MCE_DinklebotKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.MCE_DinklebotKilled");

	UMission_Async_Dinklebot_C_MCE_DinklebotKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.ExecuteUbergraph_Mission_Async_Dinklebot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Dinklebot_C::ExecuteUbergraph_Mission_Async_Dinklebot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.ExecuteUbergraph_Mission_Async_Dinklebot");

	UMission_Async_Dinklebot_C_ExecuteUbergraph_Mission_Async_Dinklebot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
