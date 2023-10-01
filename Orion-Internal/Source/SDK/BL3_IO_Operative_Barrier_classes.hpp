#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Operative_Barrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Operative_Barrier.IO_Operative_Barrier_C
// 0x0101 (0x0AA9 - 0x09A8)
class AIO_Operative_Barrier_C : public AOperativeBarrier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BarrierFX_Held;                                           // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AllRounderCollision;                                      // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AllRounderCollision_Held;                                 // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HeldCollision;                                            // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UViewAttachmentComponent*                    CarriedBase;                                              // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BarrierAuraCollision;                                     // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BarrierFX;                                                // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakUsableComponent*                         OakUsable;                                                // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   BarrierMesh;                                              // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakStatusEffectManagerComponent*            OakStatusEffectManager;                                   // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BarrierScan;                                              // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ZzzapParticle;                                            // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakHitRegionComponent*                      OakHitRegion;                                             // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TurboTimeline_Param_042884694A85E04FE861F0998BD289C6;     // 0x0A40(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TurboTimeline__Direction_042884694A85E04FE861F0998BD289C6;// 0x0A44(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TurboTimeline;                                            // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   BarrierMesh1stPerson;                                     // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             BarrierDeployedFXTemplate;                                // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierUndeployedFXTemplate;                              // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsAsset*                               HeldPhysicsAsset;                                         // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsAsset*                               GroundPhysicsAsset;                                       // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierHeldFXTemplate;                                    // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierUnheldFXTemplate;                                  // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           GroundIdleAnimation;                                      // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           HoldIdleAnimation;                                        // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           GroundUndeployAnimation;                                  // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           HoldUndeployAnimation;                                    // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDigistructingOut;                                      // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Operative_Barrier.IO_Operative_Barrier_C");
		return ptr;
	}


	void SetBarrierHidden(bool bIsHidden);
	void GetDeterrenceFieldDamageForCharacter(class AOakCharacter* Enemy, float* Val);
	void OnStateTransitionEnd();
	void OnStateTransitionBegin();
	void DetachFromPlayer();
	void AttachToPlayer();
	void IsShuttingDown(bool* res);
	void SetupPhysicsAssetOverride(class UPhysicsAsset* InAssetOverride);
	void SetupMultiModBarrierFX();
	void GetDamageRTPCValue(float* res);
	void SetupStressTest();
	void TryActivateSystem(class UParticleSystemComponent* Component);
	void ConfigureTemplates();
	void SetupModMaterial(const struct FName& ParamName, float Val);
	void SetupElectromagneticTherapy();
	void SetupChargedRelay();
	void SetupDeterrenceField();
	void SetBarrierHoldScalar(bool Enable);
	void UserConstructionScript();
	void TurboTimeline__FinishedFunc();
	void TurboTimeline__UpdateFunc();
	void UpdateFX_OnCarried();
	void OnStartState_Carried();
	void OnEndState_Carried();
	void OnEndState_Activating();
	void UpdateFX_OnDeployed();
	void OnStartState_Deployed();
	void OnEndState_Deployed();
	void ReceiveBeginPlay();
	void HandleBarrierStateChange(EOperativeBarrierState* OldState, EOperativeBarrierState* NewState);
	void SetupBarrierMods();
	void UpdateFX();
	void StartNextBarrierState();
	void OnTurbochargedStateChanged(bool* InbIsTurbocharged);
	void OnStartState_ShuttingDown();
	void ApplyDeterrenceFieldToEnemy(class AActor** Enemy);
	void DigistructOut();
	void ExecuteUbergraph_IO_Operative_Barrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
