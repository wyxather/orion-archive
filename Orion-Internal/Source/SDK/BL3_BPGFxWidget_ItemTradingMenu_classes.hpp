#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPGFxWidget_ItemTradingMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPGFxWidget_ItemTradingMenu.BPGFxWidget_ItemTradingMenu_C
// 0x0000 (0x0BC0 - 0x0BC0)
class UBPGFxWidget_ItemTradingMenu_C : public UGFxItemTradingMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPGFxWidget_ItemTradingMenu.BPGFxWidget_ItemTradingMenu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
