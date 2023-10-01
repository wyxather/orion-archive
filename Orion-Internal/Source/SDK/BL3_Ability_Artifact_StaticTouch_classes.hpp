#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_StaticTouch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C
// 0x011A (0x0234 - 0x011A)
class UAbility_Artifact_StaticTouch_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Burninator;// 0x0128(0x0028)
	bool                                               bIsShotgun;                                               // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityActivated;                                         // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	struct FVector                                     SlideStartLocation;                                       // 0x0154(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SlideEndLocation;                                         // 0x0160(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSlideDistance;                                       // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0170(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      BeamData;                                                 // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C");
		return ptr;
	}


	void Ammo_Return(class AOakCharacter* Character);
	void StartSlide();
	void EndSlide(const struct FSlideEndedDetails& Details);
	void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_Artifact_StaticTouch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
