#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_GFxCrosshairSecondWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_GFxCrosshairSecondWeapon.BPWidget_GFxCrosshairSecondWeapon_C
// 0x0000 (0x0870 - 0x0870)
class UBPWidget_GFxCrosshairSecondWeapon_C : public UGFxCrosshairWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxCrosshairSecondWeapon.BPWidget_GFxCrosshairSecondWeapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
