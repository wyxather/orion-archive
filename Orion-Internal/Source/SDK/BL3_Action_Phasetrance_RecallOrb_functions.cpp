// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_RecallOrb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.AN_SummonOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_RecallOrb_C::AN_SummonOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.AN_SummonOrb");

	UAction_Phasetrance_RecallOrb_C_AN_SummonOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_RecallOrb_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerBegin");

	UAction_Phasetrance_RecallOrb_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_RecallOrb_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerEnd");

	UAction_Phasetrance_RecallOrb_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.ExecuteUbergraph_Action_Phasetrance_RecallOrb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_RecallOrb_C::ExecuteUbergraph_Action_Phasetrance_RecallOrb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.ExecuteUbergraph_Action_Phasetrance_RecallOrb");

	UAction_Phasetrance_RecallOrb_C_ExecuteUbergraph_Action_Phasetrance_RecallOrb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
