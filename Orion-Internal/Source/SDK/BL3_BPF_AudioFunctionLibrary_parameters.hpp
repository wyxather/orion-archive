#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPF_AudioFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.GetDistanceFromEmitterToListener
struct UBPF_AudioFunctionLibrary_C_GetDistanceFromEmitterToListener_Params
{
	class UWwiseAudioComponent*                        AudioComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.SetRandomVariation
struct UBPF_AudioFunctionLibrary_C_SetRandomVariation_Params
{
	class UWwiseAudioComponent*                        TargetWwiseComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.GetDistanceBetweenVectors
struct UBPF_AudioFunctionLibrary_C_GetDistanceBetweenVectors_Params
{
	struct FVector                                     Vector_1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Vector_2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
