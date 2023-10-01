#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_Vehicle_HeavyWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_Vehicle_HeavyWeapon.DamageSource_Vehicle_HeavyWeapon_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_Vehicle_HeavyWeapon_C : public UDamageSource_Vehicle_Weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Vehicle_HeavyWeapon.DamageSource_Vehicle_HeavyWeapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
