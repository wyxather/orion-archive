#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_Emote_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_Emote_v2.BPClass_Emote_v2_C
// 0x0000 (0x04A8 - 0x04A8)
class ABPClass_Emote_v2_C : public AOakInventoryCustomizationPartItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Emote_v2.BPClass_Emote_v2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
