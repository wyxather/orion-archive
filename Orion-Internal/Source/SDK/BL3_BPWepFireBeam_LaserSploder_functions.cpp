// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireBeam_LaserSploder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWepFireBeam_LaserSploder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ReceiveBeginPlay");

	UBPWepFireBeam_LaserSploder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_LaserSploder_C::NotifyUseStarted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseStarted_Event");

	UBPWepFireBeam_LaserSploder_C_NotifyUseStarted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_LaserSploder_C::NotifyUseFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseFinished_Event");

	UBPWepFireBeam_LaserSploder_C_NotifyUseFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.EvaluateShot
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_LaserSploder_C::EvaluateShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.EvaluateShot");

	UBPWepFireBeam_LaserSploder_C_EvaluateShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ExecuteUbergraph_BPWepFireBeam_LaserSploder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWepFireBeam_LaserSploder_C::ExecuteUbergraph_BPWepFireBeam_LaserSploder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ExecuteUbergraph_BPWepFireBeam_LaserSploder");

	UBPWepFireBeam_LaserSploder_C_ExecuteUbergraph_BPWepFireBeam_LaserSploder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
