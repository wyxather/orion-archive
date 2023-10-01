#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond_Frenzy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C
// 0x003D (0x01ED - 0x01B0)
class UPassive_Beastmaster_Bond_Frenzy_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond_Frenzy;// 0x01B8(0x0028)
	class UBPEventHub_Beastmaster_C*                   OwnerEventHub;                                            // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Frenzy_FrenzyStacks;                                      // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasTriggeredRecently;                                    // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C");
		return ptr;
	}


	void GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining);
	void OnActivated();
	void PetCausedAnyDamage_BondFrenzy(class AActor* DamagedActor, class UDamageSource* DamageSource);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
