#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Hib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C
// 0x0068 (0x0160 - 0x00F8)
class UOakAbility_Beastmaster_ClassMod_Hib_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Beastmaster_ClassMod_Hib;// 0x0100(0x0028)
	class AActor*                                      PlayerCharacter;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       UnDesiredTags;                                            // 0x0130(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                               DominateTarget;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UGbxAction*                                  CoordinatedEffect_Dominate;                               // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C");
		return ptr;
	}


	void EndDomination();
	void OnDeath_DominateTarget_HitRun9(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec);
	void OnActivated();
	void CustomEvent_2(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
