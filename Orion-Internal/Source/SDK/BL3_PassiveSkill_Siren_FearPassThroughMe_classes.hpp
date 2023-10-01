#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_FearPassThroughMe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C
// 0x0090 (0x0278 - 0x01E8)
class UPassiveSkill_Siren_FearPassThroughMe_C : public UPassiveSkill_Siren_WIthNova_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	bool                                               Readied;                                                  // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_FearPassThroughMe;// 0x01F8(0x0028)
	struct FDataTableValueHandle                       DamagePerRank;                                            // 0x0220(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     NovaLocation;                                             // 0x0238(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Index;                                                    // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AffectedByElement;                                        // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TArray<EOakElementalType>                          AffectedElements;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C");
		return ptr;
	}


	void GetNovaDamage(float* res);
	void GetPhaseTranceElementalInfo(class UClass** OutClass, EPhaseTranceElementalType* OutType);
	void OnActivated();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void FearPassThroughMe_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
	void FearPassThroughMe_OnCuasedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
	void FearPassThroughMe_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser);
	void DoFearPassThroughMeNova();
	void ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
