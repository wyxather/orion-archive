#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_MenuDamageWidgetTR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_MenuDamageWidgetTR.BPWidget_MenuDamageWidgetTR_C
// 0x0000 (0x0650 - 0x0650)
class UBPWidget_MenuDamageWidgetTR_C : public UGFxMenuDamageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_MenuDamageWidgetTR.BPWidget_MenuDamageWidgetTR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
