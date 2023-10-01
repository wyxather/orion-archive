// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_Switch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::GetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback>* FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState");

	UBPI_IO_Switch_C_GetSwitchFeedbackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackState != nullptr)
		*FeedbackState = params.FeedbackState;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::SetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState");

	UBPI_IO_Switch_C_SetSwitchFeedbackState_Params params;
	params.FeedbackState = FeedbackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::GetSwitchInteractiveState(bool* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState");

	UBPI_IO_Switch_C_GetSwitchInteractiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactive != nullptr)
		*Interactive = params.Interactive;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::GetSwitchLockedState(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState");

	UBPI_IO_Switch_C_GetSwitchLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_State> SwitchState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::GetSwitchState(TEnumAsByte<Enum_Switch_State>* SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState");

	UBPI_IO_Switch_C_GetSwitchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwitchState != nullptr)
		*SwitchState = params.SwitchState;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::SetSwitchInteractiveState(bool Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState");

	UBPI_IO_Switch_C_SetSwitchInteractiveState_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::SetSwitchLockedState(bool Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState");

	UBPI_IO_Switch_C_SetSwitchLockedState_Params params;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_State> SwitchState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Switch_C::SetSwitchState(TEnumAsByte<Enum_Switch_State> SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState");

	UBPI_IO_Switch_C_SetSwitchState_Params params;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
