#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Snowdrift_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C
// 0x00EF (0x0209 - 0x011A)
class UAbility_Artifact_Snowdrift_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_GlacialWave;// 0x0128(0x0028)
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0150(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AugmentAvailable;                                         // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1(class AActor* Actor, int InstanceIndex);
	void OnActivated();
	void StopSliding(const struct FSlideEndedDetails& Details);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Ability_Artifact_Snowdrift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
