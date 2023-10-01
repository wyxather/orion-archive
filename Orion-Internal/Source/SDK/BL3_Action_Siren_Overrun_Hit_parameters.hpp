#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_Overrun_Hit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_BlitzHit
struct UAction_Siren_Overrun_Hit_C_AN_BlitzHit_Params
{
};

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerEnd
struct UAction_Siren_Overrun_Hit_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnBeginBringUpWeapon
struct UAction_Siren_Overrun_Hit_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerBegin
struct UAction_Siren_Overrun_Hit_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_PerformBlitzFeedback_Hit
struct UAction_Siren_Overrun_Hit_C_AN_PerformBlitzFeedback_Hit_Params
{
};

// Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.ExecuteUbergraph_Action_Siren_Overrun_Hit
struct UAction_Siren_Overrun_Hit_C_ExecuteUbergraph_Action_Siren_Overrun_Hit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
