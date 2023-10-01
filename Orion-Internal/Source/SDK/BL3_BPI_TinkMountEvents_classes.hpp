#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkMountEvents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkMountEvents.BPI_TinkMountEvents_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkMountEvents_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkMountEvents.BPI_TinkMountEvents_C");
		return ptr;
	}


	void Tink_HasBeenPhaseLocked();
	void Tink_ForceMountToDetachRider();
	void Tink_CheerGoon();
	void Event_TinkHasDied();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
