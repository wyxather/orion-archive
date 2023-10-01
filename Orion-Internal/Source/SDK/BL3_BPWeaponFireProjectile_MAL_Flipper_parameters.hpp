#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_Flipper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ReceiveBeginPlay
struct UBPWeaponFireProjectile_MAL_Flipper_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedStarted_Event
struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedStarted_Event_Params
{
};

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedFinished_Event
struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedFinished_Event_Params
{
};

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsed_Event
struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsed_Event_Params
{
};

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyReloadStarted_Event
struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyReloadStarted_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper
struct UBPWeaponFireProjectile_MAL_Flipper_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
