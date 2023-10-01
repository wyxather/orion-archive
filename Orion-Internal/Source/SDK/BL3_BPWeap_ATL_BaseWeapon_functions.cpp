// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_ATL_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitHoming
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::InitHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitHoming");

	ABPWeap_ATL_BaseWeapon_C_InitHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitMarkerGlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::InitMarkerGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitMarkerGlow");

	ABPWeap_ATL_BaseWeapon_C_InitMarkerGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitBaseGlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::InitBaseGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitBaseGlow");

	ABPWeap_ATL_BaseWeapon_C_InitBaseGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.AddHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HomingTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_ATL_BaseWeapon_C::AddHomingTarget(class AActor* HomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.AddHomingTarget");

	ABPWeap_ATL_BaseWeapon_C_AddHomingTarget_Params params;
	params.HomingTarget = HomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.RemoveHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HomingTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_ATL_BaseWeapon_C::RemoveHomingTarget(class AActor* HomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.RemoveHomingTarget");

	ABPWeap_ATL_BaseWeapon_C_RemoveHomingTarget_Params params;
	params.HomingTarget = HomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.UserConstructionScript");

	ABPWeap_ATL_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Initialize Elemental Emissive
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::Initialize_Elemental_Emissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Initialize Elemental Emissive");

	ABPWeap_ATL_BaseWeapon_C_Initialize_Elemental_Emissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.NotifySwitchedMode_Event
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::NotifySwitchedMode_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.NotifySwitchedMode_Event");

	ABPWeap_ATL_BaseWeapon_C_NotifySwitchedMode_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.SetEmissiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            MarkerBaseColor                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            MarkerHighlightColor           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HomingOverrideBase             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            NewParamHomingOverrideHighlight (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPWeap_ATL_BaseWeapon_C::SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.SetEmissiveData");

	ABPWeap_ATL_BaseWeapon_C_SetEmissiveData_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;
	params.MarkerBaseColor = MarkerBaseColor;
	params.MarkerHighlightColor = MarkerHighlightColor;
	params.HomingOverrideBase = HomingOverrideBase;
	params.NewParamHomingOverrideHighlight = NewParamHomingOverrideHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReEvaluateEmissive
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::ReEvaluateEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReEvaluateEmissive");

	ABPWeap_ATL_BaseWeapon_C_ReEvaluateEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_ATL_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_ATL_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_ATL_BaseWeapon_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Notify_ReloadStarted");

	ABPWeap_ATL_BaseWeapon_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_ATL_BaseWeapon_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Weapon_NotifyPutDown");

	ABPWeap_ATL_BaseWeapon_C_Weapon_NotifyPutDown_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ExecuteUbergraph_BPWeap_ATL_BaseWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_ATL_BaseWeapon_C::ExecuteUbergraph_BPWeap_ATL_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ExecuteUbergraph_BPWeap_ATL_BaseWeapon");

	ABPWeap_ATL_BaseWeapon_C_ExecuteUbergraph_BPWeap_ATL_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
