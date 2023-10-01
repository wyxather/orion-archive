#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Destructible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Destructible.BPI_Destructible_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Destructible_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Destructible.BPI_Destructible_C");
		return ptr;
	}


	void BPI_SetFracturable(bool Fracturable);
	void BPI_SkipToDestroyedState();
	void BPI_ScriptedTotalDestruction(float DamageRadius, float ImpulseStrength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
