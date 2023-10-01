#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SlideRegenShields_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C
// 0x0048 (0x0140 - 0x00F8)
class UAbility_All_SlideRegenShields_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               OakChar;                                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_TriggerWhileSliding;// 0x0108(0x0028)
	struct FTimerHandle                                EnergyTimer;                                              // 0x0130(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Energy;                                                   // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyInterval;                                           // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void BuildEnergy();
	void ReleaseEnergy();
	void SlideStart();
	void SlideEnd(const struct FSlideEndedDetails& Details);
	void ExecuteUbergraph_Ability_All_SlideRegenShields(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
