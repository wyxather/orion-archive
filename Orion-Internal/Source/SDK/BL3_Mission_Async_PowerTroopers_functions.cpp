// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_PowerTroopers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.Obj_KillPowerTroopers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_PowerTroopers_C::Obj_KillPowerTroopers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.Obj_KillPowerTroopers");

	UMission_Async_PowerTroopers_C_Obj_KillPowerTroopers_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.Set_KillPowerTroopers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_PowerTroopers_C::Set_KillPowerTroopers(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.Set_KillPowerTroopers");

	UMission_Async_PowerTroopers_C_Set_KillPowerTroopers_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.MCE_PowerTroopersKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_PowerTroopers_C::MCE_PowerTroopersKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.MCE_PowerTroopersKilled");

	UMission_Async_PowerTroopers_C_MCE_PowerTroopersKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.ExecuteUbergraph_Mission_Async_PowerTroopers
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_PowerTroopers_C::ExecuteUbergraph_Mission_Async_PowerTroopers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.ExecuteUbergraph_Mission_Async_PowerTroopers");

	UMission_Async_PowerTroopers_C_ExecuteUbergraph_Mission_Async_PowerTroopers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
