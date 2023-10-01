#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Smog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.GetShotLightProjectileData
struct UBPWeaponFireProjectile_Smog_C_GetShotLightProjectileData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.OnCausedDeath_Event
struct UBPWeaponFireProjectile_Smog_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnActivated
struct UBPWeaponFireProjectile_Smog_C_K2_OnActivated_Params
{
};

// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnDeactivated
struct UBPWeaponFireProjectile_Smog_C_K2_OnDeactivated_Params
{
};

// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.ExecuteUbergraph_BPWeaponFireProjectile_Smog
struct UBPWeaponFireProjectile_Smog_C_ExecuteUbergraph_BPWeaponFireProjectile_Smog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
