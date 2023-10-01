#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_DamageType_DOT_Melee_Bleed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_DOT_Melee_Bleed.DamageType_DOT_Melee_Bleed_C
// 0x0000 (0x0108 - 0x0108)
class UDamageType_DOT_Melee_Bleed_C : public UDamageTypeGunfire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_DOT_Melee_Bleed.DamageType_DOT_Melee_Bleed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
