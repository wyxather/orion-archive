#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Tediore_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData
struct ABPWeap_Tediore_BaseWeapon_C_Tediore_WeaponData_Params
{
	float                                              DamageRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumMirvProjectiles;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LoadedAmmo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs
struct ABPWeap_Tediore_BaseWeapon_C_OnRep_HideLegs_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon
struct ABPWeap_Tediore_BaseWeapon_C_TedioreShowWeapon_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon
struct ABPWeap_Tediore_BaseWeapon_C_TedioreHideWeapon_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon
struct ABPWeap_Tediore_BaseWeapon_C_TedioreThrowWeapon_Params
{
	class AActor*                                      ThrownProjectile;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript
struct ABPWeap_Tediore_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_Tediore_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted
struct ABPWeap_Tediore_BaseWeapon_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached
struct ABPWeap_Tediore_BaseWeapon_C_WeaponAttached_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand
struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeOverhand_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL
struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideRL_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand
struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeUnderhand_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR
struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideLR_Params
{
};

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon
struct ABPWeap_Tediore_BaseWeapon_C_ExecuteUbergraph_BPWeap_Tediore_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
