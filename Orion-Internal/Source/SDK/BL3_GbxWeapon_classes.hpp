#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxWeapon.Weapon
// 0x0480 (0x08D8 - 0x0458)
class AWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0458(0x0018) MISSED OFFSET
	class UWeaponFireComponent*                        CurrentFireComponent;                                     // 0x0470(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWeaponTypeAsset*                            WeaponDisplayData;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponTypeData*                             WeaponType;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          SwitchModeTimeScale;                                      // 0x0488(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	float                                              SwitchModeTime;                                           // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SwitchModeCompletePercent;                                // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TScriptInterface<class UGbxWeaponUserInterface>    WeaponUser;                                               // 0x04A0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    BegunPlay;                                                // 0x04B0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    NotifyGivenTo;                                            // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyAttached;                                           // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyDetached;                                           // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyEquipped;                                           // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyPutDown;                                            // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifySwitchedMode;                                       // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyFirstPersonCreated;                                 // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyUseInput;                                           // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyReloadStarted;                                      // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyReloadEnded;                                        // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyTargetLockChanged;                                  // 0x0560(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyHidden;                                             // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PostSprintDelayUseTime;                                   // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ViewModelFOV;                                             // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldZoomedForegroundNearRegion;                   // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	TArray<struct FDamageScaleConditionalData>         DamageScaleConditionals;                                  // 0x0590(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FGbxObjectReplicatorProxy                   ReplicationProxy;                                         // 0x05A0(0x0068) (Net, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0608(0x0008) MISSED OFFSET
	struct FWeaponAttachState                          PendingAttachState;                                       // 0x0610(0x0018) (Net, Transient)
	struct FWeaponAttachState                          AttachState;                                              // 0x0628(0x0018) (Transient)
	struct FGbxAttributeFloat                          EquipTime;                                                // 0x0640(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData04[0x18];                                      // 0x064C(0x0018) MISSED OFFSET
	struct FGbxAttributeFloat                          PutDownTime;                                              // 0x0664(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData05[0xA];                                       // 0x0670(0x000A) MISSED OFFSET
	unsigned char                                      PendingUseModeIndex;                                      // 0x067A(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x15];                                      // 0x067B(0x0015) MISSED OFFSET
	unsigned char                                      CurrentUseModeIndex;                                      // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CurrentSlotIndex;                                         // 0x0691(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      NextSlotIndex;                                            // 0x0692(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0693(0x0005) MISSED OFFSET
	TArray<struct FWeaponUseModeState>                 UseModeState;                                             // 0x0698(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x28];                                      // 0x06A8(0x0028) MISSED OFFSET
	class UAimAssistParameters*                        AimAssetParameters;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetLocked;                                          // 0x06D8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06D9(0x0003) MISSED OFFSET
	uint32_t                                           AttributeResolverUseModeBitmask;                          // 0x06DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x06E0(0x0010) MISSED OFFSET
	bool                                               bForceUnzoomWhenSwitchingModes;                           // 0x06F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xF];                                       // 0x06F1(0x000F) MISSED OFFSET
	TArray<class UWeaponAttachmentSlot*>               AttachmentSlots3P;                                        // 0x0700(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UWeaponAttachmentSlot*>               AttachmentSlots1P;                                        // 0x0710(0x0010) (ZeroConstructor, Transient)
	bool                                               bWeaponAttached;                                          // 0x0720(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	TArray<struct FWeaponRegisterMaterialEffectData>   RegisteredMaterialEffects;                                // 0x0728(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData13[0x58];                                      // 0x0738(0x0058) MISSED OFFSET
	TArray<struct FWeaponRegisterSkeletalControlData>  RegisteredSkeletalControls;                               // 0x0790(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData14[0x8];                                       // 0x07A0(0x0008) MISSED OFFSET
	class UWeaponTriggerFeedbackAsset*                 CachedFireTriggerFeedback;                                // 0x07A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWeaponTriggerFeedbackAsset*                 CachedZoomTriggerFeedback;                                // 0x07B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShowCrosshair;                                           // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysTickAttachedMeshes;                                // 0x07B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x07BA(0x0006) MISSED OFFSET
	struct FName                                       BodyWeaponHoldName;                                       // 0x07C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AnimSetGenericNames;                                      // 0x07C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData16[0x8];                                       // 0x07D8(0x0008) MISSED OFFSET
	class UClass*                                      DamageModifierCompClass;                                  // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x10];                                      // 0x07E8(0x0010) MISSED OFFSET
	struct FName                                       CurrentState;                                             // 0x07F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x98];                                      // 0x0800(0x0098) MISSED OFFSET
	TArray<struct FWeaponRegisterAttachmentEffectData> UnregisteredFirstPersonOnlyAttachmentEffects;             // 0x0898(0x0010) (ZeroConstructor, Transient)
	TArray<class UTexture2D*>                          UseModeIcons;                                             // 0x08A8(0x0010) (ZeroConstructor, Transient)
	TArray<class FString>                              UseModeIconFrameNames;                                    // 0x08B8(0x0010) (ZeroConstructor, Transient)
	struct FName                                       MainHandGripSocketName;                                   // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OffHandGripSocketName;                                    // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.Weapon");
		return ptr;
	}


	void Unlock(bool bReplicate);
	void TryAutoReload();
	void ToggleMode(unsigned char InputChannel);
	void SwitchPendingUseMode();
	void SwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced);
	void StopZooming(bool bSkipTransitions, bool bClearInput);
	void StopWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction);
	void StopUsing(unsigned char InputChannel, bool bForced);
	void StopReloading();
	void StopModeSwitch();
	void StopEffects(TEnumAsByte<EWeaponEffectType> EffectType, unsigned char UseModeIndex);
	void StopDynamicMaterialEffect(int EffectID);
	void StopAnimation(class UAnimMontage* Anim, bool bFirstPerson);
	void StartZooming();
	void StartUsing(unsigned char InputChannel);
	void StartReloading(bool bAuto);
	void SetTargetLocked(bool bIsLocked);
	void SetPreUseState(unsigned char UseModeIndex, bool bEnabled);
	void SetMaterialVectorParameterValue(const struct FName& ParamName, const struct FLinearColor& ParamValue);
	void SetMaterialScalarParameterValue(const struct FName& ParamName, float ParamValue);
	void SetEffectVectorParameter(const struct FName& ParamName, const struct FVector& ParamValue, const struct FWeaponEffectQueryData& QueryData);
	void SetEffectMaterialParameter(const struct FName& ParamName, class UMaterialInterface* ParamValue, const struct FWeaponEffectQueryData& QueryData);
	void SetEffectFloatParameter(const struct FName& ParamName, float ParamValue, const struct FWeaponEffectQueryData& QueryData);
	void SetEffectEmitterState(const struct FName& EmitterName, bool bEnabled, const struct FWeaponEffectQueryData& QueryData);
	void SetEffectColorParameter(const struct FName& ParamName, const struct FLinearColor& ParamValue, const struct FWeaponEffectQueryData& QueryData);
	void SetBoneVisibility(const struct FName& BoneName, bool bVisible, TEnumAsByte<EWeaponAttachmentVisibilityType> AttachmentType);
	void ServerUnlock();
	void ServerSwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced);
	void ServerStopUsing(unsigned char InputChannel, bool bForced);
	void ServerStopModeSwitch(unsigned char InputChannel, unsigned char ClientUseModeIndex);
	void ServerStartUsing(unsigned char InputChannel, unsigned char ClientPatternSeed);
	void ServerStartReloading(unsigned char UseModeIndex, bool bAuto);
	void ServerSetZoomState(unsigned char UseModeIndex, const struct FWeaponZoomState& NewState, float ZoomStartOffset);
	void ServerSetPatternSeed(unsigned char ClientPatternSeed);
	void ServerRestartAutoUse();
	void ServerLock(float Duration);
	void ServerInterruptReloadToUse(int ClientLoadedAmmo);
	void ServerEquipInterruptible();
	void RegisterTrinketAttachment(const struct FWeaponRegisterTrinketAttachmentData& Data);
	void RegisterSkeletalControl(const struct FWeaponRegisterSkeletalControlData& Data);
	void RegisterSimpleEffect(TEnumAsByte<EWeaponEffectType> EffectType, class UParticleSystem* Effect, const struct FName& EffectSocket);
	void RegisterMaterialEffect(const struct FWeaponRegisterMaterialEffectData& Data);
	void RegisterEffect(const struct FWeaponRegisterAttachmentEffectData& Data);
	void ReevaluateConditionalEffects();
	void PrevZoomLevel();
	void PlayEffects(TEnumAsByte<EWeaponEffectType> EffectType, unsigned char UseModeIndex, int EffectID);
	int PlayDynamicMaterialEffect(const struct FWeaponMaterialEffectData& Data);
	float PlayAnimation(class UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration);
	void OnZoomedOut();
	void OnUseStarted();
	void OnUseFinished();
	void OnUpdateSkeletalControlsWhenUseFinishes();
	void OnUpdateSkeletalControlsWhenUsed();
	void OnUpdateSkeletalControlsWhenAmmoChanges();
	void OnRep_TargetLockedChanged();
	void OnRep_PendingUseModeIndex();
	void OnRep_PendingAttachState();
	void OnRep_CurrentUseModeIndex(unsigned char PreviousUseModeIndex);
	void OnReloadEnded(bool bCompleted);
	void OnAmmoGivenToEmptyWeapon();
	void NotifySkeletalControl(TEnumAsByte<EWeaponEffectType> ControlType, const struct FName& ControlName, EWeaponSkeletalControlEvent Event, float EventValue);
	void NextZoomLevel();
	void Lock(float Duration, bool bReplicate);
	void K2_StopWeaponActionObj(class UGbxAction* WeaponAction);
	class UGbxAction* K2_PlayWeaponActionEx(TEnumAsByte<EWeaponActionType> WeaponAction, const struct FActionState_Base& ActionParams, bool bCheckForRelevancy);
	class UGbxAction* K2_PlayWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy);
	bool IsZoomedIn(bool bIncludeTransitions);
	bool IsZoomed();
	bool IsUsing();
	bool IsTargetLocked();
	bool IsSwitchingModes();
	bool IsReloading();
	bool IsPuttingDown();
	bool IsPendingUse(unsigned char InputChannel);
	bool IsLocked();
	bool IsLocalAuthority();
	bool IsInactive();
	bool IsEquipping();
	bool IsAuthorityUsing();
	bool IsAuthoritySwitchingModes();
	bool IsAuthorityReloading();
	bool IsAuthorityPuttingDown();
	bool IsAuthorityEquipping();
	bool IsActive();
	void GivenTo(class APawn* NewOwner);
	float GetZoomFOVScale();
	float GetZoomEffect();
	float GetZoomDuration();
	class UActorComponent* GetUseModeComponentByClass(class UClass* ComponentClass, unsigned char UseModeIndex);
	float GetMuteADSAlpha();
	float GetMaxZoomFOVScale();
	unsigned char GetLastInputChannel();
	unsigned char GetCurrentReloadPartType();
	class UMeshComponent* GetAttachmentMesh(bool bFirstPerson, unsigned char SlotIndex);
	class UActorComponent* GetAssociatedUseModeComponentByClass(class UClass* ComponentClass, class UActorComponent* ReferenceComponent);
	class UAimAssistParameters* GetAimAssistParameters();
	void EquipInterruptible();
	void Dropped();
	void CycleZoomLevel();
	void ClientUnlock();
	void ClientStopReloading();
	void ClientLock(float Duration);
	unsigned char AddUseMode(class UWeaponUseComponent* UseComponent, TArray<class UActorComponent*> OtherComponents, int InputChannels);
	void Activate(class APawn* WeaponOwner, unsigned char InSlot, EWeaponEquipType InEquipType);
};


// Class GbxWeapon.WeaponPreUseComponent
// 0x0020 (0x0198 - 0x0178)
class UWeaponPreUseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    NotifyPreUseFinished;                                     // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnabled;                                                 // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponPreUseComponent");
		return ptr;
	}


	void K2_OnDeactivated();
	void K2_OnActivated();
};


// Class GbxWeapon.WeaponUseComponent
// 0x00A0 (0x0218 - 0x0178)
class UWeaponUseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	unsigned char                                      UseMode;                                                  // 0x0180(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAutoSwitchModeWhenOutOfAmmo : 1;                         // 0x0181(0x0001) (Edit)
	unsigned char                                      bClearUseInputWhenSwitchingModes : 1;                     // 0x0181(0x0001) (Edit)
	unsigned char                                      bActivateModeWhenZoomed : 1;                              // 0x0181(0x0001) (Edit)
	unsigned char                                      bUseAnimationSwitchModeTime : 1;                          // 0x0181(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	class UGbxCrosshairDataAsset*                      CrosshairData;                                            // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCrosshairDataAsset*                      ZoomedCrosshairData;                                      // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ModeName;                                                 // 0x01A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAttributeEffectData>                InstigatorAttributeEffects;                               // 0x01B0(0x0010) (Edit, ZeroConstructor)
	struct FScriptMulticastDelegate                    NotifyUseStarted;                                         // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyUseFinished;                                        // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyUsed;                                               // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FGbxAttributeModifierHandle>         InstigatorAttributeModifiers;                             // 0x01F0(0x0010) (ZeroConstructor, Transient)
	class UWeaponPreUseComponent*                      PreUseComponent;                                          // 0x0200(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponUseComponent");
		return ptr;
	}


	bool ToggleMode();
	void SwitchToZoomedMode(unsigned char ZoomLevel);
	void SwitchFromZoomedMode(unsigned char ZoomLevel);
	void OnPreUseFinished(bool bInterrupted);
	void K2_OnDeactivated();
	void K2_OnActivated();
	bool CanActivateMode();
};


// Class GbxWeapon.WeaponFireComponent
// 0x06E8 (0x0900 - 0x0218)
class UWeaponFireComponent : public UWeaponUseComponent
{
public:
	struct FGbxAttributeFloat                          FireRate;                                                 // 0x0218(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeInteger                        AutomaticBurstCount;                                      // 0x0224(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          BurstFireDelay;                                           // 0x0230(0x000C) (Edit, BlueprintVisible, Net)
	bool                                               bAutoBurst;                                               // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	struct FName                                       FireSocket;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               FireSockets;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               FullFireSocketCycle;                                      // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0259(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x025A(0x0002) MISSED OFFSET
	float                                              MinFireRateScale;                                         // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          FireRateAccelDuration;                                    // 0x0260(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          FireRateDecelDuration;                                    // 0x026C(0x000C) (Edit, BlueprintVisible, Net)
	float                                              MinFireRatePercentToFire;                                 // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FireRateCurve;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseShotStrengthFormula;                                  // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ShotStrengthFormula;                                      // 0x0290(0x0038) (Edit)
	int                                                FireSequenceLength;                                       // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          ResetFireSequenceTime;                                    // 0x02CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	float                                              ResetFireSequenceCompletePercent;                         // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAdvanceFireSequenceAtEndOfBurst;                         // 0x02DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTotalShotCostRequiredToFire;                             // 0x02DD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02DE(0x0002) MISSED OFFSET
	struct FGbxAttributeInteger                        ShotAmmoCost;                                             // 0x02E0(0x000C) (Edit, BlueprintVisible, Net)
	int                                                MinShotAmmoCost;                                          // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          Spread;                                                   // 0x02F0(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          AccuracyImpulse;                                          // 0x02FC(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          BurstAccuracyImpulseScale;                                // 0x0308(0x000C) (Edit, BlueprintVisible)
	float                                              ViewModelShotOffsetScale;                                 // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          Damage;                                                   // 0x0318(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                DamageFormula;                                            // 0x0328(0x0038) (Edit)
	class UCurveFloat*                                 ShotStrengthDamageCurve;                                  // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          DamageRadius;                                             // 0x0368(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                DamageRadiusFormula;                                      // 0x0378(0x0038) (Edit)
	class UCurveFloat*                                 ShotStrengthDamageRadiusCurve;                            // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          ImpactForce;                                              // 0x03B8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FForceSelection                             ImpactForceSelection;                                     // 0x03C8(0x0020) (Edit)
	class UCurveFloat*                                 ShotStrengthImpactForceCurve;                             // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactData;                                               // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MuzzleFXSequenceLength;                                   // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSoundPerceptionProperties                  FireSoundPerception;                                      // 0x040C(0x000C) (Edit, IsPlainOldData)
	class UFeedbackData*                               FireFeedback;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayFeedbackAtLocation : 1;                              // 0x0420(0x0001) (Edit)
	unsigned char                                      bScaleFeedbackWithFireRate : 1;                           // 0x0420(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UFeedbackData*                               ScaledFeedback;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          FeedbackFireRateScalar;                                   // 0x0430(0x0078) (Edit)
	struct FName                                       FeedbackSocket;                                           // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSyncAnimationToFireRate;                                 // 0x04B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	float                                              FireAnimationBlendSpace;                                  // 0x04B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponEffectType>                     SkeletalControlType;                                      // 0x04B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FName                                       SkeletalControlName;                                      // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkeletalControlFireInput;                                 // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOntoBestTarget;                                      // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	float                                              DelayInitializeAttribute;                                 // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xD];                                       // 0x04D4(0x000D) MISSED OFFSET
	unsigned char                                      UnknownData13 : 1;                                        // 0x04E1(0x0001)
	unsigned char                                      bFireRateAccelActive : 1;                                 // 0x04E1(0x0001) (Net, Transient)
	unsigned char                                      UnknownData14[0x2];                                       // 0x04E2(0x0002) MISSED OFFSET
	EWeaponFireRateState                               FireRateState;                                            // 0x04E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x04E2(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CurrentBurstShotCount;                                    // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CurrentFireSequenceIndex;                                 // 0x04EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x10];                                      // 0x04ED(0x0010) MISSED OFFSET
	unsigned char                                      ClientFireSequenceState;                                  // 0x04FD(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x22];                                      // 0x04FE(0x0022) MISSED OFFSET
	float                                              FireRatePercent;                                          // 0x0520(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x14];                                      // 0x0524(0x0014) MISSED OFFSET
	unsigned char                                      FlashSlot;                                                // 0x0538(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      FlashCount;                                               // 0x0539(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x053A(0x0006) MISSED OFFSET
	struct FVector_NetQuantize                         ImpactLocation;                                           // 0x0540(0x000C) (Net, Transient)
	float                                              DamageAmount;                                             // 0x054C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGbxParam                                   AIBurstCount;                                             // 0x0550(0x0080) (Edit)
	struct FGbxParam                                   AIBurstFireDelay;                                         // 0x05D0(0x0080) (Edit)
	struct FGbxParam                                   AIFireInterval;                                           // 0x0650(0x0080) (Edit)
	struct FGbxParam                                   AIAccuracy;                                               // 0x06D0(0x0080) (Edit)
	struct FGbxParam                                   AIProjectileSpeedScale;                                   // 0x0750(0x0080) (Edit)
	struct FNumericRange                               AIDesiredRange;                                           // 0x07D0(0x0008) (Edit, EditConst)
	struct FGbxParam                                   AIMinDesiredRange;                                        // 0x07D8(0x0080) (Edit)
	struct FGbxParam                                   AIMaxDesiredRange;                                        // 0x0858(0x0080) (Edit)
	struct FGbxForceFeedbackEffect                     ScaledEffect;                                             // 0x08D8(0x0018) (Transient)
	unsigned char                                      UnknownData20[0x10];                                      // 0x08F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponFireComponent");
		return ptr;
	}


	void ServerResetFireSequence();
	void OnStopFireRateDeceleration();
	void OnStopFireRateAcceleration();
	void OnStartFireRateDeceleration();
	void OnStartFireRateAcceleration();
	void OnRep_ImpactLocation();
	void OnRep_FlashCount();
	void OnRep_FireRateAccelChanged();
	void OnRep_ClientFireSequenceState();
	void OnReloadAmmoGiven();
	void OnLoopingFireActionEnd(EGbxActionEndState EndState);
	void OnGivenTo();
	bool IsFireRateAccelEnabled();
	class AActor* GetLockedTarget();
	float GetFireRatePercent();
	void ClientStopResetFireSequence();
};


// Class GbxWeapon.WeaponFireProjectileComponent
// 0x0058 (0x0958 - 0x0900)
class UWeaponFireProjectileComponent : public UWeaponFireComponent
{
public:
	struct FGbxAttributeInteger                        ProjectilesPerShot;                                       // 0x0900(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          ProjectileSpeedScale;                                     // 0x090C(0x000C) (Edit, BlueprintVisible, Net)
	class UCurveFloat*                                 ShotStrengthProjectileSpeedCurve;                         // 0x0918(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ProjectileTemplate;                                       // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttributeBaseValueData>             ProjectileBaseValues;                                     // 0x0928(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      LightProjectileData;                                      // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFiringPattern*                              FiringPatternData;                                        // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x094C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponFireProjectileComponent");
		return ptr;
	}


	class UClass* GetShotProjectileData();
	class UClass* GetShotLightProjectileData();
};


// Class GbxWeapon.Projectile
// 0x0228 (0x0680 - 0x0458)
class AProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0458(0x0010) MISSED OFFSET
	unsigned char                                      bIgnoreCollisionWithInstigator : 1;                       // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bIgnoreCollisionWithInstigatorTeam : 1;                   // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bStopBlockingPawnsAfterCollidingWithOne : 1;              // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bServerControlsProjectileLifetime : 1;                    // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FDamageInfo                                 DamageInfo;                                               // 0x0470(0x0058) (Edit, BlueprintVisible, Net)
	class UImpactData*                                 DefaultImpact;                                            // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultImpactEffectDelay;                                 // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponShotModifierType                            SpawnModifierType;                                        // 0x04D4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x04D5(0x0013) MISSED OFFSET
	float                                              SpawnModifierValue;                                       // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class UGbxProjectileMovementComponent*             MovementComponent;                                        // 0x04F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0500(0x0001) MISSED OFFSET
	bool                                               bClientExplodeAtLeastOnce;                                // 0x0501(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xA6];                                      // 0x0502(0x00A6) MISSED OFFSET
	bool                                               bExplodeOnHit;                                            // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExplodeOnHitWorld;                                       // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExplodeOnHitDamagable;                                   // 0x05AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExplodeOnHitEnemy;                                       // 0x05AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExplodeAfterLifetime;                                    // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyAfterExplode;                                     // 0x05AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageOnExplode;                                         // 0x05AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x05AF(0x0001) MISSED OFFSET
	class UClass*                                      DamageData;                                               // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeam*                                       ProjectileTeam;                                           // 0x05B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSourceOverride;                                     // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeOverride;                                       // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionData*                              ExplosionData;                                            // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseQuickPopExplosion;                                    // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class UExplosionData*                              QuickPopExplosion;                                        // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactData;                                               // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                DamageOverride;                                           // 0x05F0(0x0038) (Edit, BlueprintVisible)
	float                                              DamageAreaRadius;                                         // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageAreaBoxExtent;                                      // 0x062C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FForceSelection                             ImpactForceOverride;                                      // 0x0638(0x0020) (Edit, BlueprintVisible)
	struct FCriticalHitDamageOverrides                 CriticalHitOverrides;                                     // 0x0658(0x0008) (Edit, BlueprintVisible)
	TArray<class AActor*>                              OverrideIgnoreActors;                                     // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWeapon*                                     WeaponFiredFrom;                                          // 0x0670(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpawnSpeedScale;                                          // 0x0678(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x067C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.Projectile");
		return ptr;
	}


	void StopBlockingPawns();
	void SetProjectileDamageType(class UClass* DamageType);
	void SetProjectileDamageSource(class UClass* DamageSource);
	void SetProjectileDamageRadius(float DamageRadius);
	void SetProjectileDamage(float Damage);
	void ResetCollisionWith(class AActor* ActorToCollide);
	void OnRep_SpawnModifierType();
	void OnLastBounce(const struct FHitResult& ImpactResult);
	void OnHitWorld(const struct FHitResult& Hit);
	void OnHitNeutral(const struct FHitResult& Hit);
	void OnHitFriendly(const struct FHitResult& Hit);
	void OnHitEnemy(const struct FHitResult& Hit);
	void OnHitDamagableObject(const struct FHitResult& Hit);
	void OnExplode();
	void OnComponentDetachedFromParent(class USceneComponent* SceneComponent);
	void OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void OnBeginExplode();
	void IgnoreCollisionWith(class AActor* ActorToIgnore);
	void HandleDetachRequest();
	class UGbxProjectileMovementComponent* GetProjectileMovementComponent();
	class UClass* GetProjectileDamageType();
	class UClass* GetProjectileDamageSource();
	float GetProjectileDamageRadius();
	float GetProjectileDamage();
	class UExplosionComponent* GetExplosionComponent();
	void Explode();
	void CheckProjectileAttachment();
	void BounceDelegate(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};


// Class GbxWeapon.GbxProjectileMovementComponent
// 0x0070 (0x02C8 - 0x0258)
class UGbxProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	struct FScriptMulticastDelegate                    PostLastBounceDelegate;                                   // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ProjectileAcceleration;                                   // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeedWhenDecelerating;                                 // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
	class AProjectile*                                 OwningProjectile;                                         // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothedRotationFollowsVelocity;                         // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              SmoothedRotationSpeed;                                    // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDontStopSimulatingAfterHittingAnotherProjectile;         // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	int                                                MaxNumBounces;                                            // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceParallelToHitNormal;                               // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	int                                                CurrentNumBounces;                                        // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bFreezeMovementAfterLastBounce;                           // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	struct FBulletPerceptionProperties                 BulletSensePerception;                                    // 0x029C(0x0008) (Edit, IsPlainOldData)
	struct FSoundPerceptionProperties                  ImpactSoundPerception;                                    // 0x02A4(0x000C) (Edit, IsPlainOldData)
	bool                                               bCanTriggerGrenadeDodges;                                 // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablePhysicsWhenAttached;                              // 0x02B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xE];                                       // 0x02B2(0x000E) MISSED OFFSET
	float                                              InitialProjectileGravity;                                 // 0x02C0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxProjectileMovementComponent");
		return ptr;
	}


	void ScaleVelocity(float InScale);
	void OnRep_InitialProjectileGravity();
	void OnProjectilePostLastBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};


// Class GbxWeapon.LightProjectileManager
// 0x0168 (0x05C0 - 0x0458)
class ALightProjectileManager : public AActor
{
public:
	TArray<class ULightProjectile*>                    ActiveProjectiles;                                        // 0x0458(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET
	TArray<class ULightProjectile*>                    ProjectilesWaitingBatch;                                  // 0x0480(0x0010) (ZeroConstructor, Transient)
	TArray<class ULightProjectile*>                    ProjectilePool;                                           // 0x0490(0x0010) (ZeroConstructor, Transient)
	TArray<class UParticleSystemComponent*>            ActiveParticles;                                          // 0x04A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FLightProjectileParticlePoolData>    ParticlesPool;                                            // 0x04B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xD4];                                      // 0x04C0(0x00D4) MISSED OFFSET
	float                                              MaxAsyncSpawnTime;                                        // 0x0594(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0598(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileManager");
		return ptr;
	}


	void ServerSendDebugProjectileImpact(int ProjSyncID, class AActor* HitActor, const struct FName& BoneName, uint16_t ProjFlags);
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};


// Class GbxWeapon.LightProjectile
// 0x0448 (0x0470 - 0x0028)
class ULightProjectile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                SyncID;                                                   // 0x0030(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x74];                                      // 0x0034(0x0074) MISSED OFFSET
	class ULightProjectileData*                        Data;                                                     // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Damage;                                                   // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x00B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x00C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00CC(0x0018) MISSED OFFSET
	unsigned char                                      bActive : 1;                                              // 0x00E4(0x0001) (Transient)
	unsigned char                                      UnknownData03[0x23];                                      // 0x00E5(0x0023) MISSED OFFSET
	struct FReplicatedLightProjectileInitializationData InitialClientState;                                       // 0x0108(0x00B8) (Net, Transient)
	struct FLightProjectileAttachment                  AttachmentData;                                           // 0x01C0(0x0040) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FLightProjectileExplodeData                 ExplodeData;                                              // 0x0200(0x0010) (Net, Transient)
	struct FLightProjectileImpactData                  ImpactInfo;                                               // 0x0210(0x0010) (Net, Transient)
	unsigned char                                      ShutdownID;                                               // 0x0220(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x0224(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0228(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HomingStartTime;                                          // 0x022C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0230(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2C];                                      // 0x0234(0x002C) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       LastHitActor;                                             // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0268(0x0040) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x02A8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     ComponentLocation;                                        // 0x02B4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FRotator                                    ComponentRotation;                                        // 0x02C0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x02CC(0x000C) MISSED OFFSET
	struct FVector                                     LocalStartLocation;                                       // 0x02D8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     LocalStartDirection;                                      // 0x02E4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x02F0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              GravityScale;                                             // 0x02FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMeshComponent*                        BodyComponent;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TracerComponent;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 Components;                                               // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x38];                                      // 0x0320(0x0038) MISSED OFFSET
	int                                                NumBounces;                                               // 0x0358(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1C];                                      // 0x035C(0x001C) MISSED OFFSET
	class UDamageModifierComponent*                    DamageModifierComp;                                       // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0xF0];                                      // 0x0380(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectile");
		return ptr;
	}


	void SetLifetime(float NewLifetime);
	void SetHomingTargetLocation(const struct FVector& HomingLocation);
	void SetHomingTarget(class AActor* HomingTarget, const struct FVector& TargetOffset);
	void PlayFeedbackSoundEvent(class UWwiseEvent* Event);
	void OnRep_Shutdown();
	void OnRep_InitialClientState();
	void OnRep_Impact();
	void OnRep_Exploded();
	void OnRep_Attached();
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	void OnAttachedComponentUnregistered(class UActorComponent* UnregisteredComponent);
	void OnAttachedComponentCollisionChanged(class UPrimitiveComponent* ChangedComponent);
	void OnAttachedActorFractured(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void K2_ApplyImpactDamage(const struct FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect);
	bool IsHomingMovingDirectlyTowardsTarget();
	bool IsHoming();
	void InitChildData(struct FLightProjectileInitializationData* InitData);
	class AActor* GetTarget();
	class AActor* GetSource();
	float GetModifierValue();
	EWeaponShotModifierType GetModifierType();
	class APawn* GetInstigator();
	class UImpactData* GetImpactDataOverride();
	class UImpactData* GetImpactData();
	float GetHomingStartTime();
	unsigned char GetFiringPatternID();
	class UGbxDamageType* GetDamageType();
	class AActor* GetDamageCauser();
	TEnumAsByte<ETeamAttitude> GetAttitudeTowards(class AActor* TargetActor);
	struct FVector GetAttachedImpactNormal();
	class AActor* GetAttachedDamageReceiverActor();
	class AActor* GetAttachedActor();
	class AActor* GetAssociatedActor(ELightProjectileQueryActorType ActorType);
	void Explode(float Delay);
	void EnableHoming();
	void DisableHoming();
	void Destroy();
	void ApplyAreaDamage(const struct FVector& Origin, class AActor* HitActor, const struct FHitResult& Hit);
};


// Class GbxWeapon.LightProjectileData
// 0x0308 (0x0330 - 0x0028)
class ULightProjectileData : public UObject
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BodyMesh;                                                 // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  BodyTransform;                                            // 0x0040(0x0030) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FGbxSignificanceEvent                       TracerSignificanceEvent;                                  // 0x0070(0x0008) (Edit, BlueprintReadOnly)
	ELightProjectileTracerThrottleLevel                MaxTracerThrottleLevel;                                   // 0x0078(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UParticleSystem*                             TracerFX;                                                 // 0x0080(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TracerFXCollection;                                       // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TracerFXBodySocket;                                       // 0x0090(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FTransform                                  TracerFXTransform;                                        // 0x00A0(0x0030) (Edit, BlueprintReadOnly, IsPlainOldData)
	class UImpactData*                                 ImpactData;                                               // 0x00D0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayImpactEffectOnExplode : 1;                           // 0x00D8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UExplosionData*                              ExplosionData;                                            // 0x00E0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               DamageInstigatorFeedback;                                 // 0x00E8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AttachedFX;                                               // 0x00F0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttachedFXCollection;                                     // 0x00F8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachedFXBodySocket;                                     // 0x0100(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FTransform                                  AttachedFXTransform;                                      // 0x0110(0x0030) (Edit, BlueprintReadOnly, IsPlainOldData)
	float                                              BounceEffectDelay;                                        // 0x0140(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0144(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0148(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InitialRelativeRotation;                                  // 0x014C(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0158(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x015C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0160(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RicochetFriction;                                         // 0x0164(0x0004) (BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BounceFriction;                                           // 0x0168(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Bounciness;                                               // 0x016C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class ULightProjectileMoveModifier*>        MoveModifiers;                                            // 0x0170(0x0010) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	float                                              LifeTime;                                                 // 0x0180(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAttachedLifetimeEnabled : 1;                             // 0x0184(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	float                                              AttachedLifetime;                                         // 0x0188(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x018C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	float                                              TraceInterval;                                            // 0x0190(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0194(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxRicochet;                                              // 0x0198(0x0004) (BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxBounces;                                               // 0x019C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxReflections;                                           // 0x01A0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProxyRadius;                                              // 0x01A4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ProxyTraceChannel;                                        // 0x01A8(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreCollisionWithInstigator : 1;                       // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bSetTeamCollision : 1;                                    // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bIgnoreCollisionWithInstigatorTeam : 1;                   // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bPenetratesTargetables : 1;                               // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bPenetratesWorld : 1;                                     // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bBounceOffTargetables : 1;                                // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bCollideWithSource : 1;                                   // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bEnableProxyCollisionEvents : 1;                          // 0x01A9(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData07[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	float                                              CollideWithSourceDelay;                                   // 0x01AC(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FLightProjectileTimedEvent>          TimedEvents;                                              // 0x01B0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	struct FBulletPerceptionProperties                 BulletSensePerception;                                    // 0x01C0(0x0008) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FSoundPerceptionProperties                  ImpactSoundPerception;                                    // 0x01C8(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      bCanTriggerBulletDodges : 1;                              // 0x01D4(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bTargetedImpactRadiusDamage : 1;                          // 0x01D4(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                DamageRadius;                                             // 0x01D8(0x0038) (Edit, BlueprintReadOnly)
	class UClass*                                      DamageSource;                                             // 0x0210(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageAreaData;                                           // 0x0218(0x0008) (BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      DamageData;                                               // 0x0220(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAreaHitOffset;                                      // 0x0228(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDamageFalloff : 1;                                       // 0x022C(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bRequiresInstigatorToDoDamage : 1;                        // 0x022C(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              AttachDamageScale;                                        // 0x0230(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                ImpactedActorDamageScale;                                 // 0x0238(0x0038) (Edit, BlueprintReadOnly)
	TArray<class UConditionalDamageModifier*>          ConditionalDamageModifiers;                               // 0x0270(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	struct FLightProjectileAudioProperties             AudioProperties;                                          // 0x0280(0x0040) (Edit, BlueprintReadOnly)
	class UWwiseEvent*                                 AttachedSound;                                            // 0x02C0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanAttachToTargetables : 1;                              // 0x02C8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bCanAttachToFriendlies : 1;                               // 0x02C8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bCanAttachToWorld : 1;                                    // 0x02C8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bHideBodyOnAttach : 1;                                    // 0x02C8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bDeactivateTracerFXOnAttach : 1;                          // 0x02C8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FName                                       DeactivateTracerFXEmitterOnAttach;                        // 0x02D0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableHomingOnSpawn : 1;                                 // 0x02D8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bOverrideAimAssistSettings : 1;                           // 0x02D8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	struct FVector2D                                   MagnetismRate;                                            // 0x02DC(0x0008) (Edit, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxMagnetismDeflection;                                   // 0x02E4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightProjectileRingSettings                RingSettings;                                             // 0x02E8(0x0030) (Edit, BlueprintReadOnly)
	unsigned char                                      bMakeProjectileRing : 1;                                  // 0x0318(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0xF];                                       // 0x0319(0x000F) MISSED OFFSET
	bool                                               bCallOnDamageEventOncePerHit;                             // 0x0328(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileData");
		return ptr;
	}


	void OnRicochet(class ULightProjectile* Projectile, const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void OnProxyImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
	void OnExplode(class ULightProjectile* Projectile);
	void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
	void OnBegin(class ULightProjectile* Projectile);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
	void GetTimedEventNameList(TArray<struct FName>* FuncList);
};


// Class GbxWeapon.LightBeamManager
// 0x00B0 (0x0508 - 0x0458)
class ALightBeamManager : public AActor
{
public:
	TArray<class ULightBeam*>                          ActiveBeams;                                              // 0x0458(0x0010) (ZeroConstructor, Transient)
	TArray<class ULightBeam*>                          BeamPool;                                                 // 0x0468(0x0010) (ZeroConstructor, Transient)
	TArray<class UParticleSystemComponent*>            ActiveParticles;                                          // 0x0478(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FLightBeamParticlePoolData>          ParticlesPool;                                            // 0x0488(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0498(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightBeamManager");
		return ptr;
	}


	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};


// Class GbxWeapon.LightBeam
// 0x05E8 (0x0610 - 0x0028)
class ULightBeam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET
	class ULightBeamData*                              Data;                                                     // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    Component;                                                // 0x00B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AltViewComponent;                                         // 0x00C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              DamageInterval;                                           // 0x00C8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LockOnContactTime;                                        // 0x00CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LockOnBreakRadius;                                        // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LockOnBreakAngle;                                         // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FClientLightBeamState                       ClientState;                                              // 0x00E0(0x00C8) (Net, Transient)
	EWeaponShotModifierType                            ModifierType;                                             // 0x01A8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x01A9(0x0017) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x01C0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize10                       ServerSourcePoint;                                        // 0x01C4(0x000C) (Net, Transient)
	struct FVector_NetQuantize10                       ServerTargetPoint;                                        // 0x01D0(0x000C) (Net, Transient)
	unsigned char                                      UnknownData03[0x20];                                      // 0x01DC(0x0020) MISSED OFFSET
	float                                              StartTime;                                                // 0x01FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0200(0x0030) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       LastDamagedActor;                                         // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class AActor>>               DamagedActors;                                            // 0x0238(0x0010) (ZeroConstructor, Transient)
	float                                              LastDamagedActorContinuousContact;                        // 0x0248(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xDC];                                      // 0x024C(0x00DC) MISSED OFFSET
	struct FHitResult                                  LastImpact;                                               // 0x0328(0x0090) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	class ULightBeam*                                  ParentBeam;                                               // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULightBeam*                                  RootParentBeam;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ULightBeam*>                          ChildBeams;                                               // 0x03E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	TArray<struct FLightBeamImpactFXTrackingData>      TrackingImpactEffects;                                    // 0x0400(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x200];                                     // 0x0410(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightBeam");
		return ptr;
	}


	void SetTargetSocket(const struct FName& Socket);
	void OnTrackedImpactParticleSystemFinished(class UParticleSystemComponent* PSC);
	void OnRep_ModifierValue();
	void OnRep_ModifierType();
	void OnRep_ClientState();
	void LockOntoTarget(const struct FLightBeamAttachment& Target);
	void InitChildData(struct FLightBeamInitializationData* InitData);
	class AActor* GetTargetActor();
	struct FLightBeamAttachment GetTarget();
	class AActor* GetSourceActor();
	struct FLightBeamAttachment GetSource();
	class APawn* GetInstigator();
	float GetImpactForce();
	class UGbxDamageType* GetDamageType();
	class AActor* GetDamageCauser();
	float GetDamage();
	class AActor* GetAssociatedActor(ELightBeamQueryActorType ActorType);
};


// Class GbxWeapon.LightBeamData
// 0x01A0 (0x01C8 - 0x0028)
class ULightBeamData : public UObject
{
public:
	class UClass*                                      BeamClass;                                                // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UParticleSystem*                             BeamFX;                                                   // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BeamFXCollection;                                         // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ViewerBeamFX;                                             // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ViewerBeamFXCollection;                                   // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LoopingImpactAudio;                                       // 0x0058(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AudioFXCollection;                                        // 0x0060(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SourceTangentStrengthOverDistance;                        // 0x0068(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetTangentStrengthOverDistance;                        // 0x006C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BeamEmitterName;                                          // 0x0070(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UExplosionData*                              ExplosionData;                                            // 0x0078(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactData;                                               // 0x0080(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ImpactFXFrequency;                                        // 0x0088(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShowPenetrationImpacts : 1;                              // 0x008C(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bNoImpactDecals : 1;                                      // 0x008C(0x0001) (Edit, BlueprintReadOnly)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x008D(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	float                                              CollisionRadius;                                          // 0x0090(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceInterval;                                            // 0x0094(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTraceSteps;                                            // 0x0098(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxLength;                                                // 0x009C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartLength;                                              // 0x00A0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GrowSpeed;                                                // 0x00A4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGrowOverTime : 1;                                        // 0x00A8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bSetTeamCollision : 1;                                    // 0x00A8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bIgnoreCollisionWithInstigatorTeam : 1;                   // 0x00A8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bPenetratesTargetables : 1;                               // 0x00A8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bPenetratesWorld : 1;                                     // 0x00A8(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bCanTriggerBulletDodges : 1;                              // 0x00A8(0x0001) (Edit, BlueprintReadOnly)
	ELightBeamLock                                     LockType;                                                 // 0x00A9(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanAcquireLock : 1;                                      // 0x00AA(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bAlignToLockedTarget : 1;                                 // 0x00AA(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bCanLockOntoFriendlies : 1;                               // 0x00AA(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bWorldCollisionBreaksLock : 1;                            // 0x00AA(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00AB(0x0001) MISSED OFFSET
	float                                              DamageInterval;                                           // 0x00AC(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDamageDirectTargetOnce : 1;                              // 0x00B0(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UClass*                                      DamageData;                                               // 0x00B8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UConditionalDamageModifier*>          ConditionalDamageModifiers;                               // 0x00C0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bEnableDamageProxy : 1;                                   // 0x00D0(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              DamageProxyRadius;                                        // 0x00D4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamageProxyTraceChannel;                                  // 0x00D8(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          DamageProxyRadiusCurve;                                   // 0x00E0(0x0078) (Edit, BlueprintReadOnly)
	unsigned char                                      bScaleDamageProxyRadiusByCurve : 1;                       // 0x0158(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bDisableDragWhenLocked : 1;                               // 0x0158(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              DragSpeed;                                                // 0x015C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDragRadius;                                            // 0x0160(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	TArray<struct FVector2DWaveform>                   SpreadWaveforms;                                          // 0x0168(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bSpreadWaveformIsAngle : 1;                               // 0x0178(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	float                                              SpreadWaveformTimeScale;                                  // 0x017C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LockOnSpreadScale;                                        // 0x0180(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyAccuracyToSpread : 1;                               // 0x0184(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	int                                                MaxChains;                                                // 0x0188(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxChainDepth;                                            // 0x018C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ChainBeamData;                                            // 0x0190(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   ChainTargetsQuery;                                        // 0x0198(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChainTargetsQueryMaxRangeParam;                           // 0x01A0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChainDelay;                                               // 0x01A8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChainInterval;                                            // 0x01AC(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxChainDistance;                                         // 0x01B0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChainBreakDistance;                                       // 0x01B4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NetUpdateTime;                                            // 0x01B8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0xC];                                       // 0x01BC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightBeamData");
		return ptr;
	}


	float UpdateTarget(class ULightBeam* Beam);
	bool CanLockOn(class ULightBeam* Beam, class AActor* TargetActor);
};


// Class GbxWeapon.WeaponAnimInstance
// 0x0020 (0x0460 - 0x0440)
class UWeaponAnimInstance : public UAnimInstance
{
public:
	class AWeapon*                                     Weapon;                                                   // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UWeaponAttachmentSlot*                       Slot;                                                     // 0x0448(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZoomDuration;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZoomEffect;                                               // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsZoomedIn;                                              // 0x0458(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAnimInstance");
		return ptr;
	}


	void BlueprintSwitchedMode(int NewMode);
};


// Class GbxWeapon.WeaponAudioProviderComponent
// 0x0000 (0x0178 - 0x0178)
class UWeaponAudioProviderComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAudioProviderComponent");
		return ptr;
	}

};


// Class GbxWeapon.WalkingProjectileMovementComponent
// 0x0090 (0x0358 - 0x02C8)
class UWalkingProjectileMovementComponent : public UGbxProjectileMovementComponent
{
public:
	bool                                               bGravityAffectsSlopeWalking;                              // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              MaxWalkAngle;                                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFallOffLedges;                                           // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              MaxStepUpHeight;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementFrozenMaxTime;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffWalls;                                          // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	int                                                MaxWallBounces;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallBounciness;                                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideWalkingSpeed;                                    // 0x02E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              WalkingSpeedOverride;                                     // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x38];                                      // 0x02F0(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHitUnwalkableSurface;                                   // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBecomeAirborne;                                         // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLanded;                                                 // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WalkingProjectileMovementComponent");
		return ptr;
	}

};


// Class GbxWeapon.WeaponAmmoComponent
// 0x0038 (0x01B0 - 0x0178)
class UWeaponAmmoComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class UGbxAmmoTypeData*                            AmmoTypeData;                                             // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayAmmoInHUD;                                        // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    NotifyAmmoChanged;                                        // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoComponent");
		return ptr;
	}


	void ClientRefillAmmo(int Amount);
};


// Class GbxWeapon.WeaponHeatComponent
// 0x00C0 (0x0238 - 0x0178)
class UWeaponHeatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	struct FGbxAttributeFloat                          HeatCoolDownRate;                                         // 0x0188(0x000C) (Edit, Net)
	struct FGbxAttributeFloat                          HeatCoolDownDelay;                                        // 0x0194(0x000C) (Edit, Net)
	struct FGbxAttributeFloat                          UseHeatImpulse;                                           // 0x01A0(0x000C) (Edit, Net)
	struct FGbxAttributeFloat                          ActiveHeatRate;                                           // 0x01AC(0x000C) (Edit, Net)
	bool                                               bSimulateOnClients;                                       // 0x01B8(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimulateOnAI : 1;                                        // 0x01B9(0x0001) (Edit)
	unsigned char                                      bVisibleInHUD : 1;                                        // 0x01B9(0x0001) (Edit)
	unsigned char                                      bStartCoolDownEffectOnEndUse : 1;                         // 0x01B9(0x0001) (Edit)
	unsigned char                                      bCanOverheat : 1;                                         // 0x01B9(0x0001) (Edit)
	bool                                               bCanUseWhenOverheated;                                    // 0x01BA(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01BB(0x0001) MISSED OFFSET
	struct FGbxAttributeFloat                          OverheatTime;                                             // 0x01BC(0x000C) (Edit, Net)
	struct FGbxAttributeFloat                          OverheatCoolDownDelay;                                    // 0x01C8(0x000C) (Edit, Net)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	TArray<struct FWeaponHeatEventNotify>              HeatEvents;                                               // 0x01D8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       HeatMaterialParamName;                                    // 0x01E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HeatMaterialParamCurve;                                   // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponEffectType>                     CoolDownEffectType;                                       // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	float                                              CoolDownEffectOnThreshold;                                // 0x01FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoolDownEffectOffThreshold;                               // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    NotifyHeatChanged;                                        // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              Heat;                                                     // 0x0218(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x021C(0x000C) MISSED OFFSET
	unsigned char                                      ReplicatedHeat;                                           // 0x0228(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bOverheated : 1;                                          // 0x0229(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	unsigned char                                      UnknownData06[0x6];                                       // 0x022A(0x0006) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponHeatComponent");
		return ptr;
	}


	void SetCanUseWhenOverheated(bool bEnabled);
	void OnUseFinished();
	void OnUsed();
	void OnStopOverheat();
	void OnStartOverheat();
	void OnRep_ReplicatedHeat();
	void OnRep_Overheated(bool bWasOverheated);
	void OnPutDown();
	void OnEquipped();
	void OnDetached();
	void OnAttached();
};


// Class GbxWeapon.WeaponReloadComponent
// 0x0060 (0x01D8 - 0x0178)
class UWeaponReloadComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	unsigned char                                      ReloadPartType;                                           // 0x0188(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    NotifyReloadStarted;                                      // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyReloadEnded;                                        // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyAmmoGiven;                                          // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGbxAttributeFloat                          ReloadTime;                                               // 0x01C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x01D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponReloadComponent");
		return ptr;
	}

};


// Class GbxWeapon.WeaponZoomComponent
// 0x0170 (0x02E8 - 0x0178)
class UWeaponZoomComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	TArray<struct FWeaponZoomLevel>                    ZoomLevels;                                               // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              InstigatorAccuracyScale;                                  // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ViewModelShotOffsetScale;                                 // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewModelLeadingScale;                                    // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimationAlpha;                                   // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlinchAnimationMagnitudeScale;                            // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUnzoomWhenSwitchingModes;                           // 0x01AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	float                                              ModeFOVScale;                                             // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ModeTransitionDuration;                                   // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EyeSocket;                                                // 0x01B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScopeSocket;                                          // 0x01C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FName                                       FrontScopeSocket;                                         // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FrontSightSocket;                                         // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RearSightSocket;                                          // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FOVScale;                                                 // 0x01E0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DurationScale;                                            // 0x01E4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShowCrosshairWhenZoomed;                                 // 0x01E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAttributesWhenFullyZoomed;                          // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x01EA(0x0006) MISSED OFFSET
	TArray<struct FAttributeEffectData>                AttributeEffects;                                         // 0x01F0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAttributeEffectData>                InstigatorAttributeEffects;                               // 0x0200(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DepthOfFieldFocusSocket;                                  // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableBlurVignetteSize : 1;                              // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideStartBlurVignetteSize : 1;                       // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideBlurVignetteSharpness : 1;                       // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableColorVignetteSize : 1;                             // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideStartColorVignetteSize : 1;                      // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideColorVignetteSharpness : 1;                      // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideLongitudinalMotionScale : 1;                     // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideLateralMotionScale : 1;                          // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              BlurVignetteSize;                                         // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartBlurVignetteSize;                                    // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlurVignetteSharpness;                                    // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ColorVignetteSize;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartColorVignetteSize;                                   // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ColorVignetteSharpness;                                   // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LongitudinalMotionScale;                                  // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LateralMotionScale;                                       // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UFeedbackData*                               UseFeedback;                                              // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseFeedbackScale;                                         // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    NotifyZoomingIn;                                          // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyZoomedIn;                                           // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyZoomingOut;                                         // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyZoomedOut;                                          // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bApplyWeaponModeZoom;                                     // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FWeaponZoomState                            ZoomState;                                                // 0x0291(0x0002) (Transient)
	struct FWeaponZoomState                            ReplicatedZoomState;                                      // 0x0293(0x0002) (Net, Transient)
	unsigned char                                      DesiredZoomLevel;                                         // 0x0295(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0296(0x0002) MISSED OFFSET
	float                                              ZoomStartTime;                                            // 0x0298(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZoomTransitionStartTime;                                  // 0x029C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGbxAttributeModifierHandle>         AttributeModifiers;                                       // 0x02A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxAttributeModifierHandle>         InstigatorAttributeModifiers;                             // 0x02B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      CachedWeaponModeIndex;                                    // 0x02C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1F];                                      // 0x02C1(0x001F) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponZoomComponent");
		return ptr;
	}


	void OnSwitchedWeaponMode();
	void OnRep_ReplicatedZoomState();
	void OnDetached();
	void OnAttached();
	float GetMaxZoomFOVScaleWithMode(unsigned char ModeIndex);
	float GetMaxZoomFOVScale();
};


// Class GbxWeapon.AmmoProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAmmoProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.AmmoProviderInterface");
		return ptr;
	}

};


// Class GbxWeapon.WeaponAnimNotify
// 0x0008 (0x0040 - 0x0038)
class UWeaponAnimNotify : public UAnimNotify
{
public:
	bool                                               bTriggerOnFirstPerson;                                    // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAnimNotify");
		return ptr;
	}

};


// Class GbxWeapon.AnimNotify_AmmoReloaded
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_AmmoReloaded : public UWeaponAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.AnimNotify_AmmoReloaded");
		return ptr;
	}

};


// Class GbxWeapon.AnimNotify_EquipInterruptible
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_EquipInterruptible : public UWeaponAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.AnimNotify_EquipInterruptible");
		return ptr;
	}

};


// Class GbxWeapon.AnimNotify_WeaponSkeletalControlEvent
// 0x0018 (0x0058 - 0x0040)
class UAnimNotify_WeaponSkeletalControlEvent : public UWeaponAnimNotify
{
public:
	TEnumAsByte<EWeaponEffectType>                     ControlType;                                              // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeaponSkeletalControlEvent                        ControlEvent;                                             // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              ControlInput;                                             // 0x0054(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.AnimNotify_WeaponSkeletalControlEvent");
		return ptr;
	}

};


// Class GbxWeapon.BodyWeaponHoldData
// 0x0030 (0x0060 - 0x0030)
class UBodyWeaponHoldData : public UGbxDataAsset
{
public:
	struct FName                                       HoldName;                                                 // 0x0030(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<struct FName>                               HoldNames;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBodyWeaponActionInfo>               WeaponActions;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	float                                              DepthOfFieldForegroundFocusDistance;                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldForegroundFocusNearRegionPct;                 // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.BodyWeaponHoldData");
		return ptr;
	}

};


// Class GbxWeapon.BodyWeaponHoldManagerComponent
// 0x0020 (0x0198 - 0x0178)
class UBodyWeaponHoldManagerComponent : public UActorComponent
{
public:
	class UBodyWeaponHoldData*                         DefaultWeaponHold;                                        // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UBodyWeaponHoldData*>                 WeaponHolds;                                              // 0x0180(0x0010) (Edit, ZeroConstructor)
	struct FName                                       UnarmedHoldName;                                          // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.BodyWeaponHoldManagerComponent");
		return ptr;
	}

};


// Class GbxWeapon.EnvQueryContext_ProjectileProxy
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_ProjectileProxy : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.EnvQueryContext_ProjectileProxy");
		return ptr;
	}

};


// Class GbxWeapon.EnvQueryGenerator_FindProjectileTargets
// 0x0040 (0x00A0 - 0x0060)
class UEnvQueryGenerator_FindProjectileTargets : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0060(0x0030) (Edit)
	class UGbxCondition*                               TargetSkipRangeCheckCondition;                            // 0x0090(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAllowHostiles;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFriendlies;                                         // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowNeutrals;                                           // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlsoFindTargetableComponents;                            // 0x009B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIgnoreNonHostileAttachedParent;                          // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.EnvQueryGenerator_FindProjectileTargets");
		return ptr;
	}

};


// Class GbxWeapon.EnvQueryItemType_ProjectileProxy
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ProjectileProxy : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.EnvQueryItemType_ProjectileProxy");
		return ptr;
	}

};


// Class GbxWeapon.FiringPattern
// 0x0020 (0x0050 - 0x0030)
class UFiringPattern : public UGbxDataAsset
{
public:
	TArray<struct FFiringPatternSample>                Samples;                                                  // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor, NoClear)
	unsigned char                                      bFireRandomlyFromPattern : 1;                             // 0x0040(0x0001) (Edit)
	unsigned char                                      bResetPatternAfterEachShot : 1;                           // 0x0040(0x0001) (Edit)
	unsigned char                                      bScalePattern : 1;                                        // 0x0040(0x0001) (Edit)
	unsigned char                                      bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot : 1;// 0x0040(0x0001) (Edit)
	unsigned char                                      bSuppressWeaponSpread : 1;                                // 0x0040(0x0001) (Edit)
	unsigned char                                      bSingleWeaponSpread : 1;                                  // 0x0040(0x0001) (Edit)
	unsigned char                                      bDisableTracerThrottling : 1;                             // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              BasePatternScale;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPatternScale;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RequiredProjectilesPerShot;                               // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.FiringPattern");
		return ptr;
	}

};


// Class GbxWeapon.FiringPatternData
// 0x0020 (0x0048 - 0x0028)
class UFiringPatternData : public UObject
{
public:
	TArray<struct FFiringPatternSample>                Samples;                                                  // 0x0028(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bFireRandomlyFromPattern : 1;                             // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bResetPatternAfterEachShot : 1;                           // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bScalePattern : 1;                                        // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot : 1;// 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bSuppressWeaponSpread : 1;                                // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bSingleWeaponSpread : 1;                                  // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BasePatternScale;                                         // 0x003C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinPatternScale;                                          // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredProjectilesPerShot;                               // 0x0044(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.FiringPatternData");
		return ptr;
	}

};


// Class GbxWeapon.GbxAmmoTypeData
// 0x0040 (0x0070 - 0x0030)
class UGbxAmmoTypeData : public UGbxDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  DisplayIcon;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ScaleformDisplayFrameID;                                  // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UGameResourceData*                           ResourceData;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegenerationRate;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxAmmoTypeData");
		return ptr;
	}

};


// Class GbxWeapon.GbxProjectileManager
// 0x0010 (0x0038 - 0x0028)
class UGbxProjectileManager : public UIGbxProjectileManager
{
public:
	TArray<class UProjectileHomingComponent*>          HomingComponents;                                         // 0x0028(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxProjectileManager");
		return ptr;
	}

};


// Class GbxWeapon.GbxTrajectometerComponent
// 0x01C8 (0x0340 - 0x0178)
class UGbxTrajectometerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class AGbxTrajectometerProjectile*                 SimulatorProjectile;                                      // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    TrailParticle;                                            // 0x0188(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0190(0x0010) MISSED OFFSET
	class USceneComponent*                             ProjectileUpdatedComp;                                    // 0x01A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x01A8(0x0040) MISSED OFFSET
	bool                                               bEnableOnStart;                                           // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	float                                              SimulationStepTime;                                       // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulationMaxTime;                                        // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	class UClass*                                      SimulatorTemplate;                                        // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                ProjectileSpeed;                                          // 0x0200(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                ProjectileMaxSpeed;                                       // 0x0238(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                ProjectileAcceleration;                                   // 0x0270(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                ProjectileGravityScale;                                   // 0x02A8(0x0038) (Edit, BlueprintVisible)
	struct FVector                                     ProjectileInitialDirection;                               // 0x02E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FGbxTrajectometerTraceData                  TraceSettings;                                            // 0x02EC(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileToSimulate;                                     // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TrailEmitterTemplate;                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideSocket;                                           // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStartFromWeapon : 1;                                     // 0x0328(0x0001) (Edit)
	unsigned char                                      bStartFromViewLocation : 1;                               // 0x0328(0x0001) (Edit)
	unsigned char                                      bUseSocketAsStartRotation : 1;                            // 0x0328(0x0001) (Edit)
	unsigned char                                      bSimulateWeaponProjectile : 1;                            // 0x0328(0x0001) (Edit)
	unsigned char                                      bUseProjectileForCollision : 1;                           // 0x0328(0x0001) (Edit)
	unsigned char                                      bConvergeTowardsAimLocation : 1;                          // 0x0328(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPostSimulation;                                         // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxTrajectometerComponent");
		return ptr;
	}


	void UpdateCollisionShape();
	void SimulationResultEvent__DelegateSignature(const struct FHitResult& HitResult);
	void SetTrajectometerEnabled(bool bEnabled);
};


// Class GbxWeapon.GbxTrajectometerProjectile
// 0x0098 (0x0718 - 0x0680)
class AGbxTrajectometerProjectile : public AProjectile
{
public:
	class UParticleSystemComponent*                    TrailParticle;                                            // 0x0680(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0688(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxTrajectometerProjectile");
		return ptr;
	}

};


// Class GbxWeapon.GbxWeaponUserInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxWeaponUserInterface : public UWeaponUserInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxWeaponUserInterface");
		return ptr;
	}

};


// Class GbxWeapon.LightBeamStatics
// 0x0000 (0x0028 - 0x0028)
class ULightBeamStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightBeamStatics");
		return ptr;
	}


	void STATIC_SetBeamFlag(ELightBeamFlag Flag, struct FLightBeamInitializationData* InitData);
	void STATIC_RemoveLightBeamsBySource(class AActor* Source, const struct FName& NameId);
	void STATIC_RemoveLightBeamsByActor(const struct FLightBeamQueryData& Query);
	bool STATIC_IsBeamFlagSet(const struct FLightBeamInitializationData& InitData, ELightBeamFlag Flag);
	void STATIC_ForEachLightBeam(const struct FLightBeamQueryData& Query, const struct FScriptDelegate& Callback);
	bool STATIC_DoesLightBeamExist(const struct FLightBeamQueryData& Query);
	void STATIC_CreateLightBeamFromData(const struct FLightBeamInitializationData& InitData);
	void STATIC_CreateLightBeam(class UClass* Data, class APawn* Instigator, const struct FLightBeamAttachment& Source, const struct FLightBeamAttachment& Target, bool bTargetLocked, const struct FName& NameId, float Damage, class UClass* DamageType, class UClass* DamageSource, float DamageRadius, class AActor* DamageCauser, class UImpactData* ImpactDataOverride, const struct FForceSelection& ImpactForce, float LifetimeOverride, bool bViewDependent);
	void STATIC_ClearBeamFlag(ELightBeamFlag Flag, struct FLightBeamInitializationData* InitData);
};


// Class GbxWeapon.LightProjectileMoveModifier
// 0x0008 (0x0030 - 0x0028)
class ULightProjectileMoveModifier : public UObject
{
public:
	unsigned char                                      FiringPatternID;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictFiringPattern;                                   // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileMoveModifier");
		return ptr;
	}

};


// Class GbxWeapon.LightProjectileAimViewPointHomingModifier
// 0x0008 (0x0038 - 0x0030)
class ULightProjectileAimViewPointHomingModifier : public ULightProjectileMoveModifier
{
public:
	float                                              LookAheadDistance;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileAimViewPointHomingModifier");
		return ptr;
	}

};


// Class GbxWeapon.LightProjectileCurveModifier
// 0x0008 (0x0038 - 0x0030)
class ULightProjectileCurveModifier : public ULightProjectileMoveModifier
{
public:
	float                                              StartTangentMultiplier;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileCurveModifier");
		return ptr;
	}

};


// Class GbxWeapon.LightProjectileHomingModifier
// 0x0040 (0x0070 - 0x0030)
class ULightProjectileHomingModifier : public ULightProjectileMoveModifier
{
public:
	struct FRotator                                    MaxTurnRate;                                              // 0x0030(0x000C) (Edit, IsPlainOldData)
	float                                              StartApproachDistance;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalApproachDistance;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ApproachTurnRateScale;                                    // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              ApproachEaseInFunc;                                       // 0x0048(0x000C) (Edit)
	bool                                               bBreakHomingWhenPassingTargetDuringFinalApproach;         // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              EaseInTime;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              EaseInFunc;                                               // 0x005C(0x000C) (Edit)
	float                                              StopHomingDistance;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileHomingModifier");
		return ptr;
	}

};


// Class GbxWeapon.LightProjectileRandomDrunkenModifier
// 0x0038 (0x0068 - 0x0030)
class ULightProjectileRandomDrunkenModifier : public ULightProjectileMoveModifier
{
public:
	float                                              PathCorrectionInterval;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpreadAngle;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepartureAngle;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGravityAffectsDrunkenness;                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              DrunkenGravityScalar;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartApproachDistance;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartDelayTime;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EaseInTime;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizedEaseTime;                                      // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FGbxEasingFunc                              EaseInFunc;                                               // 0x0058(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileRandomDrunkenModifier");
		return ptr;
	}

};


// Class GbxWeapon.LightProjectileStatics
// 0x0000 (0x0028 - 0x0028)
class ULightProjectileStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileStatics");
		return ptr;
	}


	void STATIC_SplitLightProjectile(class ULightProjectile* Projectile, class UClass* Data, ELightProjectileSplitPattern Pattern, int Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource);
	void STATIC_SetProjectileFlag(ELightProjectileFlag Flag, struct FLightProjectileInitializationData* InitData);
	void STATIC_SetHomingState(const struct FLightProjectileQueryData& Query, bool bIsHoming);
	void STATIC_RemoveLightProjectilesByActor(const struct FLightProjectileQueryData& Query);
	bool STATIC_IsProjectileFlagSet(const struct FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag);
	void STATIC_ForEachLightProjectile(const struct FLightProjectileQueryData& Query, const struct FScriptDelegate& Callback);
	void STATIC_DetonateLightProjectiles(const struct FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay);
	void STATIC_CreateLightProjectileFromSource(class ULightProjectile* SourceProjectile, class UClass* Data, const struct FVector& Location, const struct FVector& Direction, float Damage);
	void STATIC_CreateLightProjectileFromDataAsync(const struct FLightProjectileInitializationData& InitData, float ForceSpawnTimer);
	void STATIC_CreateLightProjectileFromData(const struct FLightProjectileInitializationData& InitData);
	void STATIC_CreateLightProjectile(class UClass* Data, const struct FVector& Location, const struct FVector& Direction, class APawn* Instigator, class AActor* Source, class AActor* DamageCauser, float Damage, class UClass* DamageType, class UClass* DamageSource, class UImpactData* ImpactDataOverride);
	void STATIC_ClearProjectileFlag(ELightProjectileFlag Flag, struct FLightProjectileInitializationData* InitData);
};


// Class GbxWeapon.LightProjectileWaveModifier
// 0x0050 (0x0080 - 0x0030)
class ULightProjectileWaveModifier : public ULightProjectileMoveModifier
{
public:
	TArray<struct FVector2DWaveform>                   Waveforms;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              GlobalWaveformScale;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVectorWaveform                             Waveform;                                                 // 0x0044(0x0024) (Deprecated)
	float                                              EaseInTime;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizedEaseTime;                                      // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FGbxEasingFunc                              EaseInFunc;                                               // 0x0070(0x000C) (Edit)
	bool                                               bRandomize;                                               // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.LightProjectileWaveModifier");
		return ptr;
	}

};


// Class GbxWeapon.ProjectileBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UProjectileBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.ProjectileBlueprintLibrary");
		return ptr;
	}


	int STATIC_ThrowProjectileAsync(class UObject* WorldContext, const struct FThrowProjectileAsyncRequest& Request);
	void STATIC_ThrowActorAt(class AActor* Actor, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
	void STATIC_PredictProjectilePathAsync(class UObject* WorldContext, const struct FPredictProjectilePathAsyncRequest& Request);
	struct FTransform STATIC_GetSafeProjectileThrowTransform_Component(class AActor* SourceActor, class USceneComponent* SourceComponent, const struct FName& SocketName, TArray<class AActor*> IgnoreActors, TEnumAsByte<ECollisionChannel> TraceChannel);
	struct FTransform STATIC_GetSafeProjectileThrowTransform(class AActor* SourceActor, const struct FName& SocketName, TArray<class AActor*> IgnoreActors, bool bThrowFromFirstPersonSocket, TEnumAsByte<ECollisionChannel> TraceChannel);
	TArray<struct FTransform> STATIC_GeneratePointsOnFan(const struct FVector& Origin, const struct FVector& Direction, int SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
	TArray<struct FTransform> STATIC_GeneratePointsOnCone(const struct FVector& Origin, const struct FVector& Direction, int SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
	void STATIC_DetachProjectilesFromActor(class AActor* BaseActor);
	struct FVector STATIC_CalculateConeVector(float Fraction, const struct FVector& Origin, const struct FVector& Direction, float AngleWidth, float AngleHeight);
	void STATIC_CalcThrowVelocityAtActor(const struct FVector& StartLocation, class AActor* Target, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, struct FVector* ResultVelocity, float* ResultGravityScale);
	void STATIC_CalcThrowVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, struct FVector* ResultVelocity, float* ResultGravityScale);
};


// Class GbxWeapon.ProjectileEQSProxy
// 0x0028 (0x0050 - 0x0028)
class UProjectileEQSProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	class AActor*                                      ReferenceActor;                                           // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.ProjectileEQSProxy");
		return ptr;
	}

};


// Class GbxWeapon.ProjectileSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UProjectileSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.ProjectileSourceInterface");
		return ptr;
	}

};


// Class GbxWeapon.RecoilControlComponent
// 0x0060 (0x01D8 - 0x0178)
class URecoilControlComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    NotifyRecoveryFinished;                                   // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyResetRecoil;                                        // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bServerSimulatesRecoil;                                   // 0x0198(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	struct FRotator                                    CurrentRotation;                                          // 0x019C(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x01A8(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    InputPassthroughThreshold;                                // 0x01B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.RecoilControlComponent");
		return ptr;
	}


	void ServerApplyInput(uint32_t CompressedInputRot);
};


// Class GbxWeapon.RecoilPatternData
// 0x00A8 (0x00D8 - 0x0030)
class URecoilPatternData : public UGbxDataAsset
{
public:
	TArray<struct FVector2D>                           Samples;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bRandom;                                                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERecoilEndOfPatternAction                          EndOfPatternAction;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                RepeatPatternStartIndex;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndOfPatternRise;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          ShotSequenceScaleCurve;                                   // 0x0050(0x0078) (Edit)
	bool                                               bAutoGenerateGoodness;                                    // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              PatternHeightGoodness;                                    // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PatternWidthGoodness;                                     // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.RecoilPatternData");
		return ptr;
	}

};


// Class GbxWeapon.WeaponAccuracyPoolAttributePropertyValueResolver
// 0x0008 (0x00B8 - 0x00B0)
class UWeaponAccuracyPoolAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	class UGameResourceData*                           DefaultResource;                                          // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAccuracyPoolAttributePropertyValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponSkeletalControlBase
// 0x0068 (0x0090 - 0x0028)
class UWeaponSkeletalControlBase : public UObject
{
public:
	struct FName                                       ControlName;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlwaysUpdate : 1;                                        // 0x0030(0x0001) (Edit)
	unsigned char                                      bUpdateWhenAmmoChanges : 1;                               // 0x0030(0x0001) (Edit)
	unsigned char                                      bStartPaused : 1;                                         // 0x0030(0x0001) (Edit)
	unsigned char                                      bSyncToFireRate : 1;                                      // 0x0030(0x0001) (Edit)
	unsigned char                                      bAddInputOnUse : 1;                                       // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                UseInputValue;                                            // 0x0038(0x0038) (Edit)
	float                                              MinFireRate;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFireRate;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           UseModeContextBitmask;                                    // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 ReceivedInputSound;                                       // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAttachToBone : 1;                                        // 0x0088(0x0001) (Edit)
	unsigned char                                      bUseDefaultAudioComponent : 1;                            // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponSkeletalControlBase");
		return ptr;
	}

};


// Class GbxWeapon.WeaponAmmoChamberBoneControl
// 0x0010 (0x00A0 - 0x0090)
class UWeaponAmmoChamberBoneControl : public UWeaponSkeletalControlBase
{
public:
	TArray<struct FName>                               AmmoBoneNames;                                            // 0x0090(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoChamberBoneControl");
		return ptr;
	}

};


// Class GbxWeapon.WeaponConsumedLoadedAmmoValueResolver
// 0x0000 (0x0028 - 0x0028)
class UWeaponConsumedLoadedAmmoValueResolver : public UAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponConsumedLoadedAmmoValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponAmmoPoolComponent
// 0x00B0 (0x0260 - 0x01B0)
class UWeaponAmmoPoolComponent : public UWeaponAmmoComponent
{
public:
	struct FGbxAttributeInteger                        MaxLoadedAmmo;                                            // 0x01B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	int                                                MaxStoredAmmo;                                            // 0x01BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                LoadedAmmo;                                               // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StoredAmmo;                                               // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                SpareAmmo;                                                // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bInfiniteAmmo : 1;                                        // 0x01CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInfiniteAmmoForAI : 1;                                   // 0x01CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCreateAmmoResourceForAI : 1;                             // 0x01CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGiveAmmoOnPickup : 1;                                    // 0x01CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01CD(0x0003) MISSED OFFSET
	class UGameResourceData*                           ResourceData;                                             // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                PickupAmmoFormula;                                        // 0x01D8(0x0038) (Edit)
	EAmmoRegenType                                     AmmoRegenType;                                            // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0210(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AmmoRegenRate;                                            // 0x0214(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ConsumeAmmoRegenDelay;                                    // 0x0218(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	struct FGameResourcePoolReference                  ResourcePool;                                             // 0x0220(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	int                                                ServerSyncedLoadedAmmo;                                   // 0x0238(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x023C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoPoolComponent");
		return ptr;
	}


	void ServerSendAmmoState();
	void OnRep_SpareAmmo();
	void OnRep_ServerSyncedLoadedAmmo();
	void OnMaxLoadedAmmoChanged(float OldValue, float NewValue);
	void OnGivenTo();
	void ClientSetLoadedAmmo(int NewLoadedAmmo);
	void ClientConsumeAmmo(int Amount);
};


// Class GbxWeapon.WeaponAmmoRegenAttributeValueResolver
// 0x0000 (0x0028 - 0x0028)
class UWeaponAmmoRegenAttributeValueResolver : public UAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoRegenAttributeValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponAttachmentSlot
// 0x00A8 (0x00D0 - 0x0028)
class UWeaponAttachmentSlot : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              Mesh;                                                     // 0x0038(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0040(0x0004) MISSED OFFSET
	EWeaponTextureMipsSetting                          TextureMipsSetting;                                       // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TArray<class UTexture*>                            CachedForceMipTextures;                                   // 0x0048(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	TArray<struct FWeaponEffectAttachment>             AttachmentEffects;                                        // 0x0060(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FWeaponMaterialEffectInstance>       ActiveMaterialEffects;                                    // 0x0080(0x0010) (ZeroConstructor, Transient)
	TArray<struct FWeaponSkeletalControlInstance>      ActiveSkeletalControls;                                   // 0x0090(0x0010) (ZeroConstructor, Transient)
	TArray<struct FWeaponTrinketAttachment>            TrinketAttachments;                                       // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<class UMeshComponent*>                      SecondaryMeshes;                                          // 0x00B0(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAttachmentSlot");
		return ptr;
	}


	void SetMesh(class UMeshComponent* InMesh);
};


// Class GbxWeapon.WeaponAttributeContextResolver
// 0x0008 (0x0058 - 0x0050)
class UWeaponAttributeContextResolver : public UAttributeContextResolver
{
public:
	uint32_t                                           UseModeContextBitmask;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponAttributeContextResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponChargePercentValueResolver
// 0x0000 (0x0028 - 0x0028)
class UWeaponChargePercentValueResolver : public UAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponChargePercentValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponChargeComponent
// 0x0168 (0x0300 - 0x0198)
class UWeaponChargeComponent : public UWeaponPreUseComponent
{
public:
	struct FGbxAttributeFloat                          ChargeTime;                                               // 0x0198(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          DischargeTime;                                            // 0x01A4(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          CancelChargeDelay;                                        // 0x01B0(0x000C) (Edit, BlueprintVisible, Net)
	float                                              RequiredUseChargePct;                                     // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CommitUseChargePct;                                       // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          OverchargeHoldTime;                                       // 0x01C4(0x000C) (Edit, BlueprintVisible, Net)
	unsigned char                                      bUseWhenCharged : 1;                                      // 0x01D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bChargeBeforeEachUse : 1;                                 // 0x01D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopChargingEffectsOnCharged : 1;                        // 0x01D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopChargedEffectsOnOvercharged : 1;                     // 0x01D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUpdateChargeActionBlendSpace : 1;                        // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bZoomModifiesBlendSpaceY : 1;                             // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	struct FName                                       ChargePercentParamName;                                   // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ZoomChargeActionBlendSpaceScale;                          // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	TArray<struct FWeaponChargeAttributeEffect>        AttributeEffects;                                         // 0x01E8(0x0010) (Edit, ZeroConstructor)
	class UFeedbackData*                               ChargeFeedback;                                           // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverchargeFeedback;                                       // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayFeedbackAtLocation : 1;                              // 0x0208(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	struct FName                                       FeedbackSocket;                                           // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponChargeEventNotify>            ChargeEvents;                                             // 0x0218(0x0010) (Edit, ZeroConstructor)
	TArray<struct FWeaponChargeEventNotify>            DischargeEvents;                                          // 0x0228(0x0010) (Edit, ZeroConstructor)
	struct FScriptMulticastDelegate                    NotifyChargeStarted;                                      // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyChargeStopped;                                      // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyFullyCharged;                                       // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyChargeCanceled;                                     // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyOvercharged;                                        // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyDischargeStarted;                                   // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyDischargeStopped;                                   // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyFullyDischarged;                                    // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EWeaponChargeState                                 ChargeState;                                              // 0x02B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x47];                                      // 0x02B9(0x0047) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponChargeComponent");
		return ptr;
	}


	void StopEffects();
	void Overcharged();
	void OnRep_ChargeState(EWeaponChargeState PrevChargeState);
	void OnChargeActionEnd(EGbxActionEndState EndState);
	float GetDischargeDuration();
	float GetChargePercent();
	float GetChargeDuration();
	void FullyDischarged();
	void FullyCharged();
	void DelayChargeFinished();
};


// Class GbxWeapon.WeaponClipReloadComponent
// 0x0030 (0x0208 - 0x01D8)
class UWeaponClipReloadComponent : public UWeaponReloadComponent
{
public:
	float                                              ReloadCompletePercent;                                    // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          TapedReloadTime;                                          // 0x01DC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TapedReloadCompletePercent;                               // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TapedClipCount;                                           // 0x01EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11];                                      // 0x01F0(0x0011) MISSED OFFSET
	unsigned char                                      ClientReloadState;                                        // 0x0201(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CurrentClip;                                              // 0x0202(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0203(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponClipReloadComponent");
		return ptr;
	}


	void OnRep_ClientReloadState();
};


// Class GbxWeapon.GbxCondition_ZoomState
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_ZoomState : public UGbxCondition
{
public:
	unsigned char                                      bIsZoomedIn : 1;                                          // 0x0088(0x0001) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bIncludeTransitions : 1;                                  // 0x0088(0x0001) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.GbxCondition_ZoomState");
		return ptr;
	}

};


// Class GbxWeapon.WeaponDebugInterface
// 0x0000 (0x0028 - 0x0028)
class UWeaponDebugInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponDebugInterface");
		return ptr;
	}

};


// Class GbxWeapon.WeaponFireBeamComponent
// 0x0038 (0x0938 - 0x0900)
class UWeaponFireBeamComponent : public UWeaponFireComponent
{
public:
	float                                              DamageRateScale;                                          // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	class UClass*                                      LightBeamData;                                            // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowPlayerCrosshair;                                   // 0x0910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              LockOnContactTime;                                        // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockOnBreakRadius;                                        // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockOnBreakAngle;                                         // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageRampCurve;                                          // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          DamageRampScale;                                          // 0x0928(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0934(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponFireBeamComponent");
		return ptr;
	}


	class UClass* GetShotLightBeamData();
};


// Class GbxWeapon.WeaponFireRateAccelPercentValueResolver
// 0x0000 (0x0028 - 0x0028)
class UWeaponFireRateAccelPercentValueResolver : public UAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponFireRateAccelPercentValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponRecoilComponent
// 0x0020 (0x0198 - 0x0178)
class UWeaponRecoilComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	class URecoilControlComponent*                     CachedControlComponent;                                   // 0x0188(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AWeapon*                                     WeaponPrivate;                                            // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponRecoilComponent");
		return ptr;
	}


	void OnUsed();
	void OnDetached();
	void OnAttached();
};


// Class GbxWeapon.WeaponRecoilGoodnessValueResolver
// 0x0000 (0x0028 - 0x0028)
class UWeaponRecoilGoodnessValueResolver : public UAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponRecoilGoodnessValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponRecoilPatternComponent
// 0x0068 (0x0200 - 0x0198)
class UWeaponRecoilPatternComponent : public UWeaponRecoilComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
	class URecoilPatternData*                          Pattern;                                                  // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          PatternWidthScale;                                        // 0x01A8(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          PatternHeightScale;                                       // 0x01B4(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          PatternZoomScale;                                         // 0x01C0(0x000C) (Edit, BlueprintVisible, Net)
	bool                                               bScalePatternByFOV;                                       // 0x01CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPatternWhenFiringEnds;                              // 0x01CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01CE(0x0002) MISSED OFFSET
	float                                              RecoilSpeed;                                              // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilRecoveryTime;                                       // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilRecoveryDelayTime;                                  // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStartRecoilRecoveryWhenFiringEnds;                       // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x23];                                      // 0x01DD(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponRecoilPatternComponent");
		return ptr;
	}


	void ResetPattern();
	void OnUseFinished();
	float GetRecoilPatternWidthGoodness();
	float GetRecoilPatternHeightGoodness();
	float GetRecoilPatternGoodness();
};


// Class GbxWeapon.WeaponSettings
// 0x0050 (0x0088 - 0x0038)
class UWeaponSettings : public UDeveloperSettings
{
public:
	TArray<struct FWeaponEffectTypeName>               WeaponEffectTypes;                                        // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<struct FWeaponActionTypeName>               WeaponActionTypes;                                        // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FLightProjectileFlagName>            LightProjectileFlags;                                     // 0x0058(0x0010) (ZeroConstructor, Config)
	TArray<struct FLightBeamFlagName>                  LightBeamFlags;                                           // 0x0068(0x0010) (ZeroConstructor, Config)
	TArray<struct FWeaponShotModifierTypeName>         WeaponShotModifierTypes;                                  // 0x0078(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponSettings");
		return ptr;
	}

};


// Class GbxWeapon.WeaponShotModifier
// 0x0158 (0x0188 - 0x0030)
class UWeaponShotModifier : public UGbxDataAsset
{
public:
	bool                                               bTriggerEveryXShots;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                TriggerEveryXShots;                                       // 0x0038(0x0038) (Edit)
	EWeaponShotModifierType                            ModifierType;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModifyDamage;                                            // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FAttributeInitializationData                DamageModifier;                                           // 0x0078(0x0038) (Edit)
	EWeaponShotDamageModifierType                      DamageModifierType;                                       // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bDistributeBetweenProjectiles;                            // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactData;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ECriticalHitDamageOverride                         CriticalHitModifier;                                      // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultCriticalHitMultiplier;                         // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	struct FAttributeInitializationData                AdditionalCriticalMultiplier;                             // 0x00D0(0x0038) (Edit)
	struct FAttributeInitializationData                GoreModifier;                                             // 0x0108(0x0038) (Edit)
	struct FAttributeInitializationData                GibModifier;                                              // 0x0140(0x0038) (Edit)
	class UConditionalDamageModifier*                  ConditionalDamageModifier;                                // 0x0178(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPassConditionalDamageModifierToChildProjectiles;         // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRefundShotCostWhenTriggered;                             // 0x0181(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressRefundThatWouldPreventReload;                    // 0x0182(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0183(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponShotModifier");
		return ptr;
	}

};


// Class GbxWeapon.WeaponSimpleMotionControlBase
// 0x0060 (0x00F0 - 0x0090)
class UWeaponSimpleMotionControlBase : public UWeaponSkeletalControlBase
{
public:
	unsigned char                                      bStartActive : 1;                                         // 0x0090(0x0001) (Edit)
	unsigned char                                      bAutoActivate : 1;                                        // 0x0090(0x0001) (Edit)
	ESimpleMotionInputHandler                          InputHandler;                                             // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FAttributeInitializationData                ControlValue;                                             // 0x0098(0x0038) (Edit)
	unsigned char                                      bLimitMinControlValue : 1;                                // 0x00D0(0x0001) (Edit)
	unsigned char                                      bLimitMaxControlValue : 1;                                // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              MinControlValue;                                          // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxControlValue;                                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseSpeed;                                      // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseMaxValue;                                   // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseDecayDelay;                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseDecaySpeed;                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponSimpleMotionControlBase");
		return ptr;
	}

};


// Class GbxWeapon.WeaponSimpleMotionBlendControl
// 0x0068 (0x0158 - 0x00F0)
class UWeaponSimpleMotionBlendControl : public UWeaponSimpleMotionControlBase
{
public:
	unsigned char                                      bUseExistingNode : 1;                                     // 0x00F0(0x0001) (Edit)
	unsigned char                                      bMeshSpaceBlend : 1;                                      // 0x00F0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UAnimationAsset*                             Animation;                                                // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInputBlendPose                             BlendLayerSetup;                                          // 0x0100(0x0010) (Edit)
	struct FSimpleMotionState                          ActiveState;                                              // 0x0110(0x0020) (Edit, IsPlainOldData)
	float                                              ActiveBlendTarget;                                        // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FSimpleMotionState                          RecoveryState;                                            // 0x0138(0x0020) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponSimpleMotionBlendControl");
		return ptr;
	}

};


// Class GbxWeapon.WeaponSimpleMotionBoneControl
// 0x0188 (0x0278 - 0x00F0)
class UWeaponSimpleMotionBoneControl : public UWeaponSimpleMotionControlBase
{
public:
	struct FName                                       BoneName;                                                 // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	struct FVector                                     IdleTranslation;                                          // 0x00FC(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ActiveTranslation;                                        // 0x0108(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FSimpleMotionState                          IdleTranslationState;                                     // 0x0118(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          ActiveTranslationState;                                   // 0x0138(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          RecoveryTranslationState;                                 // 0x0158(0x0020) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0179(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x017A(0x0002) MISSED OFFSET
	struct FRotator                                    IdleRotation;                                             // 0x017C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    ActiveRotation;                                           // 0x0188(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FSimpleMotionState                          IdleRotationState;                                        // 0x0198(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          ActiveRotationState;                                      // 0x01B8(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          RecoveryRotationState;                                    // 0x01D8(0x0020) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x01F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x01FA(0x0002) MISSED OFFSET
	struct FVector                                     IdleScale;                                                // 0x01FC(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ActiveScale;                                              // 0x0208(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FSimpleMotionState                          IdleScaleState;                                           // 0x0218(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          ActiveScaleState;                                         // 0x0238(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          RecoveryScaleState;                                       // 0x0258(0x0020) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponSimpleMotionBoneControl");
		return ptr;
	}

};


// Class GbxWeapon.WeaponSingleFeedReloadComponent
// 0x0038 (0x0210 - 0x01D8)
class UWeaponSingleFeedReloadComponent : public UWeaponReloadComponent
{
public:
	bool                                               bDisableInterruptedToUse;                                 // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	int                                                SingleFeedIncrement;                                      // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              SingleFeedCompletePercent;                                // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25];                                      // 0x01E4(0x0025) MISSED OFFSET
	unsigned char                                      ClientReloadState;                                        // 0x0209(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x020A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponSingleFeedReloadComponent");
		return ptr;
	}


	void OnUserInput(unsigned char InputChannel);
	void OnRep_ClientReloadState();
};


// Class GbxWeapon.WeaponEffectShotStrengthValueResolver
// 0x0000 (0x0028 - 0x0028)
class UWeaponEffectShotStrengthValueResolver : public UAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponEffectShotStrengthValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponStatics
// 0x0000 (0x0028 - 0x0028)
class UWeaponStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponStatics");
		return ptr;
	}


	void STATIC_UpdateVisibleAmmo(class AWeapon* Weapon);
	void STATIC_UnhideWeapons(class AActor* WeaponUser, const struct FName& Reason);
	void STATIC_UnhideWeapon(class AActor* WeaponUser, unsigned char Slot, const struct FName& Reason);
	void STATIC_SetVisibleAmmoUpdateMethod(class AWeapon* Weapon, EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
	void STATIC_SetVisibleAmmoState(class AWeapon* Weapon, EWeaponVisibleAmmoState NewState);
	void STATIC_ResetVisibleAmmoState(class AWeapon* Weapon);
	void STATIC_RefillAmmo(class AWeapon* Weapon, int Amount, bool bAsPercent);
	class UGbxAction* STATIC_K2_PlayWeaponHoldActionEx(class AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, class AWeapon* Weapon, const struct FActionState_Base& ActionParams);
	class UGbxAction* STATIC_K2_PlayWeaponHoldAction(class AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, class AWeapon* Weapon, float PlayRate, float Duration);
	void STATIC_HideWeapons(class AActor* WeaponUser, const struct FName& Reason);
	void STATIC_HideWeapon(class AActor* WeaponUser, unsigned char Slot, const struct FName& Reason);
	void STATIC_GiveAmmo(class AWeapon* Weapon, int Amount, bool bLoaded, bool bAsPercent);
	class AWeapon* STATIC_GetWeapon(class UObject* Context);
	float STATIC_GetMaxZoomFOVScale(class AWeapon* Weapon, unsigned char UseMode);
	int STATIC_GetLoadedAmmo(class AWeapon* Weapon, unsigned char UseMode);
	float STATIC_GetFireRateAccelPercent(class AWeapon* Weapon, unsigned char UseMode);
	float STATIC_GetFireRate(class AWeapon* Weapon, unsigned char UseMode);
	class UGbxDamageType* STATIC_GetDamageType(class AWeapon* Weapon, unsigned char UseMode);
	class UProjectileEQSProxy* STATIC_CreateProjectileEQSProxy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* ReferenceActor);
};


// Class GbxWeapon.WeaponTriggerFeedbackAsset
// 0x0028 (0x0058 - 0x0030)
class UWeaponTriggerFeedbackAsset : public UGbxDataAsset
{
public:
	EWeaponTriggerFeedbackMode                         Mode;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FWeaponTriggerFeedbackData                  Feedback;                                                 // 0x0034(0x0008) (Edit)
	struct FWeaponTriggerWeaponData                    Weapon;                                                   // 0x003C(0x000C) (Edit)
	struct FWeaponTriggerVibrationData                 Vibration;                                                // 0x0048(0x000C) (Edit)
	struct FWeaponTriggerFireThreasholdData            FireThreshold;                                            // 0x0054(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponTriggerFeedbackAsset");
		return ptr;
	}

};


// Class GbxWeapon.WeaponTypeAsset
// 0x0030 (0x0060 - 0x0030)
class UWeaponTypeAsset : public UGbxDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	class FString                                      ScaleformDisplayFrameID;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       EquipAudioEventName;                                      // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponTypeAsset");
		return ptr;
	}

};


// Class GbxWeapon.WeaponTypeData
// 0x0020 (0x0050 - 0x0030)
class UWeaponTypeData : public UGbxDataAsset
{
public:
	struct FDataTableRowHandle                         BaseWeaponBalanceTableRow;                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         ManufacturerDamageScaleRow;                               // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponTypeData");
		return ptr;
	}

};


// Class GbxWeapon.WeaponTypeDataTableAttributeValueResolver
// 0x0008 (0x00E0 - 0x00D8)
class UWeaponTypeDataTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver
{
public:
	EWeaponTypeDataTableType                           DataTableFromWeaponType;                                  // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponTypeDataTableAttributeValueResolver");
		return ptr;
	}

};


// Class GbxWeapon.WeaponVisibleAmmoComponent
// 0x00D8 (0x0250 - 0x0178)
class UWeaponVisibleAmmoComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	TArray<struct FName>                               AmmoBoneNames;                                            // 0x0180(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       MeshType;                                                 // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponVisibleAmmoState                            InitialState;                                             // 0x0191(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponVisibleAmmoUpdateMethod                     UpdateMethod;                                             // 0x0192(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0193(0x000D) MISSED OFFSET
	struct FWeaponVisibleAmmoEffectData                HideAmmoEffect;                                           // 0x01A0(0x0040) (Edit)
	struct FWeaponVisibleAmmoEffectData                ShowAmmoEffect;                                           // 0x01E0(0x0040) (Edit)
	EWeaponVisibleAmmoState                            VisibleAmmoState;                                         // 0x0220(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	int                                                ServerAmmoCount;                                          // 0x0224(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UWeaponAmmoComponent*                        CachedAmmoComponent;                                      // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	class AWeapon*                                     WeaponPrivate;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponVisibleAmmoComponent");
		return ptr;
	}


	void UpdateBoneVisibility(bool bForce);
	void SetVisibleAmmoUpdateMethod(EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
	void SetVisibleAmmoState(EWeaponVisibleAmmoState NewState);
	void ResetVisibleAmmoState();
	void OnRep_ServerAmmoCount();
	void OnDetached();
	void OnAttached();
	void OnAmmoChanged();
};


// Class GbxWeapon.WeaponMaxZoomFOVScaleValueResolver
// 0x0008 (0x0030 - 0x0028)
class UWeaponMaxZoomFOVScaleValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      bInvertValue : 1;                                         // 0x0028(0x0001) (Edit)
	unsigned char                                      bApplyWeaponModeZoom : 1;                                 // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxWeapon.WeaponMaxZoomFOVScaleValueResolver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
