#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_KillsLowerCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C
// 0x0035 (0x0240 - 0x020B)
class UAbility_Gunner_KillsLowerCooldown_C : public UAbility_AnointParent_Gunner_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x020B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0218(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void KilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void AnointRemoveEffect();
	void BindKillEffect();
	void ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
