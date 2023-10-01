#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_PhaseOrb_Flourish_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C.OnEnd
struct UAction_Siren_PhaseOrb_Flourish_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C.ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish
struct UAction_Siren_PhaseOrb_Flourish_C_ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
