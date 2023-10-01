#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_HeatRemoveShotcost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_HeatRemoveShotcost.Ability_HeatRemoveShotcost_C
// 0x0000 (0x00F8 - 0x00F8)
class UAbility_HeatRemoveShotcost_C : public UOakAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_HeatRemoveShotcost.Ability_HeatRemoveShotcost_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
