#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_GFxStatusMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_GFxStatusMenu.BPMenu_GFxStatusMenu_C
// 0x0000 (0x0AB0 - 0x0AB0)
class UBPMenu_GFxStatusMenu_C : public UGFxStatusMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GFxStatusMenu.BPMenu_GFxStatusMenu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
