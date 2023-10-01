#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C
// 0x003C (0x0134 - 0x00F8)
class UOakAbility_Siren_ClassMod_Unique_05_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_ClassMod_Unique05;// 0x0100(0x0028)
	struct FVector                                     CloudLocation;                                            // 0x0128(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C");
		return ptr;
	}


	void OnActivated();
	void OnGraspedTarget(class AGbxCharacter* GraspedTarget);
	void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OpenDamageGate();
	void ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
