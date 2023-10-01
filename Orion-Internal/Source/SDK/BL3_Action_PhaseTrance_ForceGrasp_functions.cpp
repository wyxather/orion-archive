// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_ForceGrasp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.CreateSlamSphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_ForceGrasp_C::CreateSlamSphere(class AOakCharacter* GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.CreateSlamSphere");

	UAction_PhaseTrance_ForceGrasp_C_CreateSlamSphere_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.TriggerActionSkillUseDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_ForceGrasp_C::TriggerActionSkillUseDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.TriggerActionSkillUseDialogue");

	UAction_PhaseTrance_ForceGrasp_C_TriggerActionSkillUseDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.AnimNotify_CreateGraspingSphere
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_ForceGrasp_C::AnimNotify_CreateGraspingSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.AnimNotify_CreateGraspingSphere");

	UAction_PhaseTrance_ForceGrasp_C_AnimNotify_CreateGraspingSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.HandleGraspTargetFound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_ForceGrasp_C::HandleGraspTargetFound(class AOakCharacter** GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.HandleGraspTargetFound");

	UAction_PhaseTrance_ForceGrasp_C_HandleGraspTargetFound_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.ExecuteUbergraph_Action_PhaseTrance_ForceGrasp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_ForceGrasp_C::ExecuteUbergraph_Action_PhaseTrance_ForceGrasp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.ExecuteUbergraph_Action_PhaseTrance_ForceGrasp");

	UAction_PhaseTrance_ForceGrasp_C_ExecuteUbergraph_Action_PhaseTrance_ForceGrasp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
