#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_MAL_SuckerPunch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.TryIdleAudio
struct ABPWeap_PS_MAL_SuckerPunch_C_TryIdleAudio_Params
{
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.UserConstructionScript
struct ABPWeap_PS_MAL_SuckerPunch_C_UserConstructionScript_Params
{
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponAttached
struct ABPWeap_PS_MAL_SuckerPunch_C_WeaponAttached_Params
{
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.EquipEventNotify
struct ABPWeap_PS_MAL_SuckerPunch_C_EquipEventNotify_Params
{
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponPutDownEvent
struct ABPWeap_PS_MAL_SuckerPunch_C_WeaponPutDownEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.OnKilledEnemy_Event
struct ABPWeap_PS_MAL_SuckerPunch_C_OnKilledEnemy_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.Notify_ReloadStarted
struct ABPWeap_PS_MAL_SuckerPunch_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch
struct ABPWeap_PS_MAL_SuckerPunch_C_ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
