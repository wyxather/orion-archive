// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_PileDive_InHoldOut_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkOutOfPile
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_PileDive_InHoldOut_Parent_C::TinkOutOfPile()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkOutOfPile");

	UA_Tink_PileDive_InHoldOut_Parent_C_TinkOutOfPile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.SpawnTurret
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_PileDive_InHoldOut_Parent_C::SpawnTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.SpawnTurret");

	UA_Tink_PileDive_InHoldOut_Parent_C_SpawnTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkEnterPile
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_PileDive_InHoldOut_Parent_C::TinkEnterPile()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkEnterPile");

	UA_Tink_PileDive_InHoldOut_Parent_C_TinkEnterPile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkExitPile
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_PileDive_InHoldOut_Parent_C::TinkExitPile()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkExitPile");

	UA_Tink_PileDive_InHoldOut_Parent_C_TinkExitPile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_PileDive_InHoldOut_Parent_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.OnEnd");

	UA_Tink_PileDive_InHoldOut_Parent_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_PileDive_InHoldOut_Parent_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.OnBegin");

	UA_Tink_PileDive_InHoldOut_Parent_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_PileDive_InHoldOut_Parent_C::ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent");

	UA_Tink_PileDive_InHoldOut_Parent_C_ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
