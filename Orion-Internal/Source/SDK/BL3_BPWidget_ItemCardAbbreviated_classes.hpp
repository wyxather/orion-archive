#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_ItemCardAbbreviated_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_ItemCardAbbreviated.BPWidget_ItemCardAbbreviated_C
// 0x0000 (0x0820 - 0x0820)
class UBPWidget_ItemCardAbbreviated_C : public UGFxItemCardAbbreviated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_ItemCardAbbreviated.BPWidget_ItemCardAbbreviated_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
