#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_ATL_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitHoming
struct ABPWeap_ATL_BaseWeapon_C_InitHoming_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitMarkerGlow
struct ABPWeap_ATL_BaseWeapon_C_InitMarkerGlow_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitBaseGlow
struct ABPWeap_ATL_BaseWeapon_C_InitBaseGlow_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.AddHomingTarget
struct ABPWeap_ATL_BaseWeapon_C_AddHomingTarget_Params
{
	class AActor*                                      HomingTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.RemoveHomingTarget
struct ABPWeap_ATL_BaseWeapon_C_RemoveHomingTarget_Params
{
	class AActor*                                      HomingTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.UserConstructionScript
struct ABPWeap_ATL_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Initialize Elemental Emissive
struct ABPWeap_ATL_BaseWeapon_C_Initialize_Elemental_Emissive_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.NotifySwitchedMode_Event
struct ABPWeap_ATL_BaseWeapon_C_NotifySwitchedMode_Event_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.SetEmissiveData
struct ABPWeap_ATL_BaseWeapon_C_SetEmissiveData_Params
{
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                MarkerBaseColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                MarkerHighlightColor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HomingOverrideBase;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                NewParamHomingOverrideHighlight;                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReEvaluateEmissive
struct ABPWeap_ATL_BaseWeapon_C_ReEvaluateEmissive_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_ATL_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Notify_ReloadStarted
struct ABPWeap_ATL_BaseWeapon_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Weapon_NotifyPutDown
struct ABPWeap_ATL_BaseWeapon_C_Weapon_NotifyPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ExecuteUbergraph_BPWeap_ATL_BaseWeapon
struct ABPWeap_ATL_BaseWeapon_C_ExecuteUbergraph_BPWeap_ATL_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
