#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoInfectedOnes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.UserConstructionScript
struct ABPChar_PsychoInfectedOnes_C_UserConstructionScript_Params
{
};

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.BloodSplats
struct ABPChar_PsychoInfectedOnes_C_BloodSplats_Params
{
};

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.ReceiveBeginPlay
struct ABPChar_PsychoInfectedOnes_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.PsychoShared_TargetChanged
struct ABPChar_PsychoInfectedOnes_C_PsychoShared_TargetChanged_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.CleaverFacePlant
struct ABPChar_PsychoInfectedOnes_C_CleaverFacePlant_Params
{
	struct FDamageReactionEventSummary                 NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.ExecuteUbergraph_BPChar_PsychoInfectedOnes
struct ABPChar_PsychoInfectedOnes_C_ExecuteUbergraph_BPChar_PsychoInfectedOnes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
