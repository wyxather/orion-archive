// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Op_ActivateCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Op_ActivateCannon_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerEnd");

	UA_Op_ActivateCannon_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_ShowDevice
// (BlueprintCallable, BlueprintEvent)

void UA_Op_ActivateCannon_C::AN_ShowDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_ShowDevice");

	UA_Op_ActivateCannon_C_AN_ShowDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_HideDevice
// (BlueprintCallable, BlueprintEvent)

void UA_Op_ActivateCannon_C::AN_HideDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_HideDevice");

	UA_Op_ActivateCannon_C_AN_HideDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Op_ActivateCannon_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnEnd");

	UA_Op_ActivateCannon_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Op_ActivateCannon_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnBeginBringUpWeapon");

	UA_Op_ActivateCannon_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.Notify_SwapPlaces
// (BlueprintCallable, BlueprintEvent)

void UA_Op_ActivateCannon_C::Notify_SwapPlaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.Notify_SwapPlaces");

	UA_Op_ActivateCannon_C_Notify_SwapPlaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Op_ActivateCannon_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerBegin");

	UA_Op_ActivateCannon_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.ExecuteUbergraph_A_Op_ActivateCannon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Op_ActivateCannon_C::ExecuteUbergraph_A_Op_ActivateCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.ExecuteUbergraph_A_Op_ActivateCannon");

	UA_Op_ActivateCannon_C_ExecuteUbergraph_A_Op_ActivateCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
