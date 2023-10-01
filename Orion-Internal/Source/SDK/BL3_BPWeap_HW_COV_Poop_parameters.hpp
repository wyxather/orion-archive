#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_COV_Poop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.TryIdleAudio
struct ABPWeap_HW_COV_Poop_C_TryIdleAudio_Params
{
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.UserConstructionScript
struct ABPWeap_HW_COV_Poop_C_UserConstructionScript_Params
{
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.Notify_ReloadStarted
struct ABPWeap_HW_COV_Poop_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponAttached
struct ABPWeap_HW_COV_Poop_C_WeaponAttached_Params
{
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.EquipEventNotify
struct ABPWeap_HW_COV_Poop_C_EquipEventNotify_Params
{
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponPutDownEvent
struct ABPWeap_HW_COV_Poop_C_WeaponPutDownEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.OnKilledEnemy_Event
struct ABPWeap_HW_COV_Poop_C_OnKilledEnemy_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.ExecuteUbergraph_BPWeap_HW_COV_Poop
struct ABPWeap_HW_COV_Poop_C_ExecuteUbergraph_BPWeap_HW_COV_Poop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
