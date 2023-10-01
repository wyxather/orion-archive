#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_TheNothing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ReceiveBeginPlay
struct UBPWeaponFireProjectile_TheNothing_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.NotifyUsed_Event
struct UBPWeaponFireProjectile_TheNothing_C_NotifyUsed_Event_Params
{
};

// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.FireProjectiles
struct UBPWeaponFireProjectile_TheNothing_C_FireProjectiles_Params
{
	class UClass*                                      Data_Blueprint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SampleCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ExecuteUbergraph_BPWeaponFireProjectile_TheNothing
struct UBPWeaponFireProjectile_TheNothing_C_ExecuteUbergraph_BPWeaponFireProjectile_TheNothing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
