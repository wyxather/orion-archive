#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_Hyperion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Tediore_WeaponData
struct ABPWeap_SM_Hyperion_C_Tediore_WeaponData_Params
{
	float                                              DamageRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumMirvProjectiles;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LoadedAmmo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.HideWeapon
struct ABPWeap_SM_Hyperion_C_HideWeapon_Params
{
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ShowWeapon
struct ABPWeap_SM_Hyperion_C_ShowWeapon_Params
{
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ThrowWeapon
struct ABPWeap_SM_Hyperion_C_ThrowWeapon_Params
{
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.UserConstructionScript
struct ABPWeap_SM_Hyperion_C_UserConstructionScript_Params
{
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.WeaponAttached
struct ABPWeap_SM_Hyperion_C_WeaponAttached_Params
{
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Notify_ReloadStarted
struct ABPWeap_SM_Hyperion_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ExecuteUbergraph_BPWeap_SM_Hyperion
struct ABPWeap_SM_Hyperion_C_ExecuteUbergraph_BPWeap_SM_Hyperion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
