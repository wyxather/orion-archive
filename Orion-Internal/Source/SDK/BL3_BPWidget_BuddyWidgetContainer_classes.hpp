#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_BuddyWidgetContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_BuddyWidgetContainer.BPWidget_BuddyWidgetContainer_C
// 0x0000 (0x06F0 - 0x06F0)
class UBPWidget_BuddyWidgetContainer_C : public UGFxBuddyWidgetContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_BuddyWidgetContainer.BPWidget_BuddyWidgetContainer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
