#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_COV_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle
struct ABPWeap_COV_BaseWeapon_C_DisableWaterBottle_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle
struct ABPWeap_COV_BaseWeapon_C_EnableWaterBottle_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle
struct ABPWeap_COV_BaseWeapon_C_GetRepairStyle_Params
{
	int                                                Param;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript
struct ABPWeap_COV_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_COV_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire
struct ABPWeap_COV_BaseWeapon_C_WeaponOnFire_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut
struct ABPWeap_COV_BaseWeapon_C_WeaponPutOut_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop
struct ABPWeap_COV_BaseWeapon_C_WeaponSmokeStop_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated
struct ABPWeap_COV_BaseWeapon_C_FirstPersonCreated_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart
struct ABPWeap_COV_BaseWeapon_C_EngineStart_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded
struct ABPWeap_COV_BaseWeapon_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks
struct ABPWeap_COV_BaseWeapon_C_StarterSparks_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering
struct ABPWeap_COV_BaseWeapon_C_WeaponStartWatering_Params
{
};

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon
struct ABPWeap_COV_BaseWeapon_C_ExecuteUbergraph_BPWeap_COV_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
