#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Quickdraw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTime
struct UBPWeaponFireProjectile_Quickdraw_C_ReloadTime_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ApplyShotModAndReload
struct UBPWeaponFireProjectile_Quickdraw_C_ApplyShotModAndReload_Params
{
};

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTimer
struct UBPWeaponFireProjectile_Quickdraw_C_ReloadTimer_Params
{
};

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnActivated
struct UBPWeaponFireProjectile_Quickdraw_C_K2_OnActivated_Params
{
};

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnDeactivated
struct UBPWeaponFireProjectile_Quickdraw_C_K2_OnDeactivated_Params
{
};

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReceiveEndPlay
struct UBPWeaponFireProjectile_Quickdraw_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw
struct UBPWeaponFireProjectile_Quickdraw_C_ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
