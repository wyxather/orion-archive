#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Mus_Prologue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.UserConstructionScript
struct ABP_Mus_Prologue_C_UserConstructionScript_Params
{
};

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.ReceiveBeginPlay
struct ABP_Mus_Prologue_C_ReceiveBeginPlay_Params
{
};

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.ReceiveEndPlay
struct ABP_Mus_Prologue_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.StopLevelMusic
struct ABP_Mus_Prologue_C_StopLevelMusic_Params
{
};

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.StartLevelMusic
struct ABP_Mus_Prologue_C_StartLevelMusic_Params
{
};

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.ExecuteUbergraph_BP_Mus_Prologue
struct ABP_Mus_Prologue_C_ExecuteUbergraph_BP_Mus_Prologue_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
