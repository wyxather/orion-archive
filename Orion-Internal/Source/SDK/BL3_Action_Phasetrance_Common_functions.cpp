// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Common_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AssembleActivationCombo
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPhaseTranceActivationComboData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPhaseTranceActivationComboData UAction_Phasetrance_Common_C::AssembleActivationCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AssembleActivationCombo");

	UAction_Phasetrance_Common_C_AssembleActivationCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.PlayPhaseTranceHandEffects
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::PlayPhaseTranceHandEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.PlayPhaseTranceHandEffects");

	UAction_Phasetrance_Common_C_PlayPhaseTranceHandEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillReactDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::TriggerActionSkillReactDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillReactDialogue");

	UAction_Phasetrance_Common_C_TriggerActionSkillReactDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillUseDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::TriggerActionSkillUseDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillUseDialogue");

	UAction_Phasetrance_Common_C_TriggerActionSkillUseDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.Cleanup");

	UAction_Phasetrance_Common_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Common_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnEnd");

	UAction_Phasetrance_Common_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Common_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerEnd");

	UAction_Phasetrance_Common_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryEffectComponents
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::AN_TryEffectComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryEffectComponents");

	UAction_Phasetrance_Common_C_AN_TryEffectComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Common_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerBegin");

	UAction_Phasetrance_Common_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Common_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnBegin");

	UAction_Phasetrance_Common_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryImpulse
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::AN_TryImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryImpulse");

	UAction_Phasetrance_Common_C_AN_TryImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryNova
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::AN_TryNova()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryNova");

	UAction_Phasetrance_Common_C_AN_TryNova_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove3pGhostArms
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::AN_Remove3pGhostArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove3pGhostArms");

	UAction_Phasetrance_Common_C_AN_Remove3pGhostArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove1pGhostArms
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Common_C::AN_Remove1pGhostArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove1pGhostArms");

	UAction_Phasetrance_Common_C_AN_Remove1pGhostArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.ExecuteUbergraph_Action_Phasetrance_Common
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Common_C::ExecuteUbergraph_Action_Phasetrance_Common(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.ExecuteUbergraph_Action_Phasetrance_Common");

	UAction_Phasetrance_Common_C_ExecuteUbergraph_Action_Phasetrance_Common_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
