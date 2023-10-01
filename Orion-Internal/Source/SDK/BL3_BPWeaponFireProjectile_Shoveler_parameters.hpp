#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Shoveler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ReceiveBeginPlay
struct UBPWeaponFireProjectile_Shoveler_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.NotifyReloadStart_Event
struct UBPWeaponFireProjectile_Shoveler_C_NotifyReloadStart_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.K2_OnDeactivated
struct UBPWeaponFireProjectile_Shoveler_C_K2_OnDeactivated_Params
{
};

// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ExecuteUbergraph_BPWeaponFireProjectile_Shoveler
struct UBPWeaponFireProjectile_Shoveler_C_ExecuteUbergraph_BPWeaponFireProjectile_Shoveler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
