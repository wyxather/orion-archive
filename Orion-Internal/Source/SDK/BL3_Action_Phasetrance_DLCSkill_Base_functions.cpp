// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_DLCSkill_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.GetPhaseFlareSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::GetPhaseFlareSpawnLocation(struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.GetPhaseFlareSpawnLocation");

	UAction_Phasetrance_DLCSkill_Base_C_GetPhaseFlareSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SetPhaseFlareSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SetPhaseFlareSpawnLocation");

	UAction_Phasetrance_DLCSkill_Base_C_SetPhaseFlareSpawnLocation_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnRep_SpawnLocation
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::OnRep_SpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnRep_SpawnLocation");

	UAction_Phasetrance_DLCSkill_Base_C_OnRep_SpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.StartSummonAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::StartSummonAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.StartSummonAnimation");

	UAction_Phasetrance_DLCSkill_Base_C_StartSummonAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.HideArmsMesh
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::HideArmsMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.HideArmsMesh");

	UAction_Phasetrance_DLCSkill_Base_C_HideArmsMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ResetArmsMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::ResetArmsMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ResetArmsMesh");

	UAction_Phasetrance_DLCSkill_Base_C_ResetArmsMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.CacheSummonMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::CacheSummonMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.CacheSummonMeshes");

	UAction_Phasetrance_DLCSkill_Base_C_CacheSummonMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SummonActionSkillOrb
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AProj_Siren_DLCSkill_WalkingPotato_Base_C* Orb                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::SummonActionSkillOrb(bool* res, class AProj_Siren_DLCSkill_WalkingPotato_Base_C** Orb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SummonActionSkillOrb");

	UAction_Phasetrance_DLCSkill_Base_C_SummonActionSkillOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
	if (Orb != nullptr)
		*Orb = params.Orb;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerBegin");

	UAction_Phasetrance_DLCSkill_Base_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerEnd");

	UAction_Phasetrance_DLCSkill_Base_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.DetachOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::DetachOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.DetachOrb");

	UAction_Phasetrance_DLCSkill_Base_C_DetachOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_SummonOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::AN_SummonOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_SummonOrb");

	UAction_Phasetrance_DLCSkill_Base_C_AN_SummonOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_DetachOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::AN_DetachOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_DetachOrb");

	UAction_Phasetrance_DLCSkill_Base_C_AN_DetachOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SendOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::SendOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SendOrb");

	UAction_Phasetrance_DLCSkill_Base_C_SendOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_Remove3pGhostArms
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::AN_Remove3pGhostArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_Remove3pGhostArms");

	UAction_Phasetrance_DLCSkill_Base_C_AN_Remove3pGhostArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnBegin");

	UAction_Phasetrance_DLCSkill_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillUseDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::TriggerActionSkillUseDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillUseDialogue");

	UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillUseDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillReactDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_DLCSkill_Base_C::TriggerActionSkillReactDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillReactDialogue");

	UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillReactDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_DLCSkill_Base_C::ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base");

	UAction_Phasetrance_DLCSkill_Base_C_ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
