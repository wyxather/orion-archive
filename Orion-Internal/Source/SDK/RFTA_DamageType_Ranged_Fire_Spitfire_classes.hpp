#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_DamageType_Ranged_Fire_Spitfire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_Ranged_Fire_Spitfire.DamageType_Ranged_Fire_Spitfire_C
// 0x0000 (0x0108 - 0x0108)
class UDamageType_Ranged_Fire_Spitfire_C : public UDamageTypeGunfire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_Ranged_Fire_Spitfire.DamageType_Ranged_Fire_Spitfire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
