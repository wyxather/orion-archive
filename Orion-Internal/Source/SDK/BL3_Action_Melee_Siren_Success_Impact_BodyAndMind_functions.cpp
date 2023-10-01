// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Siren_Success_Impact_BodyAndMind_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Siren_Success_Impact_BodyAndMind_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.OnEnd");

	UAction_Melee_Siren_Success_Impact_BodyAndMind_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Siren_Success_Impact_BodyAndMind_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.OnBeginBringUpWeapon");

	UAction_Melee_Siren_Success_Impact_BodyAndMind_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.CameraPush
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Siren_Success_Impact_BodyAndMind_C::CameraPush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.CameraPush");

	UAction_Melee_Siren_Success_Impact_BodyAndMind_C_CameraPush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.CameraPop
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Siren_Success_Impact_BodyAndMind_C::CameraPop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.CameraPop");

	UAction_Melee_Siren_Success_Impact_BodyAndMind_C_CameraPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.PlayScreenParticle
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Siren_Success_Impact_BodyAndMind_C::PlayScreenParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.PlayScreenParticle");

	UAction_Melee_Siren_Success_Impact_BodyAndMind_C_PlayScreenParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.ExecuteUbergraph_Action_Melee_Siren_Success_Impact_BodyAndMind
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Siren_Success_Impact_BodyAndMind_C::ExecuteUbergraph_Action_Melee_Siren_Success_Impact_BodyAndMind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C.ExecuteUbergraph_Action_Melee_Siren_Success_Impact_BodyAndMind");

	UAction_Melee_Siren_Success_Impact_BodyAndMind_C_ExecuteUbergraph_Action_Melee_Siren_Success_Impact_BodyAndMind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
