// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_AtlasBoundaryTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_AtlasBoundaryTurret.BPAnim_AtlasBoundaryTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AtlasBoundaryTurret_AnimGraphNode_ModifyBone_6EE72F8744580EBE263E61A1E4C951A4
// (BlueprintEvent)

void UBPAnim_AtlasBoundaryTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AtlasBoundaryTurret_AnimGraphNode_ModifyBone_6EE72F8744580EBE263E61A1E4C951A4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_AtlasBoundaryTurret.BPAnim_AtlasBoundaryTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AtlasBoundaryTurret_AnimGraphNode_ModifyBone_6EE72F8744580EBE263E61A1E4C951A4");

	UBPAnim_AtlasBoundaryTurret_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AtlasBoundaryTurret_AnimGraphNode_ModifyBone_6EE72F8744580EBE263E61A1E4C951A4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_AtlasBoundaryTurret.BPAnim_AtlasBoundaryTurret_C.ExecuteUbergraph_BPAnim_AtlasBoundaryTurret
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_AtlasBoundaryTurret_C::ExecuteUbergraph_BPAnim_AtlasBoundaryTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_AtlasBoundaryTurret.BPAnim_AtlasBoundaryTurret_C.ExecuteUbergraph_BPAnim_AtlasBoundaryTurret");

	UBPAnim_AtlasBoundaryTurret_C_ExecuteUbergraph_BPAnim_AtlasBoundaryTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
