#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAction_Analyzer_Use_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.OnEnd
struct UBPAction_Analyzer_Use_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.Analyzer_Start
struct UBPAction_Analyzer_Use_C_Analyzer_Start_Params
{
};

// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.Analyzer_Stop
struct UBPAction_Analyzer_Use_C_Analyzer_Stop_Params
{
};

// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.ExecuteUbergraph_BPAction_Analyzer_Use
struct UBPAction_Analyzer_Use_C_ExecuteUbergraph_BPAction_Analyzer_Use_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
