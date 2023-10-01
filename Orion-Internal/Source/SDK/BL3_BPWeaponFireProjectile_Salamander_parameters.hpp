#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Salamander_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.SetReadyForSplat
struct UBPWeaponFireProjectile_Salamander_C_SetReadyForSplat_Params
{
	bool                                               bReadyForSplat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.GetShotLightProjectileData
struct UBPWeaponFireProjectile_Salamander_C_GetShotLightProjectileData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
