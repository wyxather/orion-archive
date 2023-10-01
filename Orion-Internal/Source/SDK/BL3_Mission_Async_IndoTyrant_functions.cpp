// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_IndoTyrant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.Obj_KillIndoTyrant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_IndoTyrant_C::Obj_KillIndoTyrant(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.Obj_KillIndoTyrant");

	UMission_Async_IndoTyrant_C_Obj_KillIndoTyrant_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.Set_KillIndoTyrant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_IndoTyrant_C::Set_KillIndoTyrant(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.Set_KillIndoTyrant");

	UMission_Async_IndoTyrant_C_Set_KillIndoTyrant_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.MCE_IndoTyrantKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_IndoTyrant_C::MCE_IndoTyrantKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.MCE_IndoTyrantKilled");

	UMission_Async_IndoTyrant_C_MCE_IndoTyrantKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.ExecuteUbergraph_Mission_Async_IndoTyrant
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_IndoTyrant_C::ExecuteUbergraph_Mission_Async_IndoTyrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.ExecuteUbergraph_Mission_Async_IndoTyrant");

	UMission_Async_IndoTyrant_C_ExecuteUbergraph_Mission_Async_IndoTyrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
