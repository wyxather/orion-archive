#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillActive_PulseFireNova_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C
// 0x001F (0x0231 - 0x0212)
class UAbility_All_SkillActive_PulseFireNova_C : public UAbility_AnointParent_SkillActive_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0212(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                NovaTimer;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      OverrideDamageSource;                                     // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeBasedSkill;                                         // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C");
		return ptr;
	}


	void IsChargeBasedSkill(class UObject* ActionSkill, bool* res);
	void AnointOnActionSkillActivated(class UOakActionAbility** ActionAbility, bool* res);
	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void TriggerNova();
	void AnointRemoveEffect();
	void ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
