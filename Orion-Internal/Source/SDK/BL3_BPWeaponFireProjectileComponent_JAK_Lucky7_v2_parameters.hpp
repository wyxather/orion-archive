#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.OnRep_ReelsBools
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_OnRep_ReelsBools_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadEnded_Event
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadEnded_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadStarted_Event
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadStarted_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnDeactivated
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnDeactivated_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnActivated
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnActivated_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsFX
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsFX_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsBonuses
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsBonuses_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SpinReels
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SpinReels_Params
{
};

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2
struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
