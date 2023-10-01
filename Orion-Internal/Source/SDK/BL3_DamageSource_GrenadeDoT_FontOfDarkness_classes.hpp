#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_GrenadeDoT_FontOfDarkness_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_GrenadeDoT_FontOfDarkness.DamageSource_GrenadeDoT_FontOfDarkness_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_GrenadeDoT_FontOfDarkness_C : public UDamageSource_GrenadeDoT_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_GrenadeDoT_FontOfDarkness.DamageSource_GrenadeDoT_FontOfDarkness_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
