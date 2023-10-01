#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkSuicide_ExplosiveBomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkSuicide_ExplosiveBomb_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C");
		return ptr;
	}


	void TinkSuicideBomb_StartSuicide();
	void TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth);
	void TinkSuicideBomb_SetFuseTimer(float NewFuseTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
