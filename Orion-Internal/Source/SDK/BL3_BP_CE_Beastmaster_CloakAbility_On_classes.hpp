#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Beastmaster_CloakAbility_On_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C
// 0x0040 (0x01B8 - 0x0178)
class UBP_CE_Beastmaster_CloakAbility_On_C : public UOakAction_Cloak
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioEffect*                           AudioEffect;                                              // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SecondaryCloakFX;                                         // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FStatusEffectInstanceReference              SpiderAntSpeedStatusEffect;                               // 0x0190(0x0018) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                               bModifiedShot;                                            // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class UGbxAction*                                  TrackedTargetCE;                                          // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C");
		return ptr;
	}


	class UClass* GetTrackedTargetEffect(struct FOakActionCloak_TrackedTargetState* TrackedTargetState);
	void StopTrackedTargetCE();
	bool ShouldRegisterWeaponFireDelegates();
	void CleanupServer();
	void SetupMods();
	void SetupServer();
	void OnServerBegin(class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
