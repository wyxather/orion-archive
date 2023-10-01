#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapon_RedDot_ExtraLong_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeapon_RedDot_ExtraLong.BPWeapon_RedDot_ExtraLong_C
// 0x0000 (0x03E0 - 0x03E0)
class UBPWeapon_RedDot_ExtraLong_C : public UWeaponRedDotComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapon_RedDot_ExtraLong.BPWeapon_RedDot_ExtraLong_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
