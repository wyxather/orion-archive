// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_IronBear_BearFist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.GetHardpointMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakWeapon_IronBearHardPoint* Hardpoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_IronBear_BearFist_C::GetHardpointMods(class AOakWeapon_IronBearHardPoint* Hardpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.GetHardpointMods");

	UBPAnim_IronBear_BearFist_C_GetHardpointMods_Params params;
	params.Hardpoint = Hardpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B
// (BlueprintEvent)

void UBPAnim_IronBear_BearFist_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B");

	UBPAnim_IronBear_BearFist_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D
// (BlueprintEvent)

void UBPAnim_IronBear_BearFist_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D");

	UBPAnim_IronBear_BearFist_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.ExecuteUbergraph_BPAnim_IronBear_BearFist
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_IronBear_BearFist_C::ExecuteUbergraph_BPAnim_IronBear_BearFist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.ExecuteUbergraph_BPAnim_IronBear_BearFist");

	UBPAnim_IronBear_BearFist_C_ExecuteUbergraph_BPAnim_IronBear_BearFist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
