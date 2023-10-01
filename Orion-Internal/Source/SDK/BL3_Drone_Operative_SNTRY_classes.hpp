#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Drone_Operative_SNTRY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drone_Operative_SNTRY.Drone_Operative_SNTRY_C
// 0x00C8 (0x0D98 - 0x0CD0)
class ADrone_Operative_SNTRY_C : public AOakDroneProjectile_GRMLN
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CD0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        SNTRYAudioComponent;                                      // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RocketL;                                                  // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RightMG;                                                  // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeftMG;                                                   // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PrimaryFX;                                                // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    StaticField;                                              // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DronePhase_Progress_B40E67134F63C129CB1640B226127C26;     // 0x0D10(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DronePhase__Direction_B40E67134F63C129CB1640B226127C26;   // 0x0D14(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DronePhase;                                               // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DigistructOut_Progress_979B4DD94042AA50076C24A0A27F66B4;  // 0x0D20(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DigistructOut__Direction_979B4DD94042AA50076C24A0A27F66B4;// 0x0D24(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D25(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DigistructOut;                                            // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTransform>                          CalledShotTransforms;                                     // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                CalledShotCount;                                          // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                CalledShotsRemaining;                                     // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CalledShotLocation;                                       // 0x0D48(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCryoEmitterEnabled;                                      // 0x0D54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D55(0x0003) MISSED OFFSET
	struct FDataTableValueHandle                       DroneDuration;                                            // 0x0D58(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    GlowMatInstance;                                          // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaskMatInstance;                                          // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       AlmightyOrdance_Rockets;                                  // 0x0D80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drone_Operative_SNTRY.Drone_Operative_SNTRY_C");
		return ptr;
	}


	bool HasValidDroneTarget();
	void ConfigureDigistruct();
	void ConfigureCryoEmitter();
	void OnSimCalledShotRelease();
	void RegisterDelegates();
	void DispatchCalledShotRestorationParticles(class AActor* KilledTarget);
	void RefundDuration(float Val);
	void AdvanceCalledShotCount(bool* bIsValid);
	void SetupCalledShot(const struct FVector& Location);
	void ApplyShieldDamageRefund(class AActor** CurrentTarget, struct FVector* LastDamageLocation, float* TotalRefund);
	void CreateStaticFieldBeamToTarget(class AActor** TargetActor, struct FName* BeamName);
	void CreateBadDoseBeamToTarget(class AActor** TargetActor, struct FName* BeamName);
	void SetupStaticField();
	void SetupCryoBullets();
	void CauseCollisionDamageToEnemy(class AActor* Enemy);
	void GetMoveDelayForTarget(float* res);
	class AActor* FindNewTargetAutonomous();
	void SetExhaustFXEnabled(bool bIsEnabled);
	void DropPayload();
	void UserConstructionScript();
	void DigistructOut__FinishedFunc();
	void DigistructOut__UpdateFunc();
	void DronePhase__FinishedFunc();
	void DronePhase__UpdateFunc();
	void BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY(bool bIsBoosting);
	void StartDigistructOut();
	void ApplyCollisionDamageToTarget(class AActor** Target);
	void ReceiveBeginPlay();
	void SetupMods();
	void OnShutdownGracefully();
	void DoGracefulShutdown();
	void DoDroneDelivery();
	void OnCalledShotActivated(struct FVector* Location);
	void DoNextCalledShot();
	void OnCalledShotKill(class AActor** KilledActor);
	void SetDronePhasing(bool* bPhasing);
	void HaltDronePhase();
	void ExecuteUbergraph_Drone_Operative_SNTRY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
