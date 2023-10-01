// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Resonator_Success_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Resonator_Success_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnBeginBringUpWeapon");

	UAction_Melee_Resonator_Success_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Resonator_Success_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnEnd");

	UAction_Melee_Resonator_Success_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Start
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Resonator_Success_C::Resonator_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Start");

	UAction_Melee_Resonator_Success_C_Resonator_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Stop
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Resonator_Success_C::Resonator_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Stop");

	UAction_Melee_Resonator_Success_C_Resonator_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.ExecuteUbergraph_Action_Melee_Resonator_Success
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Resonator_Success_C::ExecuteUbergraph_Action_Melee_Resonator_Success(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.ExecuteUbergraph_Action_Melee_Resonator_Success");

	UAction_Melee_Resonator_Success_C_ExecuteUbergraph_Action_Melee_Resonator_Success_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
