#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_PsychoInfectedOnes_Cleaver_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.OnBegin
struct UALoop_PsychoInfectedOnes_Cleaver_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.OnEnd
struct UALoop_PsychoInfectedOnes_Cleaver_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.Notify_Feast_Start
struct UALoop_PsychoInfectedOnes_Cleaver_C_Notify_Feast_Start_Params
{
};

// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.Notify_Feast_Stop
struct UALoop_PsychoInfectedOnes_Cleaver_C_Notify_Feast_Stop_Params
{
};

// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.ExecuteUbergraph_ALoop_PsychoInfectedOnes_Cleaver
struct UALoop_PsychoInfectedOnes_Cleaver_C_ExecuteUbergraph_ALoop_PsychoInfectedOnes_Cleaver_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
