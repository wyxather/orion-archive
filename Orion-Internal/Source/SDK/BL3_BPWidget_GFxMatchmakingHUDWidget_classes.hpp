#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_GFxMatchmakingHUDWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_GFxMatchmakingHUDWidget.BPWidget_GFxMatchmakingHUDWidget_C
// 0x0000 (0x0680 - 0x0680)
class UBPWidget_GFxMatchmakingHUDWidget_C : public UGFxMatchmakingHUDWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxMatchmakingHUDWidget.BPWidget_GFxMatchmakingHUDWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
