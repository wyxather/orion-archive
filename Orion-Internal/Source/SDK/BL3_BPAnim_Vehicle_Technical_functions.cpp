// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Vehicle_Technical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.Exit
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.Exit");

	UBPAnim_Vehicle_Technical_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.Enter
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::Enter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.Enter");

	UBPAnim_Vehicle_Technical_C_Enter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.OnLanded_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSpentInAir                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LandAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumWheelsOnGround              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllWheelsLanded               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Vehicle_Technical_C::OnLanded_Event(float TimeSpentInAir, float LandAngle, int NumWheelsOnGround, bool bAllWheelsLanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.OnLanded_Event");

	UBPAnim_Vehicle_Technical_C_OnLanded_Event_Params params;
	params.TimeSpentInAir = TimeSpentInAir;
	params.LandAngle = LandAngle;
	params.NumWheelsOnGround = NumWheelsOnGround;
	params.bAllWheelsLanded = bAllWheelsLanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.AllowJump
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::AllowJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.AllowJump");

	UBPAnim_Vehicle_Technical_C_AllowJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBPAnim_Vehicle_Technical_C::CustomEvent_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.CustomEvent_1");

	UBPAnim_Vehicle_Technical_C_CustomEvent_1_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.ResetBumpAnim
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::ResetBumpAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.ResetBumpAnim");

	UBPAnim_Vehicle_Technical_C_ResetBumpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983
// (BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983");

	UBPAnim_Vehicle_Technical_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5
// (BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5");

	UBPAnim_Vehicle_Technical_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751
// (BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751");

	UBPAnim_Vehicle_Technical_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBPAnim_Vehicle_Technical_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.BlueprintInitializeAnimation");

	UBPAnim_Vehicle_Technical_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.ExecuteUbergraph_BPAnim_Vehicle_Technical
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Vehicle_Technical_C::ExecuteUbergraph_BPAnim_Vehicle_Technical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.ExecuteUbergraph_BPAnim_Vehicle_Technical");

	UBPAnim_Vehicle_Technical_C_ExecuteUbergraph_BPAnim_Vehicle_Technical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
