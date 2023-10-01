#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_GFxLeagues_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_GFxLeagues.BPMenu_GFxLeagues_C
// 0x0000 (0x0860 - 0x0860)
class UBPMenu_GFxLeagues_C : public UGFxLeaguesMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GFxLeagues.BPMenu_GFxLeagues_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
