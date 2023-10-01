#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_TOR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.HideMoonClip
struct ABPWeap_PS_TOR_C_HideMoonClip_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ShowMoonClip
struct ABPWeap_PS_TOR_C_ShowMoonClip_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.UserConstructionScript
struct ABPWeap_PS_TOR_C_UserConstructionScript_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Notify_ReloadEnded
struct ABPWeap_PS_TOR_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ShowAmmo
struct ABPWeap_PS_TOR_C_ShowAmmo_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ReceiveBeginPlay
struct ABPWeap_PS_TOR_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.HideSpeedLoader
struct ABPWeap_PS_TOR_C_HideSpeedLoader_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ResetCylinder
struct ABPWeap_PS_TOR_C_ResetCylinder_Params
{
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Weapon_NotifyPutDown
struct ABPWeap_PS_TOR_C_Weapon_NotifyPutDown_Params
{
	class AWeapon**                                    EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ExecuteUbergraph_BPWeap_PS_TOR
struct ABPWeap_PS_TOR_C_ExecuteUbergraph_BPWeap_PS_TOR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
