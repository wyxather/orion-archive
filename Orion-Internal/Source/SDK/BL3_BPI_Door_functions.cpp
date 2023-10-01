// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Door_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Door.BPI_Door_C.GetDoorFeedbackState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_DoorLocked> FeedbackState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::GetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked>* FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.GetDoorFeedbackState");

	UBPI_Door_C_GetDoorFeedbackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackState != nullptr)
		*FeedbackState = params.FeedbackState;
}


// Function BPI_Door.BPI_Door_C.SetDoorFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_States_DoorLocked> FeedbackState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::SetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked> FeedbackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.SetDoorFeedbackState");

	UBPI_Door_C_SetDoorFeedbackState_Params params;
	params.FeedbackState = FeedbackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Door.BPI_Door_C.GetDoorInteractiveState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::GetDoorInteractiveState(bool* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.GetDoorInteractiveState");

	UBPI_Door_C_GetDoorInteractiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interactive != nullptr)
		*Interactive = params.Interactive;
}


// Function BPI_Door.BPI_Door_C.GetDoorLockedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::GetDoorLockedState(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.GetDoorLockedState");

	UBPI_Door_C_GetDoorLockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function BPI_Door.BPI_Door_C.GetDoorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_State>   DoorState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::GetDoorState(TEnumAsByte<Enum_Door_State>* DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.GetDoorState");

	UBPI_Door_C_GetDoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorState != nullptr)
		*DoorState = params.DoorState;
}


// Function BPI_Door.BPI_Door_C.SetDoorInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactive_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::SetDoorInteractiveState(bool Interactive_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.SetDoorInteractiveState");

	UBPI_Door_C_SetDoorInteractiveState_Params params;
	params.Interactive_ = Interactive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Door.BPI_Door_C.SetDoorLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::SetDoorLockedState(bool Locked_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.SetDoorLockedState");

	UBPI_Door_C_SetDoorLockedState_Params params;
	params.Locked_ = Locked_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Door.BPI_Door_C.SetDoorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Door_State>   DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Door_C::SetDoorState(TEnumAsByte<Enum_Door_State> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Door.BPI_Door_C.SetDoorState");

	UBPI_Door_C_SetDoorState_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
