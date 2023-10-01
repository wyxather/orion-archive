// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Barrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_Barrier.BPAnim_Barrier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7
// (BlueprintEvent)

void UBPAnim_Barrier_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7");

	UBPAnim_Barrier_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_EnableGraphLocomotion
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_Barrier_C::AnimNotify_EnableGraphLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_EnableGraphLocomotion");

	UBPAnim_Barrier_C_AnimNotify_EnableGraphLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_DisableGraphLocomotion
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_Barrier_C::AnimNotify_DisableGraphLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_DisableGraphLocomotion");

	UBPAnim_Barrier_C_AnimNotify_DisableGraphLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Barrier.BPAnim_Barrier_C.ExecuteUbergraph_BPAnim_Barrier
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Barrier_C::ExecuteUbergraph_BPAnim_Barrier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.ExecuteUbergraph_BPAnim_Barrier");

	UBPAnim_Barrier_C_ExecuteUbergraph_BPAnim_Barrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
