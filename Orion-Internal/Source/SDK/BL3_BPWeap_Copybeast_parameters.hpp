#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Copybeast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.Tediore_WeaponData
struct ABPWeap_Copybeast_C_Tediore_WeaponData_Params
{
	float                                              DamageRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumMirvProjectiles;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LoadedAmmo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateActiveProjectiles
struct ABPWeap_Copybeast_C_DetonateActiveProjectiles_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.HideWeapon
struct ABPWeap_Copybeast_C_HideWeapon_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ShowWeapon
struct ABPWeap_Copybeast_C_ShowWeapon_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ThrowWeapon
struct ABPWeap_Copybeast_C_ThrowWeapon_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.UserConstructionScript
struct ABPWeap_Copybeast_C_UserConstructionScript_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.WeaponAttached
struct ABPWeap_Copybeast_C_WeaponAttached_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.Notify_ReloadStarted
struct ABPWeap_Copybeast_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ReceiveBeginPlay
struct ABPWeap_Copybeast_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.Weapon_NotifyPutDown
struct ABPWeap_Copybeast_C_Weapon_NotifyPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateProjectiles
struct ABPWeap_Copybeast_C_DetonateProjectiles_Params
{
};

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ExecuteUbergraph_BPWeap_Copybeast
struct ABPWeap_Copybeast_C_ExecuteUbergraph_BPWeap_Copybeast_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
