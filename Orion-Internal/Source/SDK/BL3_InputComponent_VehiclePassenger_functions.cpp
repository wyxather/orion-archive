// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_VehiclePassenger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.IsUsePromptEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputComponent_VehiclePassenger_C::IsUsePromptEnabled(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.IsUsePromptEnabled");

	UInputComponent_VehiclePassenger_C_IsUsePromptEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.Look
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Val                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UInputComponent_VehiclePassenger_C::Look(const struct FVector& Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.Look");

	UInputComponent_VehiclePassenger_C_Look_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_13_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_VehiclePassenger_C::K2Node_GbxInputEvent_Button_PressRelease_13_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_13_Released_exec");

	UInputComponent_VehiclePassenger_C_K2Node_GbxInputEvent_Button_PressRelease_13_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_13_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_VehiclePassenger_C::K2Node_GbxInputEvent_Button_PressRelease_13_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_13_Pressed_exec");

	UInputComponent_VehiclePassenger_C_K2Node_GbxInputEvent_Button_PressRelease_13_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_VehiclePassenger_C::K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec");

	UInputComponent_VehiclePassenger_C_K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec
// (BlueprintCallable, BlueprintEvent)

void UInputComponent_VehiclePassenger_C::K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec");

	UInputComponent_VehiclePassenger_C_K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UInputComponent_VehiclePassenger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.ReceiveBeginPlay");

	UInputComponent_VehiclePassenger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.GbxInputEvent_3
// (BlueprintEvent)

void UInputComponent_VehiclePassenger_C::GbxInputEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.GbxInputEvent_3");

	UInputComponent_VehiclePassenger_C_GbxInputEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.GbxInputEvent_4
// (BlueprintEvent)

void UInputComponent_VehiclePassenger_C::GbxInputEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.GbxInputEvent_4");

	UInputComponent_VehiclePassenger_C_GbxInputEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.ExecuteUbergraph_InputComponent_VehiclePassenger
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputComponent_VehiclePassenger_C::ExecuteUbergraph_InputComponent_VehiclePassenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C.ExecuteUbergraph_InputComponent_VehiclePassenger");

	UInputComponent_VehiclePassenger_C_ExecuteUbergraph_InputComponent_VehiclePassenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
