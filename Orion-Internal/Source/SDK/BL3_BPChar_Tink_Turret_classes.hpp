#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_Turret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Tink_Turret.BPChar_Tink_Turret_C
// 0x008F (0x2410 - 0x2381)
class ABPChar_Tink_Turret_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHavokNavObstacleComponent*                  HavokNavObstacle;                                         // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightBoxCrit;                                             // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WarningLight;                                             // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FiringLight;                                              // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleLight;                                                // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_Light;                                             // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    CleanUpTurretLegs;                                        // 0x23C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SetTinkTurretCollisionOff;                                // 0x23D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SetTinkTurretCollisionOn;                                 // 0x23E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ShowRangeIndicators;                                      // 0x23F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x23F9(0x0007) MISSED OFFSET
	class AActor*                                      CurrentTrackingLaserTarget;                               // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LaserTargetCheck;                                         // 0x2408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Tink_Turret.BPChar_Tink_Turret_C");
		return ptr;
	}


	void UserConstructionScript();
	void TinkTurret_PerformLaunch();
	void TinkTurret_DeathHide();
	void TInkTurret_SetPileSpawnerComp(class USpawnerComponent* MyPileSpawnerComp);
	void TurretGodModeOn();
	void TurretGodModeOff();
	void TurretTargetableOn();
	void TurretTargetableOff();
	void TinkTurret_TrackingLaserCheckON(class AActor* TrackingLaserTarget);
	void TinkTurret_TrackingLaserCheckOFF();
	void CE_OpenTrackingLaserCheckGate();
	void CE_CheckLaserTargetSeen();
	void ReceiveBeginPlay();
	void CleanUpTurretLegs_Event();
	void OnFindTinkQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void TinkTurret_DeathCleanUp();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret(class AActor* DamageReceiver, class AActor* DamageCauser);
	void CE_StopFaceCheckMetro();
	void CE_OpenTrackingAudioStartGate();
	void TinkTurret_TrackingAudio(bool On);
	void CE_CloseTrackingAudioStopGate();
	void CE_OpenTrackingAudioStopGate();
	void CE_CloseTrackingAudioStartGate();
	void ExecuteUbergraph_BPChar_Tink_Turret(int EntryPoint);
	void SetTinkTurretCollisionOn__DelegateSignature();
	void SetTinkTurretCollisionOff__DelegateSignature();
	void CleanUpTurretLegs__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
