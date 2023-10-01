#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_BloodyHarvest_HauntedEnemy_Badass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_BloodyHarvest_HauntedEnemy_Badass.CE_BloodyHarvest_HauntedEnemy_Badass_C
// 0x0000 (0x0148 - 0x0148)
class UCE_BloodyHarvest_HauntedEnemy_Badass_C : public UCE_BloodyHarvest_HauntedEnemy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_BloodyHarvest_HauntedEnemy_Badass.CE_BloodyHarvest_HauntedEnemy_Badass_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
