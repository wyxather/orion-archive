#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Enemy_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.SetMuzzleFlash
struct ABPWeap_Enemy_BaseWeapon_C_SetMuzzleFlash_Params
{
};

// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.SetDamageType
struct ABPWeap_Enemy_BaseWeapon_C_SetDamageType_Params
{
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.UserConstructionScript
struct ABPWeap_Enemy_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_Enemy_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.ExecuteUbergraph_BPWeap_Enemy_BaseWeapon
struct ABPWeap_Enemy_BaseWeapon_C_ExecuteUbergraph_BPWeap_Enemy_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
