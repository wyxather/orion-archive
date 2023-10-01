// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Cast_Summon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Cast_Summon.Action_PhaseTrance_Cast_Summon_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Cast_Summon_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Summon.Action_PhaseTrance_Cast_Summon_C.OnBegin");

	UAction_PhaseTrance_Cast_Summon_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Summon.Action_PhaseTrance_Cast_Summon_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Cast_Summon_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Summon.Action_PhaseTrance_Cast_Summon_C.OnEnd");

	UAction_PhaseTrance_Cast_Summon_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Summon.Action_PhaseTrance_Cast_Summon_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Summon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Cast_Summon_C::ExecuteUbergraph_Action_PhaseTrance_Cast_Summon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Summon.Action_PhaseTrance_Cast_Summon_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Summon");

	UAction_PhaseTrance_Cast_Summon_C_ExecuteUbergraph_Action_PhaseTrance_Cast_Summon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
