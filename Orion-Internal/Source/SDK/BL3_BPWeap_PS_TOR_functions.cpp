// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_TOR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.HideMoonClip
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_TOR_C::HideMoonClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.HideMoonClip");

	ABPWeap_PS_TOR_C_HideMoonClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ShowMoonClip
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_TOR_C::ShowMoonClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ShowMoonClip");

	ABPWeap_PS_TOR_C_ShowMoonClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_TOR_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.UserConstructionScript");

	ABPWeap_PS_TOR_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_TOR_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Notify_ReloadEnded");

	ABPWeap_PS_TOR_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ShowAmmo
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_TOR_C::ShowAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ShowAmmo");

	ABPWeap_PS_TOR_C_ShowAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_PS_TOR_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ReceiveBeginPlay");

	ABPWeap_PS_TOR_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.HideSpeedLoader
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_TOR_C::HideSpeedLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.HideSpeedLoader");

	ABPWeap_PS_TOR_C_HideSpeedLoader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ResetCylinder
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_TOR_C::ResetCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ResetCylinder");

	ABPWeap_PS_TOR_C_ResetCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon**                EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_TOR_C::Weapon_NotifyPutDown(class AWeapon** EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Weapon_NotifyPutDown");

	ABPWeap_PS_TOR_C_Weapon_NotifyPutDown_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ExecuteUbergraph_BPWeap_PS_TOR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_TOR_C::ExecuteUbergraph_BPWeap_PS_TOR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ExecuteUbergraph_BPWeap_PS_TOR");

	ABPWeap_PS_TOR_C_ExecuteUbergraph_BPWeap_PS_TOR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
