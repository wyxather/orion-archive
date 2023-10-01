#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPOakOnlineStatsHelper_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPOakOnlineStatsHelper_Default.BPOakOnlineStatsHelper_Default_C
// 0x0000 (0x00D8 - 0x00D8)
class UBPOakOnlineStatsHelper_Default_C : public UOakOnlineStatsHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPOakOnlineStatsHelper_Default.BPOakOnlineStatsHelper_Default_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
