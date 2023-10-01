#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIStolenProj_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_AIStolenProj.BPI_AIStolenProj_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_AIStolenProj_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AIStolenProj.BPI_AIStolenProj_C");
		return ptr;
	}


	void AIStolenProj_AttemptDetonate(bool* Success);
	void AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement);
	void AIStolenProj_AttemptLerpToSocket(const struct FName& SocketToLerpTo, float LerpDuration, bool* Success);
	void AIStolenProj_AttemptReturnTo(TEnumAsByte<Enum_AIThrowAtStyle> ReturnTo, const struct FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success);
	void AIStolenProj_AttemptAttach(const struct FName& SocketName, bool* Success);
	void AIStolenProj_AttemptDestroy(bool* Success);
	void AIStolenProj_AttemptDisarm(bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
