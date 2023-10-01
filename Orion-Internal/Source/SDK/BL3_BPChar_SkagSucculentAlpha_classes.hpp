#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagSucculentAlpha_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagSucculentAlpha.BPChar_SkagSucculentAlpha_C
// 0x0000 (0x2600 - 0x2600)
class ABPChar_SkagSucculentAlpha_C : public ABPChar_SkagShared_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagSucculentAlpha.BPChar_SkagSucculentAlpha_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
