#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_IronBearArmorBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_IronBearArmorBar.BPWidget_IronBearArmorBar_C
// 0x0000 (0x06D0 - 0x06D0)
class UBPWidget_IronBearArmorBar_C : public UGFxHealthBar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_IronBearArmorBar.BPWidget_IronBearArmorBar_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
