#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_Jakobs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.UserConstructionScript
struct ABPWeap_PS_Jakobs_C_UserConstructionScript_Params
{
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.HideSpeedLoader
struct ABPWeap_PS_Jakobs_C_HideSpeedLoader_Params
{
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ReceiveBeginPlay
struct ABPWeap_PS_Jakobs_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.HideAmmo
struct ABPWeap_PS_Jakobs_C_HideAmmo_Params
{
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.Notify_ReloadEnded
struct ABPWeap_PS_Jakobs_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ResetCylinder
struct ABPWeap_PS_Jakobs_C_ResetCylinder_Params
{
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.Weapon_NotifyPutDown
struct ABPWeap_PS_Jakobs_C_Weapon_NotifyPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ExecuteUbergraph_BPWeap_PS_Jakobs
struct ABPWeap_PS_Jakobs_C_ExecuteUbergraph_BPWeap_PS_Jakobs_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
