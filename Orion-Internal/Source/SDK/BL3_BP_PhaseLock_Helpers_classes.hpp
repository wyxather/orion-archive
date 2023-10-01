#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseLock_Helpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PhaseLock_Helpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C");
		return ptr;
	}


	void STATIC_IsPhaselocked(class AActor* Target, class UObject* __WorldContext, bool* bRes);
	void STATIC_GetAdjustedPhaseLockSpeed(class AActor* Target, class UObject* __WorldContext, float* NewSpeed);
	void STATIC_ApplyPhaseLockToTarget(class AActor* Target, class UClass* PhaseLockClass, class AActor* Instigator, float Duration, float Speed, const struct FVector& TargetLocation, class UObject* __WorldContext, bool* bRes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
