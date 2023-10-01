#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxVehicle.TurretMovementComponent
// 0x00F0 (0x0300 - 0x0210)
class UTurretMovementComponent : public UPawnMovementComponent
{
public:
	struct FRotator                                    TurretRelativeRotation;                                   // 0x0210(0x000C) (Transient, IsPlainOldData)
	float                                              MovementThresholdTolerance;                               // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DurationBeforeStop;                                       // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 MovementStartEvent;                                       // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 MovementStopEvent;                                        // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  MovementSpeedRTPC;                                        // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      MovementAudioPlaybackInst;                                // 0x0240(0x0018) (Transient)
	float                                              TimeSinceStop;                                            // 0x0258(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x025C(0x0001) MISSED OFFSET
	bool                                               bReturnToZeroRotation;                                    // 0x025D(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUsePlayersView;                                          // 0x025E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAimTowardsPlayersViewLocation;                           // 0x025F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotationInputs;                                           // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData)
	struct FVector2D                                   RotationMaxSpeed;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   RotationDamping;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bEnableReturnToZeroRotationRate;                          // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	struct FVector2D                                   ReturnToZeroRotationRate;                                 // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bControlYawMovement;                                      // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bControlPitchMovement;                                    // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableMovementCollision;                                 // 0x0286(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0287(0x0001) MISSED OFFSET
	struct FName                                       PivotSocket;                                              // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatedComponentRequired;                                // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePitchConstraints;                                     // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	float                                              PitchMinConstraint;                                       // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchMaxConstraint;                                       // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseYawConstraints;                                       // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	float                                              YawMinConstraint;                                         // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawMaxConstraint;                                         // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET
	struct FRotator                                    RemoteTurretRelativeRotation;                             // 0x02C0(0x000C) (Net, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x24];                                      // 0x02CC(0x0024) MISSED OFFSET
	class APawn*                                       TurretControlOwner;                                       // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.TurretMovementComponent");
		return ptr;
	}


	void UpdateTurretControlDependency();
	void UpdateParentInitialOffset();
	void SetRotationInputs(float XValue, float YValue);
	void ServerSetRotationInputs(const struct FVector2D& InRotationInputs);
};


// Class GbxVehicle.Vehicle
// 0x00B8 (0x0578 - 0x04C0)
class AVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TScriptInterface<class UVehicleMovementInterface>  VehicleMovement;                                          // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x04E8(0x0018) MISSED OFFSET
	bool                                               bUnpushable;                                              // 0x0500(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorComponentAppliedFromAspectData;                    // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTargetableComponent*                        CachedTargetableComponent;                                // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            CachedDamageComponent;                                    // 0x0520(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      CachedDamageCauserComponent;                              // 0x0528(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetingComponent*                         CachedTargetingComponent;                                 // 0x0530(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVehiclePartSelectionData*                   VehiclePartSelectionData;                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UVehiclePartData*>                    VehicleParts;                                             // 0x0540(0x0010) (Net, ZeroConstructor, Transient)
	float                                              CharacterCollidingResistance;                             // 0x0550(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x0554(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.Vehicle");
		return ptr;
	}


	void SetTeam(class UTeam* Team);
	void RemoveVehiclePart(class UVehiclePartData* CharacterPart);
	void OnRep_VehicleParts();
	bool IsPowerSliding();
	bool IsInAir();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	int GetNumWheelsInAir();
	TArray<class UVehiclePartData*> GetEquipedParts();
	void AddVehiclePart(class UVehiclePartData* CharacterPart);
};


// Class GbxVehicle.VehicleInventoryBalanceStateComponent
// 0x0000 (0x0348 - 0x0348)
class UVehicleInventoryBalanceStateComponent : public UInventoryBalanceStateComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleInventoryBalanceStateComponent");
		return ptr;
	}

};


// Class GbxVehicle.VehicleBoostData
// 0x0368 (0x0398 - 0x0030)
class UVehicleBoostData : public UGbxDataAsset
{
public:
	bool                                               bApplyFullThrottleWhenBoosting;                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinBoostDuration;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoostPhysicsParams                         GroundBoostParams;                                        // 0x0038(0x0150) (Edit)
	struct FBoostPhysicsParams                         AirBoostParams;                                           // 0x0188(0x0150) (Edit)
	class UGameResourcePoolData*                       BoostPoolData;                                            // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bContinuousStartCheck;                                    // 0x02E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class UGbxCondition*                               StartBoostCondition;                                      // 0x02E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               StopBoostCondition;                                       // 0x02F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bStopConditionCanOverrideMinBoostDuration;                // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPauseWhenInAir;                                          // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02FA(0x0002) MISSED OFFSET
	float                                              MinStartBoostSpeed;                                       // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinStartBoostAngle;                                       // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoostCooldownTime;                                        // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantBoost;                                            // 0x0308(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	int                                                InstantBoostCharges;                                      // 0x030C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InstantBoostDuration;                                     // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModifySteering;                                          // 0x0314(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          SteeringRatioCurve;                                       // 0x0318(0x0078) (Edit)
	float                                              SteeringRatioInterpSpeed;                                 // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleBoostData");
		return ptr;
	}

};


// Class GbxVehicle.VehicleBoostComponent
// 0x00A0 (0x0218 - 0x0178)
class UVehicleBoostComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBoostStarted;                                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBoostStopped;                                           // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0198(0x0018) MISSED OFFSET
	class UVehicleBoostData*                           BoostData;                                                // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AVehicle*                                    Vehicle;                                                  // 0x01B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01C0(0x0001) MISSED OFFSET
	bool                                               bIsBoosting;                                              // 0x01C1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x01C2(0x0016) MISSED OFFSET
	struct FGameResourcePoolReference                  BoostPool;                                                // 0x01D8(0x0018) (Net, Transient)
	unsigned char                                      UnknownData03[0x28];                                      // 0x01F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleBoostComponent");
		return ptr;
	}


	void VehicleBoostEvent__DelegateSignature();
	void StopBoost(bool bForce);
	void StartBoost();
	void ResumeBoost();
	void RegisterBoostRegenerateEvent(float BoostTarget, const struct FScriptDelegate& BoostValueReachedDelegate);
	void PauseBoost();
	void OnRep_IsBoosting(bool bWasBoosting);
	void K2_BoostStopped();
	void K2_BoostStarted();
	float GetRelativeBoostSpeed();
	float GetMaxBoostPoolValue();
	float GetCurrentBoostPoolValue();
	int GetCurrentBoostChargesCount();
	bool GetBoostEnabled();
	struct FVector GetBoostDirection();
};


// Class GbxVehicle.VehiclePartData
// 0x0010 (0x0260 - 0x0250)
class UVehiclePartData : public UInventoryPartData
{
public:
	struct FName                                       VehicleArchetype;                                         // 0x0250(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bIsAShield;                                               // 0x0258(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehiclePartData");
		return ptr;
	}

};


// Class GbxVehicle.VehicleAirControlComponent
// 0x0098 (0x0210 - 0x0178)
class UVehicleAirControlComponent : public UActorComponent
{
public:
	float                                              YawControlForce;                                          // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchControlForce;                                        // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ForceRatio;                                               // 0x0180(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
	class AVehicle*                                    Vehicle;                                                  // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleAirControlComponent");
		return ptr;
	}

};


// Class GbxVehicle.VehicleContactPtModifierInterface
// 0x0000 (0x0028 - 0x0028)
class UVehicleContactPtModifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleContactPtModifierInterface");
		return ptr;
	}

};


// Class GbxVehicle.VehicleDigiThrustComponent
// 0x0160 (0x02D8 - 0x0178)
class UVehicleDigiThrustComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDigiThrustStarted;                                      // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDigiThrustCollision;                                    // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDigiThrustEnd;                                          // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDigiThrustEndFinished;                                  // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TeleportMaxDist;                                          // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeleportDuration;                                         // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTeleportDirection;                                    // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReorientOnTeleport;                                      // 0x01C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01C2(0x0002) MISSED OFFSET
	float                                              ReorientationRatio;                                       // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               TeleportCondition;                                        // 0x01C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameResourcePoolData*                       BoostPoolData;                                            // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumChargesOnFullResource;                                 // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x01DC(0x001C) MISSED OFFSET
	float                                              TraceStepLength;                                          // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundDetectionTraceLength;                               // 0x01FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundTraceRadius;                                        // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathPtGroundHeight;                                       // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValidFloorAngle;                                          // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorMaxAngleDiffBetweenGroundTraces;                     // 0x020C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorMaxHeightDiffBetweenGroundTraces;                    // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RefUpBlendWeight;                                         // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepLastValidGroundUpWhenInAir;                          // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	class AVehicle*                                    Vehicle;                                                  // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameResourcePoolReference                  BoostPool;                                                // 0x0228(0x0018) (Net, Transient)
	bool                                               bTeleportRequested;                                       // 0x0240(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7F];                                      // 0x0241(0x007F) MISSED OFFSET
	class UClass*                                      DigithrustInAction;                                       // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DigithrustOutAction;                                      // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DigithrustOutActionDuration;                              // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleDigiThrustComponent");
		return ptr;
	}


	void SetTeleportDirection(const struct FVector& WantedDirection);
	void RequestTeleport();
	void NetMulticast_OnDigiThrustStarted();
	void NetMulticast_OnDigiThrustEndFinished();
	void NetMulticast_OnDigiThrustEnd();
	void NetMulticast_OnDigiThrustCollision();
	bool IsTeleporting();
	float GetMaxBoostPoolValue();
	float GetCurrentBoostPoolValue();
	void DigiThrustEvent__DelegateSignature();
};


// Class GbxVehicle.VehicleFlightComponent
// 0x0000 (0x0230 - 0x0230)
class UVehicleFlightComponent : public UFloatingPawnMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleFlightComponent");
		return ptr;
	}

};


// Class GbxVehicle.VehicleHitchAttachPtComponent
// 0x0070 (0x0790 - 0x0720)
class UVehicleHitchAttachPtComponent : public USphereComponent
{
public:
	float                                              AttachTransitionLength;                                   // 0x0720(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttachTransitionTolerance;                                // 0x0724(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0728(0x0018) MISSED OFFSET
	float                                              BrakeTorque;                                              // 0x0740(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartAttachTransition;                                  // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttached;                                               // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetached;                                               // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWheeledVehicleMovementComponentNW*          CachedAttachedVehicleMovementComp;                        // 0x0778(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWheeledVehicleMovementComponentNW*          CachedMovementComponent;                                  // 0x0780(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0788(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleHitchAttachPtComponent");
		return ptr;
	}


	bool IsAttached();
	void HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle);
};


// Class GbxVehicle.VehicleHitchComponent
// 0x0070 (0x0540 - 0x04D0)
class UVehicleHitchComponent : public UPhysicsConstraintComponent
{
public:
	bool                                               bCheckAutoAttach;                                         // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartAttachTransition;                                  // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttached;                                               // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetached;                                               // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              HitchAttachCheckRadius;                                   // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawLimit;                                                 // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimit;                                               // 0x0510(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitchConstraintStiffness;                                 // 0x0514(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitchConstraintDamping;                                   // 0x0518(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UVehicleHitchAttachPtComponent*              AttachedPoint;                                            // 0x0520(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AVehicle*                                    OwningVehicle;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWheeledVehicleMovementComponent*            OwningVehicleMovementComp;                                // 0x0530(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleHitchComponent");
		return ptr;
	}


	void TeleportTrailerAndAttachToHitch(class AActor* TrailerToAttach);
	void HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle);
	void DetachFromHitch();
	void AttachToHitch(class UVehicleHitchAttachPtComponent* AttachPtToAttach);
};


// Class GbxVehicle.VehicleHoverComponent
// 0x0110 (0x0288 - 0x0178)
class UVehicleHoverComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoverEnabled;                                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHoverDisabled;                                          // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RawStrafeInput;                                           // 0x0198(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RawForwardInput;                                          // 0x019C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FReplicatedHoverComponentState              ReplicatedState;                                          // 0x01A0(0x0018) (Net, Transient)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01B8(0x001C) MISSED OFFSET
	float                                              ForceRefVel;                                              // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ForceCurve;                                               // 0x01D8(0x0078) (Edit)
	float                                              DampingForce;                                             // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDampingForce;                                      // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTireConfig*                                 TireConfigWhenStrafing;                                   // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CustomGravityModifier;                                    // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFaceControlRotation;                                     // 0x0264(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	float                                              TimeToFaceControlRotation;                                // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class AVehicle*                                    Vehicle;                                                  // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWheeledVehicleMovementComponentNW*          MovementComponentNW;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleHoverComponent");
		return ptr;
	}


	void VehicleHoverEvent__DelegateSignature();
	void ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, const struct FRotator& InTargetRotation);
	bool IsHoverEnabled();
	void EnableHover(bool bEnable);
};


// Class GbxVehicle.VehicleMovementInterface
// 0x0000 (0x0028 - 0x0028)
class UVehicleMovementInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleMovementInterface");
		return ptr;
	}


	struct FVector2D GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput);
};


// Class GbxVehicle.VehiclePartActor
// 0x0020 (0x0478 - 0x0458)
class AVehiclePartActor : public AActor
{
public:
	bool                                               bWeldSimulatedBodies;                                     // 0x0458(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWeldedBodiesShouldModifyPhysicalProperties;              // 0x0459(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForwardDamageToParent;                                   // 0x045A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x045B(0x0005) MISSED OFFSET
	class AVehicle*                                    OwningVehicle;                                            // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentSocket;                                             // 0x0468(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehiclePartActor");
		return ptr;
	}


	void WeldActorToVehicle(class AActor* SpawnedPart);
	void ReceiveParentVehicleBeginPlay();
	void OnRep_ParentSocket();
	void OnRep_OwningVehicle();
};


// Class GbxVehicle.VehiclePartSelectionData
// 0x0000 (0x0098 - 0x0098)
class UVehiclePartSelectionData : public UActorPartSelectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehiclePartSelectionData");
		return ptr;
	}

};


// Class GbxVehicle.VehiclePowerSlideComponent
// 0x01F0 (0x0368 - 0x0178)
class UVehiclePowerSlideComponent : public UActorComponent
{
public:
	bool                                               bApplyHandbrake;                                          // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EInAirBehavior                                     InAirBehavior;                                            // 0x0179(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x017A(0x0002) MISSED OFFSET
	int                                                MaxNumWheelsInAir;                                        // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStartPowerSlide;                                        // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndPowerSlide;                                          // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartPowerSlideBoost;                                   // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndPowerSlideBoost;                                     // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bIsPowerSliding;                                          // 0x01C0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB7];                                      // 0x01C1(0x00B7) MISSED OFFSET
	float                                              AngleToConsiderDrift;                                     // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDriftVelThreshold;                                     // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeInDriftDecayRate;                                     // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDriftDurationForBoost;                                 // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDriftDurationForBoost;                                 // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          BoostCurve;                                               // 0x0290(0x0078) (Edit)
	float                                              MaxBoostForce;                                            // 0x0308(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostDriftBoostDurationMin;                                // 0x030C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostDriftBoostDurationMax;                                // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVelForPostDriftBoost;                                  // 0x0314(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRelativeDirectionData                      BoostDirection;                                           // 0x0318(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehiclePowerSlideComponent");
		return ptr;
	}


	void SetPowerSlideEnabled(bool bEnable);
	void ResumePowerSlide(const struct FName& Reason);
	void PausePowerSlide(const struct FName& Reason);
	void OnRep_IsPowerSliding(bool bWasPowerSliding);
	bool IsPowerSlidePaused();
	bool IsInPowerSlideBoost();
	bool GetPowerSlideEnabled();
	float GetCurrentBoostRatio();
	void CancelPowerSlide();
};


// Class GbxVehicle.GbxVehicleWheel
// 0x0020 (0x0130 - 0x0110)
class UGbxVehicleWheel : public UVehicleWheel
{
public:
	float                                              SuspensionForceXOffset;                                   // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionForceYOffset;                                   // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SuspensionTravelDirection;                                // 0x0118(0x000C) (Edit, IsPlainOldData)
	float                                              MaxAllowedLongitudinalSlipPerRotation;                    // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.GbxVehicleWheel");
		return ptr;
	}

};


// Class GbxVehicle.VehicleCollisionResponseModificationContext
// 0x0010 (0x0038 - 0x0028)
class UVehicleCollisionResponseModificationContext : public UObject
{
public:
	class AVehicle*                                    Collider;                                                 // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AVehicle*                                    Collidee;                                                 // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.VehicleCollisionResponseModificationContext");
		return ptr;
	}

};


// Class GbxVehicle.WheeledVehicleMovementComponentNW
// 0x0788 (0x0D40 - 0x05B8)
class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent4W
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET
	TArray<int8_t>                                     DrivenWheels;                                             // 0x05C0(0x0010) (Edit, ZeroConstructor)
	EVehicleDriveType                                  VehicleDriveType;                                         // 0x05D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	float                                              ForwardMarginOfError;                                     // 0x05D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContiguousMovementDirectionThreshold;                     // 0x05D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContiguousMovementDirectionSpeedThreshold;                // 0x05DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bContiguousMovementAppliesToReverse;                      // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOversteerFixupEnabled;                                   // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05E2(0x0006) MISSED OFFSET
	struct FRuntimeFloatCurve                          OversteerFixupCurve;                                      // 0x05E8(0x0078) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0660(0x0004) MISSED OFFSET
	bool                                               bAerialRotationalDampingEnabled;                          // 0x0664(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	float                                              RisingAerialRotationDampingFactor;                        // 0x0668(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AerialRotationalDamping;                                  // 0x066C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AerialRotationalDeviationAngle;                           // 0x0670(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAerialAutoStabilizationEnabled;                          // 0x0674(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	float                                              RisingAerialAutoStabilizationFactor;                      // 0x0678(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AerialAutoStabilization;                                  // 0x067C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutoUnflip;                                           // 0x0680(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	struct FVector2D                                   AutoUnflipAngleRange;                                     // 0x0684(0x0008) (Edit, IsPlainOldData)
	float                                              AutoUnflipEaseInZone;                                     // 0x068C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          AutoUnflipCurve;                                          // 0x0690(0x0078) (Edit)
	float                                              AutoUnflipForce;                                          // 0x0708(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          TankTreadInputDifferenceCurve;                            // 0x0710(0x0078) (Edit)
	float                                              MaxTreadThrustOvershootValue;                             // 0x0788(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          BrakeWhenTurningRatioCurve;                               // 0x0790(0x0078) (Edit)
	float                                              OppositeThreadSpeedWhenTurningInPlace;                    // 0x0808(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CustomGravityModifier;                                    // 0x080C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundedCustomGravityModifier;                            // 0x0810(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSteeringCurve;                                     // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0xB];                                       // 0x0815(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBecameAirborn;                                          // 0x0820(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLanded;                                                 // 0x0830(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0840(0x0004) MISSED OFFSET
	bool                                               bLateralToLongitudinalVelocityShiftEnabled;               // 0x0844(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          LateralToLongitudinalVelocityShiftCurve;                  // 0x0848(0x0078) (Edit)
	struct FRuntimeFloatCurve                          TireForcesRatioToSlopeAngleCurve;                         // 0x08C0(0x0078) (Edit)
	float                                              BalanceAssistMaxSpeed;                                    // 0x0938(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSagittalBalanceCurve;                                 // 0x093C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          SagittalBalanceCurve;                                     // 0x0940(0x0078) (Edit)
	struct FRuntimeFloatCurve                          SagittalBalanceSpeedCurve;                                // 0x09B8(0x0078) (Edit)
	float                                              SagitalBlendSpeed;                                        // 0x0A30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EBrakingSagitalBlendSpeed;                                // 0x0A34(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EBrakingSagittalAngleRefSpeedKmH;                         // 0x0A38(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EBrakingSagitalLeanAngle;                                 // 0x0A3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCoronalBalanceCurve;                                  // 0x0A40(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0A41(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          CoronalBalanceCurve;                                      // 0x0A48(0x0078) (Edit)
	bool                                               bUseBrakeAssist;                                          // 0x0AC0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHandBrakeAssist;                                      // 0x0AC1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyBrakeAssistOnLatForces;                             // 0x0AC2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x0AC3(0x0001) MISSED OFFSET
	float                                              BrakeAssistForceScale;                                    // 0x0AC4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          BrakeAssistCurve;                                         // 0x0AC8(0x0078) (Edit)
	bool                                               bCanHandbrake;                                            // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUTurnAssist;                                          // 0x0B41(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateUTurnAssistOnHandbrake;                          // 0x0B42(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x5];                                       // 0x0B43(0x0005) MISSED OFFSET
	class UGbxCondition*                               ActivateUTurnAssistCondition;                             // 0x0B48(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bApplyUTurnAssistInAir;                                   // 0x0B50(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              UTurnAssistForce;                                         // 0x0B54(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UTurnAssistForceInterpSpeed;                              // 0x0B58(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UTurnAssistForceReturnToZeroInterpSpeed;                  // 0x0B5C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UTurnAssistRefSpeed;                                      // 0x0B60(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UTurnAssistMaxAngularVelInfluence;                        // 0x0B64(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          UTurnAssistCurve;                                         // 0x0B68(0x0078) (Edit)
	struct FRuntimeFloatCurve                          LiquidBodyWheelDepthToForceCurve;                         // 0x0BE0(0x0078) (Edit)
	float                                              LiquidBodyDampingCoefficient;                             // 0x0C58(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0C5C(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                CollisionResponseFormula;                                 // 0x0C60(0x0038) (Edit)
	float                                              AngleToUpsideDown;                                        // 0x0C98(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           DefaultPhysicalMaterial;                                  // 0x0CA0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           UpsideDownPhysicalMaterial;                               // 0x0CA8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDontMoveWhenCollided;                                    // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0CB1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CryoPenaltyCurve;                                         // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAntiRollBarData>                    AntiRollBars;                                             // 0x0CC0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData20[0x28];                                      // 0x0CD0(0x0028) MISSED OFFSET
	class UVehicleCollisionResponseModificationContext* CollisionResponseContext;                                 // 0x0CF8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x40];                                      // 0x0D00(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxVehicle.WheeledVehicleMovementComponentNW");
		return ptr;
	}


	void SetToRestState();
	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetSagittalBalancingEnabled(bool bEnable);
	void SetOversteerFixupEnabled(bool bEnable);
	void SetNoDriveSteerAngle(float SteerAngle, int WheelIndex);
	void SetNoDriveDriveTorque(float DriveTorque, int WheelIndex);
	void SetNoDriveBrakeTorque(float BrakeTorque, int WheelIndex);
	void SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable);
	void SetCustomGravityModifier(float NewModifier);
	void SetCoronalBalancingEnabled(bool bEnable);
	void SetAerialRotationalDampingEnabled(bool bEnable);
	void ResetCustomGravityModifer();
	bool IsInAir();
	bool GetSagittalBalancingEnabled();
	bool GetOversteerFixupEnabled();
	int GetNumWheelsInAir();
	bool GetLateralToLongitudinalVelocityShiftEnabled();
	struct FVector2D GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput);
	float GetCustomGravityModifier();
	bool GetCoronalBalancingEnabled();
	struct FVector2D GetCameraRelativeThrottleAndSteer(const struct FVector2D& StickInput, EVehicleCameraRelativeDrivingMode Mode, class UCurveFloat* AngleToSteeringCurve, float* WantedDirAngle);
	bool GetAerialRotationalDampingEnabled();
	void ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
