// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_Overrun_Hit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_BlitzHit
// (BlueprintCallable, BlueprintEvent)

void UAction_Siren_Overrun_Hit_C::AN_BlitzHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_BlitzHit");

	UAction_Siren_Overrun_Hit_C_AN_BlitzHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_Overrun_Hit_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerEnd");

	UAction_Siren_Overrun_Hit_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_Overrun_Hit_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnBeginBringUpWeapon");

	UAction_Siren_Overrun_Hit_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_Overrun_Hit_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerBegin");

	UAction_Siren_Overrun_Hit_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_PerformBlitzFeedback_Hit
// (BlueprintCallable, BlueprintEvent)

void UAction_Siren_Overrun_Hit_C::AN_PerformBlitzFeedback_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_PerformBlitzFeedback_Hit");

	UAction_Siren_Overrun_Hit_C_AN_PerformBlitzFeedback_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.ExecuteUbergraph_Action_Siren_Overrun_Hit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_Overrun_Hit_C::ExecuteUbergraph_Action_Siren_Overrun_Hit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.ExecuteUbergraph_Action_Siren_Overrun_Hit");

	UAction_Siren_Overrun_Hit_C_ExecuteUbergraph_Action_Siren_Overrun_Hit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
