// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Cast_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.CacheSummonMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::CacheSummonMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.CacheSummonMeshes");

	UAction_PhaseTrance_Cast_Base_C_CacheSummonMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.FirePhaseCastProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::FirePhaseCastProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.FirePhaseCastProjectile");

	UAction_PhaseTrance_Cast_Base_C_FirePhaseCastProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ResetCastMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::ResetCastMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ResetCastMesh");

	UAction_PhaseTrance_Cast_Base_C_ResetCastMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.StartCastSummonAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::StartCastSummonAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.StartCastSummonAnimation");

	UAction_PhaseTrance_Cast_Base_C_StartCastSummonAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastFeedback
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::AN_PerformCastFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastFeedback");

	UAction_PhaseTrance_Cast_Base_C_AN_PerformCastFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_CreateCastProjectile
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::AN_CreateCastProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_CreateCastProjectile");

	UAction_PhaseTrance_Cast_Base_C_AN_CreateCastProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Cast_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnBegin");

	UAction_PhaseTrance_Cast_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillReactDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::TriggerActionSkillReactDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillReactDialogue");

	UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillReactDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillUseDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::TriggerActionSkillUseDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillUseDialogue");

	UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillUseDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Cast_Base_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnServerEnd");

	UAction_PhaseTrance_Cast_Base_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part1
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::AN_PerformCastCS_Part1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part1");

	UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part2
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::AN_PerformCastCS_Part2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part2");

	UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.PlayPhaseTranceHandEffects
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Cast_Base_C::PlayPhaseTranceHandEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.PlayPhaseTranceHandEffects");

	UAction_PhaseTrance_Cast_Base_C_PlayPhaseTranceHandEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Cast_Base_C::ExecuteUbergraph_Action_PhaseTrance_Cast_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Base");

	UAction_PhaseTrance_Cast_Base_C_ExecuteUbergraph_Action_PhaseTrance_Cast_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
