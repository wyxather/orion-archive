// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Vehicle_Turret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Turret_AnimGraphNode_ModifyBone_201F4D644383549A1D62DA839BEE6B00
// (BlueprintEvent)

void UBPAnim_Vehicle_Turret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Turret_AnimGraphNode_ModifyBone_201F4D644383549A1D62DA839BEE6B00()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Turret_AnimGraphNode_ModifyBone_201F4D644383549A1D62DA839BEE6B00");

	UBPAnim_Vehicle_Turret_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Turret_AnimGraphNode_ModifyBone_201F4D644383549A1D62DA839BEE6B00_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBPAnim_Vehicle_Turret_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.BlueprintInitializeAnimation");

	UBPAnim_Vehicle_Turret_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Vehicle_Turret_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.BlueprintUpdateAnimation");

	UBPAnim_Vehicle_Turret_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.ExecuteUbergraph_BPAnim_Vehicle_Turret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Vehicle_Turret_C::ExecuteUbergraph_BPAnim_Vehicle_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C.ExecuteUbergraph_BPAnim_Vehicle_Turret");

	UBPAnim_Vehicle_Turret_C_ExecuteUbergraph_BPAnim_Vehicle_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
