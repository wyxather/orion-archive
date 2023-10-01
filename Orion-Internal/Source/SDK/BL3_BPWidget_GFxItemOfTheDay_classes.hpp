#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_GFxItemOfTheDay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_GFxItemOfTheDay.BPWidget_GFxItemOfTheDay_C
// 0x0000 (0x1050 - 0x1050)
class UBPWidget_GFxItemOfTheDay_C : public UGFxVendingMachinePrompt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxItemOfTheDay.BPWidget_GFxItemOfTheDay_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
