#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_PipeValve_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Combat_PipeValve.IO_Combat_PipeValve_C
// 0x0125 (0x0675 - 0x0550)
class AIO_Combat_PipeValve_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BlackFog;                                                 // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             PreviewDecal;                                             // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ElementalOverlap;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavPaintCollision;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Waterspray;                                            // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Pipe;                                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PipeValve;                                                // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_PreviewSpray;                                          // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DurationOfLiquidSpray;                                    // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreviewSpray_;                                            // 0x05CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	struct FTimerHandle                                SprayCollisionTimer;                                      // 0x05D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpawnPuddle_;                                             // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DecalPuddle;                                              // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05DA(0x0002) MISSED OFFSET
	struct FVector                                     PuddleScale;                                              // 0x05DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsGasPipe_;                                               // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	float                                              MaxDistanceBetweenPipeAndSpawnedPuddle;                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprayVelocity;                                            // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityOverride;                                          // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxChildActorComponent*                     Puddle;                                                   // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               StartDestroyed_;                                          // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	class ABP_IO_Switch_Parent_V1_C*                   My_Switch;                                                // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_PipeDestroyed;                                         // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_PipeFlow_On;                                           // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_PipeFlow_Off;                                          // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UDA_IO_ExplodingPipe_C*                      DA_ExplodingPipe;                                         // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AElementalPuddle*                            SpawnedPuddle;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldPreviewPuddle;                                      // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0659(0x0007) MISSED OFFSET
	TArray<class AActor*>                              LevelActorsToIgnore;                                      // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              TimeItTookForSprayTraceToCollide;                         // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TraceChannelArray;                                        // 0x0674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Combat_PipeValve.IO_Combat_PipeValve_C");
		return ptr;
	}


	void GetPipeFlowState(bool* HasFlow);
	void GetPipeDestroyedState(bool* Destroyed);
	void SprayTrace(float ProjectileRadius, TEnumAsByte<EObjectTypeQuery> ObjectTypeToTestAgainst, TEnumAsByte<ECollisionChannel> CollissionTraceChannel, class AActor** OutHitActor, struct FVector* OutHitLocation, struct FVector* OutHitNormal);
	void CheckForSprayDamage();
	void SetupDestroyedPipes();
	void SpawnAPuddle();
	void TurnOnFlowFeedback();
	void TurnOffFlowFeedback();
	void TurnFlowOff();
	void TurnFlowOn();
	void CheckChangeFlowState();
	void InitialSetup();
	void SetUpPipeValveMaterialParameters(class UStaticMeshComponent* StaticMeshIn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEnabled();
	void OnLStateUnlocked();
	void SwitchIsOn(class AActor* LastActorToUseSwitch);
	void SwitchIsOff(class AActor* LastActorToUseSwitch);
	void OnEnabling();
	void OnLStateLocked();
	void SetPipeState(TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState> PipeState);
	void DestroyPipe();
	void SetPipeFlowState(bool HasFlow);
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void AttemptToSpawnPudle();
	void ExecuteUbergraph_IO_Combat_PipeValve(int EntryPoint);
	void On_PipeFlow_Off__DelegateSignature();
	void On_PipeFlow_On__DelegateSignature();
	void On_PipeDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
