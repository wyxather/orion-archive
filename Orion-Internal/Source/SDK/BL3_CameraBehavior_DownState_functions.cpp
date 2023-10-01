// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_DownState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraBehavior_DownState.CameraBehavior_DownState_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraState**           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_DownState_C::Update(float* DeltaTime, class UCameraState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_DownState.CameraBehavior_DownState_C.Update");

	UCameraBehavior_DownState_C_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState**           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_DownState_C::Start(class UCameraState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_DownState.CameraBehavior_DownState_C.Start");

	UCameraBehavior_DownState_C_Start_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.End
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState**           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_DownState_C::End(class UCameraState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_DownState.CameraBehavior_DownState_C.End");

	UCameraBehavior_DownState_C_End_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.ExecuteUbergraph_CameraBehavior_DownState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_DownState_C::ExecuteUbergraph_CameraBehavior_DownState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_DownState.CameraBehavior_DownState_C.ExecuteUbergraph_CameraBehavior_DownState");

	UCameraBehavior_DownState_C_ExecuteUbergraph_CameraBehavior_DownState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
