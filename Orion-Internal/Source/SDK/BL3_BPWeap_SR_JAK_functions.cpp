// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_JAK_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_JAK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.UserConstructionScript");

	ABPWeap_SR_JAK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_SR_JAK_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ReceiveBeginPlay");

	ABPWeap_SR_JAK_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideMag
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_JAK_C::HideMag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideMag");

	ABPWeap_SR_JAK_C_HideMag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ShowAmmo
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_JAK_C::ShowAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ShowAmmo");

	ABPWeap_SR_JAK_C_ShowAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideAmmo
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_JAK_C::HideAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideAmmo");

	ABPWeap_SR_JAK_C_HideAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Fire_Rotate
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_JAK_C::Fire_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Fire_Rotate");

	ABPWeap_SR_JAK_C_Fire_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.RotationReset
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_JAK_C::RotationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.RotationReset");

	ABPWeap_SR_JAK_C_RotationReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SR_JAK_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Notify_ReloadEnded");

	ABPWeap_SR_JAK_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ExecuteUbergraph_BPWeap_SR_JAK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SR_JAK_C::ExecuteUbergraph_BPWeap_SR_JAK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ExecuteUbergraph_BPWeap_SR_JAK");

	ABPWeap_SR_JAK_C_ExecuteUbergraph_BPWeap_SR_JAK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
