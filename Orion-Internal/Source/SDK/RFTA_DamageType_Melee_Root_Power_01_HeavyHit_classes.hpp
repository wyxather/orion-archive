#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_DamageType_Melee_Root_Power_01_HeavyHit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_Melee_Root_Power_01_HeavyHit.DamageType_Melee_Root_Power_01_HeavyHit_C
// 0x0000 (0x0108 - 0x0108)
class UDamageType_Melee_Root_Power_01_HeavyHit_C : public UDamageTypeGunfire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_Melee_Root_Power_01_HeavyHit.DamageType_Melee_Root_Power_01_HeavyHit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
