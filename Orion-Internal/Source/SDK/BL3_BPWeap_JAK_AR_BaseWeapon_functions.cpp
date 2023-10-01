// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_JAK_AR_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_JAK_AR_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.UserConstructionScript");

	ABPWeap_JAK_AR_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_JAK_AR_BaseWeapon_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.Notify_ReloadStarted");

	ABPWeap_JAK_AR_BaseWeapon_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_JAK_AR_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_JAK_AR_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.AttachAudioComponentToClip
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_JAK_AR_BaseWeapon_C::AttachAudioComponentToClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.AttachAudioComponentToClip");

	ABPWeap_JAK_AR_BaseWeapon_C_AttachAudioComponentToClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_JAK_AR_BaseWeapon_C::ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon");

	ABPWeap_JAK_AR_BaseWeapon_C_ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
