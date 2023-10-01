// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Grasp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.DoDamageToImmuneTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_C::DoDamageToImmuneTarget(class AActor* Enemey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.DoDamageToImmuneTarget");

	UAction_PhaseTrance_Grasp_C_DoDamageToImmuneTarget_Params params;
	params.Enemey = Enemey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.AnimNotify_CreateGraspingSphere
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_C::AnimNotify_CreateGraspingSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.AnimNotify_CreateGraspingSphere");

	UAction_PhaseTrance_Grasp_C_AnimNotify_CreateGraspingSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.HandleGraspTargetFound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_C::HandleGraspTargetFound(class AOakCharacter** GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.HandleGraspTargetFound");

	UAction_PhaseTrance_Grasp_C_HandleGraspTargetFound_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.ExecuteUbergraph_Action_PhaseTrance_Grasp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_C::ExecuteUbergraph_Action_PhaseTrance_Grasp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.ExecuteUbergraph_Action_PhaseTrance_Grasp");

	UAction_PhaseTrance_Grasp_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
