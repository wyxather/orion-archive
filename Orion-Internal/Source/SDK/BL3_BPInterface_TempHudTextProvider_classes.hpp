#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_TempHudTextProvider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C
// 0x0000 (0x0028 - 0x0028)
class UBPInterface_TempHudTextProvider_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C");
		return ptr;
	}


	void SetMissionDebugText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
