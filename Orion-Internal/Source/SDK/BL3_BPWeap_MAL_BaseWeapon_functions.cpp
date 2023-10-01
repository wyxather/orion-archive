// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_MAL_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.GetChargePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_MAL_BaseWeapon_C::GetChargePercent(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.GetChargePercent");

	ABPWeap_MAL_BaseWeapon_C_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.UserConstructionScript");

	ABPWeap_MAL_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__FinishedFunc
// (BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::ElementalInterpolationTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__FinishedFunc");

	ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__UpdateFunc
// (BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::ElementalInterpolationTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__UpdateFunc");

	ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimaryElementalData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPWeap_MAL_BaseWeapon_C::SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimaryElementalData");

	ABPWeap_MAL_BaseWeapon_C_SetPrimaryElementalData_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToPrimary
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::OnSwitchToPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToPrimary");

	ABPWeap_MAL_BaseWeapon_C_OnSwitchToPrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToSecondary
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::OnSwitchToSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToSecondary");

	ABPWeap_MAL_BaseWeapon_C_OnSwitchToSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Initialize Elemental Emissive
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::Initialize_Elemental_Emissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Initialize Elemental Emissive");

	ABPWeap_MAL_BaseWeapon_C_Initialize_Elemental_Emissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimary
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::SetPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimary");

	ABPWeap_MAL_BaseWeapon_C_SetPrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondary
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::SetSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondary");

	ABPWeap_MAL_BaseWeapon_C_SetSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.K2_OnWeaponSkinApplied
// (Event, Protected, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::K2_OnWeaponSkinApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.K2_OnWeaponSkinApplied");

	ABPWeap_MAL_BaseWeapon_C_K2_OnWeaponSkinApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_MAL_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_MAL_BaseWeapon_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Notify_ReloadStarted");

	ABPWeap_MAL_BaseWeapon_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Weapon_NotifyEquipped
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::Weapon_NotifyEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Weapon_NotifyEquipped");

	ABPWeap_MAL_BaseWeapon_C_Weapon_NotifyEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Event_ModeSwitched
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::Event_ModeSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Event_ModeSwitched");

	ABPWeap_MAL_BaseWeapon_C_Event_ModeSwitched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondaryElementalData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPWeap_MAL_BaseWeapon_C::SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondaryElementalData");

	ABPWeap_MAL_BaseWeapon_C_SetSecondaryElementalData_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.PutDown_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_MAL_BaseWeapon_C::PutDown_Event(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.PutDown_Event");

	ABPWeap_MAL_BaseWeapon_C_PutDown_Event_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_MAL_BaseWeapon_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.WeaponAttached");

	ABPWeap_MAL_BaseWeapon_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ExecuteUbergraph_BPWeap_MAL_BaseWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_MAL_BaseWeapon_C::ExecuteUbergraph_BPWeap_MAL_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ExecuteUbergraph_BPWeap_MAL_BaseWeapon");

	ABPWeap_MAL_BaseWeapon_C_ExecuteUbergraph_BPWeap_MAL_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
