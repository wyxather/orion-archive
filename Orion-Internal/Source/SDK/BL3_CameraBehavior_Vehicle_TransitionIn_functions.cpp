// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_Vehicle_TransitionIn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraState**           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_Vehicle_TransitionIn_C::Update(float* DeltaTime, class UCameraState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Update");

	UCameraBehavior_Vehicle_TransitionIn_C_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState**           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_Vehicle_TransitionIn_C::Start(class UCameraState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Start");

	UCameraBehavior_Vehicle_TransitionIn_C_Start_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior_Vehicle_TransitionIn_C::ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn");

	UCameraBehavior_Vehicle_TransitionIn_C_ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
