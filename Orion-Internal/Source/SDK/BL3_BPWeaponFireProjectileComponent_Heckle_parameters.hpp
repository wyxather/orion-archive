#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Heckle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReceiveBeginPlay
struct UBPWeaponFireProjectileComponent_Heckle_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReloadStarted
struct UBPWeaponFireProjectileComponent_Heckle_C_ReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.PowersCombined
struct UBPWeaponFireProjectileComponent_Heckle_C_PowersCombined_Params
{
};

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnDeactivated
struct UBPWeaponFireProjectileComponent_Heckle_C_K2_OnDeactivated_Params
{
};

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.CheckPlayers
struct UBPWeaponFireProjectileComponent_Heckle_C_CheckPlayers_Params
{
};

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnActivated
struct UBPWeaponFireProjectileComponent_Heckle_C_K2_OnActivated_Params
{
};

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle
struct UBPWeaponFireProjectileComponent_Heckle_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
