#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Slam_ReturnDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C
// 0x005F (0x0220 - 0x01C1)
class UAbility_Siren_Slam_ReturnDamage_C : public UAbility_AnointParent_SkillEnd_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x01D0(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Siren_Slam_ReturnDamage;// 0x01F8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C");
		return ptr;
	}


	void OnActivated();
	void SlamEnded(class UOakActionAbility* ActionAbility);
	void OnDeactivated();
	void UnregisterCDM();
	void ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
