#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkFlying_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkFlying.BPI_TinkFlying_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkFlying_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkFlying.BPI_TinkFlying_C");
		return ptr;
	}


	void Tink_SetWantsToLand();
	void Tink_SetWantsToFly();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
