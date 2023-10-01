// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireTechRequirements_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunfireTechRequirements.EntitlementComponent.ShowRevokedDialog
// 00007FF6F831F660
// (Final, Native, Public, BlueprintCallable)

void UEntitlementComponent::ShowRevokedDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.EntitlementComponent.ShowRevokedDialog");

	UEntitlementComponent_ShowRevokedDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.EntitlementComponent.RevokeLicense
// 00007FF6F831F3E0
// (Native, Event, Public, BlueprintEvent)

void UEntitlementComponent::RevokeLicense()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.EntitlementComponent.RevokeLicense");

	UEntitlementComponent_RevokeLicense_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.EntitlementComponent.HasEntitlement
// 00007FF6F831F020
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          NotifyIfUnlicensed             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEntitlementComponent::STATIC_HasEntitlement(class UObject** WorldContextObject, class UObject** Object, bool* NotifyIfUnlicensed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.EntitlementComponent.HasEntitlement");

	UEntitlementComponent_HasEntitlement_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Object = Object;
	params.NotifyIfUnlicensed = NotifyIfUnlicensed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.EntitlementComponent.GetRequiredLicense
// 00007FF6F831EF80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ELicensedContent               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ELicensedContent UEntitlementComponent::STATIC_GetRequiredLicense(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.EntitlementComponent.GetRequiredLicense");

	UEntitlementComponent_GetRequiredLicense_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.EntitlementComponent.CheckLicense
// 00007FF6F831EC40
// (Final, Native, Protected)

void UEntitlementComponent::CheckLicense()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.EntitlementComponent.CheckLicense");

	UEntitlementComponent_CheckLicense_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.ShowSwitchPlatformGameProfile
// 00007FF6F82E8520
// (Native, Public, BlueprintCallable)

void UGunfireTechRequirementsImpl::ShowSwitchPlatformGameProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.ShowSwitchPlatformGameProfile");

	UGunfireTechRequirementsImpl_ShowSwitchPlatformGameProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.ShowOfflineMessage
// 00007FF6F831F640
// (Native, Public, BlueprintCallable)

void UGunfireTechRequirementsImpl::ShowOfflineMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.ShowOfflineMessage");

	UGunfireTechRequirementsImpl_ShowOfflineMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetVoipEnabled
// 00007FF6F831F5B0
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::SetVoipEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetVoipEnabled");

	UGunfireTechRequirementsImpl_SetVoipEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetUsingMultiplayerFeatures
// 00007FF6F831F530
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsUsing                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::SetUsingMultiplayerFeatures(bool* IsUsing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetUsingMultiplayerFeatures");

	UGunfireTechRequirementsImpl_SetUsingMultiplayerFeatures_Params params;
	params.IsUsing = IsUsing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetPresenceLocation
// 00007FF6F831F4B0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPresenceContent*              Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::SetPresenceLocation(EPresenceContent* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetPresenceLocation");

	UGunfireTechRequirementsImpl_SetPresenceLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetHasSeenLegalScreen
// 00007FF6F831F490
// (Native, Public, BlueprintCallable)

void UGunfireTechRequirementsImpl::SetHasSeenLegalScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetHasSeenLegalScreen");

	UGunfireTechRequirementsImpl_SetHasSeenLegalScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetActiveController
// 00007FF6F831F400
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::SetActiveController(class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetActiveController");

	UGunfireTechRequirementsImpl_SetActiveController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.PrepForPressAnyKeyDialog
// 00007FF6F831F3C0
// (Native, Protected)

void UGunfireTechRequirementsImpl::PrepForPressAnyKeyDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.PrepForPressAnyKeyDialog");

	UGunfireTechRequirementsImpl_PrepForPressAnyKeyDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.MuteVOIP
// 00007FF6F831F330
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bMute                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::MuteVOIP(bool* bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.MuteVOIP");

	UGunfireTechRequirementsImpl_MuteVOIP_Params params;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.MainMenuLoaded
// 00007FF6F831F310
// (Native, Public, BlueprintCallable)

void UGunfireTechRequirementsImpl::MainMenuLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.MainMenuLoaded");

	UGunfireTechRequirementsImpl_MainMenuLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipPTTEnabled
// 00007FF6F831F2F0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsVoipPTTEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipPTTEnabled");

	UGunfireTechRequirementsImpl_IsVoipPTTEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipMuted
// 00007FF6F831F2D0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsVoipMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipMuted");

	UGunfireTechRequirementsImpl_IsVoipMuted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipEnabled
// 00007FF6F831F2B0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsVoipEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipEnabled");

	UGunfireTechRequirementsImpl_IsVoipEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsUsingMultiplayerFeatures
// 00007FF6F831F290
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsUsingMultiplayerFeatures()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsUsingMultiplayerFeatures");

	UGunfireTechRequirementsImpl_IsUsingMultiplayerFeatures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsProfileValid
// 00007FF6F831F260
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsProfileValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsProfileValid");

	UGunfireTechRequirementsImpl_IsProfileValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsPremiumServiceAvailable
// 00007FF6F831F240
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsPremiumServiceAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsPremiumServiceAvailable");

	UGunfireTechRequirementsImpl_IsPremiumServiceAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsFullGameAvailable
// 00007FF6F831F220
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsFullGameAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsFullGameAvailable");

	UGunfireTechRequirementsImpl_IsFullGameAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsControllerConnected
// 00007FF6F831F1F0
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsControllerConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsControllerConnected");

	UGunfireTechRequirementsImpl_IsControllerConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsChatRestricted
// 00007FF6F831F1D0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::IsChatRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsChatRestricted");

	UGunfireTechRequirementsImpl_IsChatRestricted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.HasLicense
// 00007FF6F831F110
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELicensedContent*              License                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::HasLicense(ELicensedContent* License)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.HasLicense");

	UGunfireTechRequirementsImpl_HasLicense_Params params;
	params.License = License;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.HasCheckedOnlinePrivilege
// 00007FF6F831F000
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::HasCheckedOnlinePrivilege()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.HasCheckedOnlinePrivilege");

	UGunfireTechRequirementsImpl_HasCheckedOnlinePrivilege_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetPresenceLocation
// 00007FF6F831EF60
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPresenceContent               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EPresenceContent UGunfireTechRequirementsImpl::GetPresenceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetPresenceLocation");

	UGunfireTechRequirementsImpl_GetPresenceLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetPlatformGameProfileUserName
// 00007FF6F831EED0
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGunfireTechRequirementsImpl::GetPlatformGameProfileUserName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetPlatformGameProfileUserName");

	UGunfireTechRequirementsImpl_GetPlatformGameProfileUserName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetLicensedContent
// 00007FF6F831EE10
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<ELicensedContent>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<ELicensedContent> UGunfireTechRequirementsImpl::GetLicensedContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetLicensedContent");

	UGunfireTechRequirementsImpl_GetLicensedContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetGunfireTechRequirementsImpl
// 00007FF6F831ED90
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGunfireTechRequirementsImpl* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGunfireTechRequirementsImpl* UGunfireTechRequirementsImpl::STATIC_GetGunfireTechRequirementsImpl(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetGunfireTechRequirementsImpl");

	UGunfireTechRequirementsImpl_GetGunfireTechRequirementsImpl_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.EnableVoipPTT
// 00007FF6F831ED00
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::EnableVoipPTT(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.EnableVoipPTT");

	UGunfireTechRequirementsImpl_EnableVoipPTT_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CustomLogin
// 00007FF6F831EC80
// (Native, Public, BlueprintCallable)
// Parameters:
// EAlternateLoginType*           Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::CustomLogin(EAlternateLoginType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.CustomLogin");

	UGunfireTechRequirementsImpl_CustomLogin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CheckOnlinePrivilege
// 00007FF6F831EC60
// (Native, Public, BlueprintCallable)

void UGunfireTechRequirementsImpl::CheckOnlinePrivilege()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.CheckOnlinePrivilege");

	UGunfireTechRequirementsImpl_CheckOnlinePrivilege_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CheckOnlineCommunicationPrivilege
// 00007FF6F82E85C0
// (Native, Public, BlueprintCallable)

void UGunfireTechRequirementsImpl::CheckOnlineCommunicationPrivilege()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.CheckOnlineCommunicationPrivilege");

	UGunfireTechRequirementsImpl_CheckOnlineCommunicationPrivilege_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CanRequestCustomLogin
// 00007FF6F831EC10
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGunfireTechRequirementsImpl::CanRequestCustomLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.CanRequestCustomLogin");

	UGunfireTechRequirementsImpl_CanRequestCustomLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.AnyKeyPressed
// 00007FF6F831EB80
// (Native, Protected)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::AnyKeyPressed(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.AnyKeyPressed");

	UGunfireTechRequirementsImpl_AnyKeyPressed_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.AdjustCameraFoVForAspect
// 00007FF6F831EAB0
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bIgnoreFovSlider               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraComponent**       CameraComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::AdjustCameraFoVForAspect(bool* bIgnoreFovSlider, class UCameraComponent** CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.AdjustCameraFoVForAspect");

	UGunfireTechRequirementsImpl_AdjustCameraFoVForAspect_Params params;
	params.bIgnoreFovSlider = bIgnoreFovSlider;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImpl.AddStatusChangedEvent
// 00007FF6F831E9F0
// (Native, Public, BlueprintCallable)
// Parameters:
// ETechReqStatusChange*          Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImpl::AddStatusChangedEvent(ETechReqStatusChange* Event, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImpl.AddStatusChangedEvent");

	UGunfireTechRequirementsImpl_AddStatusChangedEvent_Params params;
	params.Event = Event;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImplWin64.VoipHotkeyReleased
// 00007FF6F831F700
// (Final, Native, Protected)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImplWin64::VoipHotkeyReleased(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImplWin64.VoipHotkeyReleased");

	UGunfireTechRequirementsImplWin64_VoipHotkeyReleased_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunfireTechRequirements.GunfireTechRequirementsImplWin64.VoipHotkeyPressed
// 00007FF6F831F680
// (Final, Native, Protected)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireTechRequirementsImplWin64::VoipHotkeyPressed(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirements.GunfireTechRequirementsImplWin64.VoipHotkeyPressed");

	UGunfireTechRequirementsImplWin64_VoipHotkeyPressed_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
