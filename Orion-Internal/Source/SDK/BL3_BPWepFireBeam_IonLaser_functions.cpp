// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireBeam_IonLaser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWepFireBeam_IonLaser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ReceiveBeginPlay");

	UBPWepFireBeam_IonLaser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_IonLaser_C::NotifyUseStarted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseStarted_Event");

	UBPWepFireBeam_IonLaser_C_NotifyUseStarted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_IonLaser_C::NotifyUseFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseFinished_Event");

	UBPWepFireBeam_IonLaser_C_NotifyUseFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.EvaluateShot
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireBeam_IonLaser_C::EvaluateShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.EvaluateShot");

	UBPWepFireBeam_IonLaser_C_EvaluateShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWepFireBeam_IonLaser_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.K2_OnDeactivated");

	UBPWepFireBeam_IonLaser_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ExecuteUbergraph_BPWepFireBeam_IonLaser
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWepFireBeam_IonLaser_C::ExecuteUbergraph_BPWepFireBeam_IonLaser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ExecuteUbergraph_BPWepFireBeam_IonLaser");

	UBPWepFireBeam_IonLaser_C_ExecuteUbergraph_BPWepFireBeam_IonLaser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
