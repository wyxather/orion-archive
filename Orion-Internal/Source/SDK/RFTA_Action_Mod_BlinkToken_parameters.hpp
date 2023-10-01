#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_BlinkToken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ForceStopTeleport
struct UAction_Mod_BlinkToken_C_ForceStopTeleport_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.CanBlink
struct UAction_Mod_BlinkToken_C_CanBlink_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.FilterIncomingDamage
struct UAction_Mod_BlinkToken_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.Set Player State
struct UAction_Mod_BlinkToken_C_Set_Player_State_Params
{
	struct FName*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.UpdateIndicator
struct UAction_Mod_BlinkToken_C_UpdateIndicator_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ClearIndicator
struct UAction_Mod_BlinkToken_C_ClearIndicator_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.SetPlayerVisibility
struct UAction_Mod_BlinkToken_C_SetPlayerVisibility_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.TryFinalizeTeleport
struct UAction_Mod_BlinkToken_C_TryFinalizeTeleport_Params
{
	struct FVector*                                    FinalLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.TryInitializeTeleport
struct UAction_Mod_BlinkToken_C_TryInitializeTeleport_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnActionStart
struct UAction_Mod_BlinkToken_C_OnActionStart_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnTick
struct UAction_Mod_BlinkToken_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.MulticastFinalizeLocation
struct UAction_Mod_BlinkToken_C_MulticastFinalizeLocation_Params
{
	class AActor**                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ServerFinalizeTeleport
struct UAction_Mod_BlinkToken_C_ServerFinalizeTeleport_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnActionStop
struct UAction_Mod_BlinkToken_C_OnActionStop_Params
{
};

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ExecuteUbergraph_Action_Mod_BlinkToken
struct UAction_Mod_BlinkToken_C_ExecuteUbergraph_Action_Mod_BlinkToken_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
