#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkPileEvents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkPileEvents.BPI_TinkPileEvents_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkPileEvents_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkPileEvents.BPI_TinkPileEvents_C");
		return ptr;
	}


	void TinkPile_EnablePile();
	void TinkPIle_DisablePile();
	void TinkPile_MyUserExitedPile();
	void TinkPile_MyUserBuiltObject();
	void TinkPile_MyUserEnteredPile(TEnumAsByte<Enum_TinkBuildSelection> WhatToBuild, class AActor* User);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
