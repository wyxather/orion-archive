// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireBeam_IceBurger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWepFireBeam_IceBurger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ReceiveBeginPlay");

	UBPWepFireBeam_IceBurger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_IceBurger_C::NotifyUseStarted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseStarted_Event");

	UBPWepFireBeam_IceBurger_C_NotifyUseStarted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_IceBurger_C::NotifyUseFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseFinished_Event");

	UBPWepFireBeam_IceBurger_C_NotifyUseFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.EvaluateShot
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_IceBurger_C::EvaluateShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.EvaluateShot");

	UBPWepFireBeam_IceBurger_C_EvaluateShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ExecuteUbergraph_BPWepFireBeam_IceBurger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWepFireBeam_IceBurger_C::ExecuteUbergraph_BPWepFireBeam_IceBurger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ExecuteUbergraph_BPWepFireBeam_IceBurger");

	UBPWepFireBeam_IceBurger_C_ExecuteUbergraph_BPWepFireBeam_IceBurger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
