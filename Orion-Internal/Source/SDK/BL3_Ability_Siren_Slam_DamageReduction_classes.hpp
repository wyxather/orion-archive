#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Slam_DamageReduction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_Slam_DamageReduction.Ability_Siren_Slam_DamageReduction_C
// 0x0000 (0x020D - 0x020D)
class UAbility_Siren_Slam_DamageReduction_C : public UAbility_AnointParent_Siren_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Slam_DamageReduction.Ability_Siren_Slam_DamageReduction_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
