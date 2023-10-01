// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_ThatRingsABell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_5
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_ThatRingsABell_C::OnDialogSequenceFinished_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_5");

	UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_4
// (BlueprintCallable, BlueprintEvent)

void UALI_SM_ThatRingsABell_C::OnDialogSequenceFinished_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_4");

	UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MCE_RingABell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_ThatRingsABell_C::MCE_RingABell(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MCE_RingABell");

	UALI_SM_ThatRingsABell_C_MCE_RingABell_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.Obj_RingABell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_ThatRingsABell_C::Obj_RingABell(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.Obj_RingABell");

	UALI_SM_ThatRingsABell_C_Obj_RingABell_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.SET_RingABell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_ThatRingsABell_C::SET_RingABell(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.SET_RingABell");

	UALI_SM_ThatRingsABell_C_SET_RingABell_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UALI_SM_ThatRingsABell_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MissionKickoff");

	UALI_SM_ThatRingsABell_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.ExecuteUbergraph_ALI_SM_ThatRingsABell
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_SM_ThatRingsABell_C::ExecuteUbergraph_ALI_SM_ThatRingsABell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.ExecuteUbergraph_ALI_SM_ThatRingsABell");

	UALI_SM_ThatRingsABell_C_ExecuteUbergraph_ALI_SM_ThatRingsABell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
