// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_MushroomGiant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Obj_KillMushroomGiant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_MushroomGiant_C::Obj_KillMushroomGiant(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Obj_KillMushroomGiant");

	UMission_Async_MushroomGiant_C_Obj_KillMushroomGiant_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Set_KillMushroomGiant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_MushroomGiant_C::Set_KillMushroomGiant(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Set_KillMushroomGiant");

	UMission_Async_MushroomGiant_C_Set_KillMushroomGiant_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.MCE_MushroomGiantKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_MushroomGiant_C::MCE_MushroomGiantKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.MCE_MushroomGiantKilled");

	UMission_Async_MushroomGiant_C_MCE_MushroomGiantKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.ExecuteUbergraph_Mission_Async_MushroomGiant
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Async_MushroomGiant_C::ExecuteUbergraph_Mission_Async_MushroomGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.ExecuteUbergraph_Mission_Async_MushroomGiant");

	UMission_Async_MushroomGiant_C_ExecuteUbergraph_Mission_Async_MushroomGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
