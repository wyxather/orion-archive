#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkLootPack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkLootPack.BPI_TinkLootPack_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkLootPack_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkLootPack.BPI_TinkLootPack_C");
		return ptr;
	}


	void TinkLootPack_MyParentThawed();
	void TinkLootPack_MyParentFrozen();
	void TinkLootPaack_SetExperienceLevel(int ExperienceLevel);
	void TinkLootPack_MyParentDied();
	void TinkLootPack_SetMyParent(class AActor* Parent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
