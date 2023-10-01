#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Rakk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Rakk.BPChar_Rakk_C
// 0x00F7 (0x2478 - 0x2381)
class ABPChar_Rakk_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BreathCryo;                                               // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImpactFXManagerComponent*                   ImpactFXManager;                                          // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BreathFire;                                               // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_Breath;                                            // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionSphere;                                          // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        MyBlackboard;                                             // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DeferLeadershipToLargerRakk;                              // 0x23C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  OriginalElementType;                                      // 0x23C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  ElementType;                                              // 0x23CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_ElementalAffinity>                ElementalAffinity;                                        // 0x23CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x23CC(0x0004) MISSED OFFSET
	class UEnvQuery*                                   RegroupQuery;                                             // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RegroupLocation;                                          // 0x23D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageAuraActive;                                         // 0x23E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x23E5(0x0003) MISSED OFFSET
	float                                              DamageAuraRadius;                                         // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         OriginalMovementMode;                                     // 0x23EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x23ED(0x0003) MISSED OFFSET
	class UGbxAction*                                  ActiveAttackAction;                                       // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      NewVar_1;                                                 // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Breath_Audio_On;                                          // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 NewVar_2;                                                 // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      NewVar_3;                                                 // 0x2410(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      BreathAudioInstance;                                      // 0x2428(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      ElementalBodyAudio;                                       // 0x2440(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      SwoopLoopPlaybackInstance;                                // 0x2458(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       BreathType;                                               // 0x2470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Rakk.BPChar_Rakk_C");
		return ptr;
	}


	void SetElement(EOakElementalType Index);
	void UserConstructionScript();
	void OnKilled();
	void SpreadDamageAura(class AActor* SpreadToActor);
	void TryChromaticSwitch();
	void ChromaticSwitchWarmup();
	void ChromaticSwitchCooldown();
	void StartAttackLoopAudio();
	void StopAttackLoopAudio();
	void StartAttackAction(class UClass* ActionClass);
	void StopAttackAction();
	void SetBreathFXSwitch(bool Enabled);
	void BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk();
	void ReceiveBeginPlay();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ImbueWithElement(EOakElementalType ElementalType, class AActor* Source, float Duration);
	void RestoreOriginalElement(class AActor* DamageReceiver, class AActor* DamageCauser);
	void SetDamageAuraActive(bool Active);
	void ElementTimeout();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_Rakk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
