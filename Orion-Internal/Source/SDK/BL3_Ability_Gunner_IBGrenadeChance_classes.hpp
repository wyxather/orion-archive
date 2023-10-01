#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_IBGrenadeChance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C
// 0x00BD (0x02C8 - 0x020B)
class UAbility_Gunner_IBGrenadeChance_C : public UAbility_AnointParent_Gunner_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x020B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0218(0x0028)
	bool                                               OnCooldown;                                               // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                GrenadeChance;                                            // 0x0248(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                               GrenadeSource;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter_Player*                        OakCharacterOwner;                                        // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                CooldownTime;                                             // 0x0290(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C");
		return ptr;
	}


	void GrenadeCooldown();
	void AnointIronIronBearStarted(class AOakCharacter_IronBear** IronBear);
	void AnointIronBearEnded();
	void AnointRemoveEffect();
	void OnTookDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_Gunner_IBGrenadeChance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
