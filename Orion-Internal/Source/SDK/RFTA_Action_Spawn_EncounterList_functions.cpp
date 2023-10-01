// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Spawn_EncounterList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.DestroyAllSpawns
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Spawn_EncounterList_C::DestroyAllSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.DestroyAllSpawns");

	UAction_Spawn_EncounterList_C_DestroyAllSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.SetCooldown
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Spawn_EncounterList_C::SetCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.SetCooldown");

	UAction_Spawn_EncounterList_C_SetCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.LockCooldown
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Spawn_EncounterList_C::LockCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.LockCooldown");

	UAction_Spawn_EncounterList_C_LockCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.SetAggroGroup
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Spawn_EncounterList_C::SetAggroGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.SetAggroGroup");

	UAction_Spawn_EncounterList_C_SetAggroGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.CanSpawn
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Spawn_EncounterList_C::CanSpawn(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.CanSpawn");

	UAction_Spawn_EncounterList_C_CanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.GetEncounterManager
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEncounterManager*       EncounterMan                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spawn_EncounterList_C::GetEncounterManager(class UEncounterManager** EncounterMan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.GetEncounterManager");

	UAction_Spawn_EncounterList_C_GetEncounterManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EncounterMan != nullptr)
		*EncounterMan = params.EncounterMan;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Spawn_EncounterList_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnActionStart");

	UAction_Spawn_EncounterList_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Spawn_EncounterList_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnActionStop");

	UAction_Spawn_EncounterList_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnComplete_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterInstance**     Encounter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spawn_EncounterList_C::OnComplete_Event_1(class UEncounterInstance** Encounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnComplete_Event_1");

	UAction_Spawn_EncounterList_C_OnComplete_Event_1_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.ExecuteUbergraph_Action_Spawn_EncounterList
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spawn_EncounterList_C::ExecuteUbergraph_Action_Spawn_EncounterList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.ExecuteUbergraph_Action_Spawn_EncounterList");

	UAction_Spawn_EncounterList_C_ExecuteUbergraph_Action_Spawn_EncounterList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
