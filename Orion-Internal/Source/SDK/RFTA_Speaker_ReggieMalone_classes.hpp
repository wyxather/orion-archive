#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Speaker_ReggieMalone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Speaker_ReggieMalone.Speaker_ReggieMalone_C
// 0x0000 (0x0058 - 0x0058)
class USpeaker_ReggieMalone_C : public UDialog_Speaker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Speaker_ReggieMalone.Speaker_ReggieMalone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
