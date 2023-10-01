#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_TPSGameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TPSGameState.TPSGameState_C.UpdateTimePlayed
struct ATPSGameState_C_UpdateTimePlayed_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSGameState.TPSGameState_C.ReceiveTick
struct ATPSGameState_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSGameState.TPSGameState_C.BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature
struct ATPSGameState_C_BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature_Params
{
	EMusicIntensity*                                   Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSGameState.TPSGameState_C.ExecuteUbergraph_TPSGameState
struct ATPSGameState_C_ExecuteUbergraph_TPSGameState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
