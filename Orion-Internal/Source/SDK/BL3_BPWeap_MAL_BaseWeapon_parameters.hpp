#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_MAL_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.GetChargePercent
struct ABPWeap_MAL_BaseWeapon_C_GetChargePercent_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.UserConstructionScript
struct ABPWeap_MAL_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__FinishedFunc
struct ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__FinishedFunc_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__UpdateFunc
struct ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__UpdateFunc_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimaryElementalData
struct ABPWeap_MAL_BaseWeapon_C_SetPrimaryElementalData_Params
{
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToPrimary
struct ABPWeap_MAL_BaseWeapon_C_OnSwitchToPrimary_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToSecondary
struct ABPWeap_MAL_BaseWeapon_C_OnSwitchToSecondary_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Initialize Elemental Emissive
struct ABPWeap_MAL_BaseWeapon_C_Initialize_Elemental_Emissive_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimary
struct ABPWeap_MAL_BaseWeapon_C_SetPrimary_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondary
struct ABPWeap_MAL_BaseWeapon_C_SetSecondary_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.K2_OnWeaponSkinApplied
struct ABPWeap_MAL_BaseWeapon_C_K2_OnWeaponSkinApplied_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_MAL_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Notify_ReloadStarted
struct ABPWeap_MAL_BaseWeapon_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Weapon_NotifyEquipped
struct ABPWeap_MAL_BaseWeapon_C_Weapon_NotifyEquipped_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Event_ModeSwitched
struct ABPWeap_MAL_BaseWeapon_C_Event_ModeSwitched_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondaryElementalData
struct ABPWeap_MAL_BaseWeapon_C_SetSecondaryElementalData_Params
{
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.PutDown_Event
struct ABPWeap_MAL_BaseWeapon_C_PutDown_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.WeaponAttached
struct ABPWeap_MAL_BaseWeapon_C_WeaponAttached_Params
{
};

// Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ExecuteUbergraph_BPWeap_MAL_BaseWeapon
struct ABPWeap_MAL_BaseWeapon_C_ExecuteUbergraph_BPWeap_MAL_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
