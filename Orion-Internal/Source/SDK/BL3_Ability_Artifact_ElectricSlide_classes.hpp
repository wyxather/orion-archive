#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ElectricSlide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C
// 0x0126 (0x0240 - 0x011A)
class UAbility_Artifact_ElectricSlide_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	bool                                               SlideProjectileAvaialable;                                // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              CooldownTime;                                             // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElectricSlide;// 0x0130(0x0028)
	struct FEnvQueryParams                             BeamQuery;                                                // 0x0158(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                QueryTimer;                                               // 0x0210(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              CurrentTargets;                                           // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      BeamData;                                                 // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C");
		return ptr;
	}


	void OnActivated();
	void StartSlide();
	void StopSlide(const struct FSlideEndedDetails& Details);
	void QueryEnemies();
	void ExecuteUbergraph_Ability_Artifact_ElectricSlide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
