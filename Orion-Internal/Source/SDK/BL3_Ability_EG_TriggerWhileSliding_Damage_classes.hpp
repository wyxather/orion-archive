#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_TriggerWhileSliding_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_EG_TriggerWhileSliding_Damage.Ability_EG_TriggerWhileSliding_Damage_C
// 0x0000 (0x0108 - 0x0108)
class UAbility_EG_TriggerWhileSliding_Damage_C : public UAbility_EG_TriggerWhileSliding_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_TriggerWhileSliding_Damage.Ability_EG_TriggerWhileSliding_Damage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
