// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Tannis_SetKeyOnTable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Tannis_SetKeyOnTable_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.OnBegin");

	UAction_Tannis_SetKeyOnTable_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.KeySwitch
// (BlueprintCallable, BlueprintEvent)

void UAction_Tannis_SetKeyOnTable_C::KeySwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.KeySwitch");

	UAction_Tannis_SetKeyOnTable_C_KeySwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Tannis_SetKeyOnTable_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.OnServerEnd");

	UAction_Tannis_SetKeyOnTable_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.ExecuteUbergraph_Action_Tannis_SetKeyOnTable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Tannis_SetKeyOnTable_C::ExecuteUbergraph_Action_Tannis_SetKeyOnTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.ExecuteUbergraph_Action_Tannis_SetKeyOnTable");

	UAction_Tannis_SetKeyOnTable_C_ExecuteUbergraph_Action_Tannis_SetKeyOnTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
