#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_WIthNova_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C
// 0x0000 (0x01E8 - 0x01E8)
class UPassiveSkill_Siren_WIthNova_C : public UOakPassiveAbility_Siren
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C");
		return ptr;
	}


	void GetNovaExplosion(class UClass* DamageType, class UExplosionData** ExplosionData);
	void GetNovaDamage(float* res);
	void DoStandaloneNova(const struct FVector& InLocation, class UClass* InElement, bool Knockback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
