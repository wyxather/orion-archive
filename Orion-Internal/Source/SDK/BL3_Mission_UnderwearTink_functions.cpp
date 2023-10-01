// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_UnderwearTink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.OnDialogSequenceFinished_3
// (BlueprintCallable, BlueprintEvent)

void UMission_UnderwearTink_C::OnDialogSequenceFinished_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.OnDialogSequenceFinished_3");

	UMission_UnderwearTink_C_OnDialogSequenceFinished_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_UnderwearTink.Mission_UnderwearTink_C.Obj_KillUndertaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_UnderwearTink_C::Obj_KillUndertaker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.Obj_KillUndertaker");

	UMission_UnderwearTink_C_Obj_KillUndertaker_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_UnderwearTink.Mission_UnderwearTink_C.Set_UnderTaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_UnderwearTink_C::Set_UnderTaker(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.Set_UnderTaker");

	UMission_UnderwearTink_C_Set_UnderTaker_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_UnderwearTink.Mission_UnderwearTink_C.MCE_KilledTheUnderTaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_UnderwearTink_C::MCE_KilledTheUnderTaker(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.MCE_KilledTheUnderTaker");

	UMission_UnderwearTink_C_MCE_KilledTheUnderTaker_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_UnderwearTink.Mission_UnderwearTink_C.MCE_BountyUndertakerSeen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_UnderwearTink_C::MCE_BountyUndertakerSeen(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.MCE_BountyUndertakerSeen");

	UMission_UnderwearTink_C_MCE_BountyUndertakerSeen_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_UnderwearTink.Mission_UnderwearTink_C.See_UnderwearTink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_UnderwearTink_C::See_UnderwearTink(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.See_UnderwearTink");

	UMission_UnderwearTink_C_See_UnderwearTink_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_UnderwearTink.Mission_UnderwearTink_C.ExecuteUbergraph_Mission_UnderwearTink
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_UnderwearTink_C::ExecuteUbergraph_Mission_UnderwearTink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_UnderwearTink.Mission_UnderwearTink_C.ExecuteUbergraph_Mission_UnderwearTink");

	UMission_UnderwearTink_C_ExecuteUbergraph_Mission_UnderwearTink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
