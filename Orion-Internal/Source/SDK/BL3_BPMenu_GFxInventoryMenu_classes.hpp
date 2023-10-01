#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_GFxInventoryMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_GFxInventoryMenu.BPMenu_GFxInventoryMenu_C
// 0x0000 (0x0FC0 - 0x0FC0)
class UBPMenu_GFxInventoryMenu_C : public UGFxInventoryMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GFxInventoryMenu.BPMenu_GFxInventoryMenu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
