// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Tarantella_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.Obj_KillTarantella
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Tarantella_C::Obj_KillTarantella(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.Obj_KillTarantella");

	UMission_Async_Tarantella_C_Obj_KillTarantella_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.Set_KillTarantella
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Tarantella_C::Set_KillTarantella(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.Set_KillTarantella");

	UMission_Async_Tarantella_C_Set_KillTarantella_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.MCE_TarantellaKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Tarantella_C::MCE_TarantellaKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.MCE_TarantellaKilled");

	UMission_Async_Tarantella_C_MCE_TarantellaKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.ExecuteUbergraph_Mission_Async_Tarantella
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_Tarantella_C::ExecuteUbergraph_Mission_Async_Tarantella(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.ExecuteUbergraph_Mission_Async_Tarantella");

	UMission_Async_Tarantella_C_ExecuteUbergraph_Mission_Async_Tarantella_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
