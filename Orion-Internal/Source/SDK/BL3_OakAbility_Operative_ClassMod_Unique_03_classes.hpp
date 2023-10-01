#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C
// 0x0034 (0x012C - 0x00F8)
class UOakAbility_Operative_ClassMod_Unique_03_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Operative_ClassMod_Unique_03;// 0x0100(0x0028)
	int                                                Count;                                                    // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C");
		return ptr;
	}


	void OnSeeingRedActivated();
	void OnActivated();
	void OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OperativeTriggerKillSkillEffect();
	void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
