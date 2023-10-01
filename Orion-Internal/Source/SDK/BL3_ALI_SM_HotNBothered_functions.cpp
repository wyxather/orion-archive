// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_HotNBothered_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_7
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_HotNBothered_C::OnDialogSequenceFinished_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_7");

	UALI_SM_HotNBothered_C_OnDialogSequenceFinished_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_HotNBothered_C::OnDialogSequenceFinished_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_6");

	UALI_SM_HotNBothered_C_OnDialogSequenceFinished_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_5
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_HotNBothered_C::OnDialogSequenceFinished_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_5");

	UALI_SM_HotNBothered_C_OnDialogSequenceFinished_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UALI_SM_HotNBothered_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MissionKickoff");

	UALI_SM_HotNBothered_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.Obj_TurnHeatOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_HotNBothered_C::Obj_TurnHeatOn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.Obj_TurnHeatOn");

	UALI_SM_HotNBothered_C_Obj_TurnHeatOn_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MCE_TurnedHeatOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_HotNBothered_C::MCE_TurnedHeatOn(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MCE_TurnedHeatOn");

	UALI_SM_HotNBothered_C_MCE_TurnedHeatOn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.SET_TurnHeatOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_HotNBothered_C::SET_TurnHeatOn(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.SET_TurnHeatOn");

	UALI_SM_HotNBothered_C_SET_TurnHeatOn_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.ExecuteUbergraph_ALI_SM_HotNBothered
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_HotNBothered_C::ExecuteUbergraph_ALI_SM_HotNBothered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.ExecuteUbergraph_ALI_SM_HotNBothered");

	UALI_SM_HotNBothered_C_ExecuteUbergraph_ALI_SM_HotNBothered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
