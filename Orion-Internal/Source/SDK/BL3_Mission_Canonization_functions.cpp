// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Canonization_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Canonization.Mission_Canonization_C.IsAllWeaponPartsLooted?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_bool                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::IsAllWeaponPartsLooted_(bool* Return_bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.IsAllWeaponPartsLooted?");

	UMission_Canonization_C_IsAllWeaponPartsLooted__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_bool != nullptr)
		*Return_bool = params.Return_bool;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_17
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_17()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_17");

	UMission_Canonization_C_OnDialogSequenceFinished_17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_16
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_16()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_16");

	UMission_Canonization_C_OnDialogSequenceFinished_16_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_15
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_15()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_15");

	UMission_Canonization_C_OnDialogSequenceFinished_15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_14
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_14()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_14");

	UMission_Canonization_C_OnDialogSequenceFinished_14_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_13
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_13()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_13");

	UMission_Canonization_C_OnDialogSequenceFinished_13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_12
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_12()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_12");

	UMission_Canonization_C_OnDialogSequenceFinished_12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_11
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_11()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_11");

	UMission_Canonization_C_OnDialogSequenceFinished_11_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_10
// (BlueprintCallable, BlueprintEvent)

void UMission_Canonization_C::OnDialogSequenceFinished_10()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_10");

	UMission_Canonization_C_OnDialogSequenceFinished_10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_ReturnedToResearchCenter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_ReturnedToResearchCenter(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_ReturnedToResearchCenter");

	UMission_Canonization_C_MCE_ReturnedToResearchCenter_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_GetTrap_Full
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_GetTrap_Full(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_GetTrap_Full");

	UMission_Canonization_C_Obj_GetTrap_Full_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_GetTrap_Full
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_GetTrap_Full(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_GetTrap_Full");

	UMission_Canonization_C_Set_GetTrap_Full_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_LootCyclone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_LootCyclone(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_LootCyclone");

	UMission_Canonization_C_Obj_LootCyclone_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedEnergySink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_PlacedEnergySink(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedEnergySink");

	UMission_Canonization_C_MCE_PlacedEnergySink_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceEnergySinkInWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_PlaceEnergySinkInWeapon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceEnergySinkInWeapon");

	UMission_Canonization_C_Obj_PlaceEnergySinkInWeapon_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceWeaponParts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_PlaceWeaponParts(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceWeaponParts");

	UMission_Canonization_C_Obj_PlaceWeaponParts_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_WentToTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_WentToTemple(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_WentToTemple");

	UMission_Canonization_C_MCE_WentToTemple_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_ReturnToResearchCenter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_ReturnToResearchCenter(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_ReturnToResearchCenter");

	UMission_Canonization_C_Obj_ReturnToResearchCenter_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_PlaceTrap(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceTrap");

	UMission_Canonization_C_Obj_PlaceTrap_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_GetTrap_Empty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_GetTrap_Empty(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_GetTrap_Empty");

	UMission_Canonization_C_Obj_GetTrap_Empty_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.INV_CannonWarmupComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::INV_CannonWarmupComplete(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.INV_CannonWarmupComplete");

	UMission_Canonization_C_INV_CannonWarmupComplete_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_INV_WeaponWarmupComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_INV_WeaponWarmupComplete(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_INV_WeaponWarmupComplete");

	UMission_Canonization_C_MCE_INV_WeaponWarmupComplete_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_DestroyOutrunner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_DestroyOutrunner(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_DestroyOutrunner");

	UMission_Canonization_C_Obj_DestroyOutrunner_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_LootOutrunner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_LootOutrunner(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_LootOutrunner");

	UMission_Canonization_C_Obj_LootOutrunner_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_GetWeaponParts_CompleteLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_GetWeaponParts_CompleteLoad(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_GetWeaponParts_CompleteLoad");

	UMission_Canonization_C_MCE_GetWeaponParts_CompleteLoad_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_GetWeaponParts_OnCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_GetWeaponParts_OnCompleted(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_GetWeaponParts_OnCompleted");

	UMission_Canonization_C_MCE_GetWeaponParts_OnCompleted_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_DestroyedCyclone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_DestroyedCyclone(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_DestroyedCyclone");

	UMission_Canonization_C_MCE_DestroyedCyclone_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_DestroyedOutrunner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_DestroyedOutrunner(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_DestroyedOutrunner");

	UMission_Canonization_C_MCE_DestroyedOutrunner_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_GetWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_GetWeapon(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_GetWeapon");

	UMission_Canonization_C_Set_GetWeapon_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_GetWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_GetWeapon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_GetWeapon");

	UMission_Canonization_C_Obj_GetWeapon_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_ClosedTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_ClosedTrap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_ClosedTrap");

	UMission_Canonization_C_MCE_ClosedTrap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_GoToTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_GoToTemple(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_GoToTemple");

	UMission_Canonization_C_Obj_GoToTemple_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedWeaponPart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_PlacedWeaponPart(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedWeaponPart");

	UMission_Canonization_C_MCE_PlacedWeaponPart_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedEnergySinkInWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_PlacedEnergySinkInWeapon(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedEnergySinkInWeapon");

	UMission_Canonization_C_MCE_PlacedEnergySinkInWeapon_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_PlaceEnergySinkInWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_PlaceEnergySinkInWeapon(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_PlaceEnergySinkInWeapon");

	UMission_Canonization_C_Set_PlaceEnergySinkInWeapon_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_PlaceWeaponParts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_PlaceWeaponParts(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_PlaceWeaponParts");

	UMission_Canonization_C_Set_PlaceWeaponParts_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_ReturnToResearchCenter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_ReturnToResearchCenter(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_ReturnToResearchCenter");

	UMission_Canonization_C_Set_ReturnToResearchCenter_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_BackUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_BackUp(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_BackUp");

	UMission_Canonization_C_Obj_BackUp_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_GetWeaponParts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_GetWeaponParts(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_GetWeaponParts");

	UMission_Canonization_C_Set_GetWeaponParts_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_BackUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_BackUp(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_BackUp");

	UMission_Canonization_C_Set_BackUp_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_FillTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_FillTrap(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_FillTrap");

	UMission_Canonization_C_Set_FillTrap_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_DestroyCyclone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_DestroyCyclone(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_DestroyCyclone");

	UMission_Canonization_C_Obj_DestroyCyclone_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Obj_FillTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Obj_FillTrap(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Obj_FillTrap");

	UMission_Canonization_C_Obj_FillTrap_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_GrouseBackedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_GrouseBackedUp(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_GrouseBackedUp");

	UMission_Canonization_C_MCE_GrouseBackedUp_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_PlaceTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_PlaceTrap(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_PlaceTrap");

	UMission_Canonization_C_Set_PlaceTrap_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_GoToTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_GoToTemple(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_GoToTemple");

	UMission_Canonization_C_Set_GoToTemple_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.Set_GetTrap_Empty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::Set_GetTrap_Empty(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.Set_GetTrap_Empty");

	UMission_Canonization_C_Set_GetTrap_Empty_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.MCE_FiledEnergySink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::MCE_FiledEnergySink(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.MCE_FiledEnergySink");

	UMission_Canonization_C_MCE_FiledEnergySink_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Canonization.Mission_Canonization_C.ExecuteUbergraph_Mission_Canonization
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Canonization_C::ExecuteUbergraph_Mission_Canonization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Canonization.Mission_Canonization_C.ExecuteUbergraph_Mission_Canonization");

	UMission_Canonization_C_ExecuteUbergraph_Mission_Canonization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
