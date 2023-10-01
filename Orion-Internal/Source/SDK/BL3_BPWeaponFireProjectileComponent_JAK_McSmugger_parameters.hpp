#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_McSmugger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnActivated
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnActivated_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.OnCausedDeath_Event
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnDeactivated
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnDeactivated_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.NotifyReloadStarted_Event
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_NotifyReloadStarted_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.PlayEffect
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_PlayEffect_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.StopEffect
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_StopEffect_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger
struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
