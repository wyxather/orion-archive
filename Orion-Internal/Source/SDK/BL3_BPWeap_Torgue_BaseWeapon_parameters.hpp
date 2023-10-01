#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Torgue_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles
struct ABPWeap_Torgue_BaseWeapon_C_DetonateActiveProjectiles_Params
{
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript
struct ABPWeap_Torgue_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_Torgue_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched
struct ABPWeap_Torgue_BaseWeapon_C_ModeSwitched_Params
{
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded
struct ABPWeap_Torgue_BaseWeapon_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles
struct ABPWeap_Torgue_BaseWeapon_C_DetonateProjectiles_Params
{
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown
struct ABPWeap_Torgue_BaseWeapon_C_Weapon_NotifyPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon
struct ABPWeap_Torgue_BaseWeapon_C_ExecuteUbergraph_BPWeap_Torgue_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
