// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_BlastRequests_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_9
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_9");

	UALI_SM_BlastRequests_C_OnDialogSequenceFinished_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_8
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_8");

	UALI_SM_BlastRequests_C_OnDialogSequenceFinished_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_7
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_7");

	UALI_SM_BlastRequests_C_OnDialogSequenceFinished_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_6");

	UALI_SM_BlastRequests_C_OnDialogSequenceFinished_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_Stay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::SET_Stay(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_Stay");

	UALI_SM_BlastRequests_C_SET_Stay_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_Stay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::Obj_Stay(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_Stay");

	UALI_SM_BlastRequests_C_Obj_Stay_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Stayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::MCE_Stayed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Stayed");

	UALI_SM_BlastRequests_C_MCE_Stayed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UALI_SM_BlastRequests_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MissionKickoff");

	UALI_SM_BlastRequests_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_Respawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::INV_Obj_Respawned(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_Respawned");

	UALI_SM_BlastRequests_C_INV_Obj_Respawned_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Respawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::MCE_Respawned(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Respawned");

	UALI_SM_BlastRequests_C_MCE_Respawned_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_ReachOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::SET_ReachOut(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_ReachOut");

	UALI_SM_BlastRequests_C_SET_ReachOut_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_ReachOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::Obj_ReachOut(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_ReachOut");

	UALI_SM_BlastRequests_C_Obj_ReachOut_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReachedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::MCE_ReachedOut(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReachedOut");

	UALI_SM_BlastRequests_C_MCE_ReachedOut_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_KriegReadyToBlowUp_Stay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::INV_Obj_KriegReadyToBlowUp_Stay(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_KriegReadyToBlowUp_Stay");

	UALI_SM_BlastRequests_C_INV_Obj_KriegReadyToBlowUp_Stay_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToRespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::INV_Obj_ReadyToRespawn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToRespawn");

	UALI_SM_BlastRequests_C_INV_Obj_ReadyToRespawn_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_ReadyToRespawn_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_BlastRequests_C::_INV_Obj_ReadyToRespawn_Objective__PROXY()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_ReadyToRespawn_Objective] PROXY");

	UALI_SM_BlastRequests_C__INV_Obj_ReadyToRespawn_Objective__PROXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_Respawned_Objective] PROXY_1
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_BlastRequests_C::_INV_Obj_Respawned_Objective__PROXY_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_Respawned_Objective] PROXY_1");

	UALI_SM_BlastRequests_C__INV_Obj_Respawned_Objective__PROXY_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReadytoRespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::MCE_ReadytoRespawn(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReadytoRespawn");

	UALI_SM_BlastRequests_C_MCE_ReadytoRespawn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToDespawnAtEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::INV_Obj_ReadyToDespawnAtEnd(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToDespawnAtEnd");

	UALI_SM_BlastRequests_C_INV_Obj_ReadyToDespawnAtEnd_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.ExecuteUbergraph_ALI_SM_BlastRequests
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_BlastRequests_C::ExecuteUbergraph_ALI_SM_BlastRequests(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.ExecuteUbergraph_ALI_SM_BlastRequests");

	UALI_SM_BlastRequests_C_ExecuteUbergraph_ALI_SM_BlastRequests_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
