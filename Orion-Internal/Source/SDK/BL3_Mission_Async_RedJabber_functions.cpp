// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_RedJabber_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.Obj_KillRedJabber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RedJabber_C::Obj_KillRedJabber(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.Obj_KillRedJabber");

	UMission_Async_RedJabber_C_Obj_KillRedJabber_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.Set_KillRedJabber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RedJabber_C::Set_KillRedJabber(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.Set_KillRedJabber");

	UMission_Async_RedJabber_C_Set_KillRedJabber_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.MCE_RedJabberKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RedJabber_C::MCE_RedJabberKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.MCE_RedJabberKilled");

	UMission_Async_RedJabber_C_MCE_RedJabberKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.ExecuteUbergraph_Mission_Async_RedJabber
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_RedJabber_C::ExecuteUbergraph_Mission_Async_RedJabber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.ExecuteUbergraph_Mission_Async_RedJabber");

	UMission_Async_RedJabber_C_ExecuteUbergraph_Mission_Async_RedJabber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
