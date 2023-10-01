#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_Beskar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C
// 0x0000 (0x0198 - 0x0198)
class UShieldAugAtt_Beskar_C : public UShieldAugment_Attribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C");
		return ptr;
	}


	void K2_OnShieldEquipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
	void K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
