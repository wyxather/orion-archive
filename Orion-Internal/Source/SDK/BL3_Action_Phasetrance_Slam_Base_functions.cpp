// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.GetSlamDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::GetSlamDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.GetSlamDamage");

	UAction_Phasetrance_Slam_Base_C_GetSlamDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.SlamFeedbackLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::SlamFeedbackLaunch(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.SlamFeedbackLaunch");

	UAction_Phasetrance_Slam_Base_C_SlamFeedbackLaunch_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlam
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::InnerDoSlam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlam");

	UAction_Phasetrance_Slam_Base_C_InnerDoSlam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlamDamage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::InnerDoSlamDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlamDamage");

	UAction_Phasetrance_Slam_Base_C_InnerDoSlamDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerShowSlamLandFX
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::InnerShowSlamLandFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerShowSlamLandFX");

	UAction_Phasetrance_Slam_Base_C_InnerShowSlamLandFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamEnded
// (Private, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::InnerOnSlamEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamEnded");

	UAction_Phasetrance_Slam_Base_C_InnerOnSlamEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamStarted
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::InnerOnSlamStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamStarted");

	UAction_Phasetrance_Slam_Base_C_InnerOnSlamStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBegin");

	UAction_Phasetrance_Slam_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_StartDive
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::AN_StartDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_StartDive");

	UAction_Phasetrance_Slam_Base_C_AN_StartDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnEnd");

	UAction_Phasetrance_Slam_Base_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnFallEnded
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::OnFallEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnFallEnded");

	UAction_Phasetrance_Slam_Base_C_OnFallEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnServerEnd");

	UAction_Phasetrance_Slam_Base_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_DoSlam
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::AN_DoSlam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_DoSlam");

	UAction_Phasetrance_Slam_Base_C_AN_DoSlam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBeginBringUpWeapon");

	UAction_Phasetrance_Slam_Base_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.HandlePlayerLanded
// (Event, Protected, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::HandlePlayerLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.HandlePlayerLanded");

	UAction_Phasetrance_Slam_Base_C_HandlePlayerLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillReactDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::TriggerActionSkillReactDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillReactDialogue");

	UAction_Phasetrance_Slam_Base_C_TriggerActionSkillReactDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillUseDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::TriggerActionSkillUseDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillUseDialogue");

	UAction_Phasetrance_Slam_Base_C_TriggerActionSkillUseDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Begin Dialogue
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::Trigger_Slam_Begin_Dialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Begin Dialogue");

	UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Begin_Dialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Impact Dialogue
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::Trigger_Slam_Impact_Dialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Impact Dialogue");

	UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Impact_Dialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger slam Taunt Dialogue
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Base_C::Trigger_slam_Taunt_Dialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger slam Taunt Dialogue");

	UAction_Phasetrance_Slam_Base_C_Trigger_slam_Taunt_Dialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.ExecuteUbergraph_Action_Phasetrance_Slam_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Base_C::ExecuteUbergraph_Action_Phasetrance_Slam_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.ExecuteUbergraph_Action_Phasetrance_Slam_Base");

	UAction_Phasetrance_Slam_Base_C_ExecuteUbergraph_Action_Phasetrance_Slam_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
