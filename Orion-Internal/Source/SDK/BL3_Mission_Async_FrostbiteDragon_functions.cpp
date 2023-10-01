// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_FrostbiteDragon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Obj_KillFrostbiteDragon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_FrostbiteDragon_C::Obj_KillFrostbiteDragon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Obj_KillFrostbiteDragon");

	UMission_Async_FrostbiteDragon_C_Obj_KillFrostbiteDragon_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Set_KillFrostbiteDragon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_FrostbiteDragon_C::Set_KillFrostbiteDragon(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Set_KillFrostbiteDragon");

	UMission_Async_FrostbiteDragon_C_Set_KillFrostbiteDragon_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.MCE_FrostbiteDragonKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_FrostbiteDragon_C::MCE_FrostbiteDragonKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.MCE_FrostbiteDragonKilled");

	UMission_Async_FrostbiteDragon_C_MCE_FrostbiteDragonKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.ExecuteUbergraph_Mission_Async_FrostbiteDragon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_FrostbiteDragon_C::ExecuteUbergraph_Mission_Async_FrostbiteDragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.ExecuteUbergraph_Mission_Async_FrostbiteDragon");

	UMission_Async_FrostbiteDragon_C_ExecuteUbergraph_Mission_Async_FrostbiteDragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
