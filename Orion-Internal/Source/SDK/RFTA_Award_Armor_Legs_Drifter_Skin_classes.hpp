#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Award_Armor_Legs_Drifter_Skin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Award_Armor_Legs_Drifter_Skin.Award_Armor_Legs_Drifter_Skin_C
// 0x0000 (0x0060 - 0x0060)
class UAward_Armor_Legs_Drifter_Skin_C : public UAccountAwardSkins_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Award_Armor_Legs_Drifter_Skin.Award_Armor_Legs_Drifter_Skin_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
