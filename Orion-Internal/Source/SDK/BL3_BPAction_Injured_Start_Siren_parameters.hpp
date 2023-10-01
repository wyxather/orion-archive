#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAction_Injured_Start_Siren_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.OnServerEnd
struct UBPAction_Injured_Start_Siren_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.FadeOutArms
struct UBPAction_Injured_Start_Siren_C_FadeOutArms_Params
{
};

// Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.ExecuteUbergraph_BPAction_Injured_Start_Siren
struct UBPAction_Injured_Start_Siren_C_ExecuteUbergraph_BPAction_Injured_Start_Siren_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
