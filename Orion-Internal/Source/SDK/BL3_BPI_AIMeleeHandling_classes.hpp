#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIMeleeHandling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_AIMeleeHandling.BPI_AIMeleeHandling_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_AIMeleeHandling_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AIMeleeHandling.BPI_AIMeleeHandling_C");
		return ptr;
	}


	void AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement);
	void AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass);
	void AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_Drop(bool RequestNewMeleeWeapon);
	void AIMelee_Spawn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
