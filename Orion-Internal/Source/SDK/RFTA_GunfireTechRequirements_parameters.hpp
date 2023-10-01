#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireTechRequirements_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GunfireTechRequirements.EntitlementComponent.ShowRevokedDialog
struct UEntitlementComponent_ShowRevokedDialog_Params
{
};

// Function GunfireTechRequirements.EntitlementComponent.RevokeLicense
struct UEntitlementComponent_RevokeLicense_Params
{
};

// Function GunfireTechRequirements.EntitlementComponent.HasEntitlement
struct UEntitlementComponent_HasEntitlement_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              NotifyIfUnlicensed;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.EntitlementComponent.GetRequiredLicense
struct UEntitlementComponent_GetRequiredLicense_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELicensedContent                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.EntitlementComponent.CheckLicense
struct UEntitlementComponent_CheckLicense_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.ShowSwitchPlatformGameProfile
struct UGunfireTechRequirementsImpl_ShowSwitchPlatformGameProfile_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.ShowOfflineMessage
struct UGunfireTechRequirementsImpl_ShowOfflineMessage_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetVoipEnabled
struct UGunfireTechRequirementsImpl_SetVoipEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetUsingMultiplayerFeatures
struct UGunfireTechRequirementsImpl_SetUsingMultiplayerFeatures_Params
{
	bool*                                              IsUsing;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetPresenceLocation
struct UGunfireTechRequirementsImpl_SetPresenceLocation_Params
{
	EPresenceContent*                                  Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetHasSeenLegalScreen
struct UGunfireTechRequirementsImpl_SetHasSeenLegalScreen_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.SetActiveController
struct UGunfireTechRequirementsImpl_SetActiveController_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.PrepForPressAnyKeyDialog
struct UGunfireTechRequirementsImpl_PrepForPressAnyKeyDialog_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.MuteVOIP
struct UGunfireTechRequirementsImpl_MuteVOIP_Params
{
	bool*                                              bMute;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.MainMenuLoaded
struct UGunfireTechRequirementsImpl_MainMenuLoaded_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipPTTEnabled
struct UGunfireTechRequirementsImpl_IsVoipPTTEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipMuted
struct UGunfireTechRequirementsImpl_IsVoipMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsVoipEnabled
struct UGunfireTechRequirementsImpl_IsVoipEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsUsingMultiplayerFeatures
struct UGunfireTechRequirementsImpl_IsUsingMultiplayerFeatures_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsProfileValid
struct UGunfireTechRequirementsImpl_IsProfileValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsPremiumServiceAvailable
struct UGunfireTechRequirementsImpl_IsPremiumServiceAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsFullGameAvailable
struct UGunfireTechRequirementsImpl_IsFullGameAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsControllerConnected
struct UGunfireTechRequirementsImpl_IsControllerConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.IsChatRestricted
struct UGunfireTechRequirementsImpl_IsChatRestricted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.HasLicense
struct UGunfireTechRequirementsImpl_HasLicense_Params
{
	ELicensedContent*                                  License;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.HasCheckedOnlinePrivilege
struct UGunfireTechRequirementsImpl_HasCheckedOnlinePrivilege_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetPresenceLocation
struct UGunfireTechRequirementsImpl_GetPresenceLocation_Params
{
	EPresenceContent                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetPlatformGameProfileUserName
struct UGunfireTechRequirementsImpl_GetPlatformGameProfileUserName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetLicensedContent
struct UGunfireTechRequirementsImpl_GetLicensedContent_Params
{
	TArray<ELicensedContent>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.GetGunfireTechRequirementsImpl
struct UGunfireTechRequirementsImpl_GetGunfireTechRequirementsImpl_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGunfireTechRequirementsImpl*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.EnableVoipPTT
struct UGunfireTechRequirementsImpl_EnableVoipPTT_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CustomLogin
struct UGunfireTechRequirementsImpl_CustomLogin_Params
{
	EAlternateLoginType*                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CheckOnlinePrivilege
struct UGunfireTechRequirementsImpl_CheckOnlinePrivilege_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CheckOnlineCommunicationPrivilege
struct UGunfireTechRequirementsImpl_CheckOnlineCommunicationPrivilege_Params
{
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.CanRequestCustomLogin
struct UGunfireTechRequirementsImpl_CanRequestCustomLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.AnyKeyPressed
struct UGunfireTechRequirementsImpl_AnyKeyPressed_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.AdjustCameraFoVForAspect
struct UGunfireTechRequirementsImpl_AdjustCameraFoVForAspect_Params
{
	bool*                                              bIgnoreFovSlider;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent**                           CameraComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImpl.AddStatusChangedEvent
struct UGunfireTechRequirementsImpl_AddStatusChangedEvent_Params
{
	ETechReqStatusChange*                              Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImplWin64.VoipHotkeyReleased
struct UGunfireTechRequirementsImplWin64_VoipHotkeyReleased_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireTechRequirements.GunfireTechRequirementsImplWin64.VoipHotkeyPressed
struct UGunfireTechRequirementsImplWin64_VoipHotkeyPressed_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
