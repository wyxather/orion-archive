// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxInput_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxInput.GbxInputComponent.StartInputConsumeKeyImpl
// (Final, Native, Private)

void UGbxInputComponent::StartInputConsumeKeyImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputComponent.StartInputConsumeKeyImpl");

	UGbxInputComponent_StartInputConsumeKeyImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInput.GbxInputComponent.StartInputAction_Discrete_Impl
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UGbxInputActionData_Discrete* DiscreteAction                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConsumeEvent                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxInputComponent::StartInputAction_Discrete_Impl(class UGbxInputActionData_Discrete* DiscreteAction, bool bConsumeEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputComponent.StartInputAction_Discrete_Impl");

	UGbxInputComponent_StartInputAction_Discrete_Impl_Params params;
	params.DiscreteAction = DiscreteAction;
	params.bConsumeEvent = bConsumeEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInput.GbxInputComponent.InputAction_Continuous_Vector_Impl
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UGbxInputActionData_Continuous_Vector* AxisAction                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxInputComponent::InputAction_Continuous_Vector_Impl(class UGbxInputActionData_Continuous_Vector* AxisAction, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputComponent.InputAction_Continuous_Vector_Impl");

	UGbxInputComponent_InputAction_Continuous_Vector_Impl_Params params;
	params.AxisAction = AxisAction;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInput.GbxInputEventHelpers.SigFunc_Button_PressPulse
// (Final, Native, Public)
// Parameters:
// float                          NextPulseDelay                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxInputEventHelpers::SigFunc_Button_PressPulse(float NextPulseDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputEventHelpers.SigFunc_Button_PressPulse");

	UGbxInputEventHelpers_SigFunc_Button_PressPulse_Params params;
	params.NextPulseDelay = NextPulseDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInput.GbxInputEventHelpers.SigFunc_Axis
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Val                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxInputEventHelpers::SigFunc_Axis(const struct FVector& Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputEventHelpers.SigFunc_Axis");

	UGbxInputEventHelpers_SigFunc_Axis_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
