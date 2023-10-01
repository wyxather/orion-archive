#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_MenuDamageWidgetBR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_MenuDamageWidgetBR.BPWidget_MenuDamageWidgetBR_C
// 0x0000 (0x0650 - 0x0650)
class UBPWidget_MenuDamageWidgetBR_C : public UGFxMenuDamageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_MenuDamageWidgetBR.BPWidget_MenuDamageWidgetBR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
