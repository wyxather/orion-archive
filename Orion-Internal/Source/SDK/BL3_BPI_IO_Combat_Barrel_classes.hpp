#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_Combat_Barrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_IO_Combat_Barrel_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C");
		return ptr;
	}


	void BPI_SetNavPainterEnabled(bool Enabled);
	void BPI_ResetHealth();
	void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
	void BPI_SetSimulatePhysics(bool PhysicsOn_);
	void BPI_Explode();
	void BPI_StartFuse();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
