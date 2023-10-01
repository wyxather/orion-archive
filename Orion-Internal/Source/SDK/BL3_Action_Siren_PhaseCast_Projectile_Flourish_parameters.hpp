#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_PhaseCast_Projectile_Flourish_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.OnBegin
struct UAction_Siren_PhaseCast_Projectile_Flourish_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.OnEnd
struct UAction_Siren_PhaseCast_Projectile_Flourish_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.Unhide
struct UAction_Siren_PhaseCast_Projectile_Flourish_C_Unhide_Params
{
};

// Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.ExecuteUbergraph_Action_Siren_PhaseCast_Projectile_Flourish
struct UAction_Siren_PhaseCast_Projectile_Flourish_C_ExecuteUbergraph_Action_Siren_PhaseCast_Projectile_Flourish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
