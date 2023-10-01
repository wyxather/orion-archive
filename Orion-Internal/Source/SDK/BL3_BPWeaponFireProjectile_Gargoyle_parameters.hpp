#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gargoyle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ReceiveBeginPlay
struct UBPWeaponFireProjectile_Gargoyle_C_ReceiveBeginPlay_Params
{
};

// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyReloadStart_Event
struct UBPWeaponFireProjectile_Gargoyle_C_NotifyReloadStart_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyUsed_Event
struct UBPWeaponFireProjectile_Gargoyle_C_NotifyUsed_Event_Params
{
};

// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle
struct UBPWeaponFireProjectile_Gargoyle_C_ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
