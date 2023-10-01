// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_SkillScreenAnimInstance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE
// (BlueprintEvent)

void UBPAnim_SkillScreenAnimInstance_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE");

	UBPAnim_SkillScreenAnimInstance_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.ExecuteUbergraph_BPAnim_SkillScreenAnimInstance
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_SkillScreenAnimInstance_C::ExecuteUbergraph_BPAnim_SkillScreenAnimInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.ExecuteUbergraph_BPAnim_SkillScreenAnimInstance");

	UBPAnim_SkillScreenAnimInstance_C_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
