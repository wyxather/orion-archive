#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Root_Splitter_Shockwave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.ReceiveBeginPlay
struct ABP_Root_Splitter_Shockwave_C_ReceiveBeginPlay_Params
{
};

// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.DoRingExplosion
struct ABP_Root_Splitter_Shockwave_C_DoRingExplosion_Params
{
};

// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.MulticastFX
struct ABP_Root_Splitter_Shockwave_C_MulticastFX_Params
{
	float*                                             SphereMidRadius;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               EmitterIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.ExecuteUbergraph_BP_Root_Splitter_Shockwave
struct ABP_Root_Splitter_Shockwave_C_ExecuteUbergraph_BP_Root_Splitter_Shockwave_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
