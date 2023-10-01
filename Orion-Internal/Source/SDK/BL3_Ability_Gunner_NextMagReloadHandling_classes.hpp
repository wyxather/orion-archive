#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMagReloadHandling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_NextMagReloadHandling.Ability_Gunner_NextMagReloadHandling_C
// 0x0000 (0x0288 - 0x0288)
class UAbility_Gunner_NextMagReloadHandling_C : public UAbility_Gunner_NextMag_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_NextMagReloadHandling.Ability_Gunner_NextMagReloadHandling_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
