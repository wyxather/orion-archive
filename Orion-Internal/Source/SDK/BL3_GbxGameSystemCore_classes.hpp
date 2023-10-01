#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxGameSystemCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxGameSystemCore.StanceDataProvider
// 0x0000 (0x0030 - 0x0030)
class UStanceDataProvider : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StanceDataProvider");
		return ptr;
	}

};


// Class GbxGameSystemCore.StanceData
// 0x0078 (0x00A8 - 0x0030)
class UStanceData : public UStanceDataProvider
{
public:
	struct FStanceFloatValue                           MaxSpeed;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FStanceFloatValue                           MaxRotation;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FStanceFloatValue                           MaxAllowedAimOffset;                                      // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUseMaxAllowedAimOffset;                                  // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FStanceFloatValue                           AimRotationRate;                                          // 0x004C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUseAimRotationRate;                                      // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FStanceFloatValue                           MaxIdleRotation;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUseMaxIdleRotation;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UStanceData*                                 StanceDataToShowAnimSystem;                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideSlowdownSpeed;                                   // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FStanceFloatValue                           SlowdownSpeed;                                            // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bOverrideMaxAcceleration;                                 // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              MaxAcceleration;                                          // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLockDodging;                                             // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockTurns;                                               // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockFootIK;                                              // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockHandIK;                                              // 0x0087(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bThisStanceAllowsFidgetAnims;                             // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              WaitTimeBeforeFirstFidgetAnim;                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalAnimationProfileAsset*              PhysicalAnimation;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitReactionLayer;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHitReactionData*                            HitReactionData;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StanceData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAnimTable
// 0x0018 (0x0048 - 0x0030)
class UGbxAnimTable : public UGbxDataAsset
{
public:
	struct FGbxTriggerProperty                         TriggerAutofill;                                          // 0x0030(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UDataTable*                                  DataTable;                                                // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bScaleRateByMeshScale;                                    // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAnimTable");
		return ptr;
	}


	void Autofill();
};


// Class GbxGameSystemCore.GbxAction
// 0x0038 (0x0060 - 0x0028)
class UGbxAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bCanUseCDO;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0031(0x0017) MISSED OFFSET
	struct FName                                       ActionSlotName;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxActionPriority                                 ActionPriority;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UScriptStruct*                               InstanceDataType;                                         // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction");
		return ptr;
	}


	void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnServerBegin(class AActor* Actor);
	void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBegin(class AActor* Actor);
	bool K2_GetVectorRegisterValue(const struct FName& InName, struct FVector* OutVector);
	float K2_GetTimeRemaining();
	bool K2_GetObjectRegisterValue(const struct FName& InName, class UObject** OutObject);
	bool K2_GetNameRegisterValue(const struct FName& InName, struct FName* OutName);
	float K2_GetMaxCurrentTime();
	bool K2_GetIntRegisterValue(const struct FName& InName, int* OutInt);
	bool K2_GetFloatRegisterValue(const struct FName& InName, float* OutFloat);
	float K2_GetCurrentTime();
	float K2_GetCurrentNormalizedTime();
	class AActor* K2_GetActor();
};


// Class GbxGameSystemCore.GbxAction_SimpleAnim
// 0x0058 (0x00B8 - 0x0060)
class UGbxAction_SimpleAnim : public UGbxAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	bool                                               bStopAI;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAbortAI;                                                 // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopMovement;                                            // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableHitReactions;                                     // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePhysNoneWithRootMotion;                               // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopLook;                                                // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAimRotation;                                         // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopHeadLook;                                            // 0x006F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockHeadLook;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAvoidance;                                        // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTickAndRefreshBones;                                     // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCollision;                                        // 0x0073(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             DisableCollisionChannels;                                 // 0x0078(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableLoopHelper;                                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanInterruptSameSlotAnims;                               // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetDynamicsOnBegin;                                    // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePhysicalAnimationProfile;                             // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UPhysicalAnimationProfileAsset*              PhysicalAnimationProfile;                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestorePreviousPhysicalAnimationProfileOnEnd;            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewBoneSetFilter;                                     // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	class UGbxBoneSet*                                 NewBoneSetFilter;                                         // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestorePreviousBoneSetFilterProfileOnEnd;                // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetBoneSetFilter;                                      // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              DefaultInterruptBlendOutTime;                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReleaseResourceFlagsOnAnimEnd;                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEndActionOnBlendOut;                                     // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_SimpleAnim");
		return ptr;
	}


	void OnAnimEnd(class AActor* Actor);
	void K2_SetTickAndRefreshBones(bool bLockResource);
	void K2_SetPhysNoneWithRootMotion(bool bEnable);
	void K2_SetMovement(bool bDisable);
	void K2_SetLook(bool bDisable);
	void K2_SetHitReactions(bool bDisable);
	void K2_SetHeadLookLocked(bool bLock);
	void K2_SetHeadLook(bool bDisable);
	void K2_SetCollision(bool bEnable);
	void K2_SetAvoidance(bool bDisable);
	void K2_SetAIThinking(bool bDisable);
	void K2_SetAimRotation(bool bDisable);
};


// Class GbxGameSystemCore.GbxAISystemBase
// 0x0008 (0x0130 - 0x0128)
class UGbxAISystemBase : public UAISystem
{
public:
	class UGbxQueryManager*                            GbxQueryManager;                                          // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAISystemBase");
		return ptr;
	}

};


// Class GbxGameSystemCore.PreviewComponent
// 0x0100 (0x07F0 - 0x06F0)
class UPreviewComponent : public UPrimitiveComponent
{
public:
	bool                                               bSpawnInPIE;                                              // 0x06F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreviewEnabled;                                          // 0x06F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06F2(0x0006) MISSED OFFSET
	class UClass*                                      PreviewActor;                                             // 0x06F8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FPreviewState                               PreviewState;                                             // 0x0700(0x00D8) (Transient, DuplicateTransient)
	bool                                               bEnabled;                                                 // 0x07D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class USkinnedMeshComponent>        SkinnedMeshComponent;                                     // 0x07DC(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x07E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PreviewComponent");
		return ptr;
	}


	void OnBlueprintCompiled(class UBlueprint* BP);
};


// Class GbxGameSystemCore.GbxAction_Anim
// 0x00F0 (0x01A8 - 0x00B8)
class UGbxAction_Anim : public UGbxAction_SimpleAnim
{
public:
	struct FAnimMeshList                               DefaultAnims;                                             // 0x00B8(0x0078) (Edit)
	EGbxActionEndCondition                             DefaultEndCondition;                                      // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FName                                       AnimationSlot;                                            // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPushBlendInTime;                                         // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	float                                              DefaultBlendOutTime;                                      // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPushBlendOutTime;                                        // 0x014C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePlayrateWithCharacterScale;                         // 0x0154(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	float                                              SourceCameraAlpha;                                        // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MontageCameraAlpha;                                       // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableFootIk;                                           // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBody1stControlsDuration;                                 // 0x0161(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlay1stPersonAnimationsOnRemotePlayers;                  // 0x0162(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0163(0x0005) MISSED OFFSET
	struct FName                                       AnimSlot3rd;                                              // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlot1st;                                              // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnimSlot3rdValue;                                     // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnimSlot1stValue;                                     // 0x0179(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGodMode;                                                 // 0x017A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDemigodMode;                                             // 0x017B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockCrouching;                                          // 0x017C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockMantling;                                           // 0x017D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScaledRootMotion;                                  // 0x017E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainRootVelocity;                                    // 0x017F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDuration;                                        // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              OverrideDuration;                                         // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCount;                                           // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	int                                                OverrideCount;                                            // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridePlayRate;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              OverridePlayRate;                                         // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlendSpaceXRegisterName;                                  // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlendSpaceYRegisterName;                                  // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_Anim");
		return ptr;
	}


	void K2_SetMantlingBlocked(bool bBlocked);
	void K2_SetGodMode(bool bEnable);
	void K2_SetFootIK(bool bDisable);
	void K2_SetDemigodMode(bool bEnable);
	void K2_SetCrouchBlocked(bool bBlocked);
	void K2_Resume();
	void K2_RepProceedToNextSection();
	void K2_RepJumpToNextSection();
	void K2_ProceedToNextSection();
	void K2_Pause();
	void K2_JumpToNextSection();
};


// Class GbxGameSystemCore.TeamComponent
// 0x0040 (0x01B8 - 0x0178)
class UTeamComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class UTeam*                                       Team;                                                     // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UTeam*                                       TeamDefault;                                              // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0190(0x0018) MISSED OFFSET
	bool                                               bSetTeamCollision;                                        // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCollisionWithTeam;                                 // 0x01A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritSourceTeamFromInstigator;                         // 0x01AA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x01AB(0x0005) MISSED OFFSET
	class UTeamComponent*                              SourceTeamComponent;                                      // 0x01B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TeamComponent");
		return ptr;
	}


	void SetTeamToDefault();
	void SetTeamCollision(bool bOn);
	void SetTeam(class UTeam* NewTeam);
	void SetSourceTeamComponent(class UTeamComponent* NewSourceTeamComponent);
	void SetCollidesWithTeam(bool bCollidesWithTeam);
	void OnRep_Team(class UTeam* OldTeam);
	void OnRep_bIgnoreCollisionWithTeam();
	bool IsNeutral(class AActor* Actor);
	bool IsHostile(class AActor* Actor);
	bool IsFriendly(class AActor* Actor);
	void InitializeTeam(class UTeam* NewTeam);
	ETeamCollisionChannel GetTeamCollisionChannel();
	TEnumAsByte<ETeamAttitude> GetTeamAttitudeTowardsTeam(class UTeam* OtherTeam);
	TEnumAsByte<ETeamAttitude> GetTeamAttitudeTowardsActor(class AActor* Actor);
};


// Class GbxGameSystemCore.GbxCharacter
// 0x04D0 (0x0D80 - 0x08B0)
class AGbxCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x08B0(0x0050) MISSED OFFSET
	class UGbxCharacterMovementComponent*              GbxCharacterMovement;                                     // 0x0900(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        TargetableComponent;                                      // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauserComponent;                                    // 0x0918(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x0920(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGameplayTagContainerComponent*              GameplayTagContainerComponent;                            // 0x0928(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDynamicPhysicalAnimationComponent*          DynamicPhysicalAnimationComponent;                        // 0x0930(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTargetingComponent*                         TargetingComponent;                                       // 0x0938(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxPerceptionComponent*                     PerceptionComponent;                                      // 0x0940(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFirstPersonComponent*                       FirstPersonComponent;                                     // 0x0948(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0950(0x0010) MISSED OFFSET
	class ULandingData*                                LandingData;                                              // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 JumpedImpact;                                             // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayJumpAndLandImpactsOnAllFeet;                         // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	class UImpactData*                                 FootstepImpact;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 GenericHandImpact;                                        // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 LadderHandImpact;                                         // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               FootstepSockets;                                          // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               HandAccessoryTags;                                        // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    LandingDataTriggeredDelegate;                             // 0x09B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AGbxPlayerController*                        OwnerPlayerController;                                    // 0x09C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AAIController*                               OwnerAIController;                                        // 0x09C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AGbxCharacter*                               PlayerMaster;                                             // 0x09D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AGbxCharacter*>                       Pets;                                                     // 0x09D8(0x0010) (ZeroConstructor, Transient)
	struct FMassSelection                              CharacterMass;                                            // 0x09E8(0x0018) (Edit)
	struct FSpawnCostSelection                         SpawnCostSelection;                                       // 0x0A00(0x0018) (Edit)
	class UGbxSkeletalMeshComponent*                   GbxMesh;                                                  // 0x0A18(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bOrientEyeHeight;                                         // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0A21(0x0007) MISSED OFFSET
	struct FName                                       ViewSocket;                                               // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ViewSocketComponent;                                      // 0x0A30(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB0];                                      // 0x0A38(0x00B0) MISSED OFFSET
	struct FReplicatedPawnAttachState                  ReplicatedPawnAttachState;                                // 0x0AE8(0x0010) (Net, Transient)
	struct FReplicatedPawnAttachState                  PawnAttachState;                                          // 0x0AF8(0x0010) (Transient)
	unsigned char                                      UnknownData05[0xA8];                                      // 0x0B08(0x00A8) MISSED OFFSET
	float                                              BaseAimHeight;                                            // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomBaseAimHeight;                                  // 0x0BB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BB5(0x0003) MISSED OFFSET
	float                                              AimHeightFromGround;                                      // 0x0BB8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CrouchedAimHeight;                                        // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomCrouchedAimHeight;                              // 0x0BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BC1(0x0003) MISSED OFFSET
	float                                              AimEyeHeightPct;                                          // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AimSocket;                                                // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AimSocketComponent;                                       // 0x0BD0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0BD8(0x0008) MISSED OFFSET
	struct FFacingController                           FacingController;                                         // 0x0BE0(0x0110) (Net, Transient)
	unsigned char                                      ClientTurnDelta;                                          // 0x0CF0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0CF1(0x0007) MISSED OFFSET
	class UClass*                                      InputComponentClass;                                      // 0x0CF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFoleyAccessoryComponent*                    GestaltFoleyAccessory;                                    // 0x0D00(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         CachedFoleyMainComponent;                                 // 0x0D08(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasksComponent;                                   // 0x0D10(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ULevelSequencePlayer*                        LevelSequencePlayerController;                            // 0x0D18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSavedCollision                             LevelSequenceCollisionState;                              // 0x0D20(0x0020) (Transient)
	class UGbxBoneSet*                                 AnimGraphBoneSetFilter;                                   // 0x0D40(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAnimGraphBoneSet>                   ActiveAnimGraphBoneSetFilterList;                         // 0x0D48(0x0010) (ZeroConstructor, Transient)
	class UGbxBoneSet*                                 SmartObjectBoneSetFilter;                                 // 0x0D58(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxBoneSet*                                 DefaultBoneSetFilter;                                     // 0x0D60(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxBoneSet*                                 ActionBoneSetFilter;                                      // 0x0D68(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPauseAIWhileFalling;                                     // 0x0D70(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0xF];                                       // 0x0D71(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCharacter");
		return ptr;
	}


	void SetTeam(class UTeam* Team);
	void SetPlayerMaster(class AGbxCharacter* NewPlayerMaster);
	void SetCharacterUIName(class UGbxUIName* NewCharacterUIName);
	void SetCharacterNameFromString(const class FString& NewCharacterName);
	void SetCharacterName(const struct FText& NewCharacterName);
	void RotateCharacterTo(const struct FRotator& TargetRotation, float Duration, TEnumAsByte<EEasingFunc> Easing);
	void ReceiveOwnerPlayerControllerChanged(class AGbxPlayerController* NewPlayerControllerOwner);
	void OnRep_ReplicatedPawnAttachState();
	void OnLandingDataTriggered(const struct FLandingInfo& LandingInfo, int Index);
	void NetMulticast_TriggerHitReactionSound(class UCharacterSoundTag* Tag);
	void NetMulticast_PlayLanded(const struct FHitResult& Hit, float ImpactSpeed, bool bLandFromJump, class ULandingData* LandingDataOverride);
	void NetMulticast_PlayJumped();
	bool IsZoomed();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	class UGbxPerceptionComponent* GetPerceptionComponent();
	EPawnAttachStatus GetPawnAttachStatus();
	class UPawnAttachSlotComponent* GetPawnAttachComponent();
	class AActor* GetPawnAttachActor();
	struct FVector GetLookAtLocation(float* OutWeight);
	float GetLookAt(struct FVector* HeadLocation, struct FVector* EyeLocation, float* HeadWeight);
	class USkeletalMeshComponent* GetFirstPersonMesh();
	class UFirstPersonComponent* GetFirstPersonComponent();
	class UBlackboardComponent* GetBlackboardComponent();
	class UBlackboardData* GetBlackboardAsset();
	void GetAvailableSocketNames(TArray<struct FName>* Array);
	struct FVector GetAimVectorStartLocation();
	struct FRotator GetAimOffset();
	class UFirstPersonComponent* FindFirstPersonComponent();
	void DetachCharacter(EDetachmentRule LocationRule);
	void ClientRotateCharacterTo(const struct FRotator& TargetRotation, float Duration, TEnumAsByte<EEasingFunc> Easing);
	void CauseEveryoneToForgetMe();
	void AttachCharacterToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void AttachCharacterToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
};


// Class GbxGameSystemCore.BalanceStateComponent
// 0x0060 (0x01D8 - 0x0178)
class UBalanceStateComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FDataTableRowHandle                         BalanceTableRowHandle;                                    // 0x0180(0x0010) (Edit)
	struct FDataTableRowHandle                         InheritedBalanceTableRowHandle;                           // 0x0190(0x0010) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A0(0x0004) MISSED OFFSET
	int                                                GameStage;                                                // 0x01A4(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ExperienceLevel;                                          // 0x01A8(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLevelChanged;                                           // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET
	bool                                               bAutoRefreshInheritedBalanceWhenSourceChangesLevel;       // 0x01D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BalanceStateComponent");
		return ptr;
	}


	void SetGameStage(int NewGameStage);
	void SetExperienceLevel(int NewExperienceLevel);
	void OnRep_ExperienceLevel(int OldExperienceLevel);
	void OnInheritedBalanceSourceLevelChanged(class UBalanceStateComponent* InheritedBalanceStateSource, int OldExperienceLevel, int NewExperienceLevel);
	int GetGameStage();
	int GetExperienceLevel();
	struct FDataTableRowHandle GetBalanceTableRow();
};


// Class GbxGameSystemCore.GbxChildActorComponent
// 0x0020 (0x0320 - 0x0300)
class UGbxChildActorComponent : public UChildActorComponent
{
public:
	unsigned char                                      bAutoSpawnActor : 1;                                      // 0x0300(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAutoDestroyActor : 1;                                    // 0x0300(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDestroyExistingChildActorOnSpawn : 1;                    // 0x0300(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDeferChildActorClassUpdate : 1;                          // 0x0300(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bClearChildActorReferenceToMeWhenChildActorIsDetached : 1;// 0x0300(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChildActorSpawned;                                      // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxChildActorComponent");
		return ptr;
	}


	void SpawnChildActor();
	void DespawnChildActor();
};


// Class GbxGameSystemCore.AnimNotify_PawnAttachSlotTransition
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PawnAttachSlotTransition : public UAnimNotify
{
public:
	unsigned char                                      bTriggerOnFirstPersonMesh : 1;                            // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bDetach : 1;                                              // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bAttach : 1;                                              // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_PawnAttachSlotTransition");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributeEffectMutatorData
// 0x0000 (0x0030 - 0x0030)
class UAttributeEffectMutatorData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributeEffectMutatorData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAnimInstance
// 0x0100 (0x0540 - 0x0440)
class UGbxAnimInstance : public UAnimInstance
{
public:
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMeshComponent;                                 // 0x0440(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UGbxAnimStateMachineDefinition*>      AnimStateMachineDefinitions;                              // 0x0448(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRuntimeStateMachineData>            RuntimeStateMachines;                                     // 0x0458(0x0010) (ZeroConstructor, Transient)
	TMap<class UGbxAnimTable*, struct FGbxAnimTableMapItem> AnimTableMap;                                             // 0x0468(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x04B8(0x0028) MISSED OFFSET
	struct FGbxStateManagerRuntime                     ManagerRuntime;                                           // 0x04E0(0x0050)
	bool                                               bEarlyBindBoneSetDelegates;                               // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0531(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAnimInstance");
		return ptr;
	}


	class UAnimSequence* GetAnimTableSequence(class UGbxAnimTable* AnimTable);
	bool CanUseAnimTable(class UGbxAnimTable* AnimTable);
};


// Class GbxGameSystemCore.GbxCustomizationData
// 0x0100 (0x0130 - 0x0030)
class UGbxCustomizationData : public UGbxDataAsset
{
public:
	struct FText                                       CustomizationName;                                        // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       CustomizationDescription;                                 // 0x0048(0x0028) (Edit, DisableEditOnInstance)
	class FString                                      IconFrameName;                                            // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FUIStatPriorityData>                 UIStats;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ItemCardTypeFrameName;                                    // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture>                     PreviewImage;                                             // 0x0090(0x0028) (Edit)
	struct FAttributeInitializationData                PurchasePrice;                                            // 0x00B8(0x0038) (Edit, DisableEditOnInstance)
	class UGbxCustomizationTypeData*                   CustomizationType;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCustomizationAssetEntry>            CustomizationTargetAssets;                                // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUnlockedByDefault;                                       // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEquippedByDefault;                                       // 0x0109(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	class UGbxCustomizationData*                       DefaultSkin;                                              // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxCustomizationData*                       DependentBody;                                            // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCustomizationData");
		return ptr;
	}


	bool RemoveCustomizationFromActor(class AActor* TargetActor);
	void OnCustomizationAssetLoaded();
	class UGbxAction* K2_PlayAction(class AActor* TargetActor, const struct FActionState_Base& ActionData);
	bool IsLoading();
	bool IsLoaded(int OptionalCustomizationId);
	void AsyncLoadCustomizationAssets(const struct FScriptDelegate& LoadedDelegate);
	bool ApplyCustomizationToActor(class AActor* TargetActor, int OptionalCustomizationId);
};


// Class GbxGameSystemCore.ActorPartSelectionData
// 0x0068 (0x0098 - 0x0030)
class UActorPartSelectionData : public UGbxDataAsset
{
public:
	class UActorPartSelectionData*                     BaseSelectionData;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UActorPartSetData*                           PartSetData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PartSetDataGuid;                                          // 0x0040(0x0010) (IsPlainOldData)
	struct FRuntimeActorPartListData                   RuntimePartList;                                          // 0x0050(0x0028)
	struct FGuid                                       RuntimePartListGuid;                                      // 0x0078(0x0010) (IsPlainOldData)
	struct FGuid                                       InheritedRuntimePartListGuid;                             // 0x0088(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ActorPartSelectionData");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributeValueResolver
// 0x0000 (0x0028 - 0x0028)
class UAttributeValueResolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributeValueResolver");
		return ptr;
	}


	bool SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value);
	float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
};


// Class GbxGameSystemCore.GbxAreaComponent
// 0x0060 (0x0750 - 0x06F0)
class UGbxAreaComponent : public UPrimitiveComponent
{
public:
	TArray<class AVolume*>                             DetectionVolumes;                                         // 0x06F0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bWorldAreaVolume;                                         // 0x0700(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              DetectionRadius;                                          // 0x0704(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetectionHalfHeight;                                      // 0x0708(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldAreaRadius;                                         // 0x070C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bManualTest;                                              // 0x070D(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x070E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnteredArea;                                      // 0x0710(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerExitedArea;                                       // 0x0720(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EGbxAreaDrawStyle                                  DrawStyle;                                                // 0x0730(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class APlayerController>>    PlayersDetected;                                          // 0x0738(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0748(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAreaComponent");
		return ptr;
	}


	void AreaTest();
};


// Class GbxGameSystemCore.EffectCollectionData
// 0x0000 (0x0028 - 0x0028)
class UEffectCollectionData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EffectCollectionData");
		return ptr;
	}


	class UWwiseEvent* STATIC_StaticGetWwiseEvent(class UClass* Collection, class UObject* ContextObject);
	void STATIC_StaticGetParticleEffectAndWwiseEvent(class UClass* Collection, class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
	class UParticleSystem* STATIC_StaticGetParticleEffect(class UClass* Collection, class UObject* ContextObject);
	class UWwiseEvent* GetWwiseEvent(class UObject* ContextObject);
	void GetParticleEffectAndWwiseEvent(class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
	class UParticleSystem* GetParticleEffect(class UObject* ContextObject);
};


// Class GbxGameSystemCore.EnvQueryGenerator_TargetableActors
// 0x00B0 (0x0110 - 0x0060)
class UEnvQueryGenerator_TargetableActors : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   DistanceMax;                                              // 0x0060(0x0030) (Edit)
	class UGbxCondition*                               TargetSkipDistanceCheckCondition;                         // 0x0090(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAllowNonTargetableActors;                                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDeadActors;                                         // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowQuerier;                                            // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHostiles;                                           // 0x009B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFriendlies;                                         // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowNeutrals;                                           // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	class UGbxCondition*                               TargetCondition;                                          // 0x00A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorTagCompositeQuery                     TagQuery;                                                 // 0x00A8(0x0010) (Edit)
	TArray<TSoftObjectPtr<class UClass>>               AllowedTypes;                                             // 0x00B8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bUseAllowedTypes : 1;                                     // 0x00C8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               DisallowedTypes;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bUseDisallowedTypes : 1;                                  // 0x00E0(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              AllowedTypesCache;                                        // 0x00E8(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              DisallowedTypesCache;                                     // 0x00F8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryGenerator_TargetableActors");
		return ptr;
	}

};


// Class GbxGameSystemCore.UsableComponent
// 0x0238 (0x03B0 - 0x0178)
class UUsableComponent : public UActorComponent
{
public:
	struct FHoldToUseSettings                          HoldToUseSettings;                                        // 0x0178(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class UUsabilityDataSelection*                     UsabilityData;                                            // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEnabledCondition;                                     // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	class UGbxCondition*                               EnabledCondition;                                         // 0x01A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUseDefSelection                            PrimaryUseDefSelection;                                   // 0x01A8(0x0020) (Edit)
	struct FUseDefSelection                            PrimaryHoldUseDefSelection;                               // 0x01C8(0x0020) (Edit)
	struct FUseDefSelection                            SecondaryUseDefSelection;                                 // 0x01E8(0x0020) (Edit)
	struct FUseDefSelection                            SecondaryHoldUseDefSelection;                             // 0x0208(0x0020) (Edit)
	unsigned char                                      bCanBeUsedFromVehicle : 1;                                // 0x0228(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanBeUsedFromMech : 1;                                   // 0x0228(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanOnlyBeUsedByOwner : 1;                                // 0x0228(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDefaultIsBackupPrimaryData : 1;                          // 0x0228(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	int                                                UsablePriority;                                           // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsMaxUseCount;                                        // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	int                                                MaxUseCount;                                              // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CurrentUseCount;                                          // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	TArray<struct FName>                               RequiredComponentNames;                                   // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseAngleRestriction;                                     // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	struct FUsableAngleRestriction                     AngleRestriction;                                         // 0x0254(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bRequiresNetAuthority;                                    // 0x025C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	struct FText                                       HeaderName;                                               // 0x0260(0x0028)
	unsigned char                                      UnknownData07[0xA0];                                      // 0x0278(0x00A0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUsed;                                                   // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUsedPrimary;                                            // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUsedPrimaryHold;                                        // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUsedSecondary;                                          // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUsedSecondaryHold;                                      // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLookedAt;                                               // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLookedAwayFrom;                                         // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x28];                                      // 0x0388(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UsableComponent");
		return ptr;
	}


	void SetUsableLocked(bool bLocked, const struct FName& Reason);
	void SetInteractionHeader(const struct FText& NewHeaderName);
	void ResetUseCount();
	struct FText K2_GetOptionalErrorText();
	bool K2_CanBeUsed(const struct FUsabilityQuery& Query);
	void GetValidPrimitiveComponentNames(TArray<struct FName>* ComponentNames);
	struct FText GetInteractionHeader();
};


// Class GbxGameSystemCore.GbxGameplayGlobals
// 0x01E8 (0x0218 - 0x0030)
class UGbxGameplayGlobals : public UGbxDataAsset
{
public:
	class UHealthTypeData*                             ShieldHealthType;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   ProjectileReflectionQuery;                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileReflectionSpeedScale;                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHitRegionRicochetSpeedScale;                    // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                ProjectileReflectionInaccuracy;                           // 0x0048(0x0038) (Edit)
	class UImpactData*                                 ProjectileReflectionImpact;                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ProjectileSelfReflectionImpact;                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUsableTypeDefinition*                       DefaultUseDefinition;                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                InventoryScoreValueInitializer;                           // 0x0098(0x0038) (Edit, DisableEditOnInstance)
	class UGlobalAIData*                               GlobalAIData;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionWindRadiusModifier;                              // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExplosionRadiusToTriggerRadialBlur;                    // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDefaultExplosionSettings>           DefaultExplosionSettings;                                 // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                                 ShortDurationTinnitusEvent;                               // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 MediumDurationTinnitusEvent;                              // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 LongDurationTinnitusEvent;                                // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionSoundStackingMaxDistanceSquared;                 // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionSoundStackingPreventionDelay;                    // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  DefaultFeedbackTable;                                     // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FGameplayTag, class UGameStatData*>    KillStatMap;                                              // 0x0118(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameStatList*>                       GameStatLists;                                            // 0x0168(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UChallengeList*>                      GameChallengeLists;                                       // 0x0178(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FMantleGlobalData                           MantleGlobals;                                            // 0x0188(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameplayGlobals");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxGameMode
// 0x0000 (0x0548 - 0x0548)
class AGbxGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameMode");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxGameState
// 0x0058 (0x0598 - 0x0540)
class AGbxGameState : public AGameState
{
public:
	class AChallengeManager*                           ChallengeManager;                                         // 0x0540(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGameStatsManager*                           StatsManager;                                             // 0x0548(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AGbxCustomizationManager*                    CustomizationManager;                                     // 0x0550(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerState*                                HostPlayerState;                                          // 0x0558(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AImpactDecalManager*                         ImpactDecalManager;                                       // 0x0560(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       GameInstanceId;                                           // 0x0568(0x0010) (Net, Transient, IsPlainOldData)
	float                                              GameInstanceTime;                                         // 0x0578(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GameInstanceTimeUpdateRate;                               // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CustomizationManagerClass;                                // 0x0580(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	bool                                               bRepPlayersOnly;                                          // 0x0590(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0591(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameState");
		return ptr;
	}


	void SpawnEmitterAtLocationMulticastImpl(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void STATIC_SpawnEmitterAtLocationMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void STATIC_SpawnEmitterAtComponentSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class USceneComponent* Component, const struct FName& Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void STATIC_SpawnEmitterAtActorSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class AActor* Actor, const struct FName& Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void PlayImpactMulticast(class UImpactData* ImpactData, class AActor* ImpactInstigator, const struct FReplicatedImpactHitResult& HitResult, const struct FImpactResponseParams& ResponseParams);
	void PlayHitRegionImpactMulticast(class UHitRegionData* HitRegion, class AActor* ImpactInstigator, const struct FReplicatedImpactHitResult& HitResult);
	void OnRep_StatsManager();
	void OnRep_HostPlayerState();
	void OnRep_GameInstanceTime();
	void OnRep_GameInstanceId();
	void OnRep_bPlayersOnly();
};


// Class GbxGameSystemCore.GbxCharacterAnimInstance
// 0x0410 (0x0950 - 0x0540)
class UGbxCharacterAnimInstance : public UGbxAnimInstance
{
public:
	struct FVector                                     HeadLookAtLocation;                                       // 0x0540(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     EyeLookAtLocation;                                        // 0x054C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              HeadLookAtPercentage;                                     // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LookAtWeight;                                             // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLookAtBlinkStarted;                                      // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FName                                       ActiveStanceData;                                         // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ActiveStanceType;                                         // 0x0570(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStanceDataProvider*                         CombatStance;                                             // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStanceDataProvider*                         PassiveStance;                                            // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStanceData*                                 StanceData;                                               // 0x0588(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStanceType*                                 StanceType;                                               // 0x0590(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStanceComponent*                            StanceComponent;                                          // 0x0598(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bInCombatStance;                                          // 0x05A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInPassiveStance;                                         // 0x05A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsInAir;                                                  // 0x05A2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x05A3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x05A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x05A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBeenLaunched;                                         // 0x05A6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bJumped;                                                  // 0x05A7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForceFallingState;                                       // 0x05A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	float                                              MaxWalkSpeed;                                             // 0x05AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxSprintSpeed;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Speed2D;                                                  // 0x05B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Speed2DRaw;                                               // 0x05BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityZ;                                                // 0x05C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ForwardDirection;                                         // 0x05C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightDirection;                                           // 0x05C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpDirection;                                              // 0x05CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x05D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              Direction;                                                // 0x05DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BodyYaw;                                                  // 0x05E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReverseDirection;                                         // 0x05E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    RotationalVelocity;                                       // 0x05E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     GroundLocation;                                           // 0x05F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WantsToTurn;                                              // 0x0604(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	float                                              TurnAmount;                                               // 0x0608(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               TurnIsActive;                                             // 0x060C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x060D(0x0003) MISSED OFFSET
	float                                              MaxPredictedTurnDegrees;                                  // 0x0610(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxPredictedTurnTime;                                     // 0x0614(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Yaw;                                                      // 0x061C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AimBlendWeight;                                           // 0x0620(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AimFacingLocation;                                        // 0x0624(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bCanAimInPassiveStance;                                   // 0x0630(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateFootIK;                                            // 0x0631(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateHandIK;                                            // 0x0632(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0633(0x0001) MISSED OFFSET
	float                                              LeftHandIKWeight;                                         // 0x0634(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightHandIKWeight;                                        // 0x0638(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeftHandGripWeight;                                       // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightHandGripWeight;                                      // 0x0640(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseLegIkBaseClass;                                       // 0x0644(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xB];                                       // 0x0645(0x000B) MISSED OFFSET
	struct FTransform                                  LeftHandWeaponIKOffset;                                   // 0x0650(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  RightHandWeaponIKOffset;                                  // 0x0680(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  LeftHandWorldIKTarget;                                    // 0x06B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bHasLeftHandWorldIKTarget;                                // 0x06E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBlueprintForceLeftHandWorldIKTarget;                     // 0x06E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x06E2(0x0006) MISSED OFFSET
	struct FName                                       LeftHandIKTargetSocketName;                               // 0x06E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RightHandWorldIKTarget;                                   // 0x06F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bHasRightHandWorldIKTarget;                               // 0x0720(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBlueprintForceRightHandWorldIKTarget;                    // 0x0721(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0722(0x0006) MISSED OFFSET
	struct FName                                       RightHandIKTargetSocketName;                              // 0x0728(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftFootWorldIKTargetLocation;                            // 0x0730(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FRotator                                    LeftFootWorldIKTargetRotation;                            // 0x073C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     RightFootWorldIKTargetLocation;                           // 0x0748(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FRotator                                    RightFootWorldIKTargetRotation;                           // 0x0754(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bHasFootWorldIKTargets;                                   // 0x0760(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              AINavYaw;                                                 // 0x0764(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AINavTurnBlendDegrees;                                    // 0x0768(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AINavTransitionBlendDegrees;                              // 0x076C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   AINavHopDirection;                                        // 0x0770(0x0008) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              AINavHopDistance;                                         // 0x0778(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	struct FNavAnimServerData                          AINavServerData;                                          // 0x0780(0x00A0) (Transient)
	struct FNavAnimClientData                          AINavClientData;                                          // 0x0820(0x001C) (Transient)
	float                                              AINavState_IdleAlphaTime;                                 // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AINavState_IdleAlpha;                                     // 0x0840(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavState_Idle;                                         // 0x0844(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavState_Move;                                         // 0x0845(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavState_Start;                                        // 0x0846(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavState_Stop;                                         // 0x0847(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavState_Turn;                                         // 0x0848(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EGbxCharacterBlendPoints                           BlendPoints;                                              // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAINavWantsForward;                                       // 0x084A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavWantsBackward;                                      // 0x084B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavWantsLeft;                                          // 0x084C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavWantsRight;                                         // 0x084D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavIsMoving2D;                                         // 0x084E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAINavIsStill2D;                                          // 0x084F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                AINavPreviewTableIndex;                                   // 0x0850(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENavAnimState                                      AINavPreviewDesiredState;                                 // 0x0854(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAINav_UseDesired;                                        // 0x0855(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAINav_CanStretch;                                        // 0x0856(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0857(0x0001) MISSED OFFSET
	float                                              MeshScale;                                                // 0x0858(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENavAnimState                                      AINavPreviewCurrentState;                                 // 0x085C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x53];                                      // 0x085D(0x0053) MISSED OFFSET
	float                                              StartTransitionTimeToEvaluate;                            // 0x08B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StopTransitionTimeToEvaluate;                             // 0x08B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TurningRotationTimeToEvaluate;                            // 0x08B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class UGbxBoneSet*                                 ActiveAnimBoneSetFilter;                                  // 0x08C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxBoneSet*                                 PrevAnimBoneSetFilter;                                    // 0x08C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x08D0(0x0018) MISSED OFFSET
	struct FGaitScalingSettings                        GaitScalingSettings;                                      // 0x08E8(0x0038) (Edit)
	float                                              FacialEmoteWeight;                                        // 0x0920(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredFacialEmoteWeight;                                 // 0x0924(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FacialEmoteWeightAlphaSpeed;                              // 0x0928(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredActionWeight;                                      // 0x092C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BoneSetTransitionActionWeight;                            // 0x0930(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BoneSetBlendWeight;                                       // 0x0934(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EBoneSetTransitionBlendType                        BoneSetTransitionBlendType;                               // 0x0938(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0939(0x0003) MISSED OFFSET
	float                                              BoneSetTransitionBlendSpeed;                              // 0x093C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BoneSetBlendSpeed;                                        // 0x0940(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultBoneSetBlendSpeed;                                 // 0x0944(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBoneSetTransitionBlendSpeed;                       // 0x0948(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x094C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCharacterAnimInstance");
		return ptr;
	}


	void SetDesiredFacialEmoteWeight(float Weight, float BlendTime);
	void OnStanceChanged();
};


// Class GbxGameSystemCore.DamageData
// 0x01D0 (0x01F8 - 0x0028)
class UDamageData : public UObject
{
public:
	struct FAttributeInitializationData                Damage;                                                   // 0x0028(0x0038) (Edit, BlueprintReadOnly)
	struct FAttributeInitializationData                DamageMultiplier;                                         // 0x0060(0x0038) (Edit, BlueprintReadOnly)
	class UDamageAreaType*                             DamageAreaType;                                           // 0x0098(0x0008) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x00A0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x00A8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UConditionalDamageModifier*>          ConditionalDamageModifiers;                               // 0x00B0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	bool                                               bApplyUpwardForce;                                        // 0x00C0(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              UpwardForceScalar;                                        // 0x00C4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             ImpactForceSelection;                                     // 0x00C8(0x0020) (Edit, BlueprintReadOnly)
	float                                              GoreModifier;                                             // 0x00E8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GibModifier;                                              // 0x00EC(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bImpactForceFallsOff;                                     // 0x00F0(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FRotator                                    HitRotationOffset;                                        // 0x00F4(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	bool                                               bSimulatedOnClients;                                      // 0x0100(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNoCrit;                                             // 0x0101(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeExecutedAsync;                                      // 0x0102(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0103(0x0001) MISSED OFFSET
	float                                              MaxAsyncExecutionDeferTime;                               // 0x0104(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitStartSocketOrBone;                                     // 0x0108(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseTransformComesFromActorTransform;                    // 0x0110(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FVector                                     HitStartOffset;                                           // 0x0114(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    HitStartRotationOffset;                                   // 0x0120(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FAttitudeDamageRules                        AttitudeDamageRules;                                      // 0x012C(0x0004) (Edit, BlueprintReadOnly)
	bool                                               bEnforceAttitudeRulesForHealing;                          // 0x0130(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanHurtSelf;                                             // 0x0131(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanHurtInstigator;                                       // 0x0132(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0133(0x0001) MISSED OFFSET
	unsigned char                                      bCausesDamageOverTime : 1;                                // 0x0134(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bAllowMultipleInstances : 1;                              // 0x0134(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bHitEachTargetOnlyOnce : 1;                               // 0x0134(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bCacheSourceLocationAndRotation : 1;                      // 0x0134(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              MaxDamageDuration;                                        // 0x0138(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageInterval;                                           // 0x013C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCancelDamageOverTimeWhenOwnerDies;                       // 0x0140(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	class UParticleSystem*                             DamageOverTimeParticleSystem;                             // 0x0148(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 DamageOverTimeAudioEventStart;                            // 0x0150(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 DamageOverTimeAudioEventStop;                             // 0x0158(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               InstigatorFeedback;                                       // 0x0160(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UFeedbackData*>                       TargetFeedbacks;                                          // 0x0168(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class UImpactData*                                 ImpactData;                                               // 0x0178(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UExplosionData*                              ExplosionData;                                            // 0x0180(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DefaultExplosionParticles;                                // 0x0188(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxSignificanceEvent                       SignificanceEvent;                                        // 0x0190(0x0008) (Edit, BlueprintReadOnly)
	class UWwiseEvent*                                 DefaultAudioEvent;                                        // 0x0198(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 DefaultExplosionImpactData;                               // 0x01A0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultExplosionDecalOverride;                            // 0x01A8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseExplosionSizeForDecal;                                // 0x01B0(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyDrawParticleIfFacingDamage;                          // 0x01B1(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x01B2(0x0006) MISSED OFFSET
	struct FScreenParticleInitParams                   ScreenParticleParams;                                     // 0x01B8(0x0030) (Edit, BlueprintReadOnly)
	class UWwiseEvent*                                 PlayerAudioEvent;                                         // 0x01E8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageData");
		return ptr;
	}


	void OnKilledEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
	void OnHitFriendly(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
	void OnHitAnyAttitude(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
};


// Class GbxGameSystemCore.ProjectileHomingComponent
// 0x00B0 (0x0228 - 0x0178)
class UProjectileHomingComponent : public UActorComponent
{
public:
	bool                                               bMoveDirectlyToTarget;                                    // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	float                                              TurnSpeed;                                                // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeTurnSpeed;                                         // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              FinalTurnSpeed;                                           // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnAcceleration;                                         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrueTargetDistance;                                       // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrueTargetTime;                                           // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideHomingSpeed;                                      // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationScale;                                        // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	class AActor*                                      HomingTarget;                                             // 0x01A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HomingTargetComponent;                                    // 0x01A8(0x0008) (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       HomingSocketOverride;                                     // 0x01B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HomingTargetLocation;                                     // 0x01B8(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	float                                              ReachDistance;                                            // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachDistanceSquared;                                     // 0x01C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     HomingTargetLocalOffset;                                  // 0x01CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StopHomingDistance;                                       // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStopHomingDistanceReached;                              // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReachedTargetLocation;                                  // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHomeIn;                                                  // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0208(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      Projectile;                                               // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bModifyDefault;                                           // 0x0218(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0219(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ProjectileHomingComponent");
		return ptr;
	}


	void ToggleHoming();
	void SetHomeIn(bool bEnabled);
	void SetAssociatedProjectileMovement(class UProjectileMovementComponent* ProjectileMovementComponent);
	struct FVector GetHomingLocation();
};


// Class GbxGameSystemCore.HitReactionLayer
// 0x0008 (0x0030 - 0x0028)
class UHitReactionLayer : public UObject
{
public:
	bool                                               bStackable;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributeContextResolver
// 0x0028 (0x0050 - 0x0028)
class UAttributeContextResolver : public UObject
{
public:
	TSoftObjectPtr<class UClass>                       ComponentTypeToFurtherResolveTo;                          // 0x0028(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributeContextResolver");
		return ptr;
	}


	TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource);
};


// Class GbxGameSystemCore.SpawnPatternData
// 0x0000 (0x0030 - 0x0030)
class USpawnPatternData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SpawnPatternData");
		return ptr;
	}


	void CalculateSpawnPoint(const struct FSpawnPatternInputs& Inputs, struct FSpawnPatternResult* Result);
};


// Class GbxGameSystemCore.PhysicsSpawnPatternData
// 0x00C8 (0x00F8 - 0x0030)
class UPhysicsSpawnPatternData : public USpawnPatternData
{
public:
	unsigned char                                      bEnableSpeedRange : 1;                                    // 0x0030(0x0001) (Edit)
	unsigned char                                      bEnableAngularSpeedRange : 1;                             // 0x0030(0x0001) (Edit)
	unsigned char                                      bApplySpeedAsImpulse : 1;                                 // 0x0030(0x0001) (Edit)
	unsigned char                                      bApplyAngularSpeedAsImpulse : 1;                          // 0x0030(0x0001) (Edit)
	unsigned char                                      bPickRandomPointInActorBounds : 1;                        // 0x0030(0x0001) (Edit)
	unsigned char                                      bScaleSpeedByIncomingImpulse : 1;                         // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FRelativeDirectionData                      Direction;                                                // 0x0040(0x0050) (Edit, DisableEditOnInstance)
	float                                              AngularSpeed;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularSpeed;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRelativeDirectionData                      RotationAxis;                                             // 0x0098(0x0050) (Edit, DisableEditOnInstance)
	struct FVector                                     ActorBoundsScale;                                         // 0x00E8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PhysicsSpawnPatternData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxPlayerCameraManager
// 0x0010 (0x2C80 - 0x2C70)
class AGbxPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x2C70(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxPlayerCameraManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.StatusEffectData
// 0x0058 (0x0088 - 0x0030)
class UStatusEffectData : public UDataAsset
{
public:
	class UStatusEffectStackingStrategyData*           StackingStrategy;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAttributeEffect>                    AttributeEffects;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDoesDamageOverTime;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageSourceClass;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectData");
		return ptr;
	}

};


// Class GbxGameSystemCore.CharacterAttributeContextResolver
// 0x0000 (0x0050 - 0x0050)
class UCharacterAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CharacterAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributePropertyValueResolver
// 0x0088 (0x00B0 - 0x0028)
class UAttributePropertyValueResolver : public UAttributeValueResolver
{
public:
	bool                                               PropertySupportsModifierRemoval;                          // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FParsedProperty                             Property;                                                 // 0x0030(0x0080) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributePropertyValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.UIStatData
// 0x0038 (0x0068 - 0x0030)
class UUIStatData : public UGbxDataAsset
{
public:
	struct FText                                       Description;                                              // 0x0030(0x0028) (Edit)
	unsigned char                                      bCanDisplayMultipleTimes : 1;                             // 0x0048(0x0001) (Edit)
	unsigned char                                      bBiggerIsBetter : 1;                                      // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              BasePriority;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      IconFrameName;                                            // 0x0058(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatData");
		return ptr;
	}


	bool K2_ShouldDisplayStat(class UObject* Context);
	struct FText K2_GetValueText(class UObject* Context, const struct FUIStatCollector& Collector);
	float K2_GetComparisonValue(class UObject* Context, const struct FUIStatCollector& Collector);
	void EnumerateSectionNames(TArray<struct FName>* OutSectionNameList);
	float ComputeAttributeModification(class UGbxAttributeData* Attribute, bool bScale, const struct FUIStatCollector& Collector);
};


// Class GbxGameSystemCore.UIStatData_Numeric
// 0x01B8 (0x0220 - 0x0068)
class UUIStatData_Numeric : public UUIStatData
{
public:
	EUIStatValueStyle                                  ValueStyle;                                               // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EUIStatValueSignStyle                              SignStyle;                                                // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EUIStatValueRoundingMode                           RoundingMode;                                             // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x006B(0x0001) MISSED OFFSET
	unsigned char                                      bDisplayAsPercentage : 1;                                 // 0x006C(0x0001) (Edit)
	unsigned char                                      bDisplayPercentAsFloat : 1;                               // 0x006C(0x0001) (Edit)
	unsigned char                                      bDisplayAsInverse : 1;                                    // 0x006C(0x0001) (Edit)
	unsigned char                                      bDisplayPlusSign : 1;                                     // 0x006C(0x0001) (Edit)
	unsigned char                                      bDisplayAsOneMinus : 1;                                   // 0x006C(0x0001) (Edit)
	unsigned char                                      bCalculateWithReductionMath : 1;                          // 0x006C(0x0001) (Edit)
	unsigned char                                      bUseFormatText : 1;                                       // 0x006C(0x0001) (Edit)
	unsigned char                                      bEnableValueRemapping : 1;                                // 0x006C(0x0001) (Edit)
	unsigned char                                      bUseSupplementalStatFormatText : 1;                       // 0x006D(0x0001) (Edit)
	unsigned char                                      bUseMinValueCondition : 1;                                // 0x006D(0x0001) (Edit)
	unsigned char                                      bUseMaxValueCondition : 1;                                // 0x006D(0x0001) (Edit)
	unsigned char                                      bMinOrMaxValueCondition : 1;                              // 0x006D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	struct FAttributeInitializationData                MinValueCondition;                                        // 0x0070(0x0038) (Edit)
	struct FAttributeInitializationData                MaxValueCondition;                                        // 0x00A8(0x0038) (Edit)
	class UGbxCondition*                               Condition;                                                // 0x00E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           FloatPrecision;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FText                                       FormatText;                                               // 0x00F0(0x0028) (Edit)
	struct FUIStatValueRemappingData                   ValueRemapping;                                           // 0x0108(0x00E8) (Edit)
	class UUIStatData_Numeric*                         SupplementalStat;                                         // 0x01F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUIStatCombinationMethod                           SupplementalStatCombinationMethod;                        // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class UGbxCondition*                               SupplementalStatCondition;                                // 0x0200(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       SupplementalStatFormatText;                               // 0x0208(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatData_Numeric");
		return ptr;
	}

};


// Class GbxGameSystemCore.AchievementUtility
// 0x0000 (0x0028 - 0x0028)
class UAchievementUtility : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AchievementUtility");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_CoordinatedEffect
// 0x00D0 (0x0130 - 0x0060)
class UGbxAction_CoordinatedEffect : public UGbxAction
{
public:
	unsigned char                                      bInfiniteDuration : 1;                                    // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLoop : 1;                                                // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCensored : 1;                                            // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDestroyActorOnEnd : 1;                                   // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUnhideActorOnBegin : 1;                                  // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHideActorOnEnd : 1;                                      // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NextEffect;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PermanentGroupTag;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          GlowMaterial;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCoordinatedConditionalMaterialData> ConditionalOverrideMaterials;                             // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedScalarParameter>         MaterialScalarParameters;                                 // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedVectorParameter>         MaterialVectorParameters;                                 // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               InheritedMaterialParameters;                              // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EMaterialParameterCopyMethod                       InheritMaterialParametersMethod;                          // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bInheritAllMaterialParameters : 1;                        // 0x00D1(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOverwriteInstancedMaterialParameters : 1;                // 0x00D1(0x0001) (Deprecated)
	unsigned char                                      bApplyToTranslucentMaterials : 1;                         // 0x00D1(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPermanentMaterialOverride : 1;                           // 0x00D1(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAlwaysRestoreMaterialParametersAtEnd : 1;                // 0x00D1(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bApplyMaterialParametersToBothOverrideAndMaskGlow : 1;    // 0x00D1(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET
	TArray<struct FName>                               ExcludedMaterialStaticParameters;                         // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedParticleSystemData>      ParticleEffects;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedParticleSystemParameterData> ParticleParameters;                                       // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ParticleSpeedMultiplier;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECoordinatedOwnedParticleAction                    OwnedParticleAction;                                      // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAlwaysRestoreParticleParametersAtEnd : 1;                // 0x010D(0x0001) (Edit, DisableEditOnInstance)
	bool                                               bHideOwnedParticles;                                      // 0x010E(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
	TArray<struct FCoordinatedAudioData>               AudioEffects;                                             // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedLightParameterData>      LightParameters;                                          // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_CoordinatedEffect");
		return ptr;
	}


	void SetConstantMaterialVectorParamValue(const struct FName& ParamName, const struct FLinearColor& Color);
};


// Class GbxGameSystemCore.GbxAction_Gib
// 0x01A0 (0x0200 - 0x0060)
class UGbxAction_Gib : public UGbxAction
{
public:
	int                                                MaxGibCount;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FGibData>                            Gibs;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	float                                              GibMinScale;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GibMaxScale;                                              // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USpawnPatternData*                           GibSpawnPattern;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GibMassScale;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UClass*                                      GibActorClass;                                            // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FImpactResponseEffect                       GibEffect;                                                // 0x00A0(0x0140) (Edit)
	float                                              GibEffectScale;                                           // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	class UParticleSystem*                             GibParticle;                                              // 0x01E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UWwiseEvent*                                 GibSound;                                                 // 0x01F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_Gib");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_Loop
// 0x0300 (0x03B8 - 0x00B8)
class UGbxAction_Loop : public UGbxAction_SimpleAnim
{
public:
	struct FAnimMeshList                               AnimStart;                                                // 0x00B8(0x0078) (Edit)
	TArray<struct FWeightedAnim>                       AnimLoopList;                                             // 0x0130(0x0010) (Edit, ZeroConstructor)
	struct FAnimMeshList                               AnimStop;                                                 // 0x0140(0x0078) (Edit)
	float                                              BlendInTime;                                              // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartToLoopBlendTime;                                     // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoopToLoopBlendTime;                                      // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoopToStopBlendTime;                                      // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	struct FName                                       AnimSlot;                                                 // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLetLoopFinish;                                           // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FGbxParam                                   LoopCount;                                                // 0x01E0(0x0080) (Edit)
	bool                                               bUseLoopCount;                                            // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FGbxParam                                   LoopTime;                                                 // 0x0268(0x0080) (Edit)
	bool                                               bUseLoopTime;                                             // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	class UGbxCondition*                               LoopCondition;                                            // 0x02F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseLoopCondition;                                        // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FLoopAnimData                               AnimData3rd;                                              // 0x0300(0x0018) (Deprecated, IsPlainOldData)
	bool                                               bPlay3rd;                                                 // 0x0318(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	struct FLoopAnimData                               AnimData1st;                                              // 0x0320(0x0018) (Deprecated, IsPlainOldData)
	bool                                               bPlay1st;                                                 // 0x0338(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FAnimMeshList                               AnimLoop;                                                 // 0x0340(0x0078) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_Loop");
		return ptr;
	}


	void OnStop(class AActor* Actor);
	void OnLoop(class AActor* Actor);
	void K2_StopLooping();
};


// Class GbxGameSystemCore.GbxAction_PhysicalAnim
// 0x0028 (0x01D0 - 0x01A8)
class UGbxAction_PhysicalAnim : public UGbxAction_Anim
{
public:
	EPhysicalAnimationRootMotionControl                RootMotionControl;                                        // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxPhysicalActionMovementLockMode                 MovementLockMode;                                         // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxPhysicalActionDynamicBoneActivationMode        DynamicBoneActivationMode;                                // 0x01AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01AB(0x0001) MISSED OFFSET
	struct FBoneFatigueParams                          FatigueParams;                                            // 0x01AC(0x0014) (Edit)
	EGbxPhysicalActionBeginCondition                   BeginCondition;                                           // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PhysicalBeginConditionFlags;                              // 0x01C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PhysicalEndConditionFlags;                                // 0x01C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxPhysicalActionEndCondition                     PhysicalEndCondition;                                     // 0x01C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CustomForceMultiplier;                                    // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpwardForceMultiplier;                                    // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAppliedAtLocation;                                  // 0x01CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasValidHitForce;                                        // 0x01CD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01CE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_PhysicalAnim");
		return ptr;
	}


	EGbxPhysicalActionDynamicBodyState K2_GetDynamicBodyState(float AngularThreshold);
	void K2_FixupDynamicToKinematicIssues(float AngularThreshold);
};


// Class GbxGameSystemCore.GbxAction_PhysicalDeath
// 0x0020 (0x01F0 - 0x01D0)
class UGbxAction_PhysicalDeath : public UGbxAction_PhysicalAnim
{
public:
	float                                              PhysicalAnimationDelayTime;                               // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCapPhysicalAnimationDelayToAnimationDuration;            // 0x01D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	TArray<struct FName>                               PrematurePhysicalAnimationIgnoreBodyNames;                // 0x01D8(0x0010) (Edit, ZeroConstructor)
	bool                                               bAllowPrematurePhysicalAnimation;                         // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTearOffOnDeath;                                          // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01EA(0x0002) MISSED OFFSET
	float                                              MaxRagdollTime;                                           // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_PhysicalDeath");
		return ptr;
	}

};


// Class GbxGameSystemCore.AimAssistParameters
// 0x0000 (0x0030 - 0x0030)
class UAimAssistParameters : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AimAssistParameters");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxPlayerController
// 0x0150 (0x0980 - 0x0830)
class AGbxPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0830(0x0010) MISSED OFFSET
	class AGbxCharacter*                               GbxCharacter;                                             // 0x0840(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxCharacter*                               PrimaryCharacter;                                         // 0x0848(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class URecentDamageTrackingComponent*              RecentDamageTrackingComponent;                            // 0x0850(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProfile*                                 CurrentProfile;                                           // 0x0858(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      InputComponentClass;                                      // 0x0860(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PlayerInputClass;                                         // 0x0868(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AimAssistStrategyClass;                                   // 0x0870(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSoftClassPath                              CheatClassGbx;                                            // 0x0878(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0890(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPrimaryCharacterChanged;                                // 0x08C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPauseChanged;                                           // 0x08D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x28];                                      // 0x08E0(0x0028) MISSED OFFSET
	EGbxGlyphSetOption                                 CachedGlyphMode;                                          // 0x0908(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	class UTargetingComponent*                         TargetingComponent;                                       // 0x0910(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        TargetableComponent;                                      // 0x0918(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTeamComponent*                              TeamComponent;                                            // 0x0920(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxPerceptionComponent*                     PerceptionComponent;                                      // 0x0928(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFirstPersonComponent*                       FirstPersonComponent;                                     // 0x0930(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAimAssistStrategy*                          AimAssistStrategy;                                        // 0x0938(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWwiseListenerComponent*                     WwiseListener;                                            // 0x0940(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FActiveTrackedFeedback>              ActiveTrackedFeedbacks;                                   // 0x0948(0x0010) (ZeroConstructor, Transient)
	bool                                               bUsingGamepad;                                            // 0x0958(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0959(0x0007) MISSED OFFSET
	TArray<class UCinematicModeData*>                  CinematicModeStack;                                       // 0x0960(0x0010) (ZeroConstructor, Transient)
	class UCinematicModeData*                          CinematicMode;                                            // 0x0970(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UScreenParticleManagerComponent*             ScreenParticleManagerComponent;                           // 0x0978(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxPlayerController");
		return ptr;
	}


	void SetTeam(class UTeam* Team);
	void ServerRequestPawnSlotDetach(class APawn* Occupant);
	void ServerCanSplitscreenJoin(int ControllerId);
	void PushCinematicMode(class UCinematicModeData* InCinematicMode);
	void PopCinematicMode(class UCinematicModeData* InCinematicMode);
	void OnRep_PrimaryCharacter();
	void OnRep_CinematicMode();
	void OnPrimaryCharacterChanged__DelegateSignature(class AGbxCharacter* NewCharacter);
	void OnPausedChangedDelegate__DelegateSignature(bool bPaused);
	bool IsUsingGamepad();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	class AGbxCharacter* GetPrimaryCharacter();
	void GetPlayerViewportSize(int* SizeX, int* SizeY);
	void GetPlayerViewportOffset(int* OffsetX, int* OffsetY);
	class UGbxProfile* GetPlayerProfile();
	class UGbxPerceptionComponent* GetGbxPerceptionComponent();
	bool DeprojectViewportPositionToWorld(float ViewportX, float ViewportY, bool bUseForegroundProjection, struct FVector* WorldLocation, struct FVector* WorldDirection);
	void DebugCategory(const struct FName& CategoryName);
	void ClientStopFeedback(class UFeedbackData* Data);
	void ClientPlayWwiseEvent(class UWwiseEvent* Event);
	void ClientPlayFeedback(class UFeedbackData* Data, float Scale, bool bLoop, class UObject* SourceContext);
	void ClientPerformFeedbackAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, bool bLoop, class UObject* SourceContext, const struct FRangedDistanceOverrides& RangedOverrides);
	void ClientPerformFeedback(class UFeedbackData* FeedbackData, class UObject* SourceContext);
	void ClientNotifyActivateCheckpoint();
	void ClientCanSplitscreenJoin(int ControllerId, bool bCanJoin);
	void ClientApplyDamageDataPresentation(class UDamageData* DamageData, const struct FPlayerDamageDataPresentation& PlayerPresentation);
	void Client_StopGbxFeedback(class UGbxFeedbackData* Data, class UObject* SourceContext);
	void Client_PlayGbxFeedback(class UGbxFeedbackData* Data, bool bIs3D, bool bLoop, float Scale, class UObject* SourceContext, const struct FVector& SourceLocation, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
	void ClearCinematicMode();
	void ClearAndSetCinematicMode(class UCinematicModeData* InCinematicMode);
};


// Class GbxGameSystemCore.AimAssistStrategy
// 0x0000 (0x0028 - 0x0028)
class UAimAssistStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AimAssistStrategy");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAssetManager
// 0x0030 (0x0410 - 0x03E0)
class UGbxAssetManager : public UAssetManager
{
public:
	TArray<struct FStartupAssetTypeData>               StartupAssetTypes;                                        // 0x03E0(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               StartupAssetFiles;                                        // 0x03F0(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAssetManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.AssetMappingData
// 0x0230 (0x0260 - 0x0030)
class UAssetMappingData : public UGbxDataAsset
{
public:
	TMap<uint32_t, class FString>                      ChallengesMap;                                            // 0x0030(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<uint32_t, class FString>                      GameStatDataMap;                                          // 0x0080(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<uint32_t, class FString>                      CustomizationDataMap;                                     // 0x00D0(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<uint32_t, class FString>                      MissionsMap;                                              // 0x0120(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<uint32_t, class FString>                      ObjectiveSetsMap;                                         // 0x0170(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<uint32_t, class FString>                      InventoryCategoryMap;                                     // 0x01C0(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<uint32_t, class FString>                      UINamesMap;                                               // 0x0210(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AssetMappingData");
		return ptr;
	}

};


// Class GbxGameSystemCore.Challenge
// 0x00F0 (0x0118 - 0x0028)
class UChallenge : public UObject
{
public:
	class UChallengesComponent*                        RegisteredOwner;                                          // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              ParentChallenges;                                         // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FText                                       ChallengeName;                                            // 0x0040(0x0028) (Edit)
	struct FText                                       Description;                                              // 0x0058(0x0028) (Edit)
	struct FText                                       CompletedDescription;                                     // 0x0070(0x0028) (Edit)
	bool                                               bShared;                                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatable;                                              // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInUI;                                                // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowActivationUI;                                        // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowProgressUI;                                          // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowCompletionUI;                                        // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowAsUndiscoveredUntilProgressed;                       // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	struct FName                                       AssociatedMapName;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EChallengeType                                     ChallengeType;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<struct FStatChallengeTest>                  StatChallengeTests;                                       // 0x00A0(0x0010) (Edit, ZeroConstructor)
	bool                                               bCompleteIfGoalValueReached;                              // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetProgressWhenGoalValueReached;                       // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	TArray<struct FChallengeGoalValue>                 ProgressGoalInfo;                                         // 0x00B8(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        ProgressGoalValues;                                       // 0x00C8(0x0010) (ZeroConstructor, Deprecated)
	class UChallengeCategoryData*                      ChallengeCategoryData;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInitiallyActive;                                         // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFromCounts;                                          // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	class UClass*                                      PrerequisiteChallenge;                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AssociatedCompletionAchievementId;                        // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AssociatedProgressAchievementId;                          // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bProfileChallenge;                                        // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              SubChallenges;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               CompletedBySubChallenges;                                 // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateIfSubChallengesComplete;                          // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrementProgressViaSubChallenges;                       // 0x0112(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0113(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.Challenge");
		return ptr;
	}


	bool TestForCompleted(class AGbxPlayerController* PlayerToTest, class UObject* OtherObject, TArray<class FString> EnumTag);
	void SetChallengeProgress(int NewProgress);
	void PlayerExitChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent);
	void PlayerEnterChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent);
	void OnLevelActorRegistered(class UChallengeLevelActorComponent* RegisteredLevelActor);
	void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
	void OnChallengeActivated();
	bool IsChallengeComplete();
	bool IsChallengeActive();
	void IncrementChallengeProgressByValue(int Value);
	void IncrementChallengeProgress();
	void GetLevelActorComponents(TArray<class UChallengeLevelActorComponent*>* LevelActorList);
	int GetChallengeProgressGoalValue();
	int GetChallengeProgress();
	void GetChallengeCompleteInfo(int* NumCompleted, int* NumChallenges);
	bool CompletedConditional();
	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void CompleteChallenge();
	void ActivateChallenge();
};


// Class GbxGameSystemCore.ChallengeCategoryData
// 0x0020 (0x0050 - 0x0030)
class UChallengeCategoryData : public UGbxDataAsset
{
public:
	struct FText                                       CategoryName;                                             // 0x0030(0x0028) (Edit)
	float                                              ProgressWeight;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeCategoryData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengeList
// 0x0018 (0x0048 - 0x0030)
class UChallengeList : public UGbxDataAsset
{
public:
	class UDownloadableContentData*                    AssociatedDLC;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TSoftObjectPtr<class UClass>>               Challenges;                                               // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeList");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengeManager
// 0x00C0 (0x0518 - 0x0458)
class AChallengeManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0458(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeManager");
		return ptr;
	}


	void OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int Amount);
};


// Class GbxGameSystemCore.CustomChallengePersistentState
// 0x0000 (0x0028 - 0x0028)
class UCustomChallengePersistentState : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CustomChallengePersistentState");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengesComponent
// 0x0090 (0x0208 - 0x0178)
class UChallengesComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnChallengeRegistrationComplete;                          // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChallengeActivated;                                     // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChallengeUpdated;                                       // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChallengeCompleted;                                     // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChallengeChildCompleted;                                // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FChallengeInstanceData>              LocalChallengeDataCache;                                  // 0x01C8(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        ChallengeRewardsEarned;                                   // 0x01D8(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        ChallengeRewardsToOfferNext;                              // 0x01E8(0x0010) (ZeroConstructor, Transient)
	class UGameStatsComponent*                         GameStatsComponent;                                       // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengesComponent");
		return ptr;
	}


	void UnregisterInActivePlayerChallenges();
	void SetChallengeProgress(class UClass* ChalClass, int NewProgress);
	void SetChallengeActive(class UClass* ChalClass, bool bInIsActive);
	bool IsChallengeComplete(class UClass* ChalClass);
	bool IsChallengeActive(class UClass* ChalClass);
	void IncrementChallengeProgress(class UClass* ChalClass);
	int GetMaxChallengeTiers(class UClass* ChalClass);
	TArray<struct FChallengeInstanceData> GetLocalChallenges();
	int GetCompletedChallengeTiers(class UClass* ChalClass);
	int GetChallengeStatValue(class UClass* ChalClass, class UGameStatData* StatId);
	int GetChallengeStatGoalValue(class UClass* ChalClass, class UGameStatData* StatId);
	int GetChallengeProgressGoalValue(class UClass* ChalClass);
	int GetChallengeProgress(class UClass* ChalClass);
	void GetChallengeCompleteInfoForLevels(TArray<struct FName> LevelsForChallenges, class UChallengeCategoryData* Category, bool bIgnoreHidden, int* NumCompleted, int* NumActive);
	void GetChallengeCompleteInfo(class UClass* ChalClass, int* NumCompleted, int* NumChallenges);
	void CompleteChallengeIfConditionsMet(class UClass* ChalClass);
	void CompleteChallenge(class UClass* ChalClass, bool bForceActive);
	void ClientChallengeUpdateProgress(class UClass* ChalClass, int NewProgress);
	void ClientChallengeCompleted(class UClass* ChalClass, int NumTiersComplete, bool bForceActive);
	void ClientActivateChallenge(class UClass* ChalClass);
	bool AreGlobalChallengesRegistered();
	void ActivateChallenge(class UClass* ChalClass);
};


// Class GbxGameSystemCore.GbxCharacterMovementComponent
// 0x1DF0 (0x2680 - 0x0890)
class UGbxCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x748];                                     // 0x0890(0x0748) MISSED OFFSET
	class AGbxCharacter*                               GbxCharacterOwner;                                        // 0x0FD8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxCharacterAnimInstance*                   GbxAnimInstance;                                          // 0x0FE0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAnimInstance*                               AnimInstance;                                             // 0x0FE8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FallingFloorUpdateInterval;                               // 0x0FF0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FallingFloorTraceDistance;                                // 0x0FF4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0FF8(0x0098) MISSED OFFSET
	struct FCharacterMoveToState                       CurrentMoveToState;                                       // 0x1090(0x0030) (Transient)
	struct FCharacterRotateToState                     CurrentRotateToState;                                     // 0x10C0(0x0068) (Transient)
	unsigned char                                      bCanCrouchInAir : 1;                                      // 0x1128(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanClimbLadders : 1;                                     // 0x1128(0x0001) (Edit)
	unsigned char                                      bCenterOnLadder : 1;                                      // 0x1128(0x0001)
	unsigned char                                      bSlideAlongLadderCollision : 1;                           // 0x1128(0x0001)
	unsigned char                                      bBlockMomentumAdd : 1;                                    // 0x1128(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1129(0x0003) MISSED OFFSET
	struct FGbxAttributeFloat                          MaxGroundSpeedScale;                                      // 0x112C(0x000C) (Edit, BlueprintVisible, Net)
	float                                              LadderFriction;                                           // 0x1138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          MaxLadderAscendSpeed;                                     // 0x113C(0x000C) (Edit, BlueprintVisible, Net)
	struct FGbxAttributeFloat                          MaxLadderDescendSpeed;                                    // 0x1148(0x000C) (Edit, BlueprintVisible, Net)
	float                                              MaxLadderForwardSpeed;                                    // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLadderReverseSpeed;                                    // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderBrakingDeceleration;                                // 0x115C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderInterpSpeed;                                        // 0x1160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LadderJumpVelocity;                                       // 0x1164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnterBottomAnimation;                                     // 0x1168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExitBottomAnimation;                                      // 0x1170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnterTopAnimation;                                        // 0x1178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExitTopAnimation;                                         // 0x1180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULadderInteractData*                         LadderInteractData;                                       // 0x1188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnterLadder;                                            // 0x1190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExitLadderTop;                                          // 0x11A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExitLadderBottom;                                       // 0x11B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpFromLadder;                                         // 0x11C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMantleStarted;                                          // 0x11D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMantleFinished;                                         // 0x11E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UStanceComponent*                            StanceComponent;                                          // 0x11F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         ActionComponent;                                          // 0x11F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FCharacterScriptedMeshOffsetState           ScriptedMeshOffsetState;                                  // 0x1200(0x0140) (Transient)
	bool                                               bClientWasOnLadder;                                       // 0x1340(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1341(0x0007) MISSED OFFSET
	TArray<TScriptInterface<class ULadderInterface>>   OverlappingLadderVolumes;                                 // 0x1348(0x0010) (ZeroConstructor, Transient)
	TScriptInterface<class ULadderInterface>           CurrentLadderVolume;                                      // 0x1358(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class ULadderInterface>           JumpLadderVolume;                                         // 0x1368(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LadderJumpTime;                                           // 0x1378(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAlreadyCenteredOnLadder : 1;                             // 0x137C(0x0001) (Transient)
	unsigned char                                      bWantsToBeOnLadder : 1;                                   // 0x137C(0x0001) (Transient)
	unsigned char                                      UnknownData04[0x3];                                       // 0x137D(0x0003) MISSED OFFSET
	struct FLadderAnimState                            LadderAnimState;                                          // 0x1380(0x0028) (Transient)
	struct FReplicatedLadderState                      ReplicatedLadderState;                                    // 0x13A8(0x0002) (Net, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x13AA(0x0002) MISSED OFFSET
	struct FGbxAttributeFloat                          RotationRateYaw;                                          // 0x13AC(0x000C) (Net, Transient)
	struct FGbxAttributeFloat                          IdleRotationRateYaw;                                      // 0x13B8(0x000C) (Edit, Net)
	bool                                               bUseIdleRotationRateYaw;                                  // 0x13C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x97];                                      // 0x13C5(0x0097) MISSED OFFSET
	struct FGbxAttributeFloat                          MaxAllowedAimOffset;                                      // 0x145C(0x000C) (Edit, Net)
	float                                              MinTurnAimOffset;                                         // 0x1468(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBodyFacingThreshold;                                   // 0x146C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPredictedTurnDegrees;                                  // 0x1470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaxPredictedTurnDegrees;                              // 0x1474(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1475(0x0003) MISSED OFFSET
	float                                              MaxPredictedTurnTime;                                     // 0x1478(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaxPredictedTurnTime;                                 // 0x147C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysFaceActorsCurrentLocation;                         // 0x147D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x147E(0x0002) MISSED OFFSET
	struct FGbxAttributeFloat                          AimRotationRate;                                          // 0x1480(0x000C) (Edit, BlueprintVisible)
	float                                              LookAtAngleClamp;                                         // 0x148C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookRotationRate;                                         // 0x1490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FastLookRotationRate;                                     // 0x1494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFastLookRotationRate;                                 // 0x1498(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1499(0x0003) MISSED OFFSET
	struct FNumericRange                               FastLookRotationSpeed;                                    // 0x149C(0x0008) (Edit)
	float                                              HeadLookPercent;                                          // 0x14A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               HeadLookPercentDistance;                                  // 0x14A8(0x0008) (Edit)
	bool                                               bUseHeadLookPercentDistance;                              // 0x14B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x14B1(0x0003) MISSED OFFSET
	float                                              HeadLookPercentInterpSpeed;                               // 0x14B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtParentBoneForAngleClamp;                        // 0x14B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x14B9(0x0003) MISSED OFFSET
	float                                              LookAtBlinkAngle;                                         // 0x14BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtBlinkAngle;                                     // 0x14C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x14C1(0x0003) MISSED OFFSET
	struct FVector                                     LookAtHeadTargetOffset;                                   // 0x14C4(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseLookAtHeadTargetOffset;                               // 0x14D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x14D1(0x0003) MISSED OFFSET
	struct FVector                                     LookAtEyeTargetOffset;                                    // 0x14D4(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseLookAtEyeTargetOffset;                                // 0x14E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtTargetClearDelay;                               // 0x14E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x14E2(0x0002) MISSED OFFSET
	float                                              LookAtRate;                                               // 0x14E4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FootIkEnabledInterpolationSpeed;                          // 0x14E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeAdaptationOverrideInterpSpeed;                       // 0x14EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x280];                                     // 0x14F0(0x0280) MISSED OFFSET
	struct FControlledMoveState                        ControlledMoveState;                                      // 0x1770(0x0160) (Transient)
	struct FControlledMoveReplicationData              ControlledMoveReplicationData;                            // 0x18D0(0x0048) (Net, Transient)
	unsigned char                                      UnknownData16[0x30];                                      // 0x1918(0x0030) MISSED OFFSET
	class UMantleData*                                 MantleData;                                               // 0x1948(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMantleState                                MantleState;                                              // 0x1950(0x06E8) (Transient)
	struct FReplicatedMantleState                      ReplicatedMantleState;                                    // 0x2038(0x0008) (Net, Transient)
	unsigned char                                      UnknownData17[0x8];                                       // 0x2040(0x0008) MISSED OFFSET
	struct FGbxCharacterNavWalking                     GbxNavWalking;                                            // 0x2048(0x00B0) (Transient)
	class UNavComponent*                               NavComponent;                                             // 0x20F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              NavMeshProjectionDistance;                                // 0x2100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirFriction;                                              // 0x2104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionTraceDistance;                           // 0x2108(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x210C(0x0004) MISSED OFFSET
	struct FNavAnimState                               NavAnimState;                                             // 0x2110(0x0050) (Net, Transient)
	struct FNavAnimServerData                          NavServerData;                                            // 0x2160(0x00A0) (Transient)
	struct FNavAnimClientData                          NavClientData;                                            // 0x2200(0x001C) (Net, Transient)
	bool                                               bPretendToBeWalking;                                      // 0x221C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x143];                                     // 0x221D(0x0143) MISSED OFFSET
	struct FRotationDeltaMatchingInfo                  RotationDeltaMatchingInfo;                                // 0x2360(0x00C0) (Transient)
	unsigned char                                      UnknownData20[0x8];                                       // 0x2420(0x0008) MISSED OFFSET
	struct FGbxInterpData                              InterpData;                                               // 0x2428(0x0140) (Transient)
	struct FIdleVelocityData                           IdleVelocity;                                             // 0x2568(0x0018) (Transient)
	struct FRootMotionStateData                        RootMotionState;                                          // 0x2580(0x0058) (Transient)
	unsigned char                                      UnknownData21[0xA8];                                      // 0x25D8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCharacterMovementComponent");
		return ptr;
	}


	void StopRotateTo();
	void StopMoveTo(bool bForce, bool bReplicateStop);
	void StopControlledMove(class UClass* ControlledMove, bool bZeroVelocity, bool bInterrupted);
	void StartRotateTo(const struct FCharacterRotateToCommand& RotateToCommand);
	void StartMoveTo(const struct FCharacterMoveToCommand& MoveToCommand);
	bool StartControlledMove(class UClass* ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation);
	void SetPendingRawInputVector(const struct FVector& NewInputVector);
	void SetNoneWithRootMotionMode(bool bAnimationWalking, const struct FName& Reason);
	void SetFacingTarget(const struct FFacingInfo& FacingTarget, EFacingChannel Channel);
	void SetAnimationBasedTurning(bool bEnable);
	void ServerStopMoveTo();
	void ServerStartMoveTo(const struct FCharacterMoveToCommand& MoveToCommand);
	void ServerAttemptMantle(const struct FMantleAttemptInfo& ClientData, float Timestamp);
	void OnStanceChanged(const struct FStanceChangedEventArgs& Args);
	void OnRep_ControlledMove();
	void OnNotifyTurnExit();
	void OnNotifyTurnEnter();
	void OnCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	struct FFacingInfo STATIC_MakeFacingInfoRotation(const struct FRotator& Rotation);
	struct FFacingInfo STATIC_MakeFacingInfoNone();
	struct FFacingInfo STATIC_MakeFacingInfoLocation(const struct FVector& Location);
	struct FFacingInfo STATIC_MakeFacingInfoDirection(const struct FVector& Direction);
	struct FFacingInfo STATIC_MakeFacingInfoComponent(class USceneComponent* Component);
	struct FFacingInfo STATIC_MakeFacingInfoActorEyes(class AActor* Actor);
	struct FFacingInfo STATIC_MakeFacingInfoActor(class AActor* Actor);
	void LeaveNoneWithRootMotionMode(bool bApplyDefault);
	bool IsPerformingSpecificControlledMove(class UClass* ControlledMove);
	bool IsPerformingControlledMove();
	bool IsMovingOnLadder();
	bool IsMantlingAllowed();
	bool IsMantling();
	bool IsInNoneWithRootMotionMode();
	bool IsHandIkEnabled();
	bool IsFootIkTracingEnabled();
	bool IsFootIkEnabled();
	bool IsFacingTargetBP(float ThresholdDegrees, EFacingChannel Channel);
	float GetMaxAllowedAimOffset();
	class UMantleData* GetMantleData();
	struct FRotator GetDesiredFacingRotation(EFacingChannel Channel);
	struct FVector GetDesiredFacingLocation(EFacingChannel Channel);
	struct FRotator GetCurrentFacingRotation(EFacingChannel Channel);
	struct FVector GetCurrentFacingOrigin(EFacingChannel Channel);
	struct FVector GetCurrentFacingLocation(EFacingChannel Channel);
	void GbxSetAnimInstanceClass(class USkeletalMeshComponent* SkelMeshComponent, class UClass* NewClass);
	void GbxCharacterMovementEvent__DelegateSignature();
	void ControlledServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags, uint32_t CMDir);
	void ControlledServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, uint32_t CMDir0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode, uint32_t CMDir, uint16_t ClientBodyYaw);
	void ControlledServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode, uint32_t CMDir, uint16_t ClientBodyYaw);
	void ClientAdjustControlledMovePosition(float Timestamp, const struct FControlledMoveNetCorrection& ServerCMData, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	bool CanStartPassiveMantle();
	bool CanStartMantle();
};


// Class GbxGameSystemCore.GbxCheatManager
// 0x0010 (0x0088 - 0x0078)
class UGbxCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00 : 2;                                        // 0x0078(0x0001)
	unsigned char                                      bHLQNoClipActive : 1;                                     // 0x0078(0x0001) (Net, Transient)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0079(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCheatManager");
		return ptr;
	}


	void TestGameStage(int GameStageOverride);
	void StartPlayerInit();
	void ShowProjectileImpacts(float Size, float LifeTime);
	void SetDebugActorByName(const class FString& ActorName);
	void STATIC_SetDebugActor(class AActor* Actor, int ControllerIndex);
	void Server_TogglePlayersOnly();
	void Server_DamageTarget(float DamageAmount);
	void PlayFeedbackRangedFromThere(const class FString& FeedbackData);
	void PlayFeedbackDirectional(const class FString& FeedbackData, float DirectionAngle);
	void PlayFeedback(const class FString& FeedbackData, float Scale);
	void LogQatalystInfo();
	void DebugNextAI();
	void DamageAreaDebug();
	void ClearPlayerInit();
};


// Class GbxGameSystemCore.CinematicModeData
// 0x0010 (0x0040 - 0x0030)
class UCinematicModeData : public UGbxDataAsset
{
public:
	bool                                               bCinematicMode;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHidePlayer;                                              // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHidePlayerOwnedVehicles;                                 // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideNPC;                                                 // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsHUD;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsMovement;                                         // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsPawnRotation;                                     // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsTurning;                                          // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCinematicSplitScreen;                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableGodMode;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableNoTarget;                                          // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECinematicAudioMode                                AudioMode;                                                // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CinematicModeData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ControlledMove
// 0x0878 (0x08A0 - 0x0028)
class UControlledMove : public UObject
{
public:
	unsigned char                                      bIsSpeedScaleNormalized : 1;                              // 0x0028(0x0001) (Edit)
	unsigned char                                      bEaseInSpeedConstraints : 1;                              // 0x0028(0x0001) (Edit)
	unsigned char                                      bRestoreCharacterMovementMode : 1;                        // 0x0028(0x0001) (Edit)
	unsigned char                                      bZeroVelocityAtEnd : 1;                                   // 0x0028(0x0001) (Edit)
	unsigned char                                      bUpdateCharacterRotationYaw : 1;                          // 0x0028(0x0001) (Edit)
	unsigned char                                      bUpdateCharacterRotationPitch : 1;                        // 0x0028(0x0001) (Edit)
	unsigned char                                      bApplyLaunchVelocityOnStart : 1;                          // 0x0028(0x0001) (Edit)
	unsigned char                                      bSpeedAffectedByMaxGroundSpeedScale : 1;                  // 0x0028(0x0001) (Edit)
	unsigned char                                      bBlockMomentumAdd : 1;                                    // 0x0029(0x0001) (Edit)
	unsigned char                                      bIsMotionNormalized : 1;                                  // 0x0029(0x0001) (Edit)
	unsigned char                                      bIsInheritVelocityScaleNormalized : 1;                    // 0x0029(0x0001) (Edit)
	unsigned char                                      bApplyMoveWhenFalling : 1;                                // 0x0029(0x0001) (Edit)
	unsigned char                                      bStopOnLanding : 1;                                       // 0x0029(0x0001) (Edit)
	unsigned char                                      bOverrideAirControl : 1;                                  // 0x0029(0x0001) (Edit)
	unsigned char                                      bUseSlopeCurve : 1;                                       // 0x0029(0x0001) (Edit)
	unsigned char                                      bStopWhenTargetReached : 1;                               // 0x0029(0x0001) (Edit)
	unsigned char                                      bEnableMoveControls : 1;                                  // 0x002A(0x0001) (Edit)
	unsigned char                                      bLimitedLookControl : 1;                                  // 0x002A(0x0001) (Edit)
	unsigned char                                      bInputVectorRelativeToMoveDirection : 1;                  // 0x002A(0x0001) (Edit)
	unsigned char                                      bUseMovingLaunchDirection : 1;                            // 0x002A(0x0001) (Edit)
	unsigned char                                      bDirectionRelativeToTarget : 1;                           // 0x002A(0x0001) (Edit)
	unsigned char                                      bOffsetLocationByCollisionRadius : 1;                     // 0x002A(0x0001) (Edit)
	unsigned char                                      bOffsetLocationByTargetCollisionRadius : 1;               // 0x002A(0x0001) (Edit)
	unsigned char                                      bLeap : 1;                                                // 0x002A(0x0001) (Edit)
	unsigned char                                      bAlwaysCollideWithTarget : 1;                             // 0x002B(0x0001) (Edit)
	unsigned char                                      bStopOnHitWall : 1;                                       // 0x002B(0x0001) (Edit)
	unsigned char                                      bStopOnHitTargetable : 1;                                 // 0x002B(0x0001) (Edit)
	unsigned char                                      bTeleport : 1;                                            // 0x002B(0x0001) (Edit)
	unsigned char                                      bRestrictTeleportToGround : 1;                            // 0x002B(0x0001) (Edit)
	unsigned char                                      bDisableLookInput : 1;                                    // 0x002B(0x0001) (Edit)
	unsigned char                                      bDisableMoveInput : 1;                                    // 0x002B(0x0001) (Edit)
	unsigned char                                      bEnableTargetControls : 1;                                // 0x002B(0x0001) (Edit)
	unsigned char                                      bTargetControlGrounded : 1;                               // 0x002C(0x0001) (Edit)
	unsigned char                                      bTrackTarget : 1;                                         // 0x002C(0x0001) (Edit)
	unsigned char                                      bStopAI : 1;                                              // 0x002C(0x0001) (Edit)
	unsigned char                                      bAbortAI : 1;                                             // 0x002C(0x0001) (Edit)
	unsigned char                                      bGodMode : 1;                                             // 0x002C(0x0001) (Edit)
	unsigned char                                      bDemigodMode : 1;                                         // 0x002C(0x0001) (Edit)
	unsigned char                                      bEndCrouch : 1;                                           // 0x002C(0x0001) (Edit)
	unsigned char                                      bForceCrouch : 1;                                         // 0x002C(0x0001) (Edit)
	unsigned char                                      bUpdateCameraRotationYaw : 1;                             // 0x002D(0x0001) (Edit)
	unsigned char                                      bUpdateCameraRotationPitch : 1;                           // 0x002D(0x0001) (Edit)
	unsigned char                                      bCancelActionSkillsIfPlayerNotInstigator : 1;             // 0x002D(0x0001) (Edit)
	unsigned char                                      bIsNetworkAutonomous : 1;                                 // 0x002D(0x0001) (Edit)
	unsigned char                                      bPlayStartStopActionsLocally : 1;                         // 0x002D(0x0001) (Edit)
	unsigned char                                      bAllowClientCollisionNotifications : 1;                   // 0x002D(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FAttributeInitializationData                Duration;                                                 // 0x0030(0x0038) (Edit)
	ECMMovementType                                    MovementType;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                Speed;                                                    // 0x0070(0x0038) (Edit)
	struct FRuntimeFloatCurve                          SpeedScaleCurve;                                          // 0x00A8(0x0078) (Edit)
	float                                              CharacterRotationYawOffset;                               // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterRotationPitchOffset;                             // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCMMotionData                               MotionCurves;                                             // 0x0128(0x0168) (Edit)
	int                                                InheritVelocityType;                                      // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          InheritVelocityScaleCurve;                                // 0x0298(0x0078) (Edit)
	float                                              AdjustDurationBySlopeModifier;                            // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStepHeight;                                            // 0x0314(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          SpeedSlopeScaleCurve;                                     // 0x0318(0x0078) (Edit)
	ECMLedgeBehavior                                   LedgeBehavior;                                            // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	float                                              LedgeHeight;                                              // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                AirControl;                                               // 0x0398(0x0038) (Edit)
	struct FAttributeInitializationData                GravityModifier;                                          // 0x03D0(0x0038) (Edit)
	ECMGravityModificationType                         GravityModificationType;                                  // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          GravityModifierEffectOverTime;                            // 0x0410(0x0078) (Edit)
	struct FAttributeInitializationData                TerminalVelocityModifier;                                 // 0x0488(0x0038) (Edit)
	ECMTerminalVelocityModificationType                TerminalVelocityModificationType;                         // 0x04C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              TargetReached2DThreshold;                                 // 0x04C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetReachedUpThreshold;                                 // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetReachedDownThreshold;                               // 0x04CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECMMoveFBControlType                               MoveFBControlType;                                        // 0x04D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECMMoveLRControlType                               MoveLRControlType;                                        // 0x04D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x04D2(0x0006) MISSED OFFSET
	struct FAttributeInitializationData                MoveForwardRate;                                          // 0x04D8(0x0038) (Edit)
	struct FAttributeInitializationData                MoveBackwardRate;                                         // 0x0510(0x0038) (Edit)
	struct FAttributeInitializationData                MoveLRRate;                                               // 0x0548(0x0038) (Edit)
	struct FAttributeInitializationData                LookTurnScale;                                            // 0x0580(0x0038) (Edit)
	struct FAttributeInitializationData                LookUpScale;                                              // 0x05B8(0x0038) (Edit)
	struct FAttributeInitializationData                LookDownScale;                                            // 0x05F0(0x0038) (Edit)
	struct FAttributeInitializationData                DropRate;                                                 // 0x0628(0x0038) (Edit)
	struct FAttributeInitializationData                MaxDiveAngle;                                             // 0x0660(0x0038) (Edit)
	struct FAttributeInitializationData                MaxClimbAngle;                                            // 0x0698(0x0038) (Edit)
	struct FRelativeDirectionData                      LaunchDirection;                                          // 0x06D0(0x0050) (Edit)
	struct FRelativeDirectionData                      MovingLaunchDirection;                                    // 0x0720(0x0050) (Edit)
	struct FAttributeInitializationData                LaunchAngle;                                              // 0x0770(0x0038) (Edit)
	float                                              LocationOffset;                                           // 0x07A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeapApexAngle;                                            // 0x07AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeapStartLandingOffsetTime;                               // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	class UClass*                                      StartAction;                                              // 0x07B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StopAction;                                               // 0x07C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeapApexAction;                                           // 0x07C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeapLandingAction;                                        // 0x07D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HitWallAngle;                                             // 0x07D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportOffset;                                           // 0x07DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECMTeleportPreferenceType                          TeleportLocationPreference;                               // 0x07E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                LimitedTargetControlDistance;                             // 0x07E8(0x0038) (Edit)
	struct FAttributeInitializationData                TargetControlVelocity;                                    // 0x0820(0x0038) (Edit)
	struct FAttributeInitializationData                TargetControlDelay;                                       // 0x0858(0x0038) (Edit)
	float                                              MaxTrackingCorrectionAngle;                               // 0x0890(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackingVelocity;                                         // 0x0894(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               ControlledCharacter;                                      // 0x0898(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ControlledMove");
		return ptr;
	}


	void OnTeleported(float MoveDuration, const struct FVector& PreTeleportLocation);
	void OnTargetLocationChanged(const struct FVector& NewTargetLocation);
	void OnStop(bool bInterrupted);
	void OnStart(float MoveDuration, class AActor* TargetActor);
	void OnServerStop(bool bInterrupted);
	void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
	void OnHitWorld(class AActor* HitActor, const struct FVector& HitNormal);
	void OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal);
};


// Class GbxGameSystemCore.GbxCustomizationComponent
// 0x0228 (0x03A0 - 0x0178)
class UGbxCustomizationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	TArray<struct FCustomizationColorEntry>            ColorCustomizationParameters;                             // 0x0180(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCustomizationLinkedParameterEntry>  SharedLinkedParameters;                                   // 0x0190(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCustomizationLinkedParameterEntry>  LinkedParameters;                                         // 0x01A0(0x0010) (Edit, ZeroConstructor)
	EGbxCustomizationComponentInitSourceType           CustomizationSourceInitType;                              // 0x01B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	struct FCustomizationTextureInheritanceSettings    TextureInheritanceSettings;                               // 0x01B8(0x0038) (Edit)
	struct FGbxCustomizationContainer                  CustomizationList;                                        // 0x01F0(0x00D8) (Net)
	TArray<struct FCustomizationColorApplication>      CustomColorSelections;                                    // 0x02C8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x02D8(0x0048) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCustomizationApplied;                                   // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCustomizationRemoved;                                   // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGbxCustomizationComponent*                  LinkedCustomizationSource;                                // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<class UMeshComponent*, struct FMaterialArray> CustomMaterials;                                          // 0x0348(0x0050) (ZeroConstructor, Transient)
	bool                                               bUseCustomMaterials;                                      // 0x0398(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCustomizationComponent");
		return ptr;
	}


	void ServerApplyCustomizationData(class UGbxCustomizationData* CustomizationToApply, int OptionalCustomizationId);
	void ServerApplyCustomColor(int CustomColorIndex, const struct FVector& InAppliedColor, const struct FVector& InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor);
	bool RemoveCustomization(class UGbxCustomizationData* Customization);
	void OnRep_CustomColorSelections();
	void LinkToCustomization(class UGbxCustomizationComponent* SourceComponent);
	void LinkedCustomizationRemoved(class UGbxCustomizationData* Customization);
	void LinkedCustomizationApplied(class UGbxCustomizationData* Customization);
	bool GetDefaultCustomSplitColor(int SelectionIndex, struct FLinearColor* DefaultSplitColor);
	bool GetDefaultCustomColor(int SelectionIndex, struct FLinearColor* DefaultColor);
	void CopyFromCustomization(class UGbxCustomizationComponent* SourceComponent);
};


// Class GbxGameSystemCore.GbxCustomizationManager
// 0x0018 (0x0470 - 0x0458)
class AGbxCustomizationManager : public AActor
{
public:
	TArray<struct FCustomizationStreamingEntry>        CustomizationStreamingEntries;                            // 0x0458(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCustomizationManager");
		return ptr;
	}


	void OnCustomizationAssetLoaded();
};


// Class GbxGameSystemCore.DamageBaseComponent
// 0x0050 (0x01C8 - 0x0178)
class UDamageBaseComponent : public UActorComponent
{
public:
	class UTeamComponent*                              CachedTeamComponent;                                      // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        CachedTargetableComponent;                                // 0x0180(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FRegisteredConditionalDamageValueModifier> ConditionalValueModifiers;                                // 0x0188(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRegisteredConditionalDamageCriticalModifier> ConditionalCritModifiers;                                 // 0x0198(0x0010) (ZeroConstructor, Transient)
	TArray<class UConditionalDamageTypeModifier*>      ConditionalTypeModifiers;                                 // 0x01A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UConditionalDamageHitRegionModifier*> ConditionalHitRegionModifiers;                            // 0x01B8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageBaseComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageCauserComponent
// 0x0128 (0x02F0 - 0x01C8)
class UDamageCauserComponent : public UDamageBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01C8(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCausedAnyDamage;                                        // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCausedDeath;                                            // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0208(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCausedHealing;                                          // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitFriendly;                                            // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EDamageCausedModificationStrategy                  DefaultModificationContextStrategy;                       // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0240(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FAttitudeDamageRules                        AttitudeDamageRules;                                      // 0x0244(0x0004) (Edit)
	bool                                               bCanHurtSelf;                                             // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	struct FGbxAttributeFloat                          StatusEffectChanceModifierScalar;                         // 0x024C(0x000C) (Edit)
	struct FGbxAttributeFloat                          StatusEffectDamageModifierScalar;                         // 0x0258(0x000C) (Edit)
	struct FGbxAttributeFloat                          StatusEffectDurationModifierScalar;                       // 0x0264(0x000C) (Edit)
	TArray<struct FStatusEffectModifiers>              StatusEffectModifiers;                                    // 0x0270(0x0010) (Edit, ZeroConstructor)
	struct FGbxAttributeFloat                          DamageDealtMultiplier;                                    // 0x0280(0x000C) (Edit)
	struct FGbxAttributeFloat                          RadiusDamage_RadiusMultiplier;                            // 0x028C(0x000C) (Edit)
	struct FGbxAttributeFloat                          RadiusDamage_DamageMultiplier;                            // 0x0298(0x000C) (Edit)
	struct FGbxAttributeInteger                        ShouldIgnoreEnemyElementalResistance;                     // 0x02A4(0x000C) (Transient)
	bool                                               bApplyInstigatorSkillDamageModifier;                      // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	struct FGbxAttributeFloat                          DefaultCriticalHitMultiplier;                             // 0x02B4(0x000C) (Edit)
	TArray<class UConditionalDamageModifier*>          DefaultConditionalDamageModifiers;                        // 0x02C0(0x0010) (Edit, ZeroConstructor)
	float                                              EnemyReflectionChance;                                    // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FReflectedDamageParams                      EnemyReflectionParams;                                    // 0x02D8(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageCauserComponent");
		return ptr;
	}


	void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
};


// Class GbxGameSystemCore.DamageComponent
// 0x06B0 (0x0878 - 0x01C8)
class UDamageComponent : public UDamageBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01C8(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTakeAnyDamage;                                          // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerMeleeHit;                                         // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTakeAnyHealing;                                         // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthDepleted;                                         // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0240(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHitByFriendly;                                          // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x130];                                     // 0x0290(0x0130) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHitReaction;                                            // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FHitReactionState                           HitReactions;                                             // 0x03D0(0x0290) (Edit)
	unsigned char                                      bShowDamageNumbers : 1;                                   // 0x0660(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bShowImmuneFeedbackInGodMode : 1;                         // 0x0660(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlwaysBlockWeapons : 1;                                  // 0x0660(0x0001) (Edit)
	unsigned char                                      bIgnoreDamageAreaVisibilityChecks : 1;                    // 0x0660(0x0001) (Edit)
	unsigned char                                      bDieWhenHealthDepleted : 1;                               // 0x0660(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	class UDeathData*                                  DeathData;                                                // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageComponentHealthMode                         HealthMode;                                               // 0x0670(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0670(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData06[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	TArray<struct FHealthType>                         HealthInformation;                                        // 0x0678(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance)
	struct FSimpleHealthInfo                           SimpleHealthInformation;                                  // 0x0688(0x0058) (Edit, Net, DisableEditOnInstance)
	struct FGbxAttributeFloat                          DamageTakenMultiplier;                                    // 0x06E0(0x000C) (Edit, BlueprintVisible)
	struct FGbxAttributeFloat                          RadiusDamageTakenMultiplier;                              // 0x06EC(0x000C) (Edit, BlueprintVisible)
	struct FGbxAttributeFloat                          StatusEffectChanceModifierScalar;                         // 0x06F8(0x000C) (Edit, BlueprintVisible)
	struct FGbxAttributeFloat                          StatusEffectDamageModifierScalar;                         // 0x0704(0x000C) (Edit, BlueprintVisible)
	struct FGbxAttributeFloat                          StatusEffectDurationModifierScalar;                       // 0x0710(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	TArray<struct FStatusEffectModifiers>              StatusEffectModifiers;                                    // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinimumDamageLaunchVelocity;                              // 0x0730(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseBoundForCylinderTest : 1;                             // 0x0734(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0735(0x0003) MISSED OFFSET
	float                                              LaunchVerticalDampening;                                  // 0x0738(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSelfInflictedLaunchVelocity;                           // 0x073C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 SplatterEffect;                                           // 0x0740(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseProtectionTimer;                                      // 0x0748(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	struct FSyncedHitReactionData                      DeathHitReaction;                                         // 0x0750(0x0040) (Net, Transient)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0790(0x0004) MISSED OFFSET
	struct FDamageGoreModifiers                        DeathGoreModifiers;                                       // 0x0794(0x0008) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class APlayerController*                           LastHitByPlayer;                                          // 0x07A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AvertDeathChance;                                         // 0x07A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntrinsicArmor;                                           // 0x07AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          SelfReflectionChance;                                     // 0x07B0(0x000C) (Edit)
	struct FGbxAttributeFloat                          SelfReflectionDamageTakenScale;                           // 0x07BC(0x000C) (Edit)
	struct FGbxAttributeFloat                          SelfReflectionDamageScale;                                // 0x07C8(0x000C) (Edit)
	struct FGbxAttributeInteger                        SelfReflectionTowardsAttacker;                            // 0x07D4(0x000C) (Edit)
	class UClass*                                      SelfReflectionDamageType;                                 // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bPassDamageToParent : 1;                                  // 0x07E8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDamageOnlyAppliesToParent : 1;                           // 0x07E8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanDamageCorpse : 1;                                     // 0x07E8(0x0001) (Edit)
	unsigned char                                      UnknownData12[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	TArray<class UConditionalDamageModifier*>          DefaultConditionalDamageModifiers;                        // 0x07F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDamageReactionEvent_DamageComponent> DamageEvents;                                             // 0x0800(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UHitRegionComponent*                         CachedHitRegionComponent;                                 // 0x0810(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            ParentDamageComponent;                                    // 0x0818(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AController*                                 LastHitBy;                                                // 0x0820(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x0828(0x0018) MISSED OFFSET
	unsigned char                                      bGodMode : 1;                                             // 0x0840(0x0001)
	unsigned char                                      bDemigodMode : 1;                                         // 0x0840(0x0001)
	unsigned char                                      UnknownData14 : 1;                                        // 0x0840(0x0001)
	unsigned char                                      bCurrentlyDead : 1;                                       // 0x0840(0x0001) (Net, Transient)
	unsigned char                                      UnknownData15[0x27];                                      // 0x0841(0x0027) MISSED OFFSET
	class UPhysicalMaterial*                           ImpactPhysicalMaterialOverride;                           // 0x0868(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSuppressOnDeathCall;                                     // 0x0870(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0871(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageComponent");
		return ptr;
	}


	void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void SetSelfReflectedDamageType(class UClass* DamageType);
	void SetGodMode(bool bInGodMode);
	void SetDemiGodMode(bool bInDemiGodMode);
	void SetCurrentShield(float NewCurrentShield);
	void SetCurrentHealth(float NewCurrentHealth);
	void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void ReceiveHealthDepleted(class UDamageCauserComponent* DamageCauser);
	void ReceiveAnyHealing(float Healing, class AActor* HealInstigator);
	void ReceiveAnyDamage(float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnRep_HealthInformation();
	void OnRep_DeathHitReaction();
	void OnRep_bCurrentlyDead();
	void OnOwnerExperienceLevelChanged(int OldExperienceLevel, int NewExperienceLevel);
	void OnHealthResourceNowNotDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void OnHealthResourceNowDepleted(const struct FGameResourcePoolReference& ResourcePool);
	bool IsInGodMode();
	bool IsInDemiGodMode();
	bool IsDamageOverkill(float DamageAmount, float OverkillThreshold);
	void GetValidDamageEventFunctionNames(TArray<struct FName>* Names);
	float GetTotalMaxHealth();
	float GetMaxShield();
	float GetMaxHealth();
	float GetCurrentShield();
	float GetCurrentHealthPercent();
	float GetCurrentHealth();
	void BroadcastPlayImpactSplatterEffect(class UImpactData* ImpactData, const struct FVector_NetQuantize100& HitLocation, const struct FVector_NetQuantizeNormal& HitDirection, float DamageSeverity);
};


// Class GbxGameSystemCore.DamageFilter
// 0x0070 (0x0098 - 0x0028)
class UDamageFilter : public UObject
{
public:
	bool                                               bExactDamageSourceClass;                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UClass*                                      DamageSource;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExactDamageTypeClass;                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               ConditionSelf;                                            // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               ConditionAttacker;                                        // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bOnlyAoEDamage : 1;                                       // 0x0058(0x0001) (Edit)
	unsigned char                                      bMustNotBeSelfDamage : 1;                                 // 0x0058(0x0001) (Edit)
	unsigned char                                      bUseRandomChance : 1;                                     // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                RandomChance;                                             // 0x0060(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageFilter");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageGlobalsData
// 0x0218 (0x0248 - 0x0030)
class UDamageGlobalsData : public UGbxDataAsset
{
public:
	struct FProtectionTimerSettings                    ProtectionTimerSettings;                                  // 0x0030(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                DefaultInstigatorSelfDamageScale;                         // 0x0040(0x0038) (Edit)
	class UClass*                                      DefaultHealingDamageType;                                 // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 DefaultHealingImpact;                                     // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                GlobalAIDamageScale;                                      // 0x0088(0x0038) (Edit)
	TArray<struct FLevelBasedDamageScale>              PlayerDamageScaleByLevelDifference;                       // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLevelBasedDamageScale>              AIDamageScaleByLevelDifference;                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeFloatCurve                          SplatterProbabilityCurve;                                 // 0x00E0(0x0078) (Edit)
	struct FRuntimeFloatCurve                          SplatterTraceDistanceCurve;                               // 0x0158(0x0078) (Edit)
	float                                              SplatterDirectionSpread;                                  // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GibLifeSpan;                                              // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GibCollisionProfileName;                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GibCollisionProfileNameAttached;                          // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               GibMaterialParameterResetList;                            // 0x01E8(0x0010) (Edit, ZeroConstructor)
	TMap<class FString, struct FDamageLocalizationSettings> LanguageToTextureMap;                                     // 0x01F8(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageGlobalsData");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageModifierComponent
// 0x0040 (0x01B8 - 0x0178)
class UDamageModifierComponent : public UActorComponent
{
public:
	TArray<class UConditionalDamageValueModifier*>     ConditionalValueModifiers;                                // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<class UConditionalDamageCriticalModifier*>  ConditionalCritModifiers;                                 // 0x0188(0x0010) (ZeroConstructor, Transient)
	TArray<class UConditionalDamageTypeModifier*>      ConditionalTypeModifiers;                                 // 0x0198(0x0010) (ZeroConstructor, Transient)
	TArray<class UConditionalDamageHitRegionModifier*> ConditionalHitRegionModifiers;                            // 0x01A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageModifierComponent");
		return ptr;
	}


	void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
};


// Class GbxGameSystemCore.DamageOverTimeManager
// 0x0020 (0x0048 - 0x0028)
class UDamageOverTimeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FDamageOverTimeInstance>             DamageInstances;                                          // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageOverTimeManager");
		return ptr;
	}


	void OnParticleSystemStopped(class UParticleSystemComponent* ParticleSystem);
};


// Class GbxGameSystemCore.DamageSource
// 0x0060 (0x0088 - 0x0028)
class UDamageSource : public UObject
{
public:
	struct FDamageModifierAttributeCollection          ModifierAttributes;                                       // 0x0028(0x0010) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FAttributeInitializationData                AIInstigatedDamageScale;                                  // 0x0038(0x0038) (Edit, BlueprintReadOnly)
	TArray<struct FDamageSourceHealthTypeModifier>     HealthTypeModifiers;                                      // 0x0070(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCanCauseCriticals;                                       // 0x0080(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCollectForHitReactions;                                  // 0x0081(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCooldown;                                          // 0x0082(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0083(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageSource");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxDamageType
// 0x00E8 (0x0128 - 0x0040)
class UGbxDamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	struct FText                                       DamageTypeDisplayName;                                    // 0x0048(0x0028) (Edit, BlueprintReadOnly)
	struct FText                                       DamageEffectVerb;                                         // 0x0060(0x0028) (Edit, BlueprintReadOnly)
	struct FText                                       DamageTypeBaseDescription;                                // 0x0078(0x0028) (Edit, BlueprintReadOnly)
	struct FLinearColor                                DamageColor;                                              // 0x0090(0x0010) (Edit, BlueprintReadOnly, IsPlainOldData)
	class FString                                      DamageIconFrameName;                                      // 0x00A0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsHealingType;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDoT;                                                   // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              InnerDamageRadiusPercent;                                 // 0x00B4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OuterDamageRadiusPercent;                                 // 0x00B8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinRadiusDamageScalar;                                    // 0x00BC(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x00C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDamageModifierAttributeCollection          ModifierAttributes;                                       // 0x00E0(0x0010) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FDataTableRowHandle                         OnlyApplyToThisHealthType;                                // 0x00F0(0x0010) (Edit, BlueprintReadOnly)
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0100(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FDamageSurfaceModifier>              SurfaceDamageModifiers;                                   // 0x0108(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<class UUIStatData*>                         UIStats;                                                  // 0x0118(0x0010) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxDamageType");
		return ptr;
	}


	bool IsElementalType();
};


// Class GbxGameSystemCore.EnvQueryContext_EnvQueryParam
// 0x0010 (0x0038 - 0x0028)
class UEnvQueryContext_EnvQueryParam : public UEnvQueryContext
{
public:
	struct FName                                       DefaultBlackboardKeyName;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowsUnboundContext;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_EnvQueryParam");
		return ptr;
	}

};


// Class GbxGameSystemCore.FirstPersonComponent
// 0x03E8 (0x0560 - 0x0178)
class UFirstPersonComponent : public UActorComponent
{
public:
	class UClass*                                      ConfigData;                                               // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Arms;                                                     // 0x0180(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Legs;                                                     // 0x0188(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       FirstPersonRootBone;                                      // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CameraSocket;                                             // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PrimaryHandWeaponSocket;                                  // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BaseTransformsAnimation;                                  // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x01B0(0x0090) MISSED OFFSET
	float                                              CrouchTransitionDuration;                                 // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CrouchTransitionEasing;                                   // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0248(0x0020) MISSED OFFSET
	TArray<struct FViewLeadingTranslationInfo>         TranslationLeadingList;                                   // 0x0268(0x0010) (Edit, ZeroConstructor)
	struct FViewLeadingTranslationInfo                 TranslationLeading;                                       // 0x0278(0x002C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<struct FViewLeadingRotationInfo>            RotationleadingList;                                      // 0x02A8(0x0010) (Edit, ZeroConstructor)
	struct FViewLeadingRotationInfo                    RotationLeading;                                          // 0x02B8(0x003C)
	struct FViewLeadingRotationInfo                    ZoomRotationLeading;                                      // 0x02F4(0x003C) (Edit)
	struct FName                                       ZoomRotationSocket;                                       // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShotOffsetSpeed;                                          // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShotOffsetRecoverySpeed;                                  // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxViewModelImpulseTranslationOffset;                     // 0x0340(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    MaxViewModelImpulseRotationOffset;                        // 0x034C(0x000C) (Edit, IsPlainOldData)
	class UBlendSpaceBase*                             FlinchBlendSpace;                                         // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FlinchAnimSlotName;                                       // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFlinchBlendInTime;                                 // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFlinchBlendOutTime;                                // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterruptFlinchBlendInTime;                               // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlinchInterruptThreshold;                                 // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomedFlinchWeight;                                       // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFirstPersonCreated;                                     // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0390(0x0030) MISSED OFFSET
	TArray<struct FTransform>                          ViewModelOffsetList;                                      // 0x03C0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData05[0x30];                                      // 0x03D0(0x0030) MISSED OFFSET
	struct FRotator                                    CurrentShotRotationOffset;                                // 0x0400(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FVector                                     BaseViewModelLocationOffset;                              // 0x0410(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2C];                                      // 0x041C(0x002C) MISSED OFFSET
	TArray<class USceneComponent*>                     CreatedFirstPersonComponents;                             // 0x0448(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	TArray<struct FTrackedFirstPersonComponent>        TopLevelComponents;                                       // 0x0460(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0470(0x0004) MISSED OFFSET
	struct FRotator                                    TargetShotRotationOffset;                                 // 0x0474(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0480(0x0010) MISSED OFFSET
	struct FVector                                     CurrentRelativeLocation;                                  // 0x0490(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     DefaultTranslationOffset;                                 // 0x049C(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0xB8];                                      // 0x04A8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FirstPersonComponent");
		return ptr;
	}


	void SetBaseEyeToWeaponTransform(const struct FTransform& NewWeaponTransform);
	class USceneComponent* GetFirstPersonComponentByName(const struct FName& Name);
};


// Class GbxGameSystemCore.GbxGameInstance
// 0x0128 (0x01F0 - 0x00C8)
class UGbxGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	struct FMenuStash                                  MenuStashes[0x4];                                         // 0x00E8(0x0010) (Transient)
	struct FSoftObjectPath                             CharacterMassPresets;                                     // 0x0128(0x0018) (Config)
	class UDataTable*                                  CachedCharacterMassPresets;                               // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             ForcePresets;                                             // 0x0148(0x0018) (Config)
	class UDataTable*                                  CachedForcePresets;                                       // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             SpawnCostPresets;                                         // 0x0168(0x0018) (Config)
	class UDataTable*                                  CachedSpawnCostPresets;                                   // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UCinematicModeData*>                  CinematicModeStack;                                       // 0x0188(0x0010) (ZeroConstructor, Transient)
	class UCinematicModeData*                          CinematicMode;                                            // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UIGbxProjectileManager*                      ProjectileManager;                                        // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSharedPickupInventoryActor>         SharedPickupInventoryActors;                              // 0x01A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x38];                                      // 0x01B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameInstance");
		return ptr;
	}


	void DebugLoadStartupAssets();
};


// Class GbxGameSystemCore.GlobalAIData
// 0x00F0 (0x0120 - 0x0030)
class UGlobalAIData : public UGbxDataAsset
{
public:
	struct FGameplayTag                                CombatTag;                                                // 0x0030(0x0008) (Edit)
	struct FGameplayTag                                PassiveTag;                                               // 0x0038(0x0008) (Edit)
	float                                              AITimeToRememberDirectAttacks;                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AITimeToRememberNonAttackingEnemies;                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AITimeToRememberHiddenEnemies;                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UHitReactionTag*                             JumpHitReactionDeathOverride;                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      JumpHitLiveReactionLayer;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceOfPlayingFirstNoticerAggroAnimation;                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceOfPlayingSecondNoticerAggroAnimation;               // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVariableAccuracy;                                     // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                TimeToBestAccuracy;                                       // 0x0070(0x0038) (Edit)
	struct FAttributeInitializationData                DamagePctToWorstAccuracy;                                 // 0x00A8(0x0038) (Edit)
	struct FAttributeInitializationData                DamagePctDecayRate;                                       // 0x00E0(0x0038) (Edit)
	float                                              MinAccuracy;                                              // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GlobalAIData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxGlobalsData
// 0x0060 (0x0090 - 0x0030)
class UGbxGlobalsData : public UGbxDataAsset
{
public:
	TSoftObjectPtr<class UDamageGlobalsData>           DamageGlobalsData;                                        // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	class UGbxGameplayGlobals*                         GameplayGlobals;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UStatusEffectGlobalsData>     StatusEffectGlobals;                                      // 0x0060(0x0028) (Edit, DisableEditOnInstance)
	class UAssetMappingData*                           AssetMapping;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGlobalsData");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitRegionComponent
// 0x0038 (0x01B0 - 0x0178)
class UHitRegionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class UHitRegionData*                              DefaultHitRegion;                                         // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitRegionState>                     HitRegions;                                               // 0x0188(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      CachedMesh;                                               // 0x01A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            CachedDamageComponent;                                    // 0x01A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitRegionComponent");
		return ptr;
	}


	void TriggerClientEvent(const struct FDamageReactionEventSummary& EventSummary);
	void GetValidDamageEventFunctionNames(TArray<struct FName>* Array);
	void GetValidAssociatedComponentNames(TArray<struct FName>* Array);
	float GetHitRegionPercentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	float GetHitRegionMaxHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	float GetHitRegionCurrentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
};


// Class GbxGameSystemCore.HitRegionData
// 0x0230 (0x0260 - 0x0030)
class UHitRegionData : public UGbxDataAsset
{
public:
	struct FName                                       HitRegionName;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               BoneNames;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bCanEverTakeRadiusDamage : 1;                             // 0x0048(0x0001) (Edit)
	unsigned char                                      bCriticalHit : 1;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAllowRadiusDamage : 1;                                   // 0x0048(0x0001) (Edit)
	unsigned char                                      bShouldBlockAreaDamage : 1;                               // 0x0048(0x0001) (Edit)
	unsigned char                                      bAllowRadiusDamageToBeConvertedToImpactDamage : 1;        // 0x0048(0x0001) (Edit)
	unsigned char                                      bTrackDamage : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FHitRegionHealthParams                      HealthParams;                                             // 0x0050(0x0018) (Edit)
	bool                                               bUseDamageScale;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                DamageScale;                                              // 0x0070(0x0038) (Edit)
	bool                                               bShowDamageNumbers;                                       // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReflect;                                              // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              ReflectionChance;                                         // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRicochet;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              RicochetChance;                                           // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRicochetIfReflectionFails;                               // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReflectToAttacker;                                   // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	float                                              ReflectionAccuracyModifier;                               // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncomingReflectedDamageScale;                             // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutgoingReflectedDamageScale;                             // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableBulletMagnetism;                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	TArray<struct FName>                               BulletMagnetismOverrideBoneNames;                         // 0x00D0(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideImpactEffect;                                    // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x00E1(0x000F) MISSED OFFSET
	struct FImpactResponseEffect                       EffectOverride;                                           // 0x00F0(0x0140) (Edit)
	bool                                               bPlayImactEffectWithNoDamage;                             // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNoSplatterEffect;                                        // 0x0231(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0232(0x0006) MISSED OFFSET
	class UImpactData*                                 SplatterEffect;                                           // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CustomDamageNumberParticleSystem;                         // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableHitReactions;                                     // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageSurfaceType                                 DefaultDamageSurface;                                     // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0259(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitRegionData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ActorPartData
// 0x00D0 (0x0100 - 0x0030)
class UActorPartData : public UGbxDataAsset
{
public:
	class UEnum*                                       PartTypeEnum;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PartType;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UGestaltData*                                GestaltData;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GestaltMeshPartName;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FName>                               AdditionalGestaltMeshPartNames;                           // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FMultiSelectionGestaltPartNameData>  MultiSelectionGestaltPartNames;                           // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	struct FAttributeInitializationData                MinGameStage;                                             // 0x0070(0x0038) (Edit, DisableEditOnTemplate)
	struct FAttributeInitializationData                MaxGameStage;                                             // 0x00A8(0x0038) (Edit, DisableEditOnTemplate)
	TArray<class UActorPartData*>                      Dependencies;                                             // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UActorPartData*>                      Excluders;                                                // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ActorPartData");
		return ptr;
	}


	void EnumeratePossibleExcluders(TArray<class UActorPartData*>* OutPartList);
	void EnumeratePossibleDependencies(TArray<class UActorPartData*>* OutPartList);
	void EnumerateOtherParts(TArray<class UActorPartData*>* OutPartList);
	void EnumerateGestaltMeshPartNames(TArray<struct FName>* OutPartNameList);
};


// Class GbxGameSystemCore.DataTableAttributeValueResolver
// 0x0020 (0x00D0 - 0x00B0)
class UDataTableAttributeValueResolver : public UAttributePropertyValueResolver
{
public:
	struct FDataTableRowHandle                         DataTableRow;                                             // 0x00B0(0x0010) (Edit, DisableEditOnTemplate)
	class FString                                      DataTableColumn;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DataTableAttributeValueResolver");
		return ptr;
	}


	void GetDataTableColumnNames(TArray<class FString>* ValueNames);
};


// Class GbxGameSystemCore.DataTableFunctionAttributeValueResolver
// 0x0008 (0x00D8 - 0x00D0)
class UDataTableFunctionAttributeValueResolver : public UDataTableAttributeValueResolver
{
public:
	class UScriptStruct*                               DataTableStruct;                                          // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DataTableFunctionAttributeValueResolver");
		return ptr;
	}


	struct FDataTableRowHandle GetDataTableRow(class UObject* Context);
};


// Class GbxGameSystemCore.LadderInteractData
// 0x0210 (0x0240 - 0x0030)
class ULadderInteractData : public UGbxDataAsset
{
public:
	float                                              RequiredViewAlignment;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RequiredRearViewAlignment;                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanMountLadderFromTopWhileFacing;                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              MaxVerticalSpeedToGrabLadder;                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpRegrabDelay;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TopEnterAnimSyncTime;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TopExitAnimSyncTime;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExitLocationDepthOffset;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExitingTopThresholdHeightOffset;                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringTopTargetHeightOffset;                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringTopFeetToLadderThreshold;                         // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          LadderTopMountCurveHorz;                                  // 0x0060(0x0078) (Edit)
	struct FRuntimeFloatCurve                          LadderTopMountCurveVert;                                  // 0x00D8(0x0078) (Edit)
	struct FRuntimeFloatCurve                          LadderTopDismountCurveHorz;                               // 0x0150(0x0078) (Edit)
	struct FRuntimeFloatCurve                          LadderTopDismountCurveVert;                               // 0x01C8(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.LadderInteractData");
		return ptr;
	}

};


// Class GbxGameSystemCore.NavComponent
// 0x0000 (0x0178 - 0x0178)
class UNavComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.NavComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxSkeletalMeshComponent
// 0x04F0 (0x1410 - 0x0F20)
class UGbxSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F20(0x0008) MISSED OFFSET
	TWeakObjectPtr<class USkeletalMeshComponent>       ParentAnimationComponent;                                 // 0x0F28(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0F30(0x0008) MISSED OFFSET
	class UGestaltPartListData*                        GestaltPartList;                                          // 0x0F38(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	TArray<class UGestaltPartData_Mesh*>               GestaltMeshParts;                                         // 0x0F40(0x0010) (ZeroConstructor, Transient)
	struct FReplicatedGestaltPartsData                 ReplicatedGestaltParts;                                   // 0x0F50(0x0018) (Net, Transient)
	int                                                GestaultSeed;                                             // 0x0F68(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowDynamicallyAddedForwardDynamicsNodes;               // 0x0F6C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F6D(0x0003) MISSED OFFSET
	TArray<struct FBoneModInstance>                    BoneModInstances;                                         // 0x0F70(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0F80(0x0008) MISSED OFFSET
	TArray<struct FStretchBonesInstance>               StretchBonesInstances;                                    // 0x0F88(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0F98(0x0008) MISSED OFFSET
	class UGbxBoneModifyProfile*                       BoneModifyProfile;                                        // 0x0FA0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bReplicateBoneMods;                                       // 0x0FA8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0FA9(0x0007) MISSED OFFSET
	struct FBoneModifyProfileData                      BoneModifyProfileData;                                    // 0x0FB0(0x0018) (Edit, Net)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0FC8(0x0008) MISSED OFFSET
	double                                             LastUpdateTime;                                           // 0x0FD0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FBMPOverride>                        CachedGlobalBMP;                                          // 0x0FD8(0x0010) (ZeroConstructor, Transient)
	TArray<class UGlobalBoneModifyProfileState*>       GlobalBMPRepArray;                                        // 0x0FE8(0x0010) (Net, ZeroConstructor, Transient)
	float                                              NoBodyMass;                                               // 0x0FF8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseMultiplier;                                        // 0x0FFC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x60];                                      // 0x1000(0x0060) MISSED OFFSET
	class UImpactData*                                 DefaultImpactData;                                        // 0x1060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UImpactData*>             BodyImpactDataOverrides;                                  // 0x1068(0x0050) (Edit, ZeroConstructor)
	TArray<class UGbxCustomizationTargetData*>         CustomizationTargets;                                     // 0x10B8(0x0010) (Edit, ZeroConstructor)
	struct FStretchAnimData                            StretchAnimData;                                          // 0x10C8(0x01E0) (Transient)
	class UGbxAnimBlueprintProfile*                    AnimBPProfile;                                            // 0x12A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGaitScalingOverride;                                     // 0x12B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x12B1(0x0007) MISSED OFFSET
	struct FGaitScalingSettings                        GaitScalingSettings;                                      // 0x12B8(0x0038) (Edit)
	unsigned char                                      UnknownData09[0x18];                                      // 0x12F0(0x0018) MISSED OFFSET
	bool                                               bUseAggregateSimulationSleepCheck;                        // 0x1308(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1309(0x0003) MISSED OFFSET
	float                                              AggregateSimulationSleepCheckSeconds;                     // 0x130C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AggregateSimulationSleepCheckDistance;                    // 0x1310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x44];                                      // 0x1314(0x0044) MISSED OFFSET
	struct FAnimUpdateRateParameters                   UpdateRateParametersOverride;                             // 0x1358(0x0088) (Edit)
	bool                                               bOverrideUpdateRateParameters;                            // 0x13E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xF];                                       // 0x13E1(0x000F) MISSED OFFSET
	struct FGbxAnimPoseMatch                           PoseMatch;                                                // 0x13F0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSkeletalMeshComponent");
		return ptr;
	}


	void ShowGestaltMeshParts(TArray<class UGestaltPartData_Mesh*> Parts, bool bLocalOnly);
	void ShowGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
	void SetUpdateOverrideValues(TArray<float> UpdateRateOverrides, bool bEnableOverrideProperties);
	void SetParentAnimationComponent(class USkeletalMeshComponent* ParentComponent);
	void SetGestaltPartList(class UGestaltPartListData* NewGestaltPartList);
	void RunPoseTest();
	void OnRep_GlobalBoneMod();
	void OnRep_GestaltMeshParts();
	void LinkSkelMeshAnimInstances(TArray<class USkeletalMeshComponent*> InLinkedSkelMeshComponents);
	void LinkSkelMeshAnimInstance(class USkeletalMeshComponent* InLinkedSkelMeshComponent);
	bool IsGestaltMeshPartVisible(class UGestaltPartData_Mesh* GestaltMeshPart);
	bool IsCustomizationTargetFor(class UGbxCustomizationTargetData* TargetToTest);
	void HideGestaltMeshParts(TArray<class UGestaltPartData_Mesh*> Parts, bool bLocalOnly);
	void HideGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
	TArray<float> GetUpdateOverrideValues();
	void GetAvailableBoneNames(TArray<struct FName>* Array);
	void CopyGestaltPartList(class AActor* GestaltPartListSource);
};


// Class GbxGameSystemCore.PawnAttachSlotComponent
// 0x0270 (0x0620 - 0x03B0)
class UPawnAttachSlotComponent : public UUsableComponent
{
public:
	struct FScriptMulticastDelegate                    OnAttachStarted;                                          // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttachFinished;                                         // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetachStarted;                                          // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetachFinished;                                         // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttachStateChanged;                                     // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPawnAttachSlotState                        AttachState;                                              // 0x0400(0x0040) (Net, Transient)
	struct FPawnSceneAttachmentInfo                    PersistentAttachInfo;                                     // 0x0440(0x0028) (Edit)
	class UClass*                                      PersistentPawnAction;                                     // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttachSlotAnimSet>                  AnimSets;                                                 // 0x0470(0x0010) (Edit, ZeroConstructor)
	struct FPawnAttachmentTransition                   AttachTransition;                                         // 0x0480(0x0048) (Deprecated)
	struct FPawnAttachmentTransition                   DetachTransition;                                         // 0x04C8(0x0048) (Deprecated)
	bool                                               bManualAttachTransitionDuration;                          // 0x0510(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEvaluateAttachTransitionBeforeModifyingPawn;             // 0x0511(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0512(0x0006) MISSED OFFSET
	TArray<struct FPawnAttachTransition>               AttachTransitions;                                        // 0x0518(0x0010) (Edit, ZeroConstructor)
	bool                                               bOffsetFallbackDetachLocationByActorHeight;               // 0x0528(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBaseOwnerLocationForSafeLocationTrace;                // 0x0529(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBaseOwnerLocationForFallbackDetachLocation;           // 0x052A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x052B(0x0005) MISSED OFFSET
	TArray<struct FPawnDetachTransition>               DetachTransitions;                                        // 0x0530(0x0010) (Edit, ZeroConstructor)
	EAttachmentPossessionRule                          PossessionRule;                                           // 0x0540(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPossessWhenAttachmentStarts;                             // 0x0541(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestorePossessionWhenDetachStarts;                       // 0x0542(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0543(0x0001) MISSED OFFSET
	unsigned char                                      bIsHijackable : 1;                                        // 0x0544(0x0001) (Edit)
	unsigned char                                      bCanHijackPlayer : 1;                                     // 0x0544(0x0001) (Edit)
	unsigned char                                      bCanHijackFriendly : 1;                                   // 0x0544(0x0001) (Edit)
	unsigned char                                      bCanBeUsedByPlayers : 1;                                  // 0x0544(0x0001) (Edit)
	unsigned char                                      bForceUntargetable : 1;                                   // 0x0544(0x0001) (Edit)
	unsigned char                                      bForceGodMode : 1;                                        // 0x0544(0x0001) (Edit)
	unsigned char                                      bForceHidden : 1;                                         // 0x0544(0x0001) (Edit)
	unsigned char                                      bForceNoCollision : 1;                                    // 0x0544(0x0001) (Edit)
	unsigned char                                      bDisableHitReaction : 1;                                  // 0x0545(0x0001) (Edit)
	unsigned char                                      bCollideDuringTransitions : 1;                            // 0x0545(0x0001) (Edit)
	unsigned char                                      bMirrorTeam : 1;                                          // 0x0545(0x0001) (Edit)
	unsigned char                                      bForceUnCrouch : 1;                                       // 0x0545(0x0001) (Edit)
	unsigned char                                      bIgnoreCollisionWithBase : 1;                             // 0x0545(0x0001) (Edit)
	unsigned char                                      bBaseIgnoreCollisionWithPawn : 1;                         // 0x0545(0x0001) (Edit)
	unsigned char                                      bForceSkeletalOptimizations : 1;                          // 0x0545(0x0001) (Edit)
	unsigned char                                      bDisableDelayRootMotionOneFrameDuringDetach : 1;          // 0x0545(0x0001) (Edit)
	unsigned char                                      bDisableOverlapOptimization : 1;                          // 0x0546(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0547(0x0001) MISSED OFFSET
	bool                                               bGenerateOverlapEventOnDetach;                            // 0x0548(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xD7];                                      // 0x0549(0x00D7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PawnAttachSlotComponent");
		return ptr;
	}


	void SetPersistentAttachSocketName(const struct FName& SocketName);
	void SetDetachabilityLocked(bool bLock, const struct FName& Reason);
	void RequestDetachPawn();
	void OnRep_AttachState();
	void ManuallyFinishAttach();
	bool IsOccupied(bool bIncludeDetaching);
	void HandleActorDestroyed(class AActor* Actor);
	struct FTransform GetPersistentAttachSocketTransform();
	class APawn* GetOccupant(bool bIncludeDetaching);
	EPawnAttachStatus GetAttachStatus();
	void DetachPawn(bool bInstant, bool bSkipPlacement);
	void AttachPawn(class APawn* AttachingPawn, bool bInstant);
};


// Class GbxGameSystemCore.GbxProfile
// 0x0088 (0x00B0 - 0x0028)
class UGbxProfile : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) MISSED OFFSET
	bool                                               bDisplayVehicleSpeedAsMPH;                                // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableAimAssist;                                         // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGamepadInvertLook;                                       // 0x002B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGamepadInvertTurn;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGamepadInvertMove;                                       // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGamepadInvertStrafe;                                     // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableMouseAcceleration;                                 // 0x002F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableGamepadInput;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseClassicGamepadInput;                                  // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableVibration;                                         // 0x0032(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTriggerFeedback;                                   // 0x0033(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxGlyphSetOption                                 GlyphMode;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvertMousePitch;                                        // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableMouseSmoothing;                                    // 0x0036(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	float                                              MouseScale;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDamageNumbers;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDamageNumberIcons;                                   // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTrainingMessages;                                  // 0x003E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	bool                                               bCenterCrosshair;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bToggleSprint;                                            // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bToggleCrouch;                                            // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCensorContent;                                           // 0x0043(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MasterVolume;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MusicVolume;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundEffectsVolume;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VOVolume;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VoiceVolume;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableOptionalVO;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPushToTalk;                                              // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableControllerAudio;                                   // 0x005A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
	float                                              SpeakerAngleFront;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeakerAngleSide;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeakerAngleBack;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESpeakerSetup                                      SpeakerSetup;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMuteAudioOnFocusLoss;                                    // 0x0069(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableWindowsSpatialAudio;                               // 0x006A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGraphicsMode                                      GraphicsMode;                                             // 0x006B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseFOV;                                                  // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              BaseVehicleFOV;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideStrictNATHelpDialog;                                 // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              HudScaleMultiplier;                                       // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FPlayerInputBindings                        PlayerInputBindings;                                      // 0x0080(0x0010)
	bool                                               bShowTextChat;                                            // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   NewsHashes;                                               // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           LastUsedSavegameId;                                       // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxProfile");
		return ptr;
	}

};


// Class GbxGameSystemCore.RadiusDamageReplicationManager
// 0x0018 (0x0470 - 0x0458)
class ARadiusDamageReplicationManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0458(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.RadiusDamageReplicationManager");
		return ptr;
	}


	void Multicast_StopRadiusEffect(class AActor* ContextActor, class UClass* DamageData, bool bStopAllForContext);
	void Multicast_ProcessRadiusRequest(class AActor* ContextActor, class UClass* DamageData, class UClass* DamageType, float Radius, const struct FVector_NetQuantize& Location, float Damage, class UExplosionData* ExplosionData, class UParticleSystem* DefaultParticles, class UWwiseEvent* DefaultAudioEvent, class UImpactData* DefaultImpactData, const struct FGbxSignificanceEvent& SignificanceEvent, float Force);
};


// Class GbxGameSystemCore.RecentDamageTrackingComponent
// 0x01E0 (0x0358 - 0x0178)
class URecentDamageTrackingComponent : public UActorComponent
{
public:
	class AGbxPlayerController*                        PlayerController;                                         // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRecentlyCausedDamageInstance               RecentlyCausedDamageInstances[0x6];                       // 0x0180(0x0048) (Net, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0330(0x0018) MISSED OFFSET
	TArray<class UFeedbackData*>                       InstigatedFeedbacks;                                      // 0x0348(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.RecentDamageTrackingComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxSaveGame
// 0x0000 (0x0028 - 0x0028)
class UGbxSaveGame : public USaveGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSaveGame");
		return ptr;
	}

};


// Class GbxGameSystemCore.SaveGameChannel
// 0x0030 (0x0098 - 0x0068)
class USaveGameChannel : public UChannel
{
public:
	TScriptInterface<class USaveGameActorInterface>    SaveGameActor;                                            // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SaveGameChannel");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxSignificanceManager
// 0x0098 (0x01C8 - 0x0130)
class UGbxSignificanceManager : public USignificanceManager
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0130(0x0068) MISSED OFFSET
	TArray<struct FCachedInterp>                       WeightInterps;                                            // 0x0198(0x0010) (ZeroConstructor, Transient, Config)
	TArray<struct FCachedInterp>                       BucketInterps;                                            // 0x01A8(0x0010) (ZeroConstructor, Transient, Config)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSignificanceManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxSingletons
// 0x0010 (0x0038 - 0x0028)
class UGbxSingletons : public UObject
{
public:
	class UAsyncExplosionImpactManager*                ExplosionImpactManager;                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxFeedbackManager*                         FeedbackManager;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSingletons");
		return ptr;
	}

};


// Class GbxGameSystemCore.StanceDataSelector
// 0x0018 (0x0048 - 0x0030)
class UStanceDataSelector : public UStanceDataProvider
{
public:
	TArray<struct FConditionalStance>                  StancePriorityList;                                       // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UStanceDataProvider*                         DefaultStanceProvider;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StanceDataSelector");
		return ptr;
	}

};


// Class GbxGameSystemCore.StatusEffectGlobalsData
// 0x0000 (0x0030 - 0x0030)
class UStatusEffectGlobalsData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectGlobalsData");
		return ptr;
	}

};


// Class GbxGameSystemCore.StatusEffectManagerComponent
// 0x00B8 (0x0230 - 0x0178)
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	TArray<struct FStatusEffectInstanceStack>          InstanceStacks;                                           // 0x0180(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0190(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectManagerComponent");
		return ptr;
	}


	bool RemoveStatusEffectInstance(struct FStatusEffectInstanceReference* Reference);
	bool RemoveStatusEffect(const struct FStatusEffectRemoveSpec& Spec);
	struct FStatusEffectQueryResult QueryStatusEffect(const struct FStatusEffectQuery& Query);
	struct FStatusEffectInstanceReference AddStatusEffect(const struct FStatusEffectSpec& Spec);
};


// Class GbxGameSystemCore.StatusEffectsStatics
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectsStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectsStatics");
		return ptr;
	}


	bool STATIC_RemoveStatusEffectInstance(class AActor* Target, struct FStatusEffectInstanceReference* Reference);
	bool STATIC_RemoveStatusEffect(class AActor* Target, const struct FStatusEffectRemoveSpec& RemoveSpec);
	struct FStatusEffectQueryResult STATIC_QueryStatusEffect(class AActor* Target, const struct FStatusEffectQuery& Query);
	struct FStatusEffectInstanceReference STATIC_AddStatusEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
};


// Class GbxGameSystemCore.UseComponent
// 0x0428 (0x05A0 - 0x0178)
class UUseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    UsableChanged;                                            // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ImpactDataChanged;                                        // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UsabilityChanged;                                         // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHoldUseStopped;                                         // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET
	float                                              ViewDistance;                                             // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteractDistance;                                         // 0x01CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveInteractionDistance;                                 // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VehicleInteractDistance;                                  // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VehicleLeaveInteractionDistance;                          // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class AController*                                 CachedController;                                         // 0x01E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUseTraceResult                             PreviousUsableState;                                      // 0x01E8(0x0060) (Transient)
	struct FUseTraceResult                             ReplicatedUsableState;                                    // 0x0248(0x0060) (Net, Transient)
	struct FUseTraceResult                             LocalUsableState;                                         // 0x02A8(0x0060) (Transient)
	struct FUseTraceResult                             EmptyUsableState;                                         // 0x0308(0x0060) (Transient)
	struct FLatentUseState                             LatentUseStates[0x2];                                     // 0x0368(0x0010) (Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0388(0x0010) MISSED OFFSET
	struct FUsableCostCache                            ReplicatedCostCache;                                      // 0x0398(0x0010) (Net, Transient)
	unsigned char                                      UnknownData03[0x98];                                      // 0x03A8(0x0098) MISSED OFFSET
	struct FGbxGameSystemCore_FResourceLock            CanUseObjectsLock_Replicated;                             // 0x0440(0x0098) (Net, Transient)
	unsigned char                                      UnknownData04[0xC8];                                      // 0x04D8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UseComponent");
		return ptr;
	}


	void StopUsingCurrentObject(EUsabilityType UseType);
	void StartUsingCurrentObject(EUsabilityType UseType);
	void ServerUseObject(class UUsableComponent* UsableObject, EUsabilityType UseType, bool bHeld);
	void ServerStopUsingObject(class UUsableComponent* UsableObject, EUsabilityType UseType);
	void ServerStartUsingObject(class UUsableComponent* UsableObject, EUsabilityType UseType);
	void OnUsableChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FUsabilityInfo& InUsabilityInfo, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
	void OnUsabilityChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FUsabilityInfo& InUsabilityInfo);
	void OnUnableToAffordUsableObject__DelegateSignature(class UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld);
	void OnImpactDataChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
	void OnHoldUseStopped__DelegateSignature();
	class UUsableComponent* GetCurrentUsable();
	void ForceUsingObject(class UUsableComponent* UsableObject);
	void ClientNotifyAttemptedUseCouldNotAfford(class UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld);
	bool CanUseCurrentUsable(EUsabilityType Type);
	bool CanInteractWithCurrentUsable(EUsabilityType Type);
};


// Class GbxGameSystemCore.LevelGroupData
// 0x0058 (0x0088 - 0x0030)
class ULevelGroupData : public UGbxDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       SubHeader;                                                // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0060(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class ULevelData>>           ContainedLevels;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.LevelGroupData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ActorPartSetData
// 0x0048 (0x0078 - 0x0030)
class UActorPartSetData : public UGbxDataAsset
{
public:
	class UClass*                                      PartDataClass;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnum*                                       PartTypeEnum;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EActorPartReplacementMode                          ActorPartReplacementMode;                                 // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FActorPartListData>                  ActorPartLists;                                           // 0x0048(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FActorPartListData>                  OldActorPartLists;                                        // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate)
	struct FGuid                                       Guid;                                                     // 0x0068(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ActorPartSetData");
		return ptr;
	}


	void EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList);
};


// Class GbxGameSystemCore.PrototypeActor
// 0x0000 (0x0458 - 0x0458)
class APrototypeActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PrototypeActor");
		return ptr;
	}

};


// Class GbxGameSystemCore.StatusEffectStackingStrategyData
// 0x0000 (0x0030 - 0x0030)
class UStatusEffectStackingStrategyData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectStackingStrategyData");
		return ptr;
	}

};


// Class GbxGameSystemCore.UIStatData_Attribute
// 0x0028 (0x0248 - 0x0220)
class UUIStatData_Attribute : public UUIStatData_Numeric
{
public:
	class UGbxAttributeData*                           Attribute;                                                // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UUIStatData*>                         OtherComparableStats;                                     // 0x0228(0x0010) (Edit, ZeroConstructor)
	TArray<class UUIStatData*>                         StatsToReplace;                                           // 0x0238(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatData_Attribute");
		return ptr;
	}

};


// Class GbxGameSystemCore.UIStatFormulaEvaluator
// 0x0000 (0x0028 - 0x0028)
class UUIStatFormulaEvaluator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatFormulaEvaluator");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxWeaponSlotData
// 0x0010 (0x0040 - 0x0030)
class UGbxWeaponSlotData : public UDataAsset
{
public:
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               InitiallyEnabled;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxWeaponSlotData");
		return ptr;
	}

};


// Class GbxGameSystemCore.LevelData
// 0x0090 (0x00C0 - 0x0030)
class ULevelData : public UGbxDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       SubHeader;                                                // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0060(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       LevelMapName;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<TSoftObjectPtr<class ULevelData>>           LinksToOtherLevel;                                        // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)
	TSoftObjectPtr<class ULevelGroupData>              OwningLevelGroup;                                         // 0x0090(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class UDownloadableContentData*                    DLCExpansionData;                                         // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.LevelData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ActorAttributeContextResolver
// 0x0000 (0x0050 - 0x0050)
class UActorAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ActorAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.AIChargeData
// 0x0230 (0x0260 - 0x0030)
class UAIChargeData : public UGbxDataAsset
{
public:
	class UClass*                                      StartAction;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissAction;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StrikeAction;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitWallAction;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReachCliffAction;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StopForFriendlyAction;                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAnims;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UClass*                                      ChargeAction;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrikeAngle;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrikeDistance;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTravelDistance;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MissDistance;                                             // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitWallRadiusPct;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlowStopTime;                                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlowStopSpeedPercent;                                     // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FForceSelection                             HitReactionForceSelection;                                // 0x0090(0x0020) (Edit)
	class UHitReactionTag*                             HitReactionFriendly;                                      // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             HitReactionUnfriendly;                                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCauseHitReaction;                                        // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERelativeSizeCharge                                StopForFriendlyOfRelativeSize;                            // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	float                                              StopForFriendlyDistance;                                  // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         ChargeStance;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EChargeCurveType                                   SpeedOverrideType;                                        // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          SpeedOverTime;                                            // 0x00D8(0x0078) (Edit)
	EChargeCurveType                                   RotationOverrideType;                                     // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationOverTime;                                        // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
	struct FRuntimeFloatCurve                          RotationOverTime;                                         // 0x0158(0x0078) (Edit)
	struct FRuntimeFloatCurve                          RotationByDistance;                                       // 0x01D0(0x0078) (Edit)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x0248(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UCurveFloat*                                 RotationCurve;                                            // 0x0250(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              HitReactionForce;                                         // 0x0258(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AIChargeData");
		return ptr;
	}

};


// Class GbxGameSystemCore.AIDataProvider_AttributeData
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_AttributeData : public UAIDataProvider
{
public:
	class UGbxAttributeData*                           AttributeData;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AIDataProvider_AttributeData");
		return ptr;
	}

};


// Class GbxGameSystemCore.AIDataProvider_AttributeInitializationData
// 0x0048 (0x0070 - 0x0028)
class UAIDataProvider_AttributeInitializationData : public UAIDataProvider
{
public:
	struct FAttributeInitializationData                AttributeInitializationData;                              // 0x0028(0x0038) (Edit)
	float                                              FloatValue;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AIDataProvider_AttributeInitializationData");
		return ptr;
	}

};


// Class GbxGameSystemCore.AIDataProvider_AttributeInitializer
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_AttributeInitializer : public UAIDataProvider
{
public:
	class UClass*                                      AttributeInitializer;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AIDataProvider_AttributeInitializer");
		return ptr;
	}

};


// Class GbxGameSystemCore.AIDodgeComponent
// 0x0790 (0x0908 - 0x0178)
class UAIDodgeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0178(0x0098) MISSED OFFSET
	bool                                               IsDodging;                                                // 0x0210(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	struct FAIDodgeData                                DodgeBullet;                                              // 0x0218(0x01B8) (Edit)
	struct FAIDodgeData                                DodgeGrenade;                                             // 0x03D0(0x01B8) (Edit)
	struct FAIDodgeBasicData                           DodgeRandom;                                              // 0x0588(0x0098) (Edit)
	struct FAIDodgeData                                DodgeZone;                                                // 0x0620(0x01B8) (Edit)
	struct FGbxParam                                   GlobalCooldown;                                           // 0x07D8(0x0080) (Edit)
	struct FScriptMulticastDelegate                    OnDodged;                                                 // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTeamComponent*                              TeamComponent;                                            // 0x0868(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         ActionComponent;                                          // 0x0870(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComponent;                                      // 0x0878(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x0880(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNavComponent*                               NavComponent;                                             // 0x0888(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxCharacterMovementComponent*              MovementComponent;                                        // 0x0890(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FAIDodgeInstance                            PendingDodge;                                             // 0x0898(0x0020) (Transient)
	struct FAIDodgeInstance                            ActiveDodge;                                              // 0x08B8(0x0020) (Transient)
	unsigned char                                      UnknownData02[0x30];                                      // 0x08D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AIDodgeComponent");
		return ptr;
	}


	void STATIC_TriggerZoneDodge(class UObject* WorldContextObject, class AActor* TargetActor, const struct FVector& ZoneLoc, const struct FVector& ZoneVel, class AActor* ActorRef);
	void STATIC_TriggerGrenadeDodge(class UObject* WorldContextObject, const struct FVector& GrenadeLoc, class AActor* Instigator, float ExtraDelay);
	bool TriggerDodge(EAIDodgeType Type, const struct FVector& SourceLoc, class AActor* SourceActor, float ExtraDelay, bool bForced);
	void STATIC_TriggerBulletDodge(class UObject* WorldContextObject, const struct FVector& MuzzleLoc, const struct FVector& BulletVel, class AActor* Instigator);
};


// Class GbxGameSystemCore.AimControlData
// 0x0068 (0x0098 - 0x0030)
class UAimControlData : public UGbxDataAsset
{
public:
	float                                              InputCurveExponent;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationCap;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelRate;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecelRate;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelRateRawBias;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FAimSensitivityLevelParameters>      HipSensitivityLevels;                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAimSensitivityLevelParameters>      ZoomSensitivityLevels;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAimSensitivityLevelParameters>      VehicleSensitivityLevels;                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinFOVScaling;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAcceptedFOVScale;                                      // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFOVScalingMouse;                                       // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAcceptedFOVScaleMouse;                                 // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighDeadZone;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AxialDeadZoneBegin;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AxialDeadZoneRatio;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AimControlData");
		return ptr;
	}

};


// Class GbxGameSystemCore.AISense_Bullet
// 0x0060 (0x00F8 - 0x0098)
class UAISense_Bullet : public UAISense
{
public:
	TArray<struct FAIBulletEvent>                      BulletEvents;                                             // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AISense_Bullet");
		return ptr;
	}


	void STATIC_ReportBulletEvent(class UObject* WorldContext, const struct FVector& StartLoc, const struct FVector& EndLoc, bool bFirstEvent, class AActor* Instigator, float Strength);
};


// Class GbxGameSystemCore.AISense_GbxPrediction
// 0x0060 (0x00F8 - 0x0098)
class UAISense_GbxPrediction : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0098(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AISense_GbxPrediction");
		return ptr;
	}

};


// Class GbxGameSystemCore.AISense_GbxSight
// 0x0030 (0x01A0 - 0x0170)
class UAISense_GbxSight : public UAISense_Sight
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0170(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AISense_GbxSight");
		return ptr;
	}


	void STATIC_ForceSightEvent(class UObject* WorldContext, class AActor* SeenActor, class AActor* LookingActor);
};


// Class GbxGameSystemCore.AISenseConfig_Bullet
// 0x0010 (0x0058 - 0x0048)
class UAISenseConfig_Bullet : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              ListenRadius;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AISenseConfig_Bullet");
		return ptr;
	}

};


// Class GbxGameSystemCore.AISenseConfig_GbxPrediction
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_GbxPrediction : public UAISenseConfig
{
public:
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AISenseConfig_GbxPrediction");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_CanInterruptAnim
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_CanInterruptAnim : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_CanInterruptAnim");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_CauseDamage
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CauseDamage : public UAnimNotify
{
public:
	class UClass*                                      DamageData;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_CauseDamage");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_Feedback
// 0x0058 (0x0090 - 0x0038)
class UAnimNotify_Feedback : public UAnimNotify
{
public:
	unsigned char                                      bApplyToAllPlayers : 1;                                   // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bIgnoreOwner : 1;                                         // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	bool                                               bApplyFeedbackAtRanged;                                   // 0x003C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               FeedbackData;                                             // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OwnerFeedbackData;                                        // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                FeedbackScale;                                            // 0x0058(0x0038) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_Feedback");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_Footstep
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_Footstep : public UAnimNotify
{
public:
	int                                                FootIndex;                                                // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x003C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictToMatchingPlayerPerspective;                     // 0x0044(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_Footstep");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_GbxAction
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_GbxAction : public UAnimNotify
{
public:
	struct FName                                       CustomEventName;                                          // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_GbxAction");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_HandPlant
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_HandPlant : public UAnimNotify
{
public:
	int                                                HandIndex;                                                // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x003C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictToMatchingPlayerPerspective;                     // 0x0044(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_HandPlant");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_PlayJumpedImpact
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_PlayJumpedImpact : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_PlayJumpedImpact");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_PlayLandedImpact
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayLandedImpact : public UAnimNotify
{
public:
	float                                              ImpactSpeed;                                              // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAsIfFromJump;                                            // 0x003C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_PlayLandedImpact");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_SetRagdollObjectHoldTransform
// 0x0038 (0x0070 - 0x0038)
class UAnimNotify_SetRagdollObjectHoldTransform : public UAnimNotify
{
public:
	bool                                               bEnable;                                                  // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (Edit, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_SetRagdollObjectHoldTransform");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotify_StretchBonesMarker
// 0x0028 (0x0068 - 0x0040)
class UAnimNotify_StretchBonesMarker : public UAnimNotify_GbxAction
{
public:
	struct FName                                       StartBoneName;                                            // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBoneName;                                              // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimatedTargetDistance;                                   // 0x0050(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtVector;                                             // 0x0054(0x000C) (BlueprintReadOnly, IsPlainOldData)
	float                                              XScale;                                                   // 0x0060(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotify_StretchBonesMarker");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_DeathOverride
// 0x0020 (0x0050 - 0x0030)
class UAnimNotifyState_DeathOverride : public UAnimNotifyState
{
public:
	class UHitReactionTag*                             DeathReactionTag;                                         // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             DefaultReactionTagName;                                   // 0x0038(0x0018) (BlueprintReadOnly, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_DeathOverride");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_DisableLegIK
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_DisableLegIK : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_DisableLegIK");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_DisableLegIKTracing
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_DisableLegIKTracing : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_DisableLegIKTracing");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_DisableLookAt
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_DisableLookAt : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_DisableLookAt");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_Feedback
// 0x0048 (0x0078 - 0x0030)
class UAnimNotifyState_Feedback : public UAnimNotifyState
{
public:
	unsigned char                                      bApplyToAllPlayers : 1;                                   // 0x0030(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UFeedbackData*                               FeedbackData;                                             // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                FeedbackScale;                                            // 0x0040(0x0038) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_Feedback");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_GbxAction
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_GbxAction : public UAnimNotifyState
{
public:
	struct FName                                       CustomEventName;                                          // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_GbxAction");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_RootMotionRotation
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_RootMotionRotation : public UAnimNotifyState
{
public:
	int                                                LockFootIkIndex;                                          // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLockFootIK;                                              // 0x0034(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_RootMotionRotation");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_SoftAlign
// 0x0020 (0x0050 - 0x0030)
class UAnimNotifyState_SoftAlign : public UAnimNotifyState
{
public:
	EAnimNotifyAlignType                               Type;                                                     // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	unsigned char                                      bAffectsLocation : 1;                                     // 0x0034(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bAffectsRotation : 1;                                     // 0x0034(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FName                                       PartnerName;                                              // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionSlotName;                                           // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AlignSocketPartner;                                       // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_SoftAlign");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_StretchAction
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_StretchAction : public UAnimNotifyState
{
public:
	bool                                               bRotate;                                                  // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslate;                                               // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_StretchAction");
		return ptr;
	}

};


// Class GbxGameSystemCore.AnimNotifyState_StretchBonesMarker
// 0x0038 (0x0070 - 0x0038)
class UAnimNotifyState_StretchBonesMarker : public UAnimNotifyState_GbxAction
{
public:
	struct FName                                       StartBoneName;                                            // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBoneName;                                              // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimatedTargetDistance;                                   // 0x0048(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtVector;                                             // 0x004C(0x000C) (BlueprintReadOnly, IsPlainOldData)
	float                                              EndAnimatedTargetDistance;                                // 0x0058(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLookAtVector;                                          // 0x005C(0x000C) (BlueprintReadOnly, IsPlainOldData)
	float                                              XScale;                                                   // 0x0068(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AnimNotifyState_StretchBonesMarker");
		return ptr;
	}

};


// Class GbxGameSystemCore.AsyncExplosionImpactManager
// 0x0028 (0x0050 - 0x0028)
class UAsyncExplosionImpactManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FAsyncExplosionImpactRequest>        AsyncRequests;                                            // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AsyncExplosionImpactManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributeEffectMultiMutatorData
// 0x0010 (0x0040 - 0x0030)
class UAttributeEffectMultiMutatorData : public UAttributeEffectMutatorData
{
public:
	TArray<class UAttributeEffectMutatorData*>         Mutators;                                                 // 0x0030(0x0010) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributeEffectMultiMutatorData");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributeInitializer
// 0x0008 (0x0030 - 0x0028)
class UAttributeInitializer : public UObject
{
public:
	EAttributeInitializerUsageMode                     UsageMode;                                                // 0x0028(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributeInitializer");
		return ptr;
	}


	float STATIC_EvaluateBalanceFormula(float Multiplier, float Level, float Power, float Offset);
	float CalculateAttributeInitialValue(class UObject* Context);
};


// Class GbxGameSystemCore.AttributeModifierTestContext
// 0x0010 (0x0038 - 0x0028)
class UAttributeModifierTestContext : public UObject
{
public:
	struct FGbxAttributeFloat                          AttributeProperty;                                        // 0x0028(0x000C)
	float                                              FloatProperty;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributeModifierTestContext");
		return ptr;
	}

};


// Class GbxGameSystemCore.TestAttributePropertyValueResolver
// 0x0000 (0x00B0 - 0x00B0)
class UTestAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TestAttributePropertyValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.AttributePropertyValueResolverTestContext
// 0x01A0 (0x01C8 - 0x0028)
class UAttributePropertyValueResolverTestContext : public UObject
{
public:
	float                                              FloatProp;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatPropStaticArray[0x3];                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      FloatPropDynamicArray;                                    // 0x0038(0x0010) (ZeroConstructor)
	class UAttributePropertyValueResolverTestContext*  ObjectProp;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAttributePropertyValueResolverTestContext*  ObjectPropStaticArray[0x3];                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAttributePropertyValueResolverTestContext*> ObjectPropDynamicArray;                                   // 0x0068(0x0010) (ZeroConstructor)
	struct FAttributePropertyValueResolverTestStruct   StructProp;                                               // 0x0078(0x0050)
	struct FAttributePropertyValueResolverTestStruct   StructPropStaticArray[0x3];                               // 0x00C8(0x0050)
	TArray<struct FAttributePropertyValueResolverTestStruct> StructPropDynamicArray;                                   // 0x01B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.AttributePropertyValueResolverTestContext");
		return ptr;
	}

};


// Class GbxGameSystemCore.BalanceFormulaAttributeValueResolver
// 0x0130 (0x0158 - 0x0028)
class UBalanceFormulaAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FBalanceFormulaDefinedValueRow              Value;                                                    // 0x0028(0x0120) (Edit)
	TArray<struct FAttributeInitializationData>        AdditionalScalars;                                        // 0x0148(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BalanceFormulaAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.BalanceStateAttributeValueResolver
// 0x0008 (0x0030 - 0x0028)
class UBalanceStateAttributeValueResolver : public UAttributeValueResolver
{
public:
	EBalanceValueType                                  ValueToResolve;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BalanceStateAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.BalanceTableAttributeValueResolver
// 0x0000 (0x00D8 - 0x00D8)
class UBalanceTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BalanceTableAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.BlackboardKeyAttributeContextResolver
// 0x0010 (0x0060 - 0x0050)
class UBlackboardKeyAttributeContextResolver : public UAttributeContextResolver
{
public:
	struct FGbxBlackboardKeySelector                   BlackboardKey;                                            // 0x0050(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BlackboardKeyAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.BlackboardKeyType_GbxFlag
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_GbxFlag : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BlackboardKeyType_GbxFlag");
		return ptr;
	}

};


// Class GbxGameSystemCore.BlackboardKeyType_Struct
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Struct : public UBlackboardKeyType
{
public:
	class UScriptStruct*                               Type;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BlackboardKeyType_Struct");
		return ptr;
	}

};


// Class GbxGameSystemCore.BlackboardKeyType_TargetActorInfo
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_TargetActorInfo : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BlackboardKeyType_TargetActorInfo");
		return ptr;
	}

};


// Class GbxGameSystemCore.BoneModBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UBoneModBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BoneModBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetBoneTranslation(const struct FName& BoneName, const struct FVector& Translation, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void STATIC_SetBoneScale3D(const struct FName& BoneName, const struct FVector& Scale3D, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void STATIC_SetBoneScale(const struct FName& BoneName, float Scale, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void STATIC_SetBoneRotation(const struct FName& BoneName, const struct FRotator& Rotation, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void STATIC_SetBoneModUseTranslation(const struct FName& BoneModName, bool bUseTranslation, class UObject* Target);
	void STATIC_SetBoneModUseScale(const struct FName& BoneModName, bool bUseScale, class UObject* Target);
	void STATIC_SetBoneModUseRotation(const struct FName& BoneModName, bool bUseRotation, class UObject* Target);
	void STATIC_SetBoneModTranslationSpace(const struct FName& BoneModName, TEnumAsByte<EBoneControlSpace> TranslationSpace, class UObject* Target);
	void STATIC_SetBoneModTranslation(const struct FName& BoneModName, const struct FVector& Translation, class UObject* Target);
	void STATIC_SetBoneModTransform(const struct FName& BoneModName, const struct FTransform& Transform, class UObject* Target);
	void STATIC_SetBoneModScale3D(const struct FName& BoneModName, const struct FVector& Scale, class UObject* Target);
	void STATIC_SetBoneModScale(const struct FName& BoneModName, float Scale, class UObject* Target);
	void STATIC_SetBoneModRotationSpace(const struct FName& BoneModName, TEnumAsByte<EBoneControlSpace> RotationSpace, class UObject* Target);
	void STATIC_SetBoneModRotation(const struct FName& BoneModName, const struct FRotator& Rotation, class UObject* Target);
	void STATIC_SetBoneModReplaceTranslation(const struct FName& BoneModName, bool bReplaceTranslation, class UObject* Target);
	void STATIC_SetBoneModReplaceScale(const struct FName& BoneModName, bool bReplaceScale, class UObject* Target);
	void STATIC_SetBoneModReplaceRotation(const struct FName& BoneModName, bool bReplaceRotation, class UObject* Target);
	void STATIC_SetBoneModName(const struct FName& BoneModName, const struct FName& NewBoneModName, class UObject* Target);
	void STATIC_SetBoneModifyProfileState(const struct FName& StateName, bool bActive, class UObject* Target, float BlendTime);
	void STATIC_SetBoneModifyProfile(class UGbxBoneModifyProfile* BoneModifyProfile, class UObject* Target);
	void STATIC_SetBoneModBoneName(const struct FName& BoneModName, const struct FName& BoneModBoneName, class UObject* Target);
	void STATIC_SetBoneModBlendTime(const struct FName& BoneModName, float BlendTime, class UObject* Target);
	void STATIC_SetBoneModAlphaBlend(const struct FName& BoneModName, const struct FAlphaBlend& Blend, class UObject* Target);
	void STATIC_SetBoneModActive(const struct FName& BoneModName, bool bActive, class UObject* Target);
	void STATIC_SetBoneMod(const struct FName& BoneModToSet, class UObject* Target, bool bBlendIn, struct FBoneModInstance* InBoneMod);
	void STATIC_RemoveBoneMod(const struct FName& BoneModToRemove, class UObject* Target, bool bBlendOut);
	bool STATIC_GetBoneMod(const struct FName& BoneModName, class UObject* Target, struct FBoneModInstance* BoneMod);
	void STATIC_CreateBoneMod(const struct FName& InBoneModName, const struct FName& InBoneName, const struct FVector& InTranslation, const struct FRotator& InRotation, const struct FVector& InScale, float InBlendTime, class UObject* Target, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve, bool bInUseTranslation, bool bInUseRotation, bool bInUseScale, bool bInReplaceTranslation, bool bInReplaceRotation, bool bInReplaceScale, TEnumAsByte<EBoneControlSpace> InTranslationSpace, TEnumAsByte<EBoneControlSpace> InRotationSpace, bool bBlendIn);
};


// Class GbxGameSystemCore.BoneModComponent
// 0x0050 (0x0320 - 0x02D0)
class UBoneModComponent : public USceneComponent
{
public:
	bool                                               bUseTranslation;                                          // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceTranslation;                                      // 0x02D2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotation;                                             // 0x02D3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x02D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceRotation;                                         // 0x02D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // 0x02D6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceScale;                                            // 0x02D7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                                    // 0x02D8(0x0038) (Edit)
	bool                                               bStartActive;                                             // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0311(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BoneModComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.BTDecorator_GbxCondition
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_GbxCondition : public UBTDecorator
{
public:
	class UGbxCondition*                               Condition;                                                // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BTDecorator_GbxCondition");
		return ptr;
	}

};


// Class GbxGameSystemCore.BTTask_PlayGbxAction
// 0x0018 (0x0088 - 0x0070)
class UBTTask_PlayGbxAction : public UBTTaskNode
{
public:
	class UClass*                                      ActionClassToPlay;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxActionComponent*                         CachedActionComponent;                                    // 0x0078(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBehaviorTreeComponent*                      CachedBTComponent;                                        // 0x0080(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BTTask_PlayGbxAction");
		return ptr;
	}

};


// Class GbxGameSystemCore.CauseDamageContextSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UCauseDamageContextSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CauseDamageContextSourceInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengeConditionData
// 0x0020 (0x0050 - 0x0030)
class UChallengeConditionData : public UGbxDataAsset
{
public:
	class FString                                      Description;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UGameStatData*                               StatId;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetValue;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeConditionData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengeLevelActorComponent
// 0x0080 (0x07D0 - 0x0750)
class UChallengeLevelActorComponent : public UGbxAreaComponent
{
public:
	class UClass*                                      BaseChallengeReference;                                   // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChallengeReference;                                       // 0x0758(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInZoneMap;                                           // 0x0760(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInMiniMap;                                           // 0x0761(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInWorld;                                             // 0x0762(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInWorldIconEnabled;                                      // 0x0763(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              UnfogRadiusWhenChallengeActive;                           // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UnfogHeightWhenChallengeActive;                           // 0x0768(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       IconGuid;                                                 // 0x076C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	bool                                               bIsStationary;                                            // 0x077C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerChallengeActivated;                               // 0x0780(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerChallengeCompleted;                               // 0x0790(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerEnteredChallengeArea;                             // 0x07A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerExitedChallengeArea;                              // 0x07B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07C0(0x0008) MISSED OFFSET
	class UChallengeLevelActorComponent*               OwningLevelActorComponent;                                // 0x07C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeLevelActorComponent");
		return ptr;
	}


	void SetIsStationary(bool bInIsStationary);
	void SetInWorldIconEnabled(bool bEnable);
	void OnRep_IsStationary(bool bOldIsStationary);
	void OnRep_InWorldIconEnabled(bool bOldEnabled);
	void OnRep_ChallengeReference();
	void HandleAttachmentChanged();
	class AActor* GetAssociatedActor();
};


// Class GbxGameSystemCore.ChallengeLevelParentComponent
// 0x0030 (0x0800 - 0x07D0)
class UChallengeLevelParentComponent : public UChallengeLevelActorComponent
{
public:
	bool                                               bHideIfAssociatedActors;                                  // 0x07D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAllAssociatedActorsDestroyed;                           // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UChallengeLevelActorComponent*>       AssociatedActors;                                         // 0x07E8(0x0010) (BlueprintVisible, ExportObject, Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeLevelParentComponent");
		return ptr;
	}


	void RemoveAssociatedActorComponent(class UChallengeLevelActorComponent* AssociatedComponent);
	void RemoveAssociatedActor(class AActor* AssociatedActor);
	void ClearAssociatedActors();
	void AddAssociatedActor(class AActor* AssociatedActor, class UClass* ComponentClass, const struct FVector& RelativeOffset);
};


// Class GbxGameSystemCore.ChallengeObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UChallengeObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeObserverInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengeRewardData
// 0x0088 (0x00B8 - 0x0030)
class UChallengeRewardData : public UGbxDataAsset
{
public:
	struct FText                                       RewardName;                                               // 0x0030(0x0028) (Edit)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit)
	struct FText                                       RewardString;                                             // 0x0060(0x0028) (Edit)
	struct FAttributeInitializationData                AttrInitDef;                                              // 0x0078(0x0038) (Edit)
	int                                                CachedRewardIndex;                                        // 0x00B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeRewardData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ChallengeSystemSettings
// 0x0070 (0x0098 - 0x0028)
class UChallengeSystemSettings : public UObject
{
public:
	float                                              MinimumGoalForChallengeNotification;                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<float>                                      ChallengeCompletionThresholdNotification;                 // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	struct FAttributeInitializationData                ChallengeRanksForToken;                                   // 0x0040(0x0038) (Edit, Config)
	int                                                ChallengePointsPerRank;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FSoftObjectPath>                     ChallengeRewards;                                         // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	class UClass*                                      DefaultChallengeComponent;                                // 0x0090(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ChallengeSystemSettings");
		return ptr;
	}

};


// Class GbxGameSystemCore.CharacterBestTargetAttributeContextResolver
// 0x0000 (0x0050 - 0x0050)
class UCharacterBestTargetAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CharacterBestTargetAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.CharacterMovementAttributeValueResolver
// 0x0008 (0x0030 - 0x0028)
class UCharacterMovementAttributeValueResolver : public UAttributeValueResolver
{
public:
	ECharacterMovementAttributeValueType               ValueToResolve;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CharacterMovementAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.CinematicModeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCinematicModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CinematicModeBlueprintLibrary");
		return ptr;
	}


	void STATIC_PushCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
	void STATIC_PopCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
	void STATIC_ClearCinematicMode(class UObject* WorldContextObject);
	void STATIC_ClearAndSetCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
};


// Class GbxGameSystemCore.ClothManagerInterface
// 0x0000 (0x0458 - 0x0458)
class AClothManagerInterface : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ClothManagerInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.Beacon
// 0x0020 (0x0478 - 0x0458)
class ABeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0458(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.Beacon");
		return ptr;
	}


	void OnBeaconSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
};


// Class GbxGameSystemCore.ConditionalAttributeValueResolver
// 0x0080 (0x00A8 - 0x0028)
class UConditionalAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData                DefaultValue;                                             // 0x0028(0x0038) (Edit)
	struct FAttributeInitializationData                Scaler;                                                   // 0x0060(0x0038) (Edit)
	TArray<struct FAttributeConditionalValue>          ConditionalValues;                                        // 0x0098(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConditionalAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.ConditionalDamageModifier
// 0x0108 (0x0138 - 0x0030)
class UConditionalDamageModifier : public UGbxDataAsset
{
public:
	class UGbxCondition*                               AttackerCondition;                                        // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAttackerConditionFirstContextIsOverrideContextObject;    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttackerConditionSecondContextIsDamageCauser;            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	class UGbxCondition*                               DefenderCondition;                                        // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDefenderConditionFirstContextIsOverrideContextObject;    // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefenderConditionSecondContextIsDamageCauser;            // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	EDamageFilterExprMode                              DamageTypeFilterMode;                                     // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UClass*>                              DamageTypeFilter;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	EDamageFilterExprMode                              DamageSourceFilterMode;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bIncludeDamageSourceSubclasses;                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<class UClass*>                              DamageSourceFilter;                                       // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseHitDirectionAngle;                                    // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                HitDirectionAngle;                                        // 0x0080(0x0038) (Edit)
	struct FAttributeInitializationData                HitDirectionAngleOffset;                                  // 0x00B8(0x0038) (Edit)
	bool                                               bUseCriticalFilter;                                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EConditionalDamageCriticalFilter                   CriticalFilter;                                           // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaDamageFilter;                                     // 0x00F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EConditionalAreaDamageFilter                       AreaDamageFilter;                                         // 0x00F3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRandomChance;                                         // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                RandomChance;                                             // 0x00F8(0x0038) (Edit)
	bool                                               bCanTriggerOnBonusDamage;                                 // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAppliesToInstigatorChildren;                             // 0x0131(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0132(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConditionalDamageModifier");
		return ptr;
	}

};


// Class GbxGameSystemCore.ConditionalDamageCriticalModifier
// 0x0040 (0x0178 - 0x0138)
class UConditionalDamageCriticalModifier : public UConditionalDamageModifier
{
public:
	bool                                               bOnlyApplyIfHitRegionWasCritical;                         // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultCriticalHitMultiplier;                         // 0x0139(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
	struct FAttributeInitializationData                AdditionalCriticalMultiplier;                             // 0x0140(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConditionalDamageCriticalModifier");
		return ptr;
	}

};


// Class GbxGameSystemCore.ConditionalDamageHitRegionModifier
// 0x0010 (0x0148 - 0x0138)
class UConditionalDamageHitRegionModifier : public UConditionalDamageModifier
{
public:
	uint32_t                                           Priority;                                                 // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UHitRegionData*                              OverrideHitRegion;                                        // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConditionalDamageHitRegionModifier");
		return ptr;
	}

};


// Class GbxGameSystemCore.ConditionalDamageTypeModifier
// 0x00A0 (0x01D8 - 0x0138)
class UConditionalDamageTypeModifier : public UConditionalDamageModifier
{
public:
	class UClass*                                      OverrideDamageType;                                       // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FConditionalDamageDamageTypeConditional> ConditionalDamageTypes;                                   // 0x0140(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      OptionalOverrideDamageSource;                             // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EConditionalDamageTypeBonusMode                    BonusMode;                                                // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ExtraDamagePercent;                                       // 0x0160(0x0038) (Edit)
	struct FAttributeInitializationData                OverridePrimaryDamageTypeScale;                           // 0x0198(0x0038) (Edit)
	int                                                Priority;                                                 // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConditionalDamageTypeModifier");
		return ptr;
	}

};


// Class GbxGameSystemCore.ConditionalDamageValueModifier
// 0x00D8 (0x0210 - 0x0138)
class UConditionalDamageValueModifier : public UConditionalDamageModifier
{
public:
	EConditionalDamageModifierType                     ModifierType;                                             // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                DamageValue;                                              // 0x0140(0x0038) (Edit)
	TArray<struct FConditionalDamageDamageConditionalValue> ConditionalDamageValues;                                  // 0x0178(0x0010) (Edit, ZeroConstructor)
	bool                                               bModifyValueBasedOnDistance;                              // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          ModifyValueBasedOnDistanceCurve;                          // 0x0190(0x0078) (Edit)
	bool                                               bDisallowFatalDamage;                                     // 0x0208(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0209(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConditionalDamageValueModifier");
		return ptr;
	}

};


// Class GbxGameSystemCore.ConstantAttributeValueResolver
// 0x0038 (0x0060 - 0x0028)
class UConstantAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData                Value;                                                    // 0x0028(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ConstantAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.ControlledMoveFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UControlledMoveFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ControlledMoveFunctionLibrary");
		return ptr;
	}


	void STATIC_StopControlledMove(class AActor* Actor, class UClass* ControlledMove, bool bZeroVelocity, bool bInterrupted);
	bool STATIC_StartControlledMove(class AActor* Actor, class UClass* ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation);
	bool STATIC_IsPerformingSpecificControlledMove(class AActor* Actor, class UClass* ControlledMove);
	bool STATIC_IsPerformingControlledMove(class AActor* Actor);
};


// Class GbxGameSystemCore.ControllerAttributeContextResolver
// 0x0000 (0x0050 - 0x0050)
class UControllerAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ControllerAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.CoordinatedEffectBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoordinatedEffectBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.CoordinatedEffectBlueprintLibrary");
		return ptr;
	}


	class UMaterialInterface* STATIC_GetOriginalOverrideMaterialAtIndex(class UMeshComponent* MeshComponent, int Index, int* OutActualIndex);
};


// Class GbxGameSystemCore.DamageableInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageableInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType
// 0x0038 (0x0060 - 0x0028)
class UDamageAreaType : public UObject
{
public:
	int                                                MaxTargets;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMaxTargets : 1;                                       // 0x002C(0x0001) (Edit)
	unsigned char                                      bDoDirectDamageToImpactedActor : 1;                       // 0x002C(0x0001) (Edit)
	unsigned char                                      bIgnoreWorldGeometry : 1;                                 // 0x002C(0x0001) (Edit)
	unsigned char                                      bTryDirectTraceFirst : 1;                                 // 0x002C(0x0001) (Edit)
	unsigned char                                      bSkipBackupImpactTrace : 1;                               // 0x002C(0x0001) (Edit)
	unsigned char                                      bForceZeroPitch : 1;                                      // 0x002C(0x0001) (Edit)
	unsigned char                                      bZeroPitchBeforeApplyingHitStartOffset : 1;               // 0x002C(0x0001) (Edit)
	unsigned char                                      bForceZeroRoll : 1;                                       // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceToGround;                                           // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              TraceToGroundDownwardDistance;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceToGroundStartHeightOffset;                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceToGroundHitOffset;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageAreaOverlapFilterType                       OverlapFilter;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FName                                       OverlapProfileName;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              OverlapObjectTypes;                                       // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType_BaseRound
// 0x0040 (0x00A0 - 0x0060)
class UDamageAreaType_BaseRound : public UDamageAreaType
{
public:
	struct FAttributeInitializationData                Radius;                                                   // 0x0060(0x0038) (Edit)
	bool                                               bComputeHitDirectionFromTarget;                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExpandRadiusOverTime;                                    // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExpandingRadiusIsHollow;                                 // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x009B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType_BaseRound");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType_Sphere
// 0x0008 (0x00A8 - 0x00A0)
class UDamageAreaType_Sphere : public UDamageAreaType_BaseRound
{
public:
	bool                                               bTreatAsRadiusDamage;                                     // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageFallsOff;                                          // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType_Sphere");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType_Cylinder
// 0x00A8 (0x0148 - 0x00A0)
class UDamageAreaType_Cylinder : public UDamageAreaType_BaseRound
{
public:
	struct FAttributeInitializationData                HalfHeight;                                               // 0x00A0(0x0038) (Edit)
	struct FAttributeInitializationData                HeightOffset;                                             // 0x00D8(0x0038) (Edit)
	struct FAttributeInitializationData                WedgeAngle;                                               // 0x0110(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType_Cylinder");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType_Cone
// 0x0070 (0x00D0 - 0x0060)
class UDamageAreaType_Cone : public UDamageAreaType
{
public:
	struct FAttributeInitializationData                Length;                                                   // 0x0060(0x0038) (Edit)
	struct FAttributeInitializationData                ConeAngle;                                                // 0x0098(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType_Cone");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType_Box
// 0x00B0 (0x0110 - 0x0060)
class UDamageAreaType_Box : public UDamageAreaType
{
public:
	struct FAttributeInitializationData                HalfHeight;                                               // 0x0060(0x0038) (Edit)
	struct FAttributeInitializationData                HalfWidth;                                                // 0x0098(0x0038) (Edit)
	struct FAttributeInitializationData                HalfDepth;                                                // 0x00D0(0x0038) (Edit)
	EDamageAreaBoxOriginType                           OriginType;                                               // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageFallsOff;                                          // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType_Box");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAreaType_Capsule
// 0x0070 (0x00D0 - 0x0060)
class UDamageAreaType_Capsule : public UDamageAreaType
{
public:
	struct FAttributeInitializationData                HalfHeight;                                               // 0x0060(0x0038) (Edit)
	struct FAttributeInitializationData                Radius;                                                   // 0x0098(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAreaType_Capsule");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageAsyncManager
// 0x0038 (0x0060 - 0x0028)
class UDamageAsyncManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<struct FCauseDamageAsyncRequestEntry>       CauseDamageRequests;                                      // 0x0038(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCauseDamageAsyncRequestEntry>       PendingCauseDamageRequests;                               // 0x0048(0x0010) (ZeroConstructor, Transient)
	int                                                MaxNumCauseDamagePerFrame;                                // 0x0058(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageAsyncManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageCauserInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageCauserInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageCauserInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.DamageStatics
// 0x0000 (0x0028 - 0x0028)
class UDamageStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageStatics");
		return ptr;
	}


	void STATIC_StopCausingDamageToTarget(class AActor* DamageCauser, class AActor* DamageTarget, class UClass* DamageData);
	void STATIC_StopCausingDamage(class AActor* DamageCauser, class UClass* DamageData);
	void STATIC_StopCausingAllDamage(class AActor* DamageCauser);
	struct FPipelineDamageInput STATIC_MakePipelineDamageInput(class AActor* DamageCauser, class AActor* DamageReceiver, class UClass* DamageType, class UClass* DamageSource, const struct FHitResult& HitInfo, const struct FVector& HitLocation, const struct FVector& HitDirection, const struct FVector& HitForceDirection, const struct FForceSelection& HitForceMagnitude);
	class FString STATIC_GetSummary_ForceSelection(const struct FForceSelection& ForceSelection);
	class UGbxDamageType* STATIC_GetDamageTypeFromClass(class UClass* DamageTypeClass);
	class UDamageSource* STATIC_GetDamageSourceFromClass(class UClass* DamageSourceClass);
	float STATIC_Conv_ForceSelectionToFloat(const struct FForceSelection& ForceSelection);
	struct FForceSelection STATIC_Conv_FloatToForceSelection(float ForceSelection);
	void STATIC_ApplyDamageInRadius(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float Radius, class UClass* DamageType, class UClass* DamageSource, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* EventInstigator, const struct FForceSelection& BaseImpactForce, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bDamageFalloff, class UDamageModifierComponent* DamageModifierComponent, class UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusDamageScale);
	void STATIC_ApplyDamageEx(const struct FPipelineDamageInput& PipelineInput, float BaseDamage);
	void STATIC_ApplyDamage(class AActor* DamageReceiver, float BaseDamage, class UClass* DamageType, class UClass* DamageSource, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class GbxGameSystemCore.DeathData
// 0x0018 (0x0048 - 0x0030)
class UDeathData : public UGbxDataAsset
{
public:
	TArray<class UGameStatData*>                       DiedStats;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              DissolveCorpseDelayBeforeDestroy;                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DeathData");
		return ptr;
	}

};


// Class GbxGameSystemCore.Decorator
// 0x0000 (0x0458 - 0x0458)
class ADecorator : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.Decorator");
		return ptr;
	}

};


// Class GbxGameSystemCore.DrunkenBaseMovementComponent
// 0x0048 (0x01C0 - 0x0178)
class UDrunkenBaseMovementComponent : public UActorComponent
{
public:
	float                                              StartApproachDistance;                                    // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartDelayTime;                                           // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EaseInTime;                                               // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0184(0x0008) MISSED OFFSET
	int                                                RandomNumberSeed;                                         // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0190(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DrunkenBaseMovementComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.DrunkenRandomMovementComponent
// 0x0050 (0x0210 - 0x01C0)
class UDrunkenRandomMovementComponent : public UDrunkenBaseMovementComponent
{
public:
	float                                              MaxSpreadAngle;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepartureAngle;                                        // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGravityAffectsDrunkenness;                               // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	float                                              DrunkenGravityScalar;                                     // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x01D0(0x0028) MISSED OFFSET
	bool                                               bFixDrunkenMovementAcceleration;                          // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x01F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DrunkenRandomMovementComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.DrunkenWaveMovementComponent
// 0x0030 (0x01F0 - 0x01C0)
class UDrunkenWaveMovementComponent : public UDrunkenBaseMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET
	float                                              GlobalWaveformScale;                                      // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRandomWaveOffsetTime;                                  // 0x01CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGravityAffectsDrunkenness;                               // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	float                                              DrunkenGravityScalar;                                     // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DrunkenWaveMovementComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.DynamicPhysicalAnimationComponent
// 0x01D8 (0x0350 - 0x0178)
class UDynamicPhysicalAnimationComponent : public UActorComponent
{
public:
	struct FName                                       PhysicalAnimationCollisionProfileName;                    // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KinematicAnimationCollisionProfileName;                   // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ExclusionBones;                                           // 0x0188(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               SupportBones;                                             // 0x0198(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x188];                                     // 0x01A8(0x0188) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0330(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasPhysicallyAnimatingBones;                             // 0x0340(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0341(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DynamicPhysicalAnimationComponent");
		return ptr;
	}


	void SetStrengthMultiplier(float NewValue);
	void SetSkeletalMeshComponent(class USkeletalMeshComponent* NewSkeletalMeshComponent);
	void SetRootMotionControl(EPhysicalAnimationRootMotionControl MotionControl);
	void SetHasAnimationPlaying(bool bPlaying);
	void SetEnableRagdoll(bool bEnable);
	void SetEnablePhysicalAnimation(bool bEnable, const struct FName& BodyName);
	void SetActiveProfile(class UPhysicalAnimationProfileAsset* Profile);
	void OnRigidBodyOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	float GetStrengthMultiplier();
	EPhysicalAnimationRootMotionControl GetRootMotionControl();
	void DetachBodyFromAllExternalRigidBodies(const struct FName& BodyName);
	void AttachBodyTo(const struct FName& BodyName, class UPrimitiveComponent* AttachToComponent, const struct FName& AttachToBodyName, float VelocitySpaceBlend, float BreakForce);
};


// Class GbxGameSystemCore.EnvQueryContext_AimStart
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AimStart : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_AimStart");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_AimEnd
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AimEnd : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_AimEnd");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_Owner_AimStart
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Owner_AimStart : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_Owner_AimStart");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_Owner_AimEnd
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Owner_AimEnd : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_Owner_AimEnd");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_LastResult
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_LastResult : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_LastResult");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_Origin
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext_Origin : public UEnvQueryContext_EnvQueryParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_Origin");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_PlayerMaster
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_PlayerMaster : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_PlayerMaster");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_Players
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Players : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_Players");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_QuerierAimDirection : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection2D
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_QuerierAimDirection2D : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection2D");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_QuerierAimLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_QuerierAimLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_QuerierAimLocation");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_QuerierMoveDirection
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_QuerierMoveDirection : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_QuerierMoveDirection");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_TargetNavLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetNavLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_TargetNavLocation");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryGenerator_TargetActorInfo
// 0x0048 (0x00A8 - 0x0060)
class UEnvQueryGenerator_TargetActorInfo : public UEnvQueryGenerator
{
public:
	float                                              MaxAge;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHostiles;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFriendlies;                                         // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowNeutrals;                                           // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FActorTagCompositeQuery                     TagQuery;                                                 // 0x0068(0x0010) (Edit)
	unsigned char                                      bUseAllowedTypes : 1;                                     // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               AllowedTypes;                                             // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AllowedTypesCache;                                        // 0x0090(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryGenerator_TargetActorInfo");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryItemType_Targetable
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Targetable : public UEnvQueryItemType_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryItemType_Targetable");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryItemType_TargetActorInfo
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_TargetActorInfo : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryItemType_TargetActorInfo");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_InputTarget
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext_InputTarget : public UEnvQueryContext_EnvQueryParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_InputTarget");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryContext_InputTargetMoveDir
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext_InputTargetMoveDir : public UEnvQueryContext_EnvQueryParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryContext_InputTargetMoveDir");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryParamsExt
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryParamsExt : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryParamsExt");
		return ptr;
	}


	bool STATIC_RunEnvQueryForBestLocation(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, struct FVector* ResultLocation);
	bool STATIC_RunEnvQueryForBestActor(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, class AActor** ResultActor);
	bool STATIC_RunEnvQueryForAllLocations(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, TArray<struct FVector>* ResultLocations);
	bool STATIC_RunEnvQueryForAllActors(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, TArray<class AActor*>* ResultActors);
	bool STATIC_HasQuery(const struct FEnvQueryParams& QueryParams);
	class FString STATIC_GetDescription(const struct FEnvQueryParams& QueryParams);
};


// Class GbxGameSystemCore.EnvQueryParamsProvider
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryParamsProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryParamsProvider");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryTest_ProjectilesHomingTowardsTarget
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_ProjectilesHomingTowardsTarget : public UEnvQueryTest
{
public:
	bool                                               bMustBeActivelyHoming;                                    // 0x01D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryTest_ProjectilesHomingTowardsTarget");
		return ptr;
	}

};


// Class GbxGameSystemCore.EnvQueryTestAsset
// 0x0008 (0x0038 - 0x0030)
class UEnvQueryTestAsset : public UGbxDataAsset
{
public:
	class UEnvQueryTest*                               EnvQueryTest;                                             // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EnvQueryTestAsset");
		return ptr;
	}

};


// Class GbxGameSystemCore.EQSProxyInterface
// 0x0000 (0x0028 - 0x0028)
class UEQSProxyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EQSProxyInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.ExplosionBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UExplosionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ExplosionBlueprintLibrary");
		return ptr;
	}


	class UParticleSystemComponent* STATIC_PlayExplosion(class UExplosionData* ExplosionData, float Size, const struct FVector& ExplosionLocation, class UObject* Context, class UClass* DamageType);
};


// Class GbxGameSystemCore.DamageInfoFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDamageInfoFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.DamageInfoFunctionLibrary");
		return ptr;
	}


	void STATIC_SetImpactForce(float InImpactForce, struct FDamageInfo* DamageInfo);
	void STATIC_SetDamageType(class UClass* InDamageType, struct FDamageInfo* DamageInfo);
	void STATIC_SetDamageSource(class UClass* InDamageSource, struct FDamageInfo* DamageInfo);
	void STATIC_SetDamageRadius(float InDamageRadius, struct FDamageInfo* DamageInfo);
	void STATIC_SetDamageModifierComponent(class UDamageModifierComponent* InModifierComponent, struct FDamageInfo* DamageInfo);
	void STATIC_SetDamageCauser(class AActor* InDamageCauser, struct FDamageInfo* DamageInfo);
	void STATIC_SetDamage(float InDamage, struct FDamageInfo* DamageInfo);
	void STATIC_SetCriticalHitDamageOverrides(const struct FCriticalHitDamageOverrides& Overrides, struct FDamageInfo* DamageInfo);
	void STATIC_SetApplyCriticalHitModsToAoEDamage(bool bApplyCriticalHitModsToAoEDamage, struct FDamageInfo* DamageInfo);
	float STATIC_GetImpactForce(const struct FDamageInfo& DamageInfo);
	class UClass* STATIC_GetDamageType(const struct FDamageInfo& DamageInfo);
	class UClass* STATIC_GetDamageSource(const struct FDamageInfo& DamageInfo);
	float STATIC_GetDamageRadius(const struct FDamageInfo& DamageInfo);
	class UDamageModifierComponent* STATIC_GetDamageModifierComponent(const struct FDamageInfo& DamageInfo);
	class AActor* STATIC_GetDamageCauser(const struct FDamageInfo& DamageInfo);
	float STATIC_GetDamage(const struct FDamageInfo& DamageInfo);
	struct FCriticalHitDamageOverrides STATIC_GetCriticalHitDamageOverrides(const struct FDamageInfo& DamageInfo);
	bool STATIC_GetApplyCriticalHitModsToAoEDamage(const struct FDamageInfo& DamageInfo);
};


// Class GbxGameSystemCore.ExplosionComponent
// 0x0060 (0x01D8 - 0x0178)
class UExplosionComponent : public UActorComponent
{
public:
	struct FGbxAttributeFloat                          ExplosionRadius;                                          // 0x0178(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	class UParticleSystem*                             ExplosionParticleSystem;                                  // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExplosionEffectCollection;                                // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParticleSystemSize;                                       // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bModifyParticleSystemSize;                                // 0x019C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UWwiseEvent*                                 ExplosionAudioEvent;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundPerceptionProperties                  SoundPerception;                                          // 0x01A8(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	class UFeedbackData*                               Feedback;                                                 // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFeedbackRangeScalar;                                   // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCauseExplosionDamage;                                    // 0x01C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLocation;                                        // 0x01C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01C6(0x0002) MISSED OFFSET
	struct FVector                                     LocationOverride;                                         // 0x01C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ExplosionComponent");
		return ptr;
	}


	void SetExplosionLocation(const struct FVector& NewLocation);
	void Explode(const struct FDamageInfo& DamageInfo);
};


// Class GbxGameSystemCore.ExplosionData
// 0x00D0 (0x0100 - 0x0030)
class UExplosionData : public UGbxDataAsset
{
public:
	class UExplosionSizeSelectionData*                 DefaultExplosionSizeData;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDamageTypeExplosionAssociation>     DamageTypeSelections;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseRadialBlurOverride;                                   // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FRadialBlurSelection                        RadialBlurOverride;                                       // 0x004C(0x000C) (Edit, DisableEditOnInstance)
	EExplosionTinnitusDuration                         TinnitusDuration;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBasicExplosion;                                       // 0x0059(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FGbxSignificanceEvent                       SignificanceEvent;                                        // 0x0060(0x0008) (Edit, DisableEditOnInstance)
	bool                                               bCensorThisExplosion;                                     // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UFeedbackData*                               FeedbackOverride;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleSystemOverride;                                   // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CensoredParticleSystemOverride;                           // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 AudioEventOverride;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImpactData*                                 ImpactOverride;                                           // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FeedbackFalloffMinDistanceScalar;                         // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FeedbackFalloffMaxDistanceScalar;                         // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                                      // 0x00A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ExplosionData");
		return ptr;
	}


	struct FExplosionSizeProperties SelectExplosion(float Size, class UClass* DamageType);
};


// Class GbxGameSystemCore.ExplosionSizeSelectionData
// 0x0010 (0x0040 - 0x0030)
class UExplosionSizeSelectionData : public UGbxDataAsset
{
public:
	TArray<struct FExplosionSizeProperties>            SizeProperties;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ExplosionSizeSelectionData");
		return ptr;
	}


	struct FExplosionSizeProperties GetExplosionPropertiesBySize(float Size);
};


// Class GbxGameSystemCore.EyesOfDeathComponent
// 0x0030 (0x0720 - 0x06F0)
class UEyesOfDeathComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x06F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.EyesOfDeathComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.FeedbackData
// 0x03C8 (0x03F8 - 0x0030)
class UFeedbackData : public UGbxDataAsset
{
public:
	int                                                FeedbackType;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FForceFeedbackChannelDetails>        ControllerRumbleDetails;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UForceFeedbackEffect*>                ExternalForceFeedbackEffects;                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FForceFeedbackChannelDetails>        MinControllerRumbleDetails;                               // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UForceFeedbackEffect*>                MinExternalForceFeedbackEffects;                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bAbsoluteControllerRumbleScale;                           // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UClass*                                      CameraShakeClass;                                         // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeClassNegativeXAxis;                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeClassYAxis;                                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeClassNegativeYAxis;                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OscillationDuration;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              OscillationBlendInTime;                                   // 0x00A4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              OscillationBlendOutTime;                                  // 0x00A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FROscillator                                RotOscillation;                                           // 0x00AC(0x0030) (Edit, EditConst)
	struct FVOscillator                                LocOscillation;                                           // 0x00DC(0x0030) (Edit, EditConst)
	struct FFOscillator                                FOVOscillation;                                           // 0x010C(0x0010) (Edit, EditConst)
	float                                              RandomShakeInterval;                                      // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRandomShakeScalar;                                     // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRandomShakeScalar;                                     // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                BaseCameraScale;                                          // 0x0128(0x0038) (Edit)
	TArray<struct FShakeScaleAssociation>              AdditionalCameraShakes;                                   // 0x0160(0x0010) (Edit, ZeroConstructor)
	EFeedbackDataFirstPersonImpulseType                FirstPersonImpulseType;                                   // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	struct FFeedbackDataFirstPersonImpulse             CustomFirstPersonImpulse;                                 // 0x0174(0x0060) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideWhenFinished;                                        // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	struct FVector2D                                   ContentDims;                                              // 0x01E4(0x0008) (Edit, IsPlainOldData)
	float                                              ParticleDepth;                                            // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EScreenParticleScalingMode                         ScalingMode;                                              // 0x01F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOwnerSee;                                            // 0x01F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysVisible;                                           // 0x01F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTickParticleEvenWhenPaused;                              // 0x01F3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLetSystemFinishAfterStopping;                            // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	struct FGbxHUDFeedbackImpulse                      HUDImpulse;                                               // 0x0208(0x0060) (Edit)
	bool                                               bLooping;                                                 // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              EffectFalloffMinDistance;                                 // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EffectFalloffMaxDistance;                                 // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	TArray<class UFeedbackData*>                       AssociatedFeedbacks;                                      // 0x0278(0x0010) (Edit, ZeroConstructor)
	bool                                               bUpdateSourceLocation;                                    // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleDownOverTime;                                       // 0x0289(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScaleOverTimeCurve;                                   // 0x028A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x028B(0x0005) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleOverTimeCurve;                                       // 0x0290(0x0078) (Edit)
	bool                                               bUseContinuousAttributeScale;                             // 0x0308(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ContinuousScale;                                          // 0x0310(0x0038) (Edit)
	struct FRuntimeFloatCurve                          ContinuousScaleCurve;                                     // 0x0348(0x0078) (Edit)
	bool                                               bPlayRadialBlur;                                          // 0x03C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	struct FRadialBlurSelection                        RadialBlurInfo;                                           // 0x03C4(0x000C) (Edit)
	bool                                               bOverrideRadialBlurCenter;                                // 0x03D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	struct FVector                                     RadialBlurWorldSpaceCenter;                               // 0x03D4(0x000C) (Edit, IsPlainOldData)
	float                                              RadialBlurMaxDistance;                                    // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	TArray<struct FLoopingShakeInfo>                   LoopingShakes;                                            // 0x03E8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FeedbackData");
		return ptr;
	}


	void STATIC_StopFeedbackForAll(class UFeedbackData* FeedbackData, class UObject* WorldContextObject);
	void STATIC_StopFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller);
	void STATIC_StopDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, class UObject* WorldContextObject);
	void STATIC_StopDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller);
	void STATIC_PerformFeedbackForAllAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void STATIC_PerformFeedbackForAll(class UFeedbackData* FeedbackData, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void STATIC_PerformFeedbackAtLocation(class UFeedbackData* FeedbackData, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void STATIC_PerformFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext);
	void STATIC_PerformDefaultFeedbackForAllAtLocation(const struct FFeedbackTableRowHandle& Feedback, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void STATIC_PerformDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void STATIC_PerformDefaultFeedbackAtLocation(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void STATIC_PerformDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext);
	float STATIC_GetFeedbackDuration(class UFeedbackData* FeedbackData);
	void STATIC_GetFeedbackDataRange(class UFeedbackData* FeedbackData, float* MinRange, float* MaxRange);
};


// Class GbxGameSystemCore.FirstPersonConfigurationData
// 0x0010 (0x0468 - 0x0458)
class AFirstPersonConfigurationData : public AActor
{
public:
	bool                                               bAutoFillComponentVariables;                              // 0x0458(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UGbxSkeletalMeshComponent*                   Arms;                                                     // 0x0460(0x0008) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FirstPersonConfigurationData");
		return ptr;
	}

};


// Class GbxGameSystemCore.FXVolumeManager
// 0x0050 (0x0078 - 0x0028)
class UFXVolumeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FXVolumeManager");
		return ptr;
	}


	void OnVolumeDestroyed(class AActor* DestroyedActor);
	void OnPlayerDestroyed(class AActor* DestroyedActor);
};


// Class GbxGameSystemCore.FXVolume
// 0x0020 (0x04B0 - 0x0490)
class AFXVolume : public AVolume
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleDepth;                                            // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FName                                       TagName;                                                  // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDepthPriorityWorld;                                      // 0x04A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FXVolume");
		return ptr;
	}


	void OnActorLeftVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnActorEnteredVolume(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class GbxGameSystemCore.GameplayTagBasedAttributeValueResolver
// 0x0048 (0x0070 - 0x0028)
class UGameplayTagBasedAttributeValueResolver : public UAttributeValueResolver
{
public:
	TArray<struct FGameplayTagToValueMap>              TagToValueMap;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FAttributeInitializationData                ValueIfNoTagIsFound;                                      // 0x0038(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameplayTagBasedAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameplayTagContainerComponent
// 0x0030 (0x01A8 - 0x0178)
class UGameplayTagContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       TagContainer;                                             // 0x0188(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameplayTagContainerComponent");
		return ptr;
	}


	class UGameplayTagContainerComponent* STATIC_GetGameplayTagContainerFromActor(class AActor* Actor, EContainsTagComponent* Branches);
};


// Class GbxGameSystemCore.GameplayTask_RunEnvQuery
// 0x0028 (0x0090 - 0x0068)
class UGameplayTask_RunEnvQuery : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Failure;                                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameplayTask_RunEnvQuery");
		return ptr;
	}


	class UGameplayTask_RunEnvQuery* STATIC_RunEnvQueryOnLocation(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams, const struct FVector& Location);
	class UGameplayTask_RunEnvQuery* STATIC_RunEnvQueryOnActor(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams, class AActor* Actor);
	class UGameplayTask_RunEnvQuery* STATIC_RunEnvQuery(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams);
	bool STATIC_GetResultLocations(const struct FEnvQueryResult& QueryResult, TArray<struct FVector>* ResultLocations);
	bool STATIC_GetResultLocation(const struct FEnvQueryResult& QueryResult, struct FVector* ResultLocation);
	bool STATIC_GetResultActors(const struct FEnvQueryResult& QueryResult, TArray<class AActor*>* ResultActors);
	bool STATIC_GetResultActor(const struct FEnvQueryResult& QueryResult, class AActor** ResultActor);
};


// Class GbxGameSystemCore.GameResourceData
// 0x0028 (0x0058 - 0x0030)
class UGameResourceData : public UGbxDataAsset
{
public:
	struct FText                                       ResourceName;                                             // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIntegerOnlyUpdates;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSerializeInSavegame;                                     // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	class UGameResourcePoolData*                       DefaultResourcePoolData;                                  // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourceData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolAttributePropertyValueResolver
// 0x0008 (0x00B8 - 0x00B0)
class UGameResourcePoolAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	class UGameResourceData*                           Resource;                                                 // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolAttributePropertyValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolClampedMaxValueResolver
// 0x0000 (0x00B8 - 0x00B8)
class UGameResourcePoolClampedMaxValueResolver : public UGameResourcePoolAttributePropertyValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolClampedMaxValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolClampedValueResolver
// 0x0008 (0x00C0 - 0x00B8)
class UGameResourcePoolClampedValueResolver : public UGameResourcePoolAttributePropertyValueResolver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolClampedValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolCurrentValueResolver
// 0x0008 (0x0030 - 0x0028)
class UGameResourcePoolCurrentValueResolver : public UAttributeValueResolver
{
public:
	class UGameResourceData*                           Resource;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolCurrentValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolCurrentValueNoPauseOnHealResolver
// 0x0000 (0x0030 - 0x0030)
class UGameResourcePoolCurrentValueNoPauseOnHealResolver : public UGameResourcePoolCurrentValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolCurrentValueNoPauseOnHealResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolData
// 0x0080 (0x00B0 - 0x0030)
class UGameResourcePoolData : public UGbxDataAsset
{
public:
	class UGameResourceData*                           Resource;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseMinValue;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                BaseMaxValue;                                             // 0x0040(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              StartingValue;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               StartWithMinValue;                                        // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               StartWithMaxValue;                                        // 0x007D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateCurrentValueOnExtremaChange;                       // 0x007E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x007F(0x0001) MISSED OFFSET
	float                                              MinimumReservedValue;                                     // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckFilledAgainstOldValues;                             // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              BaseConsumptionRate;                                      // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseActiveRegenerationRate;                               // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BasePassiveRegenerationRate;                              // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BasePassivePercentRegenerationRate;                       // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BasePassiveMissingPercentRegenerationRate;                // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseOnIdleRegenerationRate;                               // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseOnIdleRegenerationDelay;                              // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseOnDepletedRegenerationDelay;                          // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecentImpulseTimer;                                       // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReplicateToOwner;                                    // 0x00AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameResourcePoolReplicationType>      ReplicationType;                                          // 0x00AD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameResourcePoolManagerComponent
// 0x0128 (0x02A0 - 0x0178)
class UGameResourcePoolManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	TArray<struct FGameResourcePool>                   ResourcePools;                                            // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FGameResourcePool>                   PendingResourcePools;                                     // 0x0190(0x0010) (ZeroConstructor)
	struct FGameResourcePoolNet                        ReplicatedPoolData;                                       // 0x01A0(0x0010) (Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET
	TArray<class UGameResourcePoolData*>               InitialResourcePools;                                     // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameResourceUserEvent>              ResourceEvents;                                           // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC8];                                      // 0x01D8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolManagerComponent");
		return ptr;
	}


	void RemoveResourcePoolDelegate(class UGameResourceData* InResourceData, const struct FName& DelegatePropertyName, const struct FScriptDelegate& ScriptDelegate);
	void RecalculateAttributeInitializedPoolProperties();
	void OnOwnerExperienceLevelChanged(int OldExperienceLevel);
	struct FGameResourcePoolReference GetResourcePoolByResource(class UGameResourceData* Resource);
	struct FGameResourcePoolReference CreatePool(class UGameResourcePoolData* PoolData, bool bReinitializeExistingPool);
	void ClearResourcePoolDelegate(class UGameResourceData* InResourceData, const struct FName& DelegatePropertyName);
	void AddResourcePoolDelegate(class UGameResourceData* InResourceData, const struct FName& DelegatePropertyName, const struct FScriptDelegate& ScriptDelegate);
};


// Class GbxGameSystemCore.GameResourcePoolFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameResourcePoolFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameResourcePoolFunctionLibrary");
		return ptr;
	}


	void STATIC_SetResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue);
	void STATIC_ResetResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource);
	void STATIC_ResetResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool);
	void STATIC_RefillResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MaxPercentage);
	bool STATIC_IsResourcePoolInState(const struct FGameResourcePoolReference& InPool, EGameResourcePoolState InState);
	struct FName STATIC_GetDelegatePrefixForResourceEvent(struct FGameResourceUserEvent* InResourceUserEvent);
	bool STATIC_EqualEqual_ResourcePoolReference(const struct FGameResourcePoolReference& A, const struct FGameResourcePoolReference& B);
	bool STATIC_EqualEqual_ResourcePoolData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourcePoolData* ResourcePoolData);
	bool STATIC_EqualEqual_ResourceData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourceData* ResourceData);
	void STATIC_DrainResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MinPercentage);
	void STATIC_DeleteResourcePool(struct FGameResourcePoolReference* InPool);
	void STATIC_ClearResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource);
	void STATIC_ClearResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool);
	void STATIC_BreakResourcePoolReference(const struct FGameResourcePoolReference& InPool, bool* bValid, float* CurrentValue, float* MinValue, float* MaxValue);
	void STATIC_AdjustResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue);
};


// Class GbxGameSystemCore.GameStatChannel
// 0x0008 (0x0070 - 0x0068)
class UGameStatChannel : public UChannel
{
public:
	TWeakObjectPtr<class UGameStatsComponent>          GameStatsComponent;                                       // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameStatChannel");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameStatData
// 0x0038 (0x0068 - 0x0030)
class UGameStatData : public UGbxDataAsset
{
public:
	int                                                DefaultValue;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinValue;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMinValue;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                MaxValue;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMaxValue;                                             // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FText                                       StatName;                                                 // 0x0048(0x0028) (Edit)
	bool                                               bProfileStat;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPartyStat;                                               // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameStatData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameStateAttributeContextResolver
// 0x0000 (0x0050 - 0x0050)
class UGameStateAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameStateAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameStatList
// 0x0010 (0x0040 - 0x0030)
class UGameStatList : public UGbxDataAsset
{
public:
	TArray<class UGameStatData*>                       GameStats;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameStatList");
		return ptr;
	}

};


// Class GbxGameSystemCore.GameStatsComponent
// 0x0018 (0x0190 - 0x0178)
class UGameStatsComponent : public UActorComponent
{
public:
	TArray<struct FGameStat>                           GameStats;                                                // 0x0178(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UGameStatChannel>             GameStatChannel;                                          // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameStatsComponent");
		return ptr;
	}


	void UpdateStat(class UGameStatData* GameStat, int NewValue);
	void IncrementStat(class UGameStatData* GameStat, int Amount);
	int GetStatValue(class UGameStatData* GameStat);
	TArray<struct FGameStat> GetGameStats();
};


// Class GbxGameSystemCore.GameStatsManager
// 0x0030 (0x0488 - 0x0458)
class AGameStatsManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0458(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GameStatsManager");
		return ptr;
	}


	void UpdateStat(class AActor* StatContext, class UGameStatData* GameStat, int NewValue);
	void IncrementStat(class AActor* StatContext, class UGameStatData* GameStat, int IncrementAmount);
	int GetStatValue(class AActor* StatContext, class UGameStatData* GameStat);
};


// Class GbxGameSystemCore.GbxAction_AICharge
// 0x0088 (0x0140 - 0x00B8)
class UGbxAction_AICharge : public UGbxAction_SimpleAnim
{
public:
	bool                                               bSetLoopSpeedManually;                                    // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              AnimLoopSpeed;                                            // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartBlendInTime;                                         // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoopBlendInTime;                                          // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopBlendInTime;                                          // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimMeshList>                       StartAnims;                                               // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimMeshList>                       LoopAnims;                                                // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimMeshList>                       MissAnims;                                                // 0x00F0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimMeshList>                       StrikeAnims;                                              // 0x0100(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimMeshList>                       HitWallAnims;                                             // 0x0110(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimMeshList>                       ReachCliffAnims;                                          // 0x0120(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimMeshList>                       StopForFriendlyAnims;                                     // 0x0130(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_AICharge");
		return ptr;
	}


	void OnStrike(class AActor* Actor);
	void OnStopForFriendly(class AActor* Actor);
	void OnReachCliff(class AActor* Actor);
	void OnMiss(class AActor* Actor);
	void OnLoop(class AActor* Actor);
	void OnHitWall(class AActor* Actor);
};


// Class GbxGameSystemCore.GbxAction_BlueprintBase
// 0x0008 (0x0068 - 0x0060)
class UGbxAction_BlueprintBase : public UGbxAction
{
public:
	bool                                               bAutoCompleted;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_BlueprintBase");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_ConditionContainer
// 0x0018 (0x0078 - 0x0060)
class UGbxAction_ConditionContainer : public UGbxAction
{
public:
	EActionSelectionMethod                             ActionSelectionMethod;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FConditionActionPair>                ConditionList;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_ConditionContainer");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_DirectionContainer
// 0x0068 (0x00C8 - 0x0060)
class UGbxAction_DirectionContainer : public UGbxAction
{
public:
	TArray<struct FDirectionActionData>                DirectionList;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FRelativeDirectionData                      DirectionData;                                            // 0x0070(0x0050) (Edit)
	EDirectionPlane                                    Plane;                                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_DirectionContainer");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_DodgePicker
// 0x0040 (0x00A0 - 0x0060)
class UGbxAction_DodgePicker : public UGbxAction
{
public:
	class UClass*                                      IdleLeft;                                                 // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      IdleRight;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovingLeft;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovingLeftBackward;                                       // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovingLeftForward;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovingRight;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovingRightBackward;                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovingRightForward;                                       // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_DodgePicker");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_DropshipSpawn
// 0x01A0 (0x0258 - 0x00B8)
class UGbxAction_DropshipSpawn : public UGbxAction_SimpleAnim
{
public:
	struct FAnimMeshList                               StartAnims;                                               // 0x00B8(0x0078) (Edit)
	struct FAnimMeshList                               InAirAnims;                                               // 0x0130(0x0078) (Edit)
	struct FAnimMeshList                               RecoveryAnims;                                            // 0x01A8(0x0078) (Edit)
	float                                              BlendInTime;                                              // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlot;                                                 // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationLerpTime;                                         // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveWithSpawnPointTime;                                   // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwitchToFallingTime;                                      // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnimStart;                                                // 0x0240(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           AnimInAir;                                                // 0x0248(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           AnimRecovery;                                             // 0x0250(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_DropshipSpawn");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_KeyedContainer
// 0x0008 (0x0068 - 0x0060)
class UGbxAction_KeyedContainer : public UGbxAction
{
public:
	struct FGameplayTag                                ActionKey;                                                // 0x0060(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_KeyedContainer");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_Launch
// 0x0150 (0x0208 - 0x00B8)
class UGbxAction_Launch : public UGbxAction_SimpleAnim
{
public:
	float                                              VelocityMinimum;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityScale;                                            // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityUpBoost;                                          // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationTime;                                             // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimMeshList                               InAirAnims;                                               // 0x00C8(0x0078) (Edit)
	struct FAnimMeshList                               RecoveryAnims;                                            // 0x0140(0x0078) (Edit)
	float                                              BlendInTime;                                              // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlot;                                                 // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimInAir;                                                // 0x01C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           AnimRecovery;                                             // 0x01D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FAnimActionDef                              InAirAnim;                                                // 0x01D8(0x0018) (Deprecated)
	struct FAnimActionDef                              RecoveryAnim;                                             // 0x01F0(0x0018) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_Launch");
		return ptr;
	}

};


// Class GbxGameSystemCore.MotionMatchedAnimationTable
// 0x0058 (0x00A0 - 0x0048)
class UMotionMatchedAnimationTable : public UGbxAnimTable
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET
	struct FName                                       RootMotionBone;                                           // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RootMotionBoneUpAxis;                                     // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpAxisIsNegative;                                        // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RootMotionBoneForwardAxis;                                // 0x0082(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForwardAxisIsNegative;                                   // 0x0083(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RootBoneForwardAxis;                                      // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRootForwardAxisIsNegative;                               // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RootBoneUpAxis;                                           // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRootUpAxisIsNegative;                                    // 0x0087(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoMotionSpeed;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdlePoseDriving;                                      // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              MinIdleTime;                                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDynamicToKinematicTransition                      DynamicToKinematicTransition;                             // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0094(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              BlendToRecoveryTime;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAllowedDeviation;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.MotionMatchedAnimationTable");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_Ragdoll
// 0x00D0 (0x0188 - 0x00B8)
class UGbxAction_Ragdoll : public UGbxAction_SimpleAnim
{
public:
	struct FAnimActionDef                              RagdollAnim;                                              // 0x00B8(0x0018) (Edit)
	float                                              RagdollDelayTime;                                         // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpwardForceMultiplier;                                    // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TerminalResultantVelocity;                                // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHaltMotionBeforeImpulseApplication;                      // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              RagdollAnimBlendInTime;                                   // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FAnimActionDef                              RagdollLoopingAnim;                                       // 0x00E8(0x0018) (Edit)
	bool                                               bPlayLoopingAnimWhileNotIdle;                             // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              MinRagdollTime;                                           // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlot;                                                 // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttachedObjectFollow>               AttachedObjects;                                          // 0x0110(0x0010) (Edit, ZeroConstructor)
	class UMotionMatchedAnimationTable*                RecoveryAnimations;                                       // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             DeathReactionTag;                                         // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGetup;                                                // 0x0130(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              GetupIdleTime;                                            // 0x0134(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GetupIdleSpeedThreshold;                                  // 0x0138(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FName                                       GetupTestBone;                                            // 0x0140(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAxis>                                 TestBoneUpAxis;                                           // 0x0148(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUpAxisIsNegative;                                        // 0x0149(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAxis>                                 TestBoneForwardAxis;                                      // 0x014A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bForwardAxisIsNegative;                                   // 0x014B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FAnimActionDef                              GetupAnimUp;                                              // 0x0150(0x0018) (Deprecated)
	struct FAnimActionDef                              GetupAnimDown;                                            // 0x0168(0x0018) (Deprecated)
	float                                              GetupBlendInTime;                                         // 0x0180(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GetupBlendOutTime;                                        // 0x0184(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_Ragdoll");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_RandomContainer
// 0x0010 (0x0070 - 0x0060)
class UGbxAction_RandomContainer : public UGbxAction
{
public:
	TArray<struct FRandomActionPair>                   ActionList;                                               // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_RandomContainer");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAction_StretchBones
// 0x0088 (0x0140 - 0x00B8)
class UGbxAction_StretchBones : public UGbxAction_SimpleAnim
{
public:
	struct FAnimActionDef                              StretchAnimation;                                         // 0x00B8(0x0018) (Edit)
	float                                              BlendInTime;                                              // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlot;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStretchBonesSettings                       StretchBonesSettings;                                     // 0x00E0(0x0030) (Edit)
	bool                                               bUniformStretch;                                          // 0x0110(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   TargetKey;                                                // 0x0118(0x0010) (Deprecated)
	struct FVector                                     TargetOffset;                                             // 0x0128(0x000C) (Deprecated, IsPlainOldData)
	EStretchBonesActorTrackingStyle                    ActorTrackingStyle;                                       // 0x0134(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bTraceToGround;                                           // 0x0135(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0136(0x0002) MISSED OFFSET
	float                                              TraceToGroundDistance;                                    // 0x0138(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MaxPredictionDistance;                                    // 0x013C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAction_StretchBones");
		return ptr;
	}

};


// Class GbxGameSystemCore.StretchBonesBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UStretchBonesBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StretchBonesBlueprintLibrary");
		return ptr;
	}


	TArray<struct FGbxActionRegister> STATIC_SetStretchBonesTarget(class AActor* TargetActor, const struct FVector& TargetPosition, TArray<struct FGbxActionRegister>* GbxActionRegisters);
	TArray<struct FGbxActionRegister> STATIC_SetStretchBonesDistance(float Distance, TArray<struct FGbxActionRegister>* GbxActionRegisters);
};


// Class GbxGameSystemCore.GbxActionBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxActionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxActionBlueprintLibrary");
		return ptr;
	}


	void STATIC_StopLoopingActionClass(class UClass* ActionClass, class AActor* Target);
	void STATIC_StopActionSlot(const struct FName& ActionSlotName, class AActor* Target);
	void STATIC_StopActions(class AActor* Target);
	void STATIC_StopActionClass(class UClass* ActionClass, class AActor* Target);
	TArray<struct FGbxActionRegister> STATIC_SetObjectGbxActionRegister(const struct FName& RegisterKey, class UObject* Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters);
	TArray<struct FGbxActionRegister> STATIC_SetNameGbxActionRegister(const struct FName& RegisterKey, const struct FName& Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters);
	TArray<struct FGbxActionRegister> STATIC_SetIntGbxActionRegister(const struct FName& RegisterKey, int Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters);
	TArray<struct FGbxActionRegister> STATIC_SetFloatGbxActionRegister(const struct FName& RegisterKey, float Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters);
	void STATIC_K2_UpdateActionPlayRate(class UGbxAction* Action, float PlayRate);
	void STATIC_K2_UpdateActionDirection(class UGbxAction* Action, const struct FVector& Direction);
	void STATIC_K2_StopActionObj(class UGbxAction* Action, class AActor* Target);
	void STATIC_K2_ShowGbxActionScreenLogs(bool bShowLogsOnScreen);
	void STATIC_K2_Resume(class UGbxAction* Action);
	void STATIC_K2_ReplicatedProceedToNextSection(class UGbxAction* Action);
	void STATIC_K2_ReplicatedJumpToNextSection(class UGbxAction* Action);
	void STATIC_K2_ProceedToNextSection(class UGbxAction* Action);
	void STATIC_K2_Pause(class UGbxAction* Action);
	void STATIC_K2_JumpToNextSection(class UGbxAction* Action);
	float STATIC_K2_GetTimeRemaining(class UGbxAction* Target);
	float STATIC_K2_GetMaxCurrentTime(class UGbxAction* Action);
	class UGbxAction* STATIC_K2_GetActionByClass(class UClass* ActionClass, class AActor* Target);
	class FString STATIC_GetSummary_AnimActionDef(const struct FAnimActionDef& AnimActionDef);
	class UClass* STATIC_GetKeyedActionClass(const struct FGameplayTag& ActionKey, class AActor* Target);
};


// Class GbxGameSystemCore.GbxActionComponent
// 0x0268 (0x03E0 - 0x0178)
class UGbxActionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	TArray<struct FGbxActionSlot>                      ActionSlots;                                              // 0x0180(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDataActionPair>                     EditorKeyedActionList;                                    // 0x0190(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDataActionPair_Spawn>               SpawnKeyedActionList;                                     // 0x01A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDataActionPair_SpawnMesh>           SpawnMeshKeyedActionList;                                 // 0x01B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDataActionPair_SmartObject>         SmartObjectKeyedActionList;                               // 0x01C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x150];                                     // 0x01D0(0x0150) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionStarted;                                          // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActionStopped;                                          // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0340(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxActionComponent");
		return ptr;
	}


	void UpdateActionRemoteServer(const struct FActionState_Base& ActionData);
	void StopOnRemoteServer(int ManagerRepId, EGbxActionEndState EndState);
	void StopLoopingActionClass(class UClass* ActionClass);
	void StopActionSlot(const struct FName& ActionSlotName);
	void StopActions();
	void StopActionClass(class UClass* ActionClass);
	void PlayOnRemoteServer(class UClass* ActionClass, const struct FActionState_Base& ActionData);
	void OnComponentUnregistered(class UActorComponent* ActorComponent);
	void OnComponentDetached(class USceneComponent* SceneComponent);
	void OnComponentAttached(class USceneComponent* SceneComponent);
	void NotifyInterruptRequest();
	class UGbxAction* K2_Play(class UClass* ActionClass);
	bool K2_IsPlayingObj(class UGbxAction* Action);
	class UGbxAction* K2_GetActionBySlot(const struct FName& ActionSlotName);
	class UGbxAction* K2_GetActionByClass(class UClass* ActionClass);
	bool IsPlayingSlot(const struct FName& ActionSlotName);
	bool IsPlayingClass(class UClass* ActionClass);
};


// Class GbxGameSystemCore.GbxActionDataAsset
// 0x0000 (0x0030 - 0x0030)
class UGbxActionDataAsset : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxActionDataAsset");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxActionManager
// 0x0110 (0x0568 - 0x0458)
class AGbxActionManager : public AActor
{
public:
	struct FActionStateNet                             ActionRepWrapper;                                         // 0x0458(0x0108) (Net)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0560(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxActionManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAnimBlueprintProfile
// 0x0278 (0x02A8 - 0x0030)
class UGbxAnimBlueprintProfile : public UGbxDataAsset
{
public:
	bool                                               bImportedLegIKSettings;                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              FootIKTraceUpScale;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootIKTraceDownScale;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootIKOffsetInterpSpeed;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FootIKTargetOffset;                                       // 0x0040(0x000C) (Edit, IsPlainOldData)
	int                                                FootIKFootLODThreshold;                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               MeshOffsetCharacterSpeedRange;                            // 0x0050(0x0008) (Edit)
	float                                              MeshIKOffsetInterpSpeed;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLimitFootDistanceToMeshOffset;                     // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FVector                                     SlopeAdaptation;                                          // 0x0060(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBoneReference                              SlopeAdaptationBone;                                      // 0x0070(0x0018) (Edit)
	float                                              MaxSlopeAngle;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeNormalMinInterpSpeed;                                // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeNormalMaxInterpSpeed;                                // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               SlopeNormalCharacterSpeedRange;                           // 0x0094(0x0008) (Edit)
	int                                                FootIKLODThreshold;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootIKLODInterpolationSpeed;                              // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FScreenSizeSelection                        FootIkScreenSizeThreshold;                                // 0x00A8(0x0018) (Edit)
	bool                                               bUseFootIkScreenSizeThreshold;                            // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FScreenSizeSelection                        FootIkTraceScreenSizeThreshold;                           // 0x00C8(0x0018) (Edit)
	bool                                               bUseFootIkTraceScreenSizeThreshold;                       // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              FootIKReachPrecision;                                     // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FootIKMaxIterations;                                      // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TArray<struct FAnimLegIKDefinition>                FootIKLegsDefinition;                                     // 0x00F0(0x0010) (Edit, ZeroConstructor)
	float                                              MinVelocity;                                              // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x0104(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FBoneReference                              BoneToModify;                                             // 0x0108(0x0018) (Edit)
	struct FBoneReference                              ParentBoneToModify;                                       // 0x0120(0x0018) (Edit)
	TEnumAsByte<EGbxLookAxisOption>                    ParentLookAxis;                                           // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	TArray<struct FBoneBlendParams>                    BonesToModify;                                            // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBoneBlendParams>                    EyeBonesToModify;                                         // 0x0150(0x0010) (Edit, ZeroConstructor)
	float                                              LookAtBlinkAngleOverride;                                 // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtBlinkAngleOverride;                             // 0x0164(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEyeMovement;                                          // 0x0165(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0166(0x0002) MISSED OFFSET
	struct FRotator                                    EyeShiftMin;                                              // 0x0168(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    EyeShiftMax;                                              // 0x0174(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    EyeGlanceMin;                                             // 0x0180(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    EyeGlanceMax;                                             // 0x018C(0x000C) (Edit, IsPlainOldData)
	float                                              EyeFocusTimeMin;                                          // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeFocusTimeMax;                                          // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeGlanceTimeMin;                                         // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeGlanceTimeMax;                                         // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeShiftTimeMin;                                          // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeShiftTimeMax;                                          // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LookAtEyeLODThreshold;                                    // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LookAtLODThreshold;                                       // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAtLODInterpolationSpeed;                              // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FScreenSizeSelection                        LookAtEyeScreenSizeThreshold;                             // 0x01C0(0x0018) (Edit)
	bool                                               bUseLookAtEyeScreenSizeThreshold;                         // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FScreenSizeSelection                        LookAtScreenSizeThreshold;                                // 0x01E0(0x0018) (Edit)
	bool                                               bUseLookAtScreenSizeThreshold;                            // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	TArray<struct FForwardDynamicsNodeProfile>         ForwardDynamicsNodeList;                                  // 0x0200(0x0010) (Edit, ZeroConstructor)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TeethOffsetOverride;                                      // 0x0218(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseTeethOffsetOverride;                                  // 0x0224(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FBoneReference                              UpperTeethBoneRef;                                        // 0x0228(0x0018) (Deprecated)
	TMap<struct FName, struct FName>                   BoneTagToBoneOverrideNameMap;                             // 0x0240(0x0050) (Edit, ZeroConstructor)
	bool                                               bUseUpperTeethBoneRefOverride;                            // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UAnimSequence*                               DefaultIdleLoopAnimation;                                 // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAnimBlueprintProfile");
		return ptr;
	}


	void RebuildBoneLists();
	void AnimBlueprintImportFunction(EAnimBPProfileImport ImportType);
};


// Class GbxGameSystemCore.GbxAnimStateMachineDefinition
// 0x0028 (0x0058 - 0x0030)
class UGbxAnimStateMachineDefinition : public UGbxDataAsset
{
public:
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               StateMachines;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAnimStateGroup>                     StateGroups;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAnimStateMachineDefinition");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAnimStateManager_Falling
// 0x0010 (0x0048 - 0x0038)
class UGbxAnimStateManager_Falling : public UGbxAnimStateManager
{
public:
	class UGbxCharacterAnimInstance*                   GbxCharAnimInst;                                          // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxCharMoveComponent;                                     // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAnimStateManager_Falling");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAnimStateManager_RootMotion
// 0x0008 (0x0040 - 0x0038)
class UGbxAnimStateManager_RootMotion : public UGbxAnimStateManager
{
public:
	class UGbxCharacterMovementComponent*              GbxCharMoveComponent;                                     // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAnimStateManager_RootMotion");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAttributeData
// 0x0010 (0x0040 - 0x0030)
class UGbxAttributeData : public UGbxDataAsset
{
public:
	class UAttributeContextResolver*                   ContextResolver;                                          // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAttributeValueResolver*                     ValueResolver;                                            // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributeData");
		return ptr;
	}


	bool CanSetBaseValue();
	bool CanBindToOnChangedEvent();
	bool CanAddModifiers();
	bool CanAddAndRemoveModifiers();
};


// Class GbxGameSystemCore.GbxAttributeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxAttributeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributeFunctionLibrary");
		return ptr;
	}


	void STATIC_UnbindFromOnAttributeChanged(const struct FGbxAttributeDelegateBindingHandle& BindingHandle);
	void STATIC_UnbindEventFromOnIntegerAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeInteger* Attribute);
	void STATIC_UnbindEventFromOnFloatAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeFloat* Attribute);
	void STATIC_UnbindAllEventsFromOnIntegerAttributeChanged(struct FGbxAttributeInteger* Attribute);
	void STATIC_UnbindAllEventsFromOnFloatAttributeChanged(struct FGbxAttributeFloat* Attribute);
	void STATIC_RemoveMultipleAttributeModifiers(TArray<struct FGbxAttributeModifierHandle>* ModifierHandles);
	void STATIC_RemoveModifierFromGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, struct FGbxAttributeModifierHandle* ModifierHandle, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
	bool STATIC_RemoveAttributeModifier(struct FGbxAttributeModifierHandle* ModifierHandle);
	struct FGbxAttributeDelegateBindingHandle STATIC_RefreshBindingToOnAttributeChangedEvent(const struct FGbxAttributeDelegateBindingHandle& BindingHandle, class UObject* ContextSource);
	struct FGbxAttributeInteger STATIC_MakeGbxAttributeInteger(int BaseValue);
	struct FGbxAttributeFloat STATIC_MakeGbxAttributeFloat(float BaseValue);
	int STATIC_GetValueOfAttributeAsInteger(class UGbxAttributeData* Attribute, class UObject* ContextSource, int DefaultValue);
	bool STATIC_GetValueOfAttributeAsBoolean(class UGbxAttributeData* Attribute, class UObject* ContextSource, bool DefaultValue);
	float STATIC_GetValueOfAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, float DefaultValue);
	float STATIC_GetValueFromAttributeDefinedRow(const struct FDataTableRowHandle& RowHandle, class UObject* ContextSource);
	float STATIC_EvaluateAttributeInitializer(class UClass* Initializer, class UObject* ContextSource);
	float STATIC_EvaluateAttributeInitializationData(const struct FAttributeInitializationData& InitializationData, class UObject* ContextSource);
	bool STATIC_EqualEqual_GbxAttributeIntegerValue(const struct FGbxAttributeInteger& A, int B);
	bool STATIC_EqualEqual_GbxAttributeInteger(const struct FGbxAttributeInteger& A, const struct FGbxAttributeInteger& B);
	bool STATIC_EqualEqual_GbxAttributeFloatValue(const struct FGbxAttributeFloat& A, float B);
	bool STATIC_EqualEqual_GbxAttributeFloat(const struct FGbxAttributeFloat& A, const struct FGbxAttributeFloat& B);
	class FString STATIC_Conv_GbxAttributeModifierHandleToString(const struct FGbxAttributeModifierHandle& Attribute);
	class FString STATIC_Conv_GbxAttributeIntegerToString(const struct FGbxAttributeInteger& Attribute);
	int STATIC_Conv_GbxAttributeIntegerToInteger(const struct FGbxAttributeInteger& Attribute);
	class FString STATIC_Conv_GbxAttributeFloatToString(const struct FGbxAttributeFloat& Attribute);
	float STATIC_Conv_GbxAttributeFloatToFloat(const struct FGbxAttributeFloat& Attribute);
	class FString STATIC_Conv_AttributeInitializationDataToString(const struct FAttributeInitializationData& InitData);
	void STATIC_BreakGbxAttributeInteger(const struct FGbxAttributeInteger& Attribute, int* Value, int* BaseValue);
	void STATIC_BreakGbxAttributeFloat(const struct FGbxAttributeFloat& Attribute, float* Value, float* BaseValue);
	void STATIC_BindEventToOnIntegerAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeInteger* Attribute);
	void STATIC_BindEventToOnFloatAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeFloat* Attribute);
	struct FGbxAttributeDelegateBindingHandle STATIC_BindEventToOnAttributeChanged(class UGbxAttributeData* Attribute, class UObject* ContextSource, const struct FScriptDelegate& Delegate);
	TArray<struct FGbxAttributeModifierHandle> STATIC_ApplyMultipleAttributeEffects(TArray<struct FAttributeEffectData> Effects, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource);
	void STATIC_ApplyMultipleAttributeBaseValueData(TArray<struct FAttributeBaseValueData> BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext);
	struct FGbxAttributeModifierHandle STATIC_ApplyAttributeEffect(const struct FAttributeEffectData& Effect, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
	void STATIC_ApplyAttributeBaseValueData(const struct FAttributeBaseValueData& BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
	struct FGbxAttributeModifierHandle STATIC_AddModifierToGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, EGbxAttributeModifierType ModifierType, float ModifierValue, EGbxAttributeModifierActionExecOutput* ModifierActionResult);
};


// Class GbxGameSystemCore.GbxAttributesComponent
// 0x0010 (0x0188 - 0x0178)
class UGbxAttributesComponent : public UActorComponent
{
public:
	TArray<class UGbxAttributeSet*>                    AttributeSets;                                            // 0x0178(0x0010) (Edit, ExportObject, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributesComponent");
		return ptr;
	}


	bool IsAttributeSetClassUnrelatedToExistingSet(class UClass* AttributeSetClass);
};


// Class GbxGameSystemCore.GbxAttributeSet
// 0x0008 (0x0030 - 0x0028)
class UGbxAttributeSet : public UObject
{
public:
	class UAttributeContextResolver*                   ContextResolver;                                          // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributeSet");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAttributeSetBlueprint
// 0x0010 (0x00F8 - 0x00E8)
class UGbxAttributeSetBlueprint : public UBlueprint
{
public:
	TArray<struct FPropertyToAttributeMapping>         PropertyToAttributeMapping;                               // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributeSetBlueprint");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAttributeSetContextResolver
// 0x0008 (0x0058 - 0x0050)
class UGbxAttributeSetContextResolver : public UAttributeContextResolver
{
public:
	class UClass*                                      AttributeSetClass;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributeSetContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxAttributeSetValueResolver
// 0x0000 (0x00B0 - 0x00B0)
class UGbxAttributeSetValueResolver : public UAttributePropertyValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxAttributeSetValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxBlackboardKeySelectorExt
// 0x0000 (0x0028 - 0x0028)
class UGbxBlackboardKeySelectorExt : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxBlackboardKeySelectorExt");
		return ptr;
	}


	void STATIC_SetValueAsVector(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FVector& Value);
	void STATIC_SetValueAsTargetActorInfo(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FTargetActorInfo& Value);
	void STATIC_SetValueAsString(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const class FString& Value);
	void STATIC_SetValueAsRotator(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FRotator& Value);
	void STATIC_SetValueAsObject(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UObject* Value);
	void STATIC_SetValueAsName(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FName& Value);
	void STATIC_SetValueAsInt(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, int Value);
	void STATIC_SetValueAsFloat(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, float Value);
	void STATIC_SetValueAsFlag(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value, float Duration);
	void STATIC_SetValueAsEnum(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, unsigned char Value);
	void STATIC_SetValueAsClass(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UClass* Value);
	void STATIC_SetValueAsBool(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value);
	struct FVector STATIC_GetValueAsVector(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	struct FTargetActorInfo STATIC_GetValueAsTargetActorInfo(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class FString STATIC_GetValueAsString(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	struct FRotator STATIC_GetValueAsRotator(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class UObject* STATIC_GetValueAsObject(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	struct FName STATIC_GetValueAsName(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	int STATIC_GetValueAsInt(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	float STATIC_GetValueAsFloat(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	unsigned char STATIC_GetValueAsEnum(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class UClass* STATIC_GetValueAsClass(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	bool STATIC_GetValueAsBool(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class AActor* STATIC_GetValueAsActor(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class FString STATIC_GetPropertyDescription(const struct FGbxBlackboardKeySelector& BBKey, class UProperty* Property);
	void STATIC_ClearValue(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
};


// Class GbxGameSystemCore.GbxBoneModifyProfile
// 0x0030 (0x0060 - 0x0030)
class UGbxBoneModifyProfile : public UGbxDataAsset
{
public:
	class UAnimSequence*                               ReferenceAnimation;                                       // 0x0030(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseTranslation;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotation;                                             // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxBoneModifyProfile_PoseMode                     PoseMode;                                                 // 0x003B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AnimationTime;                                            // 0x003C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<struct FBoneModifyInfo>                     Bones;                                                    // 0x0040(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FBoneModifyState>                    BoneModStates;                                            // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxBoneModifyProfile");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCameraShake
// 0x0000 (0x0180 - 0x0180)
class UGbxCameraShake : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCameraShake");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_ActorIsOfClass
// 0x0010 (0x0098 - 0x0088)
class UGbxCondition_ActorIsOfClass : public UGbxCondition
{
public:
	class UClass*                                      InputClass;                                               // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckAbsolute;                                           // 0x0090(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_ActorIsOfClass");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_AttackedRecently
// 0x0080 (0x0108 - 0x0088)
class UGbxCondition_AttackedRecently : public UGbxCondition
{
public:
	struct FGbxParam                                   AttackedWithin;                                           // 0x0088(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_AttackedRecently");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_Blueprint
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_Blueprint : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_Blueprint");
		return ptr;
	}


	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
};


// Class GbxGameSystemCore.GbxCondition_CharacterMass
// 0x0020 (0x00A8 - 0x0088)
class UGbxCondition_CharacterMass : public UGbxCondition
{
public:
	EMassComparison                                    ComparisonTest;                                           // 0x0088(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FMassSelection                              Mass;                                                     // 0x0090(0x0018) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_CharacterMass");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_Comparison
// 0x0078 (0x0100 - 0x0088)
class UGbxCondition_Comparison : public UGbxCondition
{
public:
	struct FAttributeInitializationData                OperandA;                                                 // 0x0088(0x0038) (Edit, BlueprintReadOnly)
	EConditionComparisonOperatorType                   Operator;                                                 // 0x00C0(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                OperandB;                                                 // 0x00C8(0x0038) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_Comparison");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_Compound
// 0x0018 (0x00A0 - 0x0088)
class UGbxCondition_Compound : public UGbxCondition
{
public:
	class UGbxCondition*                               Condition1;                                               // 0x0088(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECompoundConditionOperatorType                     Operator;                                                 // 0x0090(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UGbxCondition*                               Condition2;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_Compound");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_Flag
// 0x0048 (0x00D0 - 0x0088)
class UGbxCondition_Flag : public UGbxCondition
{
public:
	struct FGbxFlagEval                                FlagEval;                                                 // 0x0088(0x0048) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_Flag");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_HasActorTags
// 0x0010 (0x0098 - 0x0088)
class UGbxCondition_HasActorTags : public UGbxCondition
{
public:
	struct FActorTagCompositeQuery                     ActorTagQuery;                                            // 0x0088(0x0010) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_HasActorTags");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_HasGameplayTags
// 0x0020 (0x00A8 - 0x0088)
class UGbxCondition_HasGameplayTags : public UGbxCondition
{
public:
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0088(0x0020) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_HasGameplayTags");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_HasInstigatedStatusEffect
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_HasInstigatedStatusEffect : public UGbxCondition
{
public:
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_HasInstigatedStatusEffect");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_IsBlackboardTarget
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_IsBlackboardTarget : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_IsBlackboardTarget");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_IsLowOnHealth
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_IsLowOnHealth : public UGbxCondition
{
public:
	float                                              LowHealth;                                                // 0x0088(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEvaluateOnContextOwner;                                  // 0x008C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_IsLowOnHealth");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_IsPlayerController
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_IsPlayerController : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_IsPlayerController");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_IsTargetAimedAtMe
// 0x0080 (0x0108 - 0x0088)
class UGbxCondition_IsTargetAimedAtMe : public UGbxCondition
{
public:
	struct FGbxParam                                   AngleThreshold;                                           // 0x0088(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_IsTargetAimedAtMe");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_IsTrue
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_IsTrue : public UGbxCondition
{
public:
	bool                                               bIsTrue;                                                  // 0x0088(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_IsTrue");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_List
// 0x0018 (0x00A0 - 0x0088)
class UGbxCondition_List : public UGbxCondition
{
public:
	ECompoundConditionOperatorType                     Operator;                                                 // 0x0088(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	TArray<class UGbxCondition*>                       Conditions;                                               // 0x0090(0x0010) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_List");
		return ptr;
	}


	bool RequiresNativeClass();
	class UClass* GetRequiredInterface();
};


// Class GbxGameSystemCore.GbxCondition_SensedRecently
// 0x0098 (0x0120 - 0x0088)
class UGbxCondition_SensedRecently : public UGbxCondition
{
public:
	struct FGbxParam                                   SensedWithin;                                             // 0x0088(0x0080) (Edit)
	TArray<class UClass*>                              Senses;                                                   // 0x0108(0x0010) (Edit, ZeroConstructor)
	bool                                               bAnyTarget;                                               // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_SensedRecently");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_TeamAttitude
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_TeamAttitude : public UGbxCondition
{
public:
	unsigned char                                      bHostile : 1;                                             // 0x0088(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bNeutral : 1;                                             // 0x0088(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bFriendly : 1;                                            // 0x0088(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_TeamAttitude");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCondition_TeamCheck
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_TeamCheck : public UGbxCondition
{
public:
	class UTeam*                                       InputTeam;                                                // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCondition_TeamCheck");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCustomizationInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxCustomizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCustomizationInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCustomizationTargetData
// 0x0018 (0x0048 - 0x0030)
class UGbxCustomizationTargetData : public UGbxDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCustomizationTargetData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxCustomizationTypeData
// 0x0070 (0x00A0 - 0x0030)
class UGbxCustomizationTypeData : public UGbxDataAsset
{
public:
	struct FText                                       CustomizationTypeName;                                    // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       CustomizationTypeDescription;                             // 0x0048(0x0028) (Edit, DisableEditOnInstance)
	bool                                               bUnique;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UGbxCustomizationTypeData*                   DependentCustomizationType;                               // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxCustomizationTargetData*                 DependentCustomizationTarget;                             // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UGameStatData>                AssociatedUnlockStat;                                     // 0x0078(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxCustomizationTypeData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxDataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxDataTableFunctionLibrary");
		return ptr;
	}


	float STATIC_GetDataTableValueFromHandle(const struct FDataTableValueHandle& ValueHandle, class UObject* ContextSource, float DefaultValue);
	bool STATIC_GetDataTableValue(class UDataTable* Table, const struct FName& RowName, const struct FName& ValueName, class UScriptStruct* ValueInStructType, int* OutValue);
	class FString STATIC_Conv_DataTableValueHandleToString(const struct FDataTableValueHandle& ValueHandle);
};


// Class GbxGameSystemCore.GbxEnvQueryHotSpotProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxEnvQueryHotSpotProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxEnvQueryHotSpotProviderInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxEqsRenderingComponent
// 0x0120 (0x0850 - 0x0730)
class UGbxEqsRenderingComponent : public UEQSRenderingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0730(0x0008) MISSED OFFSET
	bool                                               bExecuteQuery;                                            // 0x0738(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	EEqsTraceDrawMode                                  TraceDrawMode;                                            // 0x0739(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x073A(0x0006) MISSED OFFSET
	class FString                                      ExternalQueryParams;                                      // 0x0740(0x0010) (Edit, ZeroConstructor)
	struct FEnvQueryParams                             EnvQueryParams;                                           // 0x0750(0x00B8) (Edit)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0808(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxEqsRenderingComponent");
		return ptr;
	}


	void GetAvailableEnvQueryParamRefNames(TArray<class FString>* Names);
};


// Class GbxGameSystemCore.GbxEventDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UGbxEventDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FGbxBlueprintlegateBinding>          DelegateBindings;                                         // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxEventDelegateBinding");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFeedbackBase
// 0x0000 (0x0030 - 0x0030)
class UGbxFeedbackBase : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFeedbackBase");
		return ptr;
	}


	void STATIC_StopGbxFeedback(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller);
	void STATIC_PlayGbxFeedbackData3D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, const struct FVector& SourceLocation, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
	void STATIC_PlayGbxFeedbackData2D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext);
};


// Class GbxGameSystemCore.GbxFeedbackData
// 0x01E8 (0x0218 - 0x0030)
class UGbxFeedbackData : public UGbxFeedbackBase
{
public:
	int                                                FeedbackType;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FForceFeedbackChannelDetails>        ControllerRumbleDetails;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UForceFeedbackEffect*>                ExternalControllerRumbleDetails;                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FForceFeedbackChannelDetails>        MinControllerRumbleDetails;                               // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UForceFeedbackEffect*>                MinExternalControllerRumbleDetails;                       // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bAbsoluteControllerRumbleScale;                           // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UClass*                                      CameraShakeBase;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeDirectionalY;                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomShakeInterval;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRandomShakeScalar;                                     // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRandomShakeScalar;                                     // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x009C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseContinuousAttributeScale;                             // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	struct FAttributeInitializationData                ContinuousScale;                                          // 0x00A0(0x0038) (Edit)
	struct FRuntimeFloatCurve                          ContinuousScaleCurve;                                     // 0x00D8(0x0078) (Edit)
	bool                                               bScaleDownOverTime;                                       // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScaleOverTimeCurve;                                   // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleOverTimeCurve;                                       // 0x0158(0x0078) (Edit)
	bool                                               bPlayRadialBlur;                                          // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	struct FRadialBlurSelection                        RadialBlurInfo;                                           // 0x01D4(0x000C) (Edit)
	bool                                               bOverrideRadialBlurCenter;                                // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseContextAsWorldSpaceCenter;                            // 0x01E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x01E2(0x0002) MISSED OFFSET
	struct FVector                                     RadialBlurWorldSpaceCenter;                               // 0x01E4(0x000C) (Edit, IsPlainOldData)
	float                                              RadialBlurMaxDistance;                                    // 0x01F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	class UParticleSystem*                             ScreenParticles;                                          // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideWhenFinished;                                        // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	struct FVector2D                                   ContentDims;                                              // 0x0204(0x0008) (Edit, IsPlainOldData)
	float                                              ParticleDepth;                                            // 0x020C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EScreenParticleScalingMode                         ScalingMode;                                              // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOwnerSee;                                            // 0x0211(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysVisible;                                           // 0x0212(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTickParticleEvenWhenPaused;                              // 0x0213(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLetSystemFinishAfterStopping;                            // 0x0214(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0215(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFeedbackData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFeedbackList
// 0x0010 (0x0040 - 0x0030)
class UGbxFeedbackList : public UGbxFeedbackBase
{
public:
	TArray<class UGbxFeedbackData*>                    FeedbackList;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFeedbackList");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFeedbackManager
// 0x0018 (0x0040 - 0x0028)
class UGbxFeedbackManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFeedbackManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFlagData
// 0x0018 (0x0048 - 0x0030)
class UGbxFlagData : public UGbxDataAsset
{
public:
	class UGbxCondition*                               Condition;                                                // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAttributeContextResolver*                   ContextResolver;                                          // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxFlagValueResolver*                       ValueResolver;                                            // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFlagData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFlagFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxFlagFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFlagFunctionLibrary");
		return ptr;
	}


	void STATIC_SetFlagValue(class UObject* WorldContextObject, bool bNewValue, struct FGbxFlag* Flag);
	void STATIC_SetFlagTrueTimed(class UObject* WorldContextObject, float Duration, struct FGbxFlag* Flag);
	void STATIC_SetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, bool bNewValue);
	void STATIC_SetFlagDataTrueTimed(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float Duration);
	bool STATIC_GetFlagValue(class UObject* WorldContextObject, const struct FGbxFlag& Flag);
	bool STATIC_GetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource);
	bool STATIC_FlagTrueWithin(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
	bool STATIC_FlagTrueFor(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
	bool STATIC_FlagFalseWithin(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
	bool STATIC_FlagFalseFor(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime);
	bool STATIC_FlagDataTrueWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
	bool STATIC_FlagDataTrueFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
	bool STATIC_FlagDataFalseWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
	bool STATIC_FlagDataFalseFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
};


// Class GbxGameSystemCore.FlagPropertyTestContext
// 0x0018 (0x0040 - 0x0028)
class UFlagPropertyTestContext : public UObject
{
public:
	struct FGbxFlag                                    TestFlag;                                                 // 0x0028(0x000C)
	struct FFlagPropertyTestStruct                     TestStruct;                                               // 0x0034(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FlagPropertyTestContext");
		return ptr;
	}

};


// Class GbxGameSystemCore.FlagPropertyTestContextResolver
// 0x0000 (0x0050 - 0x0050)
class UFlagPropertyTestContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.FlagPropertyTestContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFlagValueResolver
// 0x0000 (0x0028 - 0x0028)
class UGbxFlagValueResolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFlagValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxFlagValueResolver_Property
// 0x0080 (0x00A8 - 0x0028)
class UGbxFlagValueResolver_Property : public UGbxFlagValueResolver
{
public:
	struct FParsedProperty                             Property;                                                 // 0x0028(0x0080) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxFlagValueResolver_Property");
		return ptr;
	}

};


// Class GbxGameSystemCore.BaseMenuStackMenuInfo
// 0x0000 (0x0028 - 0x0028)
class UBaseMenuStackMenuInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.BaseMenuStackMenuInfo");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGbxGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameplayStatics");
		return ptr;
	}


	void STATIC_SetTeamCollisionResponseWith(class AActor* Actor, class AActor* TeamActor, bool bIgnore);
	void STATIC_SetTeamCollisionResponseToChannel(class AActor* Actor, ETeamCollisionChannel Channel, bool bIgnore);
	void STATIC_SetTeamCollisionChannelFrom(class AActor* Actor, class AActor* TeamActor, bool bOn);
	void STATIC_SetTeamCollisionChannel(class AActor* Actor, ETeamCollisionChannel Channel, bool bOn);
	bool STATIC_SetPlayerMaster(class AActor* AIActor, class AActor* PlayerMaster);
	void STATIC_SetComponentTeamCollisionResponseWith(class USceneComponent* Component, class AActor* TeamActor, bool bIgnore, bool bPropagateToChildren);
	void STATIC_SetComponentTeamCollisionResponseToChannel(class USceneComponent* Component, ETeamCollisionChannel Channel, bool bIgnore, bool bPropagateToChildren);
	void STATIC_SetComponentTeamCollisionChannel(class USceneComponent* Component, ETeamCollisionChannel Channel, bool bOn, bool bPropagateToChildren);
	void STATIC_ProjectFromQueryToSimulation(class UGbxSkeletalMeshComponent* Component, const struct FName& BodyName, struct FVector* InOutHitPoint, struct FVector* InOutHitNormal);
	class APlayerController* STATIC_GetPrimaryPlayerController(class UObject* WorldContextObject);
	class AGbxCharacter* STATIC_GetAssociatedPrimaryCharacter(class AActor* Actor);
	struct FTransform STATIC_AlignTransformToSurface(const struct FTransform& Transform, const struct FVector& SurfaceNormal);
};


// Class GbxGameSystemCore.GbxGameStatsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxGameStatsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameStatsBlueprintLibrary");
		return ptr;
	}


	void STATIC_UpdateStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int NewValue);
	void STATIC_UpdateStat(class AActor* ContextActor, class UGameStatData* StatData, int NewValue);
	void STATIC_IncrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int Amount);
	void STATIC_IncrementStat(class AActor* ContextActor, class UGameStatData* StatData, int Amount);
	int STATIC_GetStatValue(class AActor* ContextActor, class UGameStatData* StatData);
	void STATIC_DecrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int Amount);
	void STATIC_DecrementStat(class AActor* ContextActor, class UGameStatData* StatData, int Amount);
};


// Class GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxGameSystemCoreBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetComponentPhysicalRotation(class UPrimitiveComponent* Target, float PitchRotation, float YawRotation, float RollRotation, const struct FName& BoneName);
	void STATIC_ResourceUnlockTurns(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockTickAndRefreshBones(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockRotation(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockMovement(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockMomentum(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockMantling(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockLookAtTargetLocation(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockLookAt(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockJumping(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockHandIk(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockGod(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockFootIkTracing(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockFootIk(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockDodging(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockDemigod(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockCrouching(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockAIThinking(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceUnlockAiming(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockTurns(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockTickAndRefreshBones(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockTargetable(class AActor* Actor, const struct FName& Reason, bool bTargetable);
	void STATIC_ResourceLockRotation(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockPhysicsRotation(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockMovement(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockMomentum(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockMantling(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockLookAtTargetLocation(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockLookAt(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockJumping(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockHandIk(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockGod(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockFootIkTracing(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockFootIk(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockDodging(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockDemigod(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockCrouching(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockAIThinking(class AActor* Actor, const struct FName& Reason, bool bAbort);
	void STATIC_ResourceLockAiming(class AActor* Actor, const struct FName& Reason);
	bool STATIC_IsSplitScreen(class UGameInstance* GameInstance);
	bool STATIC_IsPlayer(class AActor* Actor);
	bool STATIC_IsContentCensored(class UObject* WorldContextObject);
	void STATIC_HoverComponentAtActor(class USceneComponent* Component, class AActor* TargetActor, float Altitude, float Radius, float AccelerationTime, float Speed, float Duration, const struct FLatentActionInfo& LatentInfo);
	struct FVector STATIC_GetRelativeDirection(const struct FRelativeDirectionData& RelativeDirectionData, const struct FVector& DefaultDirection, class AActor* SourceActor, const struct FName& SourceSocketName, class AActor* TargetActor);
	float STATIC_GetCurveFloatValue(const struct FRuntimeFloatCurve& Curve, float InTime);
	bool STATIC_GetAreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors);
	bool STATIC_GetAreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor);
	bool STATIC_GetAreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors);
	bool STATIC_GetAreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor);
	void STATIC_GetActorListTrimmedToBestCluster(TArray<class AActor*> InputActors, class AActor* SourceActor, float ClusterRadius, bool bPreferClusterContainingCurrentTarget, TArray<class AActor*>* OutputActors, struct FVector* ClusterMidpoint);
	void STATIC_BranchOnIsPlayer(class AActor* Actor, EIsPlayerExecOutput* Branches);
	void STATIC_BranchOnIsAutonomous(class AActor* Actor, EIsAutonomousOuput* Branches);
	void STATIC_AreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, EPlayersOverlappingActorOutput* Branches);
	void STATIC_AreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, EPlayersOverlappingActorOutput* Branches);
	void STATIC_AreAnyPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*> Volumes, EPlayersInVolumeOutput* Branches);
	void STATIC_AreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, EPlayersOverlappingActorOutput* Branches);
	void STATIC_AreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, EPlayersOverlappingActorOutput* Branches);
	void STATIC_AreAllPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*> Volumes, EPlayersInVolumeOutput* Branches);
};


// Class GbxGameSystemCore.GbxHUDFeedbackData
// 0x0058 (0x0088 - 0x0030)
class UGbxHUDFeedbackData : public UGbxDataAsset
{
public:
	struct FVector                                     MoveWeight;                                               // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveAcceleration;                                         // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveDeceleration;                                         // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveMaxVelocity;                                          // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LookWeight;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LookAcceleration;                                         // 0x0068(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LookDeceleration;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LookMaxVelocity;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GamepadLookMultiplier;                                    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxHUDFeedbackData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxInventoryCategoryData
// 0x0008 (0x0038 - 0x0030)
class UGbxInventoryCategoryData : public UGbxDataAsset
{
public:
	bool                                               bIsPremiumCurrencyCategory;                               // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxInventoryCategoryData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxLevelSequenceControllableInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxLevelSequenceControllableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxLevelSequenceControllableInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxMediaData
// 0x0020 (0x0050 - 0x0030)
class UGbxMediaData : public UGbxDataAsset
{
public:
	TScriptInterface<class UMediaAudioSinkProviderInterface> AudioSinkProvider;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxMediaData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxMediaManager
// 0x0020 (0x0048 - 0x0028)
class UGbxMediaManager : public UGbxBaseMediaManager
{
public:
	TArray<class UMediaPlayer*>                        ActiveMediaPlayers;                                       // 0x0028(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxMediaManager");
		return ptr;
	}


	void OnMovieMediaOpenFailed(const class FString& DeviceUrl);
	void OnMovieMediaClosed();
	void OnMovieEndReached();
	class UMediaPlayer* STATIC_GbxPlayMovie(class UObject* WorldContextObject, class UGbxMediaData* InMediaData);
};


// Class GbxGameSystemCore.GbxNavAvoidanceInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxNavAvoidanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxNavAvoidanceInterface");
		return ptr;
	}


	void SetObstacleAvoidanceLock(bool bDisable, const struct FName& Reason);
};


// Class GbxGameSystemCore.GbxPainCausingVolume
// 0x0038 (0x0500 - 0x04C8)
class AGbxPainCausingVolume : public APainCausingVolume
{
public:
	struct FAttributeInitializationData                GbxDamagePerSec;                                          // 0x04C8(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxPainCausingVolume");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxParamExt
// 0x0000 (0x0028 - 0x0028)
class UGbxParamExt : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxParamExt");
		return ptr;
	}


	bool STATIC_IsValueInRangePure(const struct FGbxParam& Param, float Value, class UObject* Context);
	bool STATIC_IsValueInRange(const struct FGbxParam& Param, float Value, class UObject* Context);
	class FString STATIC_GetParamPropertyDescription(const struct FGbxParam& Param, class UProperty* Property);
	struct FText STATIC_GetParamDescriptionText(const struct FGbxParam& Param);
	class FString STATIC_GetParamDescription(const struct FGbxParam& Param);
	struct FText STATIC_GetNamedParamDescriptionText(const struct FGbxNamedParam& Param);
	class FString STATIC_GetNamedParamDescription(const struct FGbxNamedParam& Param);
	float STATIC_EvaluatePure(const struct FGbxParam& Param, class UObject* Context);
	float STATIC_EvaluateIntPure(const struct FGbxParam& Param, class UObject* Context);
	float STATIC_EvaluateInt(const struct FGbxParam& Param, class UObject* Context);
	bool STATIC_EvaluateBoolPure(const struct FGbxParam& Param, class UObject* Context);
	bool STATIC_EvaluateBool(const struct FGbxParam& Param, class UObject* Context);
	float STATIC_Evaluate(const struct FGbxParam& Param, class UObject* Context);
};


// Class GbxGameSystemCore.GbxPerceptionComponent
// 0x0008 (0x0278 - 0x0270)
class UGbxPerceptionComponent : public UAIPerceptionComponent
{
public:
	float                                              StimulusStrengthOverrideTime;                             // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxPerceptionComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxPhysicsCollisionHandler
// 0x0008 (0x0048 - 0x0040)
class UGbxPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxPhysicsCollisionHandler");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxPhysicsSettings
// 0x0120 (0x0148 - 0x0028)
class UGbxPhysicsSettings : public UObject
{
public:
	TMap<TEnumAsByte<EPhysicalSurface>, struct FSurfaceTypeInfo> SurfaceTypeInfoMap;                                       // 0x0028(0x0050) (Edit, ZeroConstructor, Config)
	struct FRigidBodyImpactSettings                    RigidBodyImpactSettings;                                  // 0x0078(0x00B0) (Edit, Config)
	struct FDestructionForceSmoothing                  ForceSmoothing;                                           // 0x0128(0x000C) (Edit, Config)
	float                                              LowDamageThreshold;                                       // 0x0134(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MediumDamageThreshold;                                    // 0x0138(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HighDamageThreshold;                                      // 0x013C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RagdollWeaponForceFeatherPercent;                         // 0x0140(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxPhysicsSettings");
		return ptr;
	}


	void STATIC_StaticSetRigidBodySimulationInteractability(class USkeletalMeshComponent* Comp, bool bAesthetic, const struct FName& BodyName);
};


// Class GbxGameSystemCore.GbxQueryManager
// 0x0088 (0x00B0 - 0x0028)
class UGbxQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                MaxActiveQueries;                                         // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FGbxQuery>                           Queries;                                                  // 0x0038(0x0010) (ZeroConstructor, Transient)
	class UWorld*                                      World;                                                    // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvQueryManager;                                          // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxQueryManager");
		return ptr;
	}


	void NotifyAIHotSpotListChangedFor(class AActor* OwnerActor);
};


// Class GbxGameSystemCore.GbxSignificanceSettings
// 0x0050 (0x0088 - 0x0038)
class UGbxSignificanceSettings : public UDeveloperSettings
{
public:
	TMap<struct FName, struct FGbxSignificanceEventData> Events;                                                   // 0x0038(0x0050) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSignificanceSettings");
		return ptr;
	}


	void STATIC_EnumerateSignificanceEvents(TArray<struct FName>* OutEvents);
};


// Class GbxGameSystemCore.GbxSimpleMotionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxSimpleMotionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSimpleMotionLibrary");
		return ptr;
	}


	void STATIC_UpdateVectorMotion(float DeltaTime, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FVector& TargetValue, struct FVector* CurrentValue, struct FSimpleMotionInstanceState* State);
	void STATIC_UpdateRotatorMotion(float DeltaTime, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FRotator& TargetValue, bool bShortestRotation, struct FRotator* CurrentValue, struct FSimpleMotionInstanceState* State);
	void STATIC_UpdateFloatMotion(float DeltaTime, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, float* CurrentValue, struct FSimpleMotionInstanceState* State);
	void STATIC_TeleportVectorMotion(float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FVector& TargetValue, struct FVector* CurrentValue, struct FSimpleMotionInstanceState* State);
	void STATIC_TeleportRotatorMotion(float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FRotator& TargetValue, struct FRotator* CurrentValue, struct FSimpleMotionInstanceState* State);
	void STATIC_TeleportFloatMotion(float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, float* CurrentValue, struct FSimpleMotionInstanceState* State);
	void STATIC_ResetMotionState(struct FSimpleMotionInstanceState* State);
};


// Class GbxGameSystemCore.GbxSkeletalMeshActor
// 0x0000 (0x04E0 - 0x04E0)
class AGbxSkeletalMeshActor : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSkeletalMeshActor");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxStaticMeshComponent
// 0x0010 (0x07C0 - 0x07B0)
class UGbxStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxStaticMeshComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxSubtitleManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxSubtitleManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxSubtitleManagerInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxThreatSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxThreatSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxThreatSystemInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxUIFormattableParameter
// 0x0000 (0x0028 - 0x0028)
class UGbxUIFormattableParameter : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxUIFormattableParameter");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxUIName
// 0x0020 (0x0050 - 0x0030)
class UGbxUIName : public UGbxDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0038(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxUIName");
		return ptr;
	}


	struct FText GetFormattedText();
};


// Class GbxGameSystemCore.GestaltPartData
// 0x0008 (0x0038 - 0x0030)
class UGestaltPartData : public UGbxDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GestaltPartData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GestaltPartData_Mesh
// 0x0048 (0x0080 - 0x0038)
class UGestaltPartData_Mesh : public UGestaltPartData
{
public:
	class UGestaltData*                                GestaltData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       GestaltMeshPartName;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FName>                               AdditionalGestaltMeshPartNames;                           // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FGestaltChildPartData>               ChildParts;                                               // 0x0058(0x0010) (Edit, ZeroConstructor)
	struct FGestaltPartFoleyAccessory                  FoleyAudioAccessory;                                      // 0x0068(0x0018) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GestaltPartData_Mesh");
		return ptr;
	}


	void EnumerateGestaltMeshPartNames(TArray<struct FName>* OutPartNameList);
};


// Class GbxGameSystemCore.GestaltPartData_Random
// 0x0010 (0x0048 - 0x0038)
class UGestaltPartData_Random : public UGestaltPartData
{
public:
	TArray<struct FGestaltRandomPartData>              RandomParts;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GestaltPartData_Random");
		return ptr;
	}

};


// Class GbxGameSystemCore.GestaltPartListData
// 0x0030 (0x0060 - 0x0030)
class UGestaltPartListData : public UGbxDataAsset
{
public:
	TArray<class UGestaltPartData*>                    RequiredParts;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGesaltOptionalPartData>             OptionalParts;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<class UGestaltPartData*>                    SpecialParts;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GestaltPartListData");
		return ptr;
	}

};


// Class GbxGameSystemCore.GlobalBoneModifyProfileState
// 0x0158 (0x0188 - 0x0030)
class UGlobalBoneModifyProfileState : public UDataAsset
{
public:
	struct FBMPOverride                                DefaultTransform;                                         // 0x0030(0x0018) (Edit, BlueprintReadOnly)
	TMap<TSoftObjectPtr<class USkeleton>, struct FBMPOverride> SkeletonOverrides;                                        // 0x0048(0x0050) (Edit, BlueprintReadOnly, ZeroConstructor)
	TMap<TSoftObjectPtr<class UClass>, struct FBMPOverride> CharacterOverrides;                                       // 0x0098(0x0050) (Edit, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty GbxGameSystemCore.GlobalBoneModifyProfileState.SkeletonExceptions
	unsigned char                                      UnknownData01[0x50];                                      // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty GbxGameSystemCore.GlobalBoneModifyProfileState.CharacterExceptions

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GlobalBoneModifyProfileState");
		return ptr;
	}

};


// Class GbxGameSystemCore.GlobalBoneModifyProfile
// 0x0058 (0x0080 - 0x0028)
class UGlobalBoneModifyProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty GbxGameSystemCore.GlobalBoneModifyProfile.GlobalProfileSet
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GlobalBoneModifyProfile");
		return ptr;
	}

};


// Class GbxGameSystemCore.GlobalBoneModBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGlobalBoneModBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GlobalBoneModBlueprintLibrary");
		return ptr;
	}


	void STATIC_K2_SetGBMP(class UGlobalBoneModifyProfileState* State, bool bEnabled);
};


// Class GbxGameSystemCore.GravityOverrideVolume
// 0x0010 (0x04B0 - 0x04A0)
class AGravityOverrideVolume : public APhysicsVolume
{
public:
	float                                              GravityZ;                                                 // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTeamGravity;                                       // 0x04A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	int                                                OverrideTeamGravity;                                      // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GravityOverrideVolume");
		return ptr;
	}

};


// Class GbxGameSystemCore.HealthResourcePoolModifierAttributeValueResolver
// 0x0008 (0x0030 - 0x0028)
class UHealthResourcePoolModifierAttributeValueResolver : public UAttributeValueResolver
{
public:
	class UGameResourcePoolData*                       HealthResourcePool;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HealthResourcePoolModifierAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.HealthTypeData
// 0x0048 (0x0078 - 0x0030)
class UHealthTypeData : public UGbxDataAsset
{
public:
	struct FLinearColor                                DisplayColor;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class FString                                      BarBackgroundFrameName;                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                         BalanceData;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           NoDamagePhysMat;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           HealthTypeModifierAttribute;                              // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HealthTypeData");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UHitReactionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetHitReactionData(class AActor* Actor, class UHitReactionData* HitReactionData);
	void STATIC_ScriptHitReaction(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, const struct FName& BoneName, const struct FForceSelection& Force);
	void STATIC_ScriptDeath(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, const struct FName& BoneName, const struct FForceSelection& Force);
	void STATIC_ResourceUnlockHitReactions(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockHitReactions(class AActor* Actor, const struct FName& Reason);
	void STATIC_RemoveHitReactionLiveLayer(class AActor* Actor, class UClass* Layer);
	void STATIC_RemoveHitReactionDeathLayer(class AActor* Actor, class UClass* Layer);
	struct FVector STATIC_K2_GetHitLocationFromAction(class UGbxAction* Action);
	struct FVector STATIC_K2_GetHitDirectionFromAction(class UGbxAction* Action, bool bLocalSpace);
	class UObject* STATIC_K2_GetHitCauserFromAction(class UGbxAction* Action);
	float STATIC_K2_GetHealthPercentFromAction(class UGbxAction* Action);
	float STATIC_K2_GetForceFromAction(class UGbxAction* Action);
	int STATIC_K2_GetBoneIndexFromAction(class UGbxAction* Action);
	bool STATIC_IsHitReactionTagActive(class AActor* Actor, class UHitReactionTag* Tag);
	void STATIC_AddHitReactionLiveLayer(class AActor* Actor, class UClass* Layer);
	void STATIC_AddHitReactionDeathLayer(class AActor* Actor, class UClass* Layer);
};


// Class GbxGameSystemCore.HitReactionData
// 0x0030 (0x0060 - 0x0030)
class UHitReactionData : public UGbxDataAsset
{
public:
	TArray<class UClass*>                              LiveLayers;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              DeathLayers;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactionPair>                    HitReactions;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionData");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionLayer_Blueprint
// 0x0000 (0x0030 - 0x0030)
class UHitReactionLayer_Blueprint : public UHitReactionLayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer_Blueprint");
		return ptr;
	}


	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag);
};


// Class GbxGameSystemCore.HitReactionLayer_Combine
// 0x0028 (0x0058 - 0x0030)
class UHitReactionLayer_Combine : public UHitReactionLayer
{
public:
	TArray<class UClass*>                              SubLayers;                                                // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<class UHitReactionTag*>                     PriorityList;                                             // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	bool                                               bMissingTagsAreHighestPriority;                           // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer_Combine");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionLayer_Condition
// 0x0020 (0x0050 - 0x0030)
class UHitReactionLayer_Condition : public UHitReactionLayer
{
public:
	TArray<struct FHitReactionCondition>               Conditions;                                               // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	EHitReactionConditionCombine                       Combine;                                                  // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass*                                      SubLayer;                                                 // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer_Condition");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionLayer_Cooldown
// 0x0018 (0x0048 - 0x0030)
class UHitReactionLayer_Cooldown : public UHitReactionLayer
{
public:
	float                                              DefaultCooldown;                                          // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FHitReactionCooldownData>            Cooldowns;                                                // 0x0038(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer_Cooldown");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionLayer_Map
// 0x0010 (0x0040 - 0x0030)
class UHitReactionLayer_Map : public UHitReactionLayer
{
public:
	TArray<struct FHitReactionMapItem>                 TagMap;                                                   // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer_Map");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionLayer_Priority
// 0x0020 (0x0050 - 0x0030)
class UHitReactionLayer_Priority : public UHitReactionLayer
{
public:
	TArray<class UHitReactionTag*>                     PriorityList;                                             // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<class UHitReactionTag*>                     CanInterruptSelf;                                         // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionLayer_Priority");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitReactionTag
// 0x0010 (0x0040 - 0x0030)
class UHitReactionTag : public UGbxDataAsset
{
public:
	class UCharacterSoundTag*                          SoundTag;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             CensoredTag;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitReactionTag");
		return ptr;
	}

};


// Class GbxGameSystemCore.HitRegionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHitRegionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.HitRegionFunctionLibrary");
		return ptr;
	}


	void STATIC_ResetHitRegionHealth(class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	void STATIC_ResetAllHitRegionHealth(class AActor* Actor);
	void STATIC_RefillHitRegionHealthByPercent(float RefillPercent, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	void STATIC_RefillHitRegionHealthByAmount(float RefillAmount, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	void STATIC_AssociateComponentWithHitRegion(class AActor* Actor, class UPrimitiveComponent* ComponentToAssociate, class UHitRegionData* HitRegion);
};


// Class GbxGameSystemCore.IGbxProjectileManager
// 0x0000 (0x0028 - 0x0028)
class UIGbxProjectileManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.IGbxProjectileManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.GbxReplicatorProxyData
// 0x0000 (0x0028 - 0x0028)
class UGbxReplicatorProxyData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.GbxReplicatorProxyData");
		return ptr;
	}

};


// Class GbxGameSystemCore.InspectionInfoProvider
// 0x0000 (0x0028 - 0x0028)
class UInspectionInfoProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.InspectionInfoProvider");
		return ptr;
	}


	void GetInspectionInfo(struct FInspectionInfo* InspectionInfo);
};


// Class GbxGameSystemCore.ImpactData
// 0x02F0 (0x0320 - 0x0030)
class UImpactData : public UGbxDataAsset
{
public:
	class UImpactData*                                 ParentImpact;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EImpactUsage                                       Usage;                                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideParentUnconditionalResponse;                     // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FImpactResponseEffect                       UnconditionalResponse;                                    // 0x0040(0x0140) (Edit)
	bool                                               bOverrideParentDefaultResponse;                           // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0181(0x000F) MISSED OFFSET
	struct FImpactResponseEffect                       DefaultResponse;                                          // 0x0190(0x0140) (Edit)
	TArray<struct FImpactResponseInfo>                 ImpactResponses;                                          // 0x02D0(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 DefaultImpactWwiseEvent;                                  // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FImpactTriggerInfo                          TriggerInfo;                                              // 0x02E8(0x0008) (Edit)
	struct FGbxSignificanceEvent                       DefaultSignificanceEvent;                                 // 0x02F0(0x0008) (Edit)
	int                                                LayeredPhysicalResponseQuality;                           // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LayeredParentPhysicalResponseQuality;                     // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideParentProximityThrottling;                       // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableProximityThrottling;                               // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x0302(0x0016) MISSED OFFSET
	int16_t                                            FrameLimit;                                               // 0x0318(0x0002) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseMassWwiseParameter;                                   // 0x031A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x031B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ImpactData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ImpactExpansionData
// 0x0018 (0x0048 - 0x0030)
class UImpactExpansionData : public UGbxDataAsset
{
public:
	class UImpactData*                                 ImpactDataToExpand;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FImpactResponseInfo>                 ImpactResponses;                                          // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ImpactExpansionData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ImpactDataOverride
// 0x0000 (0x0028 - 0x0028)
class UImpactDataOverride : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ImpactDataOverride");
		return ptr;
	}

};


// Class GbxGameSystemCore.ImpactDecalManager
// 0x0470 (0x08C8 - 0x0458)
class AImpactDecalManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x470];                                     // 0x0458(0x0470) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ImpactDecalManager");
		return ptr;
	}

};


// Class GbxGameSystemCore.PooledImpactDecalComponent
// 0x0020 (0x0740 - 0x0720)
class UPooledImpactDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0720(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PooledImpactDecalComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.ImpactEffectFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UImpactEffectFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ImpactEffectFunctionLibrary");
		return ptr;
	}


	void STATIC_PlayTraceImpactAndGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, const struct FVector& TraceStart, const struct FVector& TraceEnd, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents);
	void STATIC_PlayTraceImpact(class UImpactData* ImpactData, class AActor* Instigator, const struct FVector& TraceStart, const struct FVector& TraceEnd, TEnumAsByte<ECollisionChannel> TraceChannel, bool bReplicated);
	void STATIC_PlayHitResultImpactGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, const struct FHitResult& HitInfo, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents);
	void STATIC_PlayHitResultImpact(class UImpactData* ImpactData, class AActor* Instigator, const struct FHitResult& HitInfo, bool bReplicated);
};


// Class GbxGameSystemCore.ImpactFXManagerComponent
// 0x0090 (0x0208 - 0x0178)
class UImpactFXManagerComponent : public UActorComponent
{
public:
	bool                                               bScaleImpactDecalEffects;                                 // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class UImpactData*                                 BounceEffect;                                             // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BounceEffectThreshold;                                    // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BounceEffectFrequency;                                    // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignBounceEffectToVelocity;                             // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UImpactData*                                 SlideEffect;                                              // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideEffectThreshold;                                     // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideEffectStopThreshold;                                 // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideEffectFrequency;                                     // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartSlideEffectDelay;                                    // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideSlideEffectOrigin;                               // 0x01B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	struct FName                                       SlideEffectOriginSocket;                                  // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEffectsEnabled;                                          // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEnableCollisionNotifications;                        // 0x01C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x36];                                      // 0x01C2(0x0036) MISSED OFFSET
	TArray<struct FImpactFXManagerTrackingData>        ActiveSlideEffects;                                       // 0x01F8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ImpactFXManagerComponent");
		return ptr;
	}


	void SetEffectsEnabled(bool bEnabled);
	void OnTrackedParticleSystemFinished(class UParticleSystemComponent* PSC);
	void OnTrackedComponentDeactivated(class UActorComponent* Component);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class GbxGameSystemCore.InspectionInfoFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInspectionInfoFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.InspectionInfoFunctionLibrary");
		return ptr;
	}


	void STATIC_AddScreenOutput(const class FString& String, EDebugDisplayVerbosityLevel Verbosity, struct FInspectionInfo* InspectionInfo);
	void STATIC_AddAboveActorOutput(const class FString& String, EDebugDisplayVerbosityLevel Verbosity, struct FInspectionInfo* InspectionInfo);
};


// Class GbxGameSystemCore.InterpComponent
// 0x00A0 (0x0218 - 0x0178)
class UInterpComponent : public UActorComponent
{
public:
	bool                                               bRemoveOnCompletion;                                      // 0x0178(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpdateVelocity;                                          // 0x0179(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bClearVelocity;                                           // 0x017A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bManualTick;                                              // 0x017B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInterpYawOnly;                                           // 0x017C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBallistics;                                              // 0x017D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMatchRotationToVelocity;                                 // 0x017E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSetToInitialWhenFinished;                                // 0x017F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRelative;                                                // 0x0180(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	class AActor*                                      InterpActor;                                              // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 InterpController;                                         // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnMovementComponent*                      InterpMoveComp;                                           // 0x0198(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EInterpMode                                        InterpLocMode;                                            // 0x01A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              InterpLocTime;                                            // 0x01A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InterpLocElapsedTime;                                     // 0x01A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InterpLocDiff;                                            // 0x01AC(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     InterpLocPrev;                                            // 0x01B8(0x000C) (Transient, IsPlainOldData)
	EInterpMode                                        InterpRotMode;                                            // 0x01C4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	float                                              InterpRotTime;                                            // 0x01C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InterpRotElapsedTime;                                     // 0x01CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    InterpRotDiff;                                            // 0x01D0(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    InterpRotPrev;                                            // 0x01DC(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    InitialRotation;                                          // 0x01E8(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     BallisticsStartLoc;                                       // 0x01F4(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     BallisticsStartVelocity;                                  // 0x0200(0x000C) (Transient, IsPlainOldData)
	float                                              BallisticsGravity;                                        // 0x020C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BallisticsStartTime;                                      // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BallisticsTotalTime;                                      // 0x0214(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.InterpComponent");
		return ptr;
	}


	void Stop();
	void SetUpdateVelocity(bool bNewUpdateVelocity);
	void SetRemoveOnCompletion(bool bRemove);
	void SetManualTick(bool bManual);
	void SetClearVelocity(bool bNewClearVelocity);
	void MatchRotationToVelocity(bool bInSetToInitialWhenFinished);
	void ManualTick(float DeltaTime);
	bool IsFinished();
	void InterpRotation(const struct FRotator& NewRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
	void InterpLocation(const struct FVector& NewLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
	void InterpDeltaRotation(const struct FRotator& DeltaRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
	void InterpDeltaLocation(const struct FVector& DeltaLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
	struct FVector InterpBallisticsByTime(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapTime, float LeapGravity);
	float InterpBallistics(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapSpeed, float LeapAngle);
};


// Class GbxGameSystemCore.Ladder
// 0x00E8 (0x0540 - 0x0458)
class ALadder : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UStaticMesh*                                 SegmentMesh;                                              // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  SegmentMeshMaterialOverrides;                             // 0x0470(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 TopMesh;                                                  // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  TopMeshMaterialOverrides;                                 // 0x0488(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BottomAndTopMeshLDMaxDrawDistance;                        // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBottomAndTopMeshNeverDistanceCull : 1;                   // 0x049C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UStaticMesh*                                 BottomMesh;                                               // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  BottomMeshMaterialOverrides;                              // 0x04A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              SegmentSpacing;                                           // 0x04B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SegmentOffset;                                            // 0x04BC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              SegmentRotation;                                          // 0x04C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopOffset;                                                // 0x04CC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              TopRotation;                                              // 0x04D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomOffset;                                             // 0x04DC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              BottomRotation;                                           // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolumeDepth;                                              // 0x04EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolumeWidth;                                              // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolumeExtraTopHeight;                                     // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolumeExtraBottomHeight;                                  // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopVolumeDepth;                                           // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VolumeOffset;                                             // 0x0500(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterOffset;                                          // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSegments;                                              // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bHideTopMesh : 1;                                         // 0x0514(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bHideBottomMesh : 1;                                      // 0x0514(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	class UInstancedStaticMeshComponent*               SegmentMeshComponent;                                     // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TopMeshComponent;                                         // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BottomMeshComponent;                                      // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               VolumeBoxComponent;                                       // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TopVolumeBoxComponent;                                    // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.Ladder");
		return ptr;
	}

};


// Class GbxGameSystemCore.LadderInterface
// 0x0000 (0x0028 - 0x0028)
class ULadderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.LadderInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.LadderVolume
// 0x0020 (0x04B0 - 0x0490)
class ALadderVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	struct FVector                                     ClimbDirection;                                           // 0x0498(0x000C) (IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x04A4(0x000C) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.LadderVolume");
		return ptr;
	}

};


// Class GbxGameSystemCore.LandingData
// 0x0010 (0x0040 - 0x0030)
class ULandingData : public UGbxDataAsset
{
public:
	TArray<struct FLandingInfo>                        LandingData;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.LandingData");
		return ptr;
	}

};


// Class GbxGameSystemCore.MantleData
// 0x0038 (0x0068 - 0x0030)
class UMantleData : public UGbxDataAsset
{
public:
	TArray<struct FMantleActionData>                   Actions;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ActionSlotToEnd;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAlignToEdgeAngle;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAdjustedHeightDifference;                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RequiredLedgeDepth;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallHopHeightMax;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallHopDestinationHeightMax;                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallHopDestinationHeightMin;                              // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallHopDepth;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.MantleData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ModifierMathAttributeValueResolver
// 0x0048 (0x0070 - 0x0028)
class UModifierMathAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData                BaseValue;                                                // 0x0028(0x0038) (Edit)
	TArray<struct FModifierMathAttributeValueResolverStackEntry> ModifierStack;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ModifierMathAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.MotionControlLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.MotionControlLibrary");
		return ptr;
	}


	float STATIC_UpdateSpeed(float CurrentSpeed, float TargetSpeed, float Acceleration, float DeltaTime);
	struct FRotator STATIC_Spin(const struct FRotator& CurrentRotation, float RotationRate, const struct FVector& RotationAxis, float DeltaTime);
};


// Class GbxGameSystemCore.OrbitingActorComponent
// 0x01A8 (0x0320 - 0x0178)
class UOrbitingActorComponent : public UActorComponent
{
public:
	class AActor*                                      TargetActor;                                              // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     BaseOrbitOffset;                                          // 0x0180(0x000C) (Edit, IsPlainOldData)
	float                                              ApproachSpeed;                                            // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothingDistance;                                        // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothingDuration;                                        // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FOrbitOscillationInfo                       XAxisOscillation;                                         // 0x0198(0x0080) (Edit)
	struct FOrbitOscillationInfo                       YAxisOscillation;                                         // 0x0218(0x0080) (Edit)
	struct FOrbitOscillationInfo                       ZAxisOscillation;                                         // 0x0298(0x0080) (Edit)
	bool                                               bIsInOrbit;                                               // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              SmoothingAlpha;                                           // 0x031C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.OrbitingActorComponent");
		return ptr;
	}


	void SetTargetActor(class AActor* NewTarget);
	void OnRep_TargetActor(class AActor* LastTarget);
};


// Class GbxGameSystemCore.ParentChallenge
// 0x0000 (0x0118 - 0x0118)
class UParentChallenge : public UChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ParentChallenge");
		return ptr;
	}

};


// Class GbxGameSystemCore.ParticleAttributeParameterEvaluator
// 0x0018 (0x0040 - 0x0028)
class UParticleAttributeParameterEvaluator : public UParticleParameterEvaluator
{
public:
	class UGbxAttributeData*                           Attribute;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEvaluateEveryFrame;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ParticleAttributeParameterEvaluator");
		return ptr;
	}

};


// Class GbxGameSystemCore.ParticleConditionalEmitterEvaluator
// 0x0018 (0x0040 - 0x0028)
class UParticleConditionalEmitterEvaluator : public UParticleParameterEvaluator
{
public:
	class UGbxCondition*                               Condition;                                                // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       EmitterName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableIfTrue;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEvaluateEveryFrame;                                      // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ParticleConditionalEmitterEvaluator");
		return ptr;
	}

};


// Class GbxGameSystemCore.ParticlePropertyTrackingData
// 0x0020 (0x0050 - 0x0030)
class UParticlePropertyTrackingData : public UGbxDataAsset
{
public:
	float                                              MinValue;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopTrackingWhenMinReached;                              // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopTrackingWhenMaxReached;                              // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopTrackingWhenPrimaryCharacterIsDeadOrNone;            // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyParticleWhenTrackingStopped;                      // 0x003B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeValueOverTime;                                     // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              ValueChangePerSecond;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPauseChangeOnUpdate;                                     // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              PauseDuration;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ParticlePropertyTrackingData");
		return ptr;
	}

};


// Class GbxGameSystemCore.PawnAttachmentFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPawnAttachmentFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PawnAttachmentFunctionLibrary");
		return ptr;
	}


	void STATIC_RequestDetachPawnFromSlot(class AActor* Actor, const struct FName& SlotName);
	void STATIC_RequestDetachPawnFromActor(class APawn* Pawn);
	struct FPawnAttachmentQueryResult STATIC_QueryPawnAttachment(class APawn* Pawn);
	class UPawnAttachSlotComponent* STATIC_FindPawnAttachSlotComponent(class APawn* Pawn);
	void STATIC_DetachPawnFromSlot(class AActor* Actor, const struct FName& SlotName, bool bInstant);
	void STATIC_DetachPawnFromActor(class APawn* Pawn, bool bInstant);
	void STATIC_AttachPawnToSlot(class AActor* Actor, const struct FName& SlotName, class APawn* Pawn, bool bInstant);
};


// Class GbxGameSystemCore.PawnAttributeContextResolver
// 0x0000 (0x0050 - 0x0050)
class UPawnAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PawnAttributeContextResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.PhysicalAnimationProfileAsset
// 0x0018 (0x0048 - 0x0030)
class UPhysicalAnimationProfileAsset : public UGbxDataAsset
{
public:
	TArray<struct FPhysicalAnimationBoneData>          BoneData;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EPhysicalAnimationBlendToKinematicMode             DynamicToKinematicBlendMode;                              // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0040(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PhysicalAnimationProfileAsset");
		return ptr;
	}

};


// Class GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent
// 0x0018 (0x0190 - 0x0178)
class UProjectileAimViewPointHomingTargetComponent : public UActorComponent
{
public:
	float                                              LookAheadDistance;                                        // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	class UProjectileHomingComponent*                  HomingComponent;                                          // 0x0180(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 TargetController;                                         // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent");
		return ptr;
	}


	void SetTargetController(class AController* InTargetController);
	void SetTargetActor(class AActor* InTargetActor);
	class AController* GetTargetController();
	struct FVector GetCurrentHomingLoc();
};


// Class GbxGameSystemCore.PropertyUtilsTestContext
// 0x0268 (0x0290 - 0x0028)
class UPropertyUtilsTestContext : public UObject
{
public:
	float                                              FloatProp;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatPropStaticArray[0x3];                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      FloatPropDynamicArray;                                    // 0x0038(0x0010) (ZeroConstructor)
	class UPropertyUtilsTestContext*                   ObjectProp;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPropertyUtilsTestContext*                   ObjectPropStaticArray[0x3];                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UPropertyUtilsTestContext*>           ObjectPropDynamicArray;                                   // 0x0068(0x0010) (ZeroConstructor)
	struct FPropertyUtilsTestStruct                    StructProp;                                               // 0x0078(0x0078)
	struct FPropertyUtilsTestStruct                    StructPropStaticArray[0x3];                               // 0x00F0(0x0078)
	TArray<struct FPropertyUtilsTestStruct>            StructPropDynamicArray;                                   // 0x0258(0x0010) (ZeroConstructor)
	double                                             DoubleProp;                                               // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             Int8Prop;                                                 // 0x0270(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8Prop;                                                // 0x0271(0x0001) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Int16Prop;                                                // 0x0272(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16Prop;                                               // 0x0274(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0276(0x0002) MISSED OFFSET
	int                                                Int32Prop;                                                // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32Prop;                                               // 0x027C(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64Prop;                                                // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64Prop;                                               // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.PropertyUtilsTestContext");
		return ptr;
	}

};


// Class GbxGameSystemCore.RangedFeedbackData
// 0x0000 (0x03F8 - 0x03F8)
class URangedFeedbackData : public UFeedbackData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.RangedFeedbackData");
		return ptr;
	}

};


// Class GbxGameSystemCore.ReferenceActor
// 0x0008 (0x0460 - 0x0458)
class AReferenceActor : public AActor
{
public:
	struct FName                                       PreviewClass;                                             // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ReferenceActor");
		return ptr;
	}


	void EnumeratePreviewClasses(TArray<struct FName>* ClasssList);
};


// Class GbxGameSystemCore.ReplicatedEmitter
// 0x0090 (0x0538 - 0x04A8)
class AReplicatedEmitter : public AEmitter
{
public:
	bool                                               bOwnerNoSeeEmitter;                                       // 0x04A8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FReplicatedEmitterTemplateOptions           TemplateOptions;                                          // 0x04B0(0x0018) (Net, Transient, IsPlainOldData)
	TArray<struct FEmitterFloatParam>                  ReplicatedFloatParams;                                    // 0x04C8(0x0010) (Net, ZeroConstructor, Transient)
	TArray<struct FEmitterVectorParam>                 ReplicatedVectorParams;                                   // 0x04D8(0x0010) (Net, ZeroConstructor, Transient)
	TArray<struct FEmitterColorParam>                  ReplicatedColorParams;                                    // 0x04E8(0x0010) (Net, ZeroConstructor, Transient)
	struct FEmitterWwiseEvent                          ReplicatedWwiseEvent;                                     // 0x04F8(0x0040) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ReplicatedEmitter");
		return ptr;
	}


	void OnRep_TemplateOptions();
	void OnRep_ReplicatedWwiseEvent();
	void OnRep_ReplicatedVectorParams();
	void OnRep_ReplicatedFloatParams();
	void OnRep_ReplicatedColorParams();
	void OnRep_OwnerNoSeeEmitter();
};


// Class GbxGameSystemCore.ResourceWeightAttributeValueResolver
// 0x0120 (0x0148 - 0x0028)
class UResourceWeightAttributeValueResolver : public UAttributeValueResolver
{
public:
	class UGameResourceData*                           Resource;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                ResourceThreshold;                                        // 0x0030(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                AboveThresholdWeight;                                     // 0x0068(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                NoPoolWeight;                                             // 0x00A0(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                MinBelowThresholdWeight;                                  // 0x00D8(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                MaxBelowThresholdWeight;                                  // 0x0110(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ResourceWeightAttributeValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.RigidBodyActor
// 0x0008 (0x0460 - 0x0458)
class ARigidBodyActor : public AActor
{
public:
	class URigidBodyComponent*                         RigidBodyComponent;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.RigidBodyActor");
		return ptr;
	}

};


// Class GbxGameSystemCore.RigidBodyComponent
// 0x0020 (0x07D0 - 0x07B0)
class URigidBodyComponent : public UStaticMeshComponent
{
public:
	class UImpactData*                                 RigidBodyImpactData;                                      // 0x07B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnImpulseAdded;                                           // 0x07B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableHardSleeping;                                      // 0x07C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.RigidBodyComponent");
		return ptr;
	}


	void SetKinematic(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
};


// Class GbxGameSystemCore.SaveGameActorInterface
// 0x0000 (0x0028 - 0x0028)
class USaveGameActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SaveGameActorInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.SceneBodySwitchAction
// 0x0000 (0x0028 - 0x0028)
class USceneBodySwitchAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SceneBodySwitchAction");
		return ptr;
	}

};


// Class GbxGameSystemCore.SceneBodySwitchComponent
// 0x0090 (0x0360 - 0x02D0)
class USceneBodySwitchComponent : public USceneComponent
{
public:
	struct FName                                       DefaultState;                                             // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneBodySwitchAction*                      DetachAction;                                             // 0x02D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	TArray<struct FSceneComponentSwitchRecord>         ComponentRecords;                                         // 0x02F0(0x0010) (ZeroConstructor, Transient)
	TArray<int8_t>                                     ReplicatedState;                                          // 0x0300(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0310(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SceneBodySwitchComponent");
		return ptr;
	}


	void OnRep_ReplicatedState();
	void HandleWwiseEventFinished(class UWwiseAudioComponent* WAC, class UWwiseEvent* WwiseEvent);
	void HandleParticleSystemFinished(class UParticleSystemComponent* PSC);
	void GetValidSwitchStateNames(TArray<struct FName>* OutNames);
};


// Class GbxGameSystemCore.SceneBodySwitchFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USceneBodySwitchFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SceneBodySwitchFunctionLibrary");
		return ptr;
	}


	void EnumerateValidSwitchStateNames(const struct FName& SwitchName, TArray<struct FName>* Names);
	void EnumerateValidSwitchNames(TArray<struct FName>* Names);
	void STATIC_ChangeSwitchExternal(class AActor* Actor, const struct FName& SwitchName, const struct FName& StateName);
	void STATIC_ChangeSwitch(class UObject* Context, const struct FName& SwitchName, const struct FName& StateName);
};


// Class GbxGameSystemCore.SceneBodySwitchManagerComponent
// 0x0000 (0x0178 - 0x0178)
class USceneBodySwitchManagerComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SceneBodySwitchManagerComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.ScreenParticleManagerComponent
// 0x0028 (0x01A0 - 0x0178)
class UScreenParticleManagerComponent : public UActorComponent
{
public:
	TArray<struct FScreenParticleRecord>               ScreenParticleRecords;                                    // 0x0178(0x0010) (ZeroConstructor)
	TArray<struct FParticlePropertyTracker>            TrackedParticleProperties;                                // 0x0188(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.ScreenParticleManagerComponent");
		return ptr;
	}


	void STATIC_ShowScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, const struct FName& Tag, bool bAllowMultipleInstances, bool bServerAuthority, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu);
	void OnScreenParticleFinished(class UParticleSystemComponent* Component);
	void STATIC_HideScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, const struct FName& Tag, bool bAllowParticleToFinish, bool bServerAuthority);
	void ClientTrackParticleProperty(class UParticlePropertyTrackingData* TrackingData, class UParticleSystem* Template, const struct FName& Tag, const struct FName& PropertyName, float PropertyValue, bool bAddToValue, class UMaterialInterface* UsedMaterialProperty, const struct FName& MaterialPropertyName);
	void ClientShowScreenParticleEx(class UParticleSystem* Template, unsigned char InitFlags, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, const struct FName& Tag);
	void ClientShowScreenParticle(class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, const struct FName& Tag, bool bAllowMultipleInstances, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu, bool bDepthPriorityWorld);
	void ClientSetScreenParticleVectorParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, const struct FVector& Param);
	void ClientSetScreenParticleMaterialParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, class UMaterialInterface* Param);
	void ClientSetScreenParticleFloatParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, float Param);
	void ClientSetScreenParticleColorParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, const struct FLinearColor& Param);
	void ClientSetScreenParticleActorParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, class AActor* Param);
	void ClientHideScreenParticle(class UParticleSystem* Template, const struct FName& Tag, bool bAllowParticleToFinish);
};


// Class GbxGameSystemCore.SenseConfigProviderInterface
// 0x0000 (0x0028 - 0x0028)
class USenseConfigProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SenseConfigProviderInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.SignificanceInterface
// 0x0000 (0x0028 - 0x0028)
class USignificanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SignificanceInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.SimpleMathValueResolver
// 0x0078 (0x00A0 - 0x0028)
class USimpleMathValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData                ValueA;                                                   // 0x0028(0x0038) (Edit)
	ESimpleMathValueResolverOperatorType               Operator;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ValueB;                                                   // 0x0068(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SimpleMathValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.SocketComponent
// 0x0000 (0x02D0 - 0x02D0)
class USocketComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SocketComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.SpawnSimulatedActorSwitchAction
// 0x00C8 (0x00F0 - 0x0028)
class USpawnSimulatedActorSwitchAction : public USceneBodySwitchAction
{
public:
	class UClass*                                      ActorClass;                                               // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritVelocity : 1;                                     // 0x0030(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bEnableSpeedRange : 1;                                    // 0x0030(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bEnableAngularSpeedRange : 1;                             // 0x0030(0x0001) (Edit, BlueprintReadOnly)
	TEnumAsByte<EAxis>                                 DefaultAxis;                                              // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FRelativeDirectionData                      Direction;                                                // 0x0038(0x0050) (Edit, BlueprintReadOnly)
	float                                              Speed;                                                    // 0x0088(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x008C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRelativeDirectionData                      RotationAxis;                                             // 0x0090(0x0050) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	float                                              AngularSpeed;                                             // 0x00E0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularSpeed;                                          // 0x00E4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x00E8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SpawnSimulatedActorSwitchAction");
		return ptr;
	}

};


// Class GbxGameSystemCore.SprintData
// 0x0038 (0x0068 - 0x0030)
class USprintData : public UDataAsset
{
public:
	class UCurveFloat*                                 SprintFOVCurve;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddModifierToBaseFOV;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              SprintFOVModifier;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintFOVBlendInTime;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintFOVBlendOutTime;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintFOVBlendInDelay;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UFeedbackData*                               Feedback;                                                 // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttributeEffectData>                SprintAttributeEffects;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.SprintData");
		return ptr;
	}

};


// Class GbxGameSystemCore.StanceBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UStanceBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StanceBlueprintLibrary");
		return ptr;
	}


	class UStanceComponent* STATIC_TryGetStanceComponent(class AAIController* AIController);
	void STATIC_SetStance(class AActor* Target, class UStanceDataProvider* Stance);
	bool STATIC_IsStanceComponentInStance(class UStanceComponent* StanceComponent, class UStanceDataProvider* Stance);
	bool STATIC_IsInStance(class UAnimInstance* AnimInstance, class UStanceDataProvider* Stance);
	bool STATIC_EqualEqual_StanceTypeStanceType(class UStanceType* A, class UStanceType* B);
	bool STATIC_EqualEqual_StanceDataStanceData(class UStanceData* A, class UStanceData* B);
	void STATIC_ClearStance(class AActor* Target);
};


// Class GbxGameSystemCore.StanceComponent
// 0x00F8 (0x0270 - 0x0178)
class UStanceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStanceChanged;                                          // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UStanceDataSelector*                         StanceSelector;                                           // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStanceStack                                StanceStack;                                              // 0x0198(0x0050) (Transient)
	struct FStanceChangedEventArgs                     StanceState;                                              // 0x01E8(0x0030) (Net, Transient, IsPlainOldData)
	TMap<class UStanceType*, class UStanceData*>       DefaultStanceMap;                                         // 0x0218(0x0050) (Edit, ZeroConstructor)
	float                                              TimeEnteredCurrentStance;                                 // 0x0268(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StanceComponent");
		return ptr;
	}


	void StackStanceChangedCallback(EStanceStackLayer PreviousLayer, class UStanceData* PreviousStance, EStanceStackLayer NextLayer, class UStanceData* NextStance);
	void SetStanceLayer(EStanceStackLayer Layer, class UStanceDataProvider* NewStance);
	void SetBlueprintStance(class UStanceDataProvider* NewStance);
	void OnRep_StanceState();
	bool IsInStanceType(class UStanceType* Type);
	bool IsInStanceLayer(EStanceStackLayer Layer);
	bool IsInStance(class UStanceDataProvider* Stance);
	bool IsInAnimStance(class UStanceDataProvider* Stance);
	float GetTimeSpentInCurrentStance();
	EStanceStackLayer GetStanceLayer();
	class UStanceData* GetStance();
	class UStanceType* FindTypeForStance(class UStanceData* Stance);
	class UStanceData* FindStanceForType(class UStanceType* Type);
	void ClearStanceLayer(EStanceStackLayer Layer);
	void ClearBlueprintStance();
};


// Class GbxGameSystemCore.StanceType
// 0x0000 (0x0030 - 0x0030)
class UStanceType : public UStanceDataProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StanceType");
		return ptr;
	}

};


// Class GbxGameSystemCore.StatusEffect
// 0x0040 (0x0068 - 0x0028)
class UStatusEffect : public UObject
{
public:
	class UStatusEffectStackingStrategyData*           StackingStrategy;                                         // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAttributeEffect>                    AttributeEffects;                                         // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDoesDamageOverTime;                                      // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageSourceClass;                                        // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStatusEffectData*                           DataAssetCopy;                                            // 0x0058(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffect");
		return ptr;
	}


	void OnEndEffect(class AActor* Target);
	void OnBeginEffect(class AActor* Target);
};


// Class GbxGameSystemCore.StatusEffectModifierAttributePropertyValueResolver
// 0x0028 (0x00D8 - 0x00B0)
class UStatusEffectModifierAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	TSoftObjectPtr<class UStatusEffectData>            StatusEffectData;                                         // 0x00B0(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectModifierAttributePropertyValueResolver");
		return ptr;
	}

};


// Class GbxGameSystemCore.StatusEffectStackingStrategyData_Capped
// 0x0010 (0x0040 - 0x0030)
class UStatusEffectStackingStrategyData_Capped : public UStatusEffectStackingStrategyData
{
public:
	int                                                MaxCount;                                                 // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCapPerOwner;                                             // 0x0034(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoInfiniteDuration;                                      // 0x0035(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EStatusEffectStackingInstanceSelectionCriteria     SelectionCriteria;                                        // 0x0036(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EStatusEffectStackingInstanceReplacementCriteria   ReplacementCriteria;                                      // 0x0037(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusEffectStackingStrategyData_DurationRefundData DurationRefund;                                           // 0x0038(0x0008) (Edit, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.StatusEffectStackingStrategyData_Capped");
		return ptr;
	}

};


// Class GbxGameSystemCore.TargetableComponent
// 0x02C8 (0x0480 - 0x01B8)
class UTargetableComponent : public UTeamComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
	struct FGbxGameSystemCore_FResourceLock            SightSenseLock;                                           // 0x01C0(0x0098) (Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0258(0x0010) MISSED OFFSET
	bool                                               bSearchableByFindProjectileEQSTargetGenerator;            // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetable;                                            // 0x0269(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetableByHumanPlayers;                              // 0x026A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetableByAIPlayers;                                 // 0x026B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetableByNonPlayers;                                // 0x026C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTargetableIfPlayersAreThreatened;                    // 0x026D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x026E(0x0002) MISSED OFFSET
	class UGbxUIName*                                  TargetUIName;                                             // 0x0270(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	struct FText                                       TargetName;                                               // 0x0278(0x0028) (Net)
	struct FName                                       TargetSocket;                                             // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTargetLocationBoundsSettings               TargetSocketBounds;                                       // 0x0298(0x000C) (Edit)
	bool                                               bUseTargetSocketBounds;                                   // 0x02A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	TArray<struct FTargetLocationSettings>             AdditionalTargetSockets;                                  // 0x02A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x02B8(0x00A0) MISSED OFFSET
	TArray<class UTargetingComponent*>                 TargetingMe;                                              // 0x0358(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0368(0x0030) MISSED OFFSET
	float                                              CapsuleSections;                                          // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FGbxGameSystemCore_FResourceLock            UntargetableLock;                                         // 0x03A0(0x0098) (Net, Transient)
	TArray<struct FName>                               MeleeTargetingSockets;                                    // 0x0438(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOverrideMeleeSocket>                ConditionalMeleeTargetingSockets;                         // 0x0448(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               TargetProxyComponents;                                    // 0x0458(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class USceneComponent*>                     TargetProxies;                                            // 0x0468(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bAllowCharacterHoming;                                    // 0x0478(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAimAssistSnapTargetType                           AimAssistSnapTargetType;                                  // 0x0479(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetTracking;                                          // 0x047A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableBulletMagnetism;                                  // 0x047B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x047C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TargetableComponent");
		return ptr;
	}


	void SetTargetUIName(class UGbxUIName* NewTargetUIName);
	void SetTargetName(const struct FText& NewTargetName);
	void SetIsTargetableByNonPlayers(bool IsTargetable);
	void SetIsTargetableByHumanPlayers(bool IsTargetable);
	void SetIsTargetableByAIPlayers(bool IsTargetable);
	void SetIsTargetable(bool IsTargetable);
	void OnRep_TargetUIName();
	bool IsTargetableByPawn(class APawn* Pawn);
	bool IsTargetableByNonPlayers();
	bool IsTargetableByHumanPlayers();
	bool IsTargetableByController(class AController* Controller);
	bool IsTargetableByAIPlayers();
	bool IsTargetableByActor(class AActor* Actor);
	bool IsTargetable();
	struct FName GetTargetSocketName();
	void GetTargetProxyComponentNames(TArray<struct FName>* Array);
	class FString GetTargetNameString();
	TArray<struct FVector> GetTargetLocations();
	struct FVector GetTargetLocation();
	struct FVector GetClosestTargetLocation(const struct FVector& Origin, const struct FVector& Direction);
	void GetAvailableSocketNames(TArray<struct FName>* Array);
};


// Class GbxGameSystemCore.TargetActorInfoLibrary
// 0x0000 (0x0028 - 0x0028)
class UTargetActorInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TargetActorInfoLibrary");
		return ptr;
	}


	bool STATIC_IsSenseActive(const struct FTargetActorInfo& Info, class UClass* Sense);
	bool STATIC_IsExistingTarget(const struct FTargetActorInfo& Info);
	bool STATIC_IsDirectlySensed(const struct FTargetActorInfo& Info);
	bool STATIC_HasStimulusForSense(const struct FTargetActorInfo& Info, class UClass* Sense);
	bool STATIC_HasAnyKnownStimuli(const struct FTargetActorInfo& Info);
	struct FVector STATIC_GetStimulusLocation(const struct FTargetActorInfo& Info, class UClass* Sense);
	bool STATIC_GetStimulusForSense(const struct FTargetActorInfo& Info, class UClass* Sense, struct FAIStimulus* Stimulus);
	struct FVector STATIC_GetReceiverLocation(const struct FTargetActorInfo& Info, class UClass* Sense);
	struct FVector STATIC_GetBestStimulusLocation(const struct FTargetActorInfo& Info, float* Age);
	bool STATIC_GetBestStimulus(const struct FTargetActorInfo& Info, struct FAIStimulus* Stimulus);
	struct FVector STATIC_GetBestAttackLocation(const struct FTargetActorInfo& Info, struct FVector* OutTargetVelocity);
	class UTargetingComponent* STATIC_FindActorTargetingComponent(class AActor* Actor);
};


// Class GbxGameSystemCore.TargetingComponent
// 0xE618 (0xE790 - 0x0178)
class UTargetingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0178(0x00B8) MISSED OFFSET
	struct FScriptMulticastDelegate                    TargetListChangedBpEvent;                                 // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0240(0x0010) MISSED OFFSET
	float                                              QueryFrequency;                                           // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bQueryImmediately;                                        // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	struct FEnvQueryParams                             QueryParams;                                              // 0x0258(0x00B8) (Edit)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0310(0x0018) MISSED OFFSET
	TArray<struct FGbxBlackboardKeySelector>           BlackboardKeys;                                           // 0x0328(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData04[0xE430];                                    // 0x0338(0xE430) MISSED OFFSET
	bool                                               bOnlyTargetThreatsToPlayers;                              // 0xE768(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x17];                                      // 0xE769(0x0017) MISSED OFFSET
	class UTargetableComponent*                        CurrentTargetable;                                        // 0xE780(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0xE788(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TargetingComponent");
		return ptr;
	}


	void ServerSetBestTarget(class AActor* NewBestTarget);
	bool IsBestTargetDirectlySensed(int TargetIndex);
	bool HasTargets();
	bool HasTarget(class AActor* Actor);
	bool GetTargetLocationForActor(class AActor* Actor, struct FVector* TargetLocation);
	bool GetTargetInfoForActor(class AActor* Actor, struct FTargetActorInfo* TargetInfo);
	int GetTargetInfoCount();
	bool GetTargetInfoAt(int TargetIndex, struct FTargetActorInfo* TargetInfo);
	class AActor* GetTargetActorAt(int TargetIndex);
	class AActor* GetBestThreatActor(bool bRequireFirsthandKnowledge);
	struct FVector GetBestTargetLocation(int TargetIndex);
	bool GetBestTargetInfo(int TargetIndex, struct FTargetActorInfo* TargetInfo);
	class AActor* GetBestTargetActor(int TargetIndex);
	class UTargetableComponent* GetBestTargetableComponent(int TargetIndex);
	struct FVector GetBestAttackTargetLocation(int TargetIndex, struct FVector* OutTargetVelocity);
	bool DoesBestTargetHaveStimulusForSense(class UClass* Sense, float MaxAge, int TargetIndex);
};


// Class GbxGameSystemCore.TargetingDebugServerRpcComponent
// 0x0000 (0x0178 - 0x0178)
class UTargetingDebugServerRpcComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TargetingDebugServerRpcComponent");
		return ptr;
	}


	void SetInspectedActor(class AActor* Actor);
};


// Class GbxGameSystemCore.Team
// 0x0080 (0x00B0 - 0x0030)
class UTeam : public UGbxDataAsset
{
public:
	class FString                                      DisplayName;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ETeamAttitude>                         SelfAttitude;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         DefaultAttitude;                                          // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         DefaultAttitudeFromTeams;                                 // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultAttitudeFromTeams;                             // 0x0043(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FTeamAttitudeSetEntry>               AttitudeTowardTeams;                                      // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FTeamAttitudeSetEntry>               AttitudeFromTeams;                                        // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableTeamCollisionChannel;                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETeamCollisionChannel                              TeamCollisionChannel;                                     // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x46];                                      // 0x006A(0x0046) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.Team");
		return ptr;
	}


	TEnumAsByte<ETeamAttitude> GetAttitudeToward(class UTeam* Team);
};


// Class GbxGameSystemCore.TeleportInterface
// 0x0000 (0x0028 - 0x0028)
class UTeleportInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TeleportInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.TerritoryComponent
// 0x0090 (0x0780 - 0x06F0)
class UTerritoryComponent : public UPrimitiveComponent
{
public:
	struct FTerritoryData                              PatrolTerritory;                                          // 0x06F0(0x0020) (Edit)
	struct FTerritoryData                              ThreatTerritory;                                          // 0x0710(0x0020) (Edit)
	struct FTerritoryData                              CombatTerritory;                                          // 0x0730(0x0020) (Edit)
	ETerritoryCombatProxyType                          CombatProxy;                                              // 0x0750(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCombatProxy;                                          // 0x0751(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysAwareInThreatArea;                                 // 0x0752(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETerritoryDrawStyle                                DrawStyle;                                                // 0x0753(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0754(0x0014) MISSED OFFSET
	TArray<class UTerritoryComponent*>                 LinkedTerritories;                                        // 0x0768(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0778(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TerritoryComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.TrivialFoleyImplementationComponent
// 0x0038 (0x01B0 - 0x0178)
class UTrivialFoleyImplementationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class UImpactData*                                 FootstepImpact;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           FootstepPhysmat;                                          // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      BodySkeletalMesh;                                         // 0x0190(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               FootSockets;                                              // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UFoleyMainComponent*                         CachedFoleyMainComponent;                                 // 0x01A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.TrivialFoleyImplementationComponent");
		return ptr;
	}

};


// Class GbxGameSystemCore.UIStatData_Numeric_Formula
// 0x0008 (0x0228 - 0x0220)
class UUIStatData_Numeric_Formula : public UUIStatData_Numeric
{
public:
	class UUIStatFormulaEvaluator*                     Formula;                                                  // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatData_Numeric_Formula");
		return ptr;
	}

};


// Class GbxGameSystemCore.UIStatData_Text
// 0x0030 (0x0098 - 0x0068)
class UUIStatData_Text : public UUIStatData
{
public:
	struct FText                                       Text;                                                     // 0x0068(0x0028) (Edit)
	struct FText                                       TextWithAdditionalInput;                                  // 0x0080(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatData_Text");
		return ptr;
	}

};


// Class GbxGameSystemCore.UIStatAttributeEffectProvider
// 0x0000 (0x0028 - 0x0028)
class UUIStatAttributeEffectProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UIStatAttributeEffectProvider");
		return ptr;
	}

};


// Class GbxGameSystemCore.UsabilityDataSelection
// 0x0088 (0x00B8 - 0x0030)
class UUsabilityDataSelection : public UGbxDataAsset
{
public:
	class UGbxCondition*                               EnabledCondition;                                         // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUseDefSelection                            PrimaryUseDefSelection;                                   // 0x0038(0x0020) (Edit)
	struct FUseDefSelection                            PrimaryHoldUseDefSelection;                               // 0x0058(0x0020) (Edit)
	struct FUseDefSelection                            SecondaryUseDefSelection;                                 // 0x0078(0x0020) (Edit)
	struct FUseDefSelection                            SecondaryHoldUseDefSelection;                             // 0x0098(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UsabilityDataSelection");
		return ptr;
	}

};


// Class GbxGameSystemCore.UsableTypeDefinition
// 0x0070 (0x00A0 - 0x0030)
class UUsableTypeDefinition : public UGbxDataAsset
{
public:
	struct FText                                       ActionText;                                               // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	struct FName                                       InputActionOverride;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayLockedIcon;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHidePrompt;                                              // 0x0051(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCostsToUse;                                              // 0x0052(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	class UGbxInventoryCategoryData*                   CurrencyType;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUsableTypeCostContext                             CostContext;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                Cost;                                                     // 0x0068(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UsableTypeDefinition");
		return ptr;
	}

};


// Class GbxGameSystemCore.UserStatesInterface
// 0x0000 (0x0028 - 0x0028)
class UUserStatesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UserStatesInterface");
		return ptr;
	}


	bool HasEnableConditionsSetForAnyUserState();
	void BlueprintStateHandler(bool bFromLoad);
};


// Class GbxGameSystemCore.UserStatesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserStatesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UserStatesFunctionLibrary");
		return ptr;
	}


	bool STATIC_HasEnableConditionsSetForSpecificUserState(class UObject* Context, const struct FName& UserStateProperty);
};


// Class GbxGameSystemCore.UseSystemFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UUseSystemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.UseSystemFunctionLibrary");
		return ptr;
	}


	void STATIC_SetIsUsable(class AActor* Actor, bool bNewIsUsable);
	void STATIC_ResetUseCount(class AActor* Actor);
};


// Class GbxGameSystemCore.WeaponInterface
// 0x0000 (0x0028 - 0x0028)
class UWeaponInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.WeaponInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.WeaponUserInterface
// 0x0000 (0x0028 - 0x0028)
class UWeaponUserInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.WeaponUserInterface");
		return ptr;
	}

};


// Class GbxGameSystemCore.WeatherTemplate
// 0x0010 (0x0040 - 0x0030)
class UWeatherTemplate : public UGbxDataAsset
{
public:
	class UParticleSystem*                             WorldSpaceParticleTemplate;                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenSpaceParticleTemplate;                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxGameSystemCore.WeatherTemplate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
