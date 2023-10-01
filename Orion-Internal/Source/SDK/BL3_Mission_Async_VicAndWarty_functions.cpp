// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_VicAndWarty_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.Obj_KillVicAndWarty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_VicAndWarty_C::Obj_KillVicAndWarty(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.Obj_KillVicAndWarty");

	UMission_Async_VicAndWarty_C_Obj_KillVicAndWarty_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.Set_KillVicAndWarty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_VicAndWarty_C::Set_KillVicAndWarty(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.Set_KillVicAndWarty");

	UMission_Async_VicAndWarty_C_Set_KillVicAndWarty_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.MCE_VicAndWartyKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_VicAndWarty_C::MCE_VicAndWartyKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.MCE_VicAndWartyKilled");

	UMission_Async_VicAndWarty_C_MCE_VicAndWartyKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.ExecuteUbergraph_Mission_Async_VicAndWarty
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_VicAndWarty_C::ExecuteUbergraph_Mission_Async_VicAndWarty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.ExecuteUbergraph_Mission_Async_VicAndWarty");

	UMission_Async_VicAndWarty_C_ExecuteUbergraph_Mission_Async_VicAndWarty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
