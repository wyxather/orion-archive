#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPF_AudioFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_AudioFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetDistanceFromEmitterToListener(class UWwiseAudioComponent* AudioComponent, class UObject* __WorldContext, float* RTPCValue);
	void STATIC_SetRandomVariation(class UWwiseAudioComponent* TargetWwiseComponent, class UObject* __WorldContext);
	void STATIC_GetDistanceBetweenVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, class UObject* __WorldContext, float* Distance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
