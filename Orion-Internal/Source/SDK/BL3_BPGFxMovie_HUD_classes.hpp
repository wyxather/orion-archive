#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPGFxMovie_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPGFxMovie_HUD.BPGFxMovie_HUD_C
// 0x0000 (0x05C0 - 0x05C0)
class UBPGFxMovie_HUD_C : public UOakGFxHUDContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPGFxMovie_HUD.BPGFxMovie_HUD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
