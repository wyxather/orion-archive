#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_DamageType_Radiation_BreathOfTheDesert_Mod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_Radiation_BreathOfTheDesert_Mod.DamageType_Radiation_BreathOfTheDesert_Mod_C
// 0x0000 (0x0108 - 0x0108)
class UDamageType_Radiation_BreathOfTheDesert_Mod_C : public UDamageType_Ranged_Radiation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_Radiation_BreathOfTheDesert_Mod.DamageType_Radiation_BreathOfTheDesert_Mod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
