#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Beastmaster_AntiGravityTrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C
// 0x0258 (0x07A8 - 0x0550)
class AIO_Beastmaster_AntiGravityTrap_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            UseCollision;                                             // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakUsableComponent*                         OakUsable;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrapExplode_Large;                                        // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrapExplode;                                              // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrapAoE_Large;                                            // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrapAoE;                                                  // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_AntigravTrap;                                          // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakActionAbility*                           OwnerActionAbility;                                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             EQSFindTargets;                                           // 0x05A0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystemComponent*                    TrapAoEEffect;                                            // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrapExplodeEffect;                                        // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             EQSFindTargets_Large;                                     // 0x0678(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       UnDesiredTags;                                            // 0x0730(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       PulseTime;                                                // 0x0750(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DecalLarge;                                               // 0x0768(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalDefault;                                             // 0x0774(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       ConfuseDuration;                                          // 0x0780(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UDecalComponent*                             AoEDecal;                                                 // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bMod2WideNet;                                             // 0x07A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMod4BlindWithAnger;                                      // 0x07A1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMod5Forage;                                              // 0x07A2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x07A3(0x0001) MISSED OFFSET
	float                                              DecalLifetime;                                            // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C");
		return ptr;
	}


	void InitTrapMods();
	void CanConfuseEnemy(class AActor* Actor, bool* res);
	void CanKnockUpEnemy(class AActor* Actor, bool* res);
	void SetupEmitters();
	void UserConstructionScript();
	void KnockupTarget();
	void TrapOnActionSkillEnd(class UOakActionAbility* ActionAbility);
	void ReceiveDestroyed();
	void FindAntiGravTargets();
	void ConfuseTargets();
	void SetTrapEndCondition();
	void DestroyTrap();
	void SpawnMod5Loot(class AActor* Actor);
	void ReceiveBeginPlay();
	void BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap(const struct FUseEvent& UseEvent);
	void ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
