#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ImpactEffect_Weapon_ThrowingKnife_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ImpactEffect_Weapon_ThrowingKnife.ImpactEffect_Weapon_ThrowingKnife_C
// 0x0000 (0x0490 - 0x0490)
class AImpactEffect_Weapon_ThrowingKnife_C : public AImpactEffect_Weapon_Blade_Metal_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactEffect_Weapon_ThrowingKnife.ImpactEffect_Weapon_ThrowingKnife_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
