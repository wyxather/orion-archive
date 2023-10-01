#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_PI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryBuiltStacks
struct UBPWeaponFireProjectileComponent_PI_C_QueryBuiltStacks_Params
{
	unsigned char                                      Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfInstances;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryActiveBonus
struct UBPWeaponFireProjectileComponent_PI_C_QueryActiveBonus_Params
{
	int                                                NumberOfInstances;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.GetShotLightProjectileData
struct UBPWeaponFireProjectileComponent_PI_C_GetShotLightProjectileData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
