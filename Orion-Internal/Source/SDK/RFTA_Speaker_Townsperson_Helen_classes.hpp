#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Speaker_Townsperson_Helen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Speaker_Townsperson_Helen.Speaker_Townsperson_Helen_C
// 0x0000 (0x0058 - 0x0058)
class USpeaker_Townsperson_Helen_C : public UDialog_Speaker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Speaker_Townsperson_Helen.Speaker_Townsperson_Helen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
