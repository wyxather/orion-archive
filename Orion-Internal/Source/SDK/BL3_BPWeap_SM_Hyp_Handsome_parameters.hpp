#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_Hyp_Handsome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryAdvancingAudio
struct ABPWeap_SM_Hyp_Handsome_C_TryAdvancingAudio_Params
{
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryIdleAudio
struct ABPWeap_SM_Hyp_Handsome_C_TryIdleAudio_Params
{
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Tediore_WeaponData
struct ABPWeap_SM_Hyp_Handsome_C_Tediore_WeaponData_Params
{
	float                                              DamageRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumMirvProjectiles;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LoadedAmmo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.UserConstructionScript
struct ABPWeap_SM_Hyp_Handsome_C_UserConstructionScript_Params
{
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Notify_ReloadStarted
struct ABPWeap_SM_Hyp_Handsome_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponAttached
struct ABPWeap_SM_Hyp_Handsome_C_WeaponAttached_Params
{
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.EquipEventNotify
struct ABPWeap_SM_Hyp_Handsome_C_EquipEventNotify_Params
{
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponPutDownEvent
struct ABPWeap_SM_Hyp_Handsome_C_WeaponPutDownEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.OnKilledEnemy_Event
struct ABPWeap_SM_Hyp_Handsome_C_OnKilledEnemy_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.ExecuteUbergraph_BPWeap_SM_Hyp_Handsome
struct ABPWeap_SM_Hyp_Handsome_C_ExecuteUbergraph_BPWeap_SM_Hyp_Handsome_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
