#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Zheitsev_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.ReceiveBeginPlay
struct UBPWeaponFireProjectile_Zheitsev_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.NotifyReloadStart_Event
struct UBPWeaponFireProjectile_Zheitsev_C_NotifyReloadStart_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev
struct UBPWeaponFireProjectile_Zheitsev_C_ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
