#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapInterface_MAL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeapInterface_MAL.BPWeapInterface_MAL_C
// 0x0000 (0x0028 - 0x0028)
class UBPWeapInterface_MAL_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapInterface_MAL.BPWeapInterface_MAL_C");
		return ptr;
	}


	void SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
	void SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
