// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_IronBear_BubbleShield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.SetBlendPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Pose                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_IronBear_BubbleShield_C::SetBlendPose(int Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.SetBlendPose");

	UBPAnim_IronBear_BubbleShield_C_SetBlendPose_Params params;
	params.Pose = Pose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442
// (BlueprintEvent)

void UBPAnim_IronBear_BubbleShield_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442");

	UBPAnim_IronBear_BubbleShield_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5
// (BlueprintEvent)

void UBPAnim_IronBear_BubbleShield_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5");

	UBPAnim_IronBear_BubbleShield_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.ExecuteUbergraph_BPAnim_IronBear_BubbleShield
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_IronBear_BubbleShield_C::ExecuteUbergraph_BPAnim_IronBear_BubbleShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.ExecuteUbergraph_BPAnim_IronBear_BubbleShield");

	UBPAnim_IronBear_BubbleShield_C_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
