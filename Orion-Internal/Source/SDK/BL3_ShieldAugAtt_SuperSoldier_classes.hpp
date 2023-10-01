#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_SuperSoldier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C
// 0x0000 (0x0198 - 0x0198)
class UShieldAugAtt_SuperSoldier_C : public UShieldAugment_Attribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C");
		return ptr;
	}


	void K2_OnShieldNotFilled(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_OnShieldFilled(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
