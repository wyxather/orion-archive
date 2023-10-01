#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Damage_Type_Corrosive_Quills_Mod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Type_Corrosive_Quills_Mod.Damage_Type_Corrosive_Quills_Mod_C
// 0x0000 (0x0108 - 0x0108)
class UDamage_Type_Corrosive_Quills_Mod_C : public UDamageType_Ranged_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Type_Corrosive_Quills_Mod.Damage_Type_Corrosive_Quills_Mod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
