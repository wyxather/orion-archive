#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_JAK_AR_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.UserConstructionScript
struct ABPWeap_JAK_AR_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.Notify_ReloadStarted
struct ABPWeap_JAK_AR_BaseWeapon_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_JAK_AR_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.AttachAudioComponentToClip
struct ABPWeap_JAK_AR_BaseWeapon_C_AttachAudioComponentToClip_Params
{
};

// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon
struct ABPWeap_JAK_AR_BaseWeapon_C_ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
