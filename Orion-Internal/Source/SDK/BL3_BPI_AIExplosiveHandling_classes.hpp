#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIExplosiveHandling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_AIExplosiveHandling_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C");
		return ptr;
	}


	void AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass);
	void AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist);
	void AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist);
	void AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride);
	void AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride);
	void AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist);
	void AIExplosive_Prime();
	void AIExplosive_Spawn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
