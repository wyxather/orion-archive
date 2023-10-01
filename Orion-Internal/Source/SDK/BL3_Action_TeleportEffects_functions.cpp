// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_TeleportEffects_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_TeleportEffects.Action_TeleportEffects_C.UnlockResources
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_TeleportEffects_C::UnlockResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_TeleportEffects.Action_TeleportEffects_C.UnlockResources");

	UAction_TeleportEffects_C_UnlockResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_TeleportEffects.Action_TeleportEffects_C.LockResources
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_TeleportEffects_C::LockResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_TeleportEffects.Action_TeleportEffects_C.LockResources");

	UAction_TeleportEffects_C_LockResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_TeleportEffects.Action_TeleportEffects_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_TeleportEffects_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_TeleportEffects.Action_TeleportEffects_C.OnBegin");

	UAction_TeleportEffects_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_TeleportEffects.Action_TeleportEffects_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_TeleportEffects_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_TeleportEffects.Action_TeleportEffects_C.OnEnd");

	UAction_TeleportEffects_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_TeleportEffects.Action_TeleportEffects_C.ExecuteUbergraph_Action_TeleportEffects
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_TeleportEffects_C::ExecuteUbergraph_Action_TeleportEffects(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_TeleportEffects.Action_TeleportEffects_C.ExecuteUbergraph_Action_TeleportEffects");

	UAction_TeleportEffects_C_ExecuteUbergraph_Action_TeleportEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
