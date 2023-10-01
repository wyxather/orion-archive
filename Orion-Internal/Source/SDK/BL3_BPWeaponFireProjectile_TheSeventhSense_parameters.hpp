#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_TheSeventhSense_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ReceiveBeginPlay
struct UBPWeaponFireProjectile_TheSeventhSense_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.NotifyReloadStart_Event
struct UBPWeaponFireProjectile_TheSeventhSense_C_NotifyReloadStart_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.HomeOnReload
struct UBPWeaponFireProjectile_TheSeventhSense_C_HomeOnReload_Params
{
	class ULightProjectile*                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense
struct UBPWeaponFireProjectile_TheSeventhSense_C_ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
