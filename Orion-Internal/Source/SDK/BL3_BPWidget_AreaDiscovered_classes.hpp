#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_AreaDiscovered_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_AreaDiscovered.BPWidget_AreaDiscovered_C
// 0x0000 (0x05D0 - 0x05D0)
class UBPWidget_AreaDiscovered_C : public UGFxAreaDiscoveredNotificationWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_AreaDiscovered.BPWidget_AreaDiscovered_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
