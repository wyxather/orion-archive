#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_ATL_DoubleTap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.GetLockedTarget
struct UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_GetLockedTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.ReceiveBeginPlay
struct UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.Notify_WeaponFired
struct UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_Notify_WeaponFired_Params
{
};

// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.NotifyReloadStart_Event
struct UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_NotifyReloadStart_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap
struct UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
