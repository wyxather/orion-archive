// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPVehicleAnim_Outrunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.Sinusoidal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Frequency                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPVehicleAnim_Outrunner_C::Sinusoidal(float Time, float Offset, float Frequency, float Amplitude, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.Sinusoidal");

	UBPVehicleAnim_Outrunner_C_Sinusoidal_Params params;
	params.Time = Time;
	params.Offset = Offset;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_703898EC4664374070DE7FAC0B4BA207
// (BlueprintEvent)

void UBPVehicleAnim_Outrunner_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_703898EC4664374070DE7FAC0B4BA207()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_703898EC4664374070DE7FAC0B4BA207");

	UBPVehicleAnim_Outrunner_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_703898EC4664374070DE7FAC0B4BA207_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_66355985447C34E8BD5CBE90AA3625BE
// (BlueprintEvent)

void UBPVehicleAnim_Outrunner_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_66355985447C34E8BD5CBE90AA3625BE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_66355985447C34E8BD5CBE90AA3625BE");

	UBPVehicleAnim_Outrunner_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_66355985447C34E8BD5CBE90AA3625BE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.ExecuteUbergraph_BPVehicleAnim_Outrunner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPVehicleAnim_Outrunner_C::ExecuteUbergraph_BPVehicleAnim_Outrunner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C.ExecuteUbergraph_BPVehicleAnim_Outrunner");

	UBPVehicleAnim_Outrunner_C_ExecuteUbergraph_BPVehicleAnim_Outrunner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
