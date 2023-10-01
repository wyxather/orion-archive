// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_Player2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputComponent_Player2.InputComponent_Player2_C.UsesActionSkillOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::UsesActionSkillOverride(bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.UsesActionSkillOverride");

	UInputComponent_Player2_C_UsesActionSkillOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function InputComponent_Player2.InputComponent_Player2_C.IsPawnAttached
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::IsPawnAttached(bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.IsPawnAttached");

	UInputComponent_Player2_C_IsPawnAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function InputComponent_Player2.InputComponent_Player2_C.ShouldAttemptSecondaryActionSkill
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::ShouldAttemptSecondaryActionSkill(bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.ShouldAttemptSecondaryActionSkill");

	UInputComponent_Player2_C_ShouldAttemptSecondaryActionSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function InputComponent_Player2.InputComponent_Player2_C.IsUsePromptEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EUsabilityType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::IsUsePromptEnabled(EUsabilityType Type, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.IsUsePromptEnabled");

	UInputComponent_Player2_C_IsUsePromptEnabled_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function InputComponent_Player2.InputComponent_Player2_C.IsInFFYL
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InFFYL                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::IsInFFYL(bool* InFFYL)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.IsInFFYL");

	UInputComponent_Player2_C_IsInFFYL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InFFYL != nullptr)
		*InFFYL = params.InFFYL;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1176_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1176_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1176_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1176_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1176_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1176_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1176_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1176_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_0_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_0_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_0_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_0_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_0_Held_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_0_Held_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_0_Held_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_0_Held_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_0_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_0_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_0_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_0_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_97_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_97_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_97_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_97_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_97_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_97_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_97_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_97_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_201_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_201_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_201_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_201_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_201_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_201_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_201_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_201_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_141_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_141_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_141_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_141_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_141_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_141_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_141_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_141_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_210_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_210_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_210_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_210_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_210_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_210_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_210_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_210_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1072_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1072_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1072_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1072_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1072_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1072_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1072_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1072_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1127_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1127_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1127_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1127_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1127_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1127_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1127_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1127_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1128_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1128_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1128_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1128_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1128_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1128_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1128_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1128_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1157_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1157_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1157_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1157_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1157_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1157_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1157_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1157_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1410_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1410_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1410_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1410_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1410_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1410_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1410_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1410_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1672_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1672_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1672_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1672_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1672_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1672_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1672_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1672_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_OakMoveAxis_0_def_exec
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Val                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bGamePad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_OakMoveAxis_0_def_exec(const struct FVector& Val, bool bGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_OakMoveAxis_0_def_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_OakMoveAxis_0_def_exec_Params params;
	params.Val = Val;
	params.bGamePad = bGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_OakLookAxis_6_def_exec
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Val                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bGamePad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_OakLookAxis_6_def_exec(const struct FVector& Val, bool bGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_OakLookAxis_6_def_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_OakLookAxis_6_def_exec_Params params;
	params.Val = Val;
	params.bGamePad = bGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_2_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_2_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_2_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_2_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_2_Held_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_2_Held_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_2_Held_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_2_Held_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_2_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_2_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_2_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_2_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_943_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_943_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_943_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_943_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_943_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_943_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_943_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_943_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_858_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_858_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_858_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_858_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_858_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_858_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_858_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_858_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_514_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_514_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_514_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_514_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_514_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_514_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_514_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_514_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_446_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_446_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_446_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_446_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_446_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_446_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_446_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_446_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_1_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_1_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_1_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_1_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_1_Held_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_1_Held_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_1_Held_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_1_Held_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_1_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_1_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_1_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_1_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInpActEvt_InputAction_Discrete_TrackPreviousMission_K2Node_GbxInputActionEvent_Discrete_6
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::GbxInpActEvt_InputAction_Discrete_TrackPreviousMission_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInpActEvt_InputAction_Discrete_TrackPreviousMission_K2Node_GbxInputActionEvent_Discrete_6");

	UInputComponent_Player2_C_GbxInpActEvt_InputAction_Discrete_TrackPreviousMission_K2Node_GbxInputActionEvent_Discrete_6_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInpActEvt_InputAction_Discrete_TrackNextMission_K2Node_GbxInputActionEvent_Discrete_5
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::GbxInpActEvt_InputAction_Discrete_TrackNextMission_K2Node_GbxInputActionEvent_Discrete_5(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInpActEvt_InputAction_Discrete_TrackNextMission_K2Node_GbxInputActionEvent_Discrete_5");

	UInputComponent_Player2_C_GbxInpActEvt_InputAction_Discrete_TrackNextMission_K2Node_GbxInputActionEvent_Discrete_5_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_3_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_3_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_3_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_3_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_3_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_3_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_3_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_3_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_19_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_19_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_19_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_19_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_19_Held_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_19_Held_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_19_Held_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_19_Held_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_19_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_19_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_19_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_19_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_51_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_51_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_51_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_51_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_51_Held_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_51_Held_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_51_Held_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_51_Held_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_51_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease_51_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease_51_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_51_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_40_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_40_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_40_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_40_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_40_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_40_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_40_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_40_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInpActEvt_InputAction_Discrete_MarkTarget_K2Node_GbxInputActionEvent_Discrete_4
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::GbxInpActEvt_InputAction_Discrete_MarkTarget_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInpActEvt_InputAction_Discrete_MarkTarget_K2Node_GbxInputActionEvent_Discrete_4");

	UInputComponent_Player2_C_GbxInpActEvt_InputAction_Discrete_MarkTarget_K2Node_GbxInputActionEvent_Discrete_4_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_8
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_8");

	UInputComponent_Player2_C_GbxInputEvent_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_10
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_10()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_10");

	UInputComponent_Player2_C_GbxInputEvent_10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_9
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_9");

	UInputComponent_Player2_C_GbxInputEvent_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease5
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease5()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease5");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_37
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_37()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_37");

	UInputComponent_Player2_C_GbxInputEvent_37_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_38
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_38()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_38");

	UInputComponent_Player2_C_GbxInputEvent_38_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_39
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_39()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_39");

	UInputComponent_Player2_C_GbxInputEvent_39_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_32
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_32()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_32");

	UInputComponent_Player2_C_GbxInputEvent_32_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_33
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_33()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_33");

	UInputComponent_Player2_C_GbxInputEvent_33_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_34
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_34");

	UInputComponent_Player2_C_GbxInputEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_35
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_35()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_35");

	UInputComponent_Player2_C_GbxInputEvent_35_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_3
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_3");

	UInputComponent_Player2_C_GbxInputEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_1
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_1");

	UInputComponent_Player2_C_GbxInputEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_4
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Val                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bGamePad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::GbxInputEvent_4(const struct FVector& Val, bool bGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_4");

	UInputComponent_Player2_C_GbxInputEvent_4_Params params;
	params.Val = Val;
	params.bGamePad = bGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_6
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Val                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bGamePad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::GbxInputEvent_6(const struct FVector& Val, bool bGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_6");

	UInputComponent_Player2_C_GbxInputEvent_6_Params params;
	params.Val = Val;
	params.bGamePad = bGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease1
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease1");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_14
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_14()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_14");

	UInputComponent_Player2_C_GbxInputEvent_14_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_2
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_2");

	UInputComponent_Player2_C_GbxInputEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_7
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_7");

	UInputComponent_Player2_C_GbxInputEvent_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_5
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_5");

	UInputComponent_Player2_C_GbxInputEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressHoldRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressHoldRelease");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressHoldRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease4
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease4()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease4");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease3
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease3()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease3");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease2
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease2()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease2");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_25
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_25()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_25");

	UInputComponent_Player2_C_GbxInputEvent_25_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_28
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_28()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_28");

	UInputComponent_Player2_C_GbxInputEvent_28_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_22
// (BlueprintEvent)

void UInputComponent_Player2_C::GbxInputEvent_22()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.GbxInputEvent_22");

	UInputComponent_Player2_C_GbxInputEvent_22_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease1
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease1");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease
// (BlueprintEvent)

void UInputComponent_Player2_C::K2Node_GbxInputEvent_Button_PressRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.K2Node_GbxInputEvent_Button_PressRelease");

	UInputComponent_Player2_C_K2Node_GbxInputEvent_Button_PressRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UInputComponent_Player2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.ReceiveBeginPlay");

	UInputComponent_Player2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_Player2.InputComponent_Player2_C.ExecuteUbergraph_InputComponent_Player2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_Player2_C::ExecuteUbergraph_InputComponent_Player2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_Player2.InputComponent_Player2_C.ExecuteUbergraph_InputComponent_Player2");

	UInputComponent_Player2_C_ExecuteUbergraph_InputComponent_Player2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
