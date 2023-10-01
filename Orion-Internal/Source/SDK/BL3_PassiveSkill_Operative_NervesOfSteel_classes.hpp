#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_NervesOfSteel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Operative_NervesOfSteel_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_PassiveSkill_Operative_InTheZone;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void InTheZone_OnResourcePoolFilled(const struct FGameResourcePoolReference& ResourcePool);
	void InTheZone_OnResourcePoolNotFilled(const struct FGameResourcePoolReference& ResourcePool);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void OnResumed();
	void OnPaused();
	void ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
