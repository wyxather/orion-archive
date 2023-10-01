#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_CyberSpike_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C
// 0x000F (0x01D0 - 0x01C1)
class UAbility_All_SkillEnd_CyberSpike_C : public UAbility_AnointParent_SkillEnd_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void SpawnSkillProjectile();
	void ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
