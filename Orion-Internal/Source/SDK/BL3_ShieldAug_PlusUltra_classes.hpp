#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_PlusUltra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_PlusUltra.ShieldAug_PlusUltra_C
// 0x0000 (0x01A0 - 0x01A0)
class UShieldAug_PlusUltra_C : public UShieldAugment_Absorb
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_PlusUltra.ShieldAug_PlusUltra_C");
		return ptr;
	}


	void K2_OnShieldAbsorbedDamage(class AShield** Shield, class UDamageSource** DamageSource, class UGbxDamageType** DamageType, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
