// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_IronBear_GunnersNest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685
// (BlueprintEvent)

void UBPAnim_IronBear_GunnersNest_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685");

	UBPAnim_IronBear_GunnersNest_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.ExecuteUbergraph_BPAnim_IronBear_GunnersNest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_IronBear_GunnersNest_C::ExecuteUbergraph_BPAnim_IronBear_GunnersNest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.ExecuteUbergraph_BPAnim_IronBear_GunnersNest");

	UBPAnim_IronBear_GunnersNest_C_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
