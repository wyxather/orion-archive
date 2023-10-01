#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxSpawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxSpawn.Spawner
// 0x0190 (0x05E8 - 0x0458)
class ASpawner : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorSpawned;                                           // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorDied;                                              // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorFellOutOfWorld;                                    // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorSuspend;                                           // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorUnsuspend;                                         // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllSpawned;                                             // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllDied;                                                // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveWarmup;                                             // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveStart;                                              // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveComplete;                                           // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReset;                                                  // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorSpawnedData;                                       // 0x0510(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0520(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnExternalActorSpawnedData;                               // 0x0538(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActorDiedData;                                          // 0x0548(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnExternalActorDiedData;                                  // 0x0558(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnScriptedWarmup;                                         // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorSuspendData;                                       // 0x0578(0x0010) (ZeroConstructor, InstancedReference)
	class USpawnerComponent*                           SpawnerComponent;                                         // 0x0588(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpawnerLinkComponent*                       SpawnerLinkComponent;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPointComponent;                                      // 0x0598(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpawnerTeamComponent*                       SpawnerTeamComponent;                                     // 0x05A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAutoGroundSpawnPointComponents;                          // 0x05A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	TArray<struct FName>                               ExcludeAutoGroundPointComponents;                         // 0x05B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x28];                                      // 0x05C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.Spawner");
		return ptr;
	}


	void SuspendAllActors();
	void SetTeamOverride(class UTeam* OverrideTeam);
	void SetTeam(class UTeam* NewTeam);
	void SetAlwaysActive(bool bInAlwaysActive);
	void ResetSpawning();
	void OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle);
	void OnSpawningComplete(class ASpawner* Spawner);
	bool IsSpawnerEnabled();
	bool IsFinishedSpawning();
	class USpawnPointComponent* GetSpawnPointComponent();
	class USpawnerTeamComponent* GetSpawnerTeamComponent();
	class USpawnerLinkComponent* GetSpawnerLinkComponent();
	class USpawnerComponent* GetSpawnerComponent();
	int GetNumAliveActors(bool bIncludeExternal);
	void EnableSpawner();
	void DisableSpawner();
	void DestroyAllActors();
	void CompleteScriptedWarmup();
	bool AreAllDead(bool bIncludeExternal);
};


// Class GbxSpawn.SpawnerComponent
// 0x02A0 (0x0990 - 0x06F0)
class USpawnerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x06F0(0x0098) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorSpawned;                                           // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorDied;                                              // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorSuspend;                                           // 0x07A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorUnsuspend;                                         // 0x07B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllSpawned;                                             // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllDied;                                                // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveWarmup;                                             // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveStart;                                              // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaveComplete;                                           // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScriptedWarmup;                                         // 0x0818(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReset;                                                  // 0x0828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorSpawnedData;                                       // 0x0838(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActorDiedData;                                          // 0x0848(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActorSuspendData;                                       // 0x0858(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0868(0x0020) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x0888(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ChanceToEnableOnInit;                                     // 0x0890(0x0038) (Edit)
	bool                                               bAlwaysActive;                                            // 0x08C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetOnEnabled;                                          // 0x08C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EScriptedWarmup                                    ScriptedWarmup;                                           // 0x08CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x08CB(0x0001) MISSED OFFSET
	float                                              ActivationRadius;                                         // 0x08CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivationUsesRadius;                                    // 0x08D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	TArray<class AVolume*>                             ActivationVolumes;                                        // 0x08D8(0x0010) (Edit, ZeroConstructor)
	bool                                               bActivationUsesVolumes;                                   // 0x08E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSpawnDetails                               SpawnDetails;                                             // 0x08E9(0x0007) (Edit)
	float                                              MinimumActivationTime;                                    // 0x08F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	class USpawnerStyle*                               SpawnerStyle;                                             // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnerStyle*                               SpawnerStyleOverride;                                     // 0x0900(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSpawnLimitData>                     Limits;                                                   // 0x0908(0x0010) (Edit, ZeroConstructor)
	bool                                               bApplyLimitsToGroup;                                      // 0x0918(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	TArray<class USpawnFactory*>                       WaitingFactories;                                         // 0x0920(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0930(0x0010) MISSED OFFSET
	TArray<class ASpawnPoint*>                         SpawnPoints;                                              // 0x0940(0x0010) (Edit, ZeroConstructor)
	bool                                               bRandomizeSpawnPoints;                                    // 0x0950(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	TArray<struct FSpawnPointGroup>                    SpawnPointGroups;                                         // 0x0958(0x0010) (Edit, ZeroConstructor)
	ESpawnPointUseType                                 SpawnPointUseType;                                        // 0x0968(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	float                                              SpawnPointClusterRadius;                                  // 0x096C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class USpawnPointComponent*>                SpawnPointComponents;                                     // 0x0970(0x0010) (ExportObject, ZeroConstructor, Transient)
	class ASpawner*                                    Spawner;                                                  // 0x0980(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncludeExternalActorsForAllDiedEvent;                    // 0x0988(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0989(0x0002) MISSED OFFSET
	ESpawnerDrawStyle                                  DrawStyle;                                                // 0x098B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseScriptedWarmup;                                       // 0x098C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x098D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerComponent");
		return ptr;
	}


	void SuspendAllActors();
	void SetTeam(class UTeam* NewTeam);
	void SetSpawnOptions(class USpawnOptionData* NewSpawnOptions);
	void ResetSpawning();
	void OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle);
	bool IsSpawnerStyleClassAllowed(class UClass* SpawnerStyleClass);
	bool IsFinishedSpawning();
	void IncludeExternalActorsForAllDiedEvent();
	class USpawnOptionData* GetSpawnOptions();
	class USpawnerComponent* GetParentSpawner();
	int GetNumSuspendedActors();
	int GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup);
	int GetNumDeadActors(bool bIncludeExternal, bool bInGroup);
	int GetNumAliveActors(bool bIncludeExternal, bool bInGroup);
	TArray<class AActor*> GetAliveActors();
	void EnableSpawner();
	void DisableSpawner();
	void DestroyAllActors();
	void CompleteScriptedWarmup();
	bool AreAllDead(bool bIncludeExternal, bool bInGroup);
};


// Class GbxSpawn.SpawnPoint
// 0x0068 (0x04C0 - 0x0458)
class ASpawnPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorSpawned;                                           // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorDied;                                              // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USceneComponent*                             SpawnRootComponent;                                       // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPointComponent;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class USpawnerComponent*>                   ConnectedSpawners;                                        // 0x0490(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             TempRootFix;                                              // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x04A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnPoint");
		return ptr;
	}


	void SetSpawnStyleTag(const struct FGameplayTag& NewTag);
	void ResetStretchPoint();
	struct FGameplayTag GetSpawnStyleTag();
	void EnableSpawnPoint();
	void DisableSpawnPoint();
};


// Class GbxSpawn.AnimNotify_SpawnAnim
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_SpawnAnim : public UAnimNotify
{
public:
	ESpawnAnimNotifyAction                             Action;                                                   // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.AnimNotify_SpawnAnim");
		return ptr;
	}

};


// Class GbxSpawn.GbxAction_SpawnAnim
// 0x0018 (0x01C0 - 0x01A8)
class UGbxAction_SpawnAnim : public UGbxAction_Anim
{
public:
	class UClass*                                      SpawnPointAction;                                         // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnPointActionStop;                                     // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         OverrideMovementMode;                                     // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMovementMode;                                    // 0x01B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCollisionOnSpawn;                                 // 0x01BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x01BB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.GbxAction_SpawnAnim");
		return ptr;
	}


	class AActor* K2_GetSpawnPoint();
};


// Class GbxSpawn.GbxCondition_SpawnCostAvailable
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_SpawnCostAvailable : public UGbxCondition
{
public:
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.GbxCondition_SpawnCostAvailable");
		return ptr;
	}

};


// Class GbxSpawn.MultiSpawnPoint
// 0x0010 (0x04D0 - 0x04C0)
class AMultiSpawnPoint : public ASpawnPoint
{
public:
	TArray<class USpawnPointComponent*>                SpawnPointComponents;                                     // 0x04C0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.MultiSpawnPoint");
		return ptr;
	}

};


// Class GbxSpawn.SpawnDLCScript
// 0x0000 (0x0028 - 0x0028)
class USpawnDLCScript : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnDLCScript");
		return ptr;
	}


	void OnAllSpawned(class USpawnerComponent* SpawnerComponent);
	void OnAllDied(class USpawnerComponent* SpawnerComponent);
	void OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
	void OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
};


// Class GbxSpawn.SpawnDLCData
// 0x0218 (0x0248 - 0x0030)
class USpawnDLCData : public UGbxDataAsset
{
public:
	TMap<class USpawnOptionData*, class USpawnOptionData*> GlobalReplacement;                                        // 0x0030(0x0050) (Edit, ZeroConstructor)
	bool                                               bGlobalReplacementAlwaysEnabledDuringEvent;               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<struct FSpawnDLCGroup>                      SpawnerReplacements;                                      // 0x0088(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Script;                                                   // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScriptGloballyReplacedSpawners;                          // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScriptManuallyReplacedSpawners;                          // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	struct FGbxParam                                   MaximumTotalEventEnemies;                                 // 0x00A8(0x0080) (Edit)
	struct FGbxParam                                   MaximumEventEnemiesPerSpawner;                            // 0x0128(0x0080) (Edit)
	struct FGbxParam                                   MaximumScriptedSpawnersPerGroup;                          // 0x01A8(0x0080) (Edit)
	TArray<struct FSpawnDLCScriptGroup>                ScriptedSpawners;                                         // 0x0228(0x0010) (Edit, ZeroConstructor)
	TArray<class UDLCScriptedSpawerExpansionList*>     ExpansionScriptedSpawners;                                // 0x0238(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnDLCData");
		return ptr;
	}

};


// Class GbxSpawn.GlobalSpawnDLCData
// 0x0010 (0x0040 - 0x0030)
class UGlobalSpawnDLCData : public UGbxDataAsset
{
public:
	TArray<struct FSpawnDLCItem>                       DLCs;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.GlobalSpawnDLCData");
		return ptr;
	}

};


// Class GbxSpawn.DLCScriptedSpawerExpansionList
// 0x0010 (0x0040 - 0x0030)
class UDLCScriptedSpawerExpansionList : public UGbxDataAsset
{
public:
	TArray<struct FSpawnDLCScriptGroup>                ScriptedSpawners;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.DLCScriptedSpawerExpansionList");
		return ptr;
	}

};


// Class GbxSpawn.SpawnedActorInterface
// 0x0000 (0x0028 - 0x0028)
class USpawnedActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnedActorInterface");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USpawnerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerBlueprintLibrary");
		return ptr;
	}


	void STATIC_SuspendSpawnedActors(class UObject* WorldContextObject);
	class AActor* STATIC_SpawnActorWithSpawnOptionsTransform(class AActor* Context, class USpawnOptionData* SpawnOptions, const struct FTransform& SpawnTransform);
	int STATIC_SpawnActorWithSpawnOptionsAsync(class UObject* WorldContext, const struct FSpawnManagerAsyncRequest& Request);
	class AActor* STATIC_SpawnActorWithSpawnOptions(class AActor* Context, class USpawnOptionData* SpawnOptions, class USpawnPointComponent* SpawnPointComponent);
	class AActor* STATIC_SpawnActorWithSpawner(class AActor* Context, class USpawnFactory* Factory, class USpawnPointComponent* SpawnPointComponent, class USpawnerComponent* SpawnerComponent, class AActor* Owner);
	void STATIC_SetMaxSpawnCost(class UObject* WorldContextObject, int NewMaxSpawnCost);
	void STATIC_RestoreSuspendedActors(class UObject* WorldContextObject);
	void STATIC_RemoveActorFromSpawnSystem(class AActor* Actor);
	void STATIC_CancelSpawnActorWithOptionsAsyncRequest(class UObject* WorldContext, int RequestID);
};


// Class GbxSpawn.SpawnerLinkComponent
// 0x0080 (0x0770 - 0x06F0)
class USpawnerLinkComponent : public UPrimitiveComponent
{
public:
	TArray<struct FSpawnerLinkData>                    LinkDataList;                                             // 0x06F0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              LinkedSpawners;                                           // 0x0700(0x0010) (Edit, ZeroConstructor)
	bool                                               bAutoProximityLink;                                       // 0x0710(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FSpawnerLinkData                            MasterLinkData;                                           // 0x0718(0x0028) (Transient)
	bool                                               bBeingDestroyed;                                          // 0x0740(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	TArray<class UObject*>                             SharedStates;                                             // 0x0748(0x0010) (ZeroConstructor, Transient)
	TArray<class ASpawner*>                            AllLinkedSpawners;                                        // 0x0758(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerLinkComponent");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStateInterface
// 0x0000 (0x0028 - 0x0028)
class USpawnerStateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStateInterface");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyle
// 0x0000 (0x0030 - 0x0030)
class USpawnerStyle : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyle_Bunch
// 0x0090 (0x00C0 - 0x0030)
class USpawnerStyle_Bunch : public USpawnerStyle
{
public:
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   NumActorsParam;                                           // 0x0038(0x0080) (Edit)
	float                                              SpawnDelay;                                               // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Bunch");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyle_BunchList
// 0x0018 (0x0048 - 0x0030)
class USpawnerStyle_BunchList : public USpawnerStyle
{
public:
	TArray<struct FSpawnBunchListItem>                 Bunches;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              SpawnDelay;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_BunchList");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyle_Den
// 0x0220 (0x0250 - 0x0030)
class USpawnerStyle_Den : public USpawnerStyle
{
public:
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfinite;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FGbxParam                                   NumActorsParam;                                           // 0x0040(0x0080) (Edit)
	struct FGbxParam                                   MaxAliveActorsWhenPassive;                                // 0x00C0(0x0080) (Edit)
	struct FGbxParam                                   MaxAliveActorsWhenThreatened;                             // 0x0140(0x0080) (Edit)
	float                                              SpawnDelay;                                               // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaveDelay;                                                // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WavePercent;                                              // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	struct FGbxParam                                   NumAliveActorsParam;                                      // 0x01D0(0x0080)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Den");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyle_Encounter
// 0x0010 (0x0040 - 0x0030)
class USpawnerStyle_Encounter : public USpawnerStyle
{
public:
	TArray<struct FEncounterWave>                      Waves;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Encounter");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyle_Single
// 0x0008 (0x0038 - 0x0030)
class USpawnerStyle_Single : public USpawnerStyle
{
public:
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Single");
		return ptr;
	}

};


// Class GbxSpawn.SpawnerStyleFactory_Bunch
// 0x0018 (0x00D8 - 0x00C0)
class USpawnerStyleFactory_Bunch : public USpawnerStyle_Bunch
{
public:
	class USpawnFactory*                               SpawnFactory;                                             // 0x00C0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESpawnLimitType                                    AliveLimitType;                                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class USpawnOptionData*                            InternalSpawnOptions;                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyleFactory_Bunch");
		return ptr;
	}


	bool IsFactoryClassAllowed(class UClass* FactoryClass);
};


// Class GbxSpawn.SpawnerStyleFactory_Den
// 0x0018 (0x0268 - 0x0250)
class USpawnerStyleFactory_Den : public USpawnerStyle_Den
{
public:
	class USpawnFactory*                               SpawnFactory;                                             // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESpawnLimitType                                    AliveLimitType;                                           // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class USpawnOptionData*                            InternalSpawnOptions;                                     // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyleFactory_Den");
		return ptr;
	}


	bool IsFactoryClassAllowed(class UClass* FactoryClass);
};


// Class GbxSpawn.SpawnerStyleFactory_Single
// 0x0018 (0x0050 - 0x0038)
class USpawnerStyleFactory_Single : public USpawnerStyle_Single
{
public:
	class USpawnFactory*                               SpawnFactory;                                             // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESpawnLimitType                                    AliveLimitType;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class USpawnOptionData*                            InternalSpawnOptions;                                     // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyleFactory_Single");
		return ptr;
	}


	bool IsFactoryClassAllowed(class UClass* FactoryClass);
};


// Class GbxSpawn.SpawnerTeamComponent
// 0x0020 (0x01D8 - 0x01B8)
class USpawnerTeamComponent : public UTeamComponent
{
public:
	class UTeam*                                       OverrideTeam;                                             // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideTeam;                                            // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FName                                       ResolvedTeamType;                                         // 0x01C8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UTeam*                                       EvaluatedTeam;                                            // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnerTeamComponent");
		return ptr;
	}

};


// Class GbxSpawn.SpawnFactory
// 0x0070 (0x0098 - 0x0028)
class USpawnFactory : public UObject
{
public:
	bool                                               bUsedInSpawnPointOverlapChecks;                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideActorTags;                                       // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0030(0x0020) (Edit)
	struct FSpawnDetails                               SpawnDetails;                                             // 0x0050(0x0007) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	class UGameplayTagContainerComponent*              CachedActorClassTagComponent;                             // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTeam*                                       CachedTeam;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory");
		return ptr;
	}

};


// Class GbxSpawn.SpawnFactory_Container
// 0x0008 (0x00A0 - 0x0098)
class USpawnFactory_Container : public USpawnFactory
{
public:
	class USpawnOptionData*                            Options;                                                  // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory_Container");
		return ptr;
	}

};


// Class GbxSpawn.SpawnFactory_ContainerSoftRef
// 0x0018 (0x00B0 - 0x0098)
class USpawnFactory_ContainerSoftRef : public USpawnFactory
{
public:
	struct FSpawnOptionDataSoftPath                    OptionsPath;                                              // 0x0098(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory_ContainerSoftRef");
		return ptr;
	}

};


// Class GbxSpawn.SpawnFactory_Generic
// 0x0140 (0x01D8 - 0x0098)
class USpawnFactory_Generic : public USpawnFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class AActor*                                      ActorProperties;                                          // 0x00A0(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bUseActorProperties;                                      // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeSkeletalMeshForSpawnExtent;                       // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       ActorClass;                                               // 0x00B0(0x0028) (Edit)
	struct FVector                                     SpawnOrigin;                                              // 0x00D8(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     SpawnExtent;                                              // 0x00E4(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideSpawnSize;                                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandling;                                        // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCollisionHandling;                               // 0x00F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD5];                                      // 0x00F3(0x00D5) MISSED OFFSET
	TArray<struct FSoftObjectPath>                     ActorPropertyAssetRefCache;                               // 0x01C8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory_Generic");
		return ptr;
	}


	bool STATIC_ShouldSkipActorProperty(class UProperty* ActorProperty);
};


// Class GbxSpawn.SpawnManager
// 0x0308 (0x0330 - 0x0028)
class USpawnManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class AActor*>                              AdditionalSpawnPointOverlapActors;                        // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x148];                                     // 0x0040(0x0148) MISSED OFFSET
	TArray<struct FSpawnManagerAsyncRequestEntry>      AsyncRequests;                                            // 0x0188(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0198(0x0010) MISSED OFFSET
	struct FSoftClassPath                              SpawnManagerClassName;                                    // 0x01A8(0x0018) (Edit, Config, GlobalConfig)
	int                                                MaxSpawnCost;                                             // 0x01C0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCanResetSpawners;                                        // 0x01C4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	float                                              SpawnerResetPeriod;                                       // 0x01C8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxActorsSpawnedPerFrame;                                 // 0x01CC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              UpdatePeriod;                                             // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                SuspendTestPeriod;                                        // 0x01D4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                IrrelevantPeriod;                                         // 0x01D8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                AlwaysRelevantDistance;                                   // 0x01DC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                AlwaysIrrelevantDistance;                                 // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UGlobalSpawnDLCData>          GlobalDLCData;                                            // 0x01E8(0x0028) (Edit, Config, GlobalConfig)
	bool                                               bUseMultiframeSpawning;                                   // 0x0210(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	class UWorld*                                      PrivateWorld;                                             // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class USpawnDLCData*>                       DLCs;                                                     // 0x0220(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0230(0x0020) MISSED OFFSET
	TArray<struct FSpawnerData>                        Spawners;                                                 // 0x0250(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVector>                             CachedPlayerLocations;                                    // 0x0260(0x0010) (ZeroConstructor, Transient)
	TArray<class AController*>                         CachedPlayers;                                            // 0x0270(0x0010) (ZeroConstructor, Transient)
	class AActor*                                      SpawnedActor;                                             // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xA8];                                      // 0x0288(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnManager");
		return ptr;
	}


	void ActorDestroyed(class AActor* Actor);
};


// Class GbxSpawn.SpawnSystemEditorSettings
// 0x0008 (0x0040 - 0x0038)
class USpawnSystemEditorSettings : public UDeveloperSettings
{
public:
	ESpawnSystemStreamStyle                            StreamStyle;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnSystemEditorSettings");
		return ptr;
	}

};


// Class GbxSpawn.SpawnOptionData
// 0x0018 (0x0048 - 0x0030)
class USpawnOptionData : public UGbxDataAsset
{
public:
	TArray<struct FSpawnFactoryData>                   Options;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FSpawnDetails                               SpawnDetails;                                             // 0x0040(0x0007) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0047(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnOptionData");
		return ptr;
	}

};


// Class GbxSpawn.SpawnPointComponent
// 0x0290 (0x0980 - 0x06F0)
class USpawnPointComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorSpawned;                                           // 0x06F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorDied;                                              // 0x0708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpawnAnimComplete;                                      // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1A0];                                     // 0x0728(0x01A0) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x08C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08C9(0x0007) MISSED OFFSET
	class ASpawnPoint*                                 SpawnPoint;                                               // 0x08D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTag                                SpawnAITreeTag;                                           // 0x08D8(0x0008) (Edit)
	struct FGameplayTag                                SpawnAction;                                              // 0x08E0(0x0008) (Edit)
	ESpawnStretchType                                  SpawnStretchType;                                         // 0x08E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	float                                              TraceToGroundDistance;                                    // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStretchOrient;                                           // 0x08F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x08F8(0x0020) (Edit)
	ESpawnPointFilter                                  FilterMatchType;                                          // 0x0918(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFilterByTags;                                            // 0x0919(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagMatchType;                                             // 0x091A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x091B(0x0005) MISSED OFFSET
	struct FTransform                                  StretchyPoint;                                            // 0x0920(0x0030) (IsPlainOldData)
	struct FGbxTriggerProperty                         ResetStretch;                                             // 0x0950(0x0001) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1F];                                      // 0x0951(0x001F) MISSED OFFSET
	bool                                               bAttachSpawnedActors;                                     // 0x0970(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	struct FName                                       AttachSlotName;                                           // 0x0978(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnPointComponent");
		return ptr;
	}


	void SetSpawnStyleTag(const struct FGameplayTag& NewTag);
	void ResetStretchPoint();
	bool HasSpawnAITreeTag();
	struct FTransform GetStretchyPoint();
	struct FGameplayTag GetSpawnStyleTag();
	struct FGameplayTag GetSpawnAITreeTag();
	void EnableSpawnPoint();
	void DisableSpawnPoint();
};


// Class GbxSpawn.SpawnPointProvider
// 0x0000 (0x0028 - 0x0028)
class USpawnPointProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnPointProvider");
		return ptr;
	}

};


// Class GbxSpawn.SpawnPreviewComponent
// 0x0050 (0x0840 - 0x07F0)
class USpawnPreviewComponent : public UPreviewComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07F0(0x0008) MISSED OFFSET
	int                                                ActiveSpawnPointIdx;                                      // 0x07F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class UClass*                                      PreviewAction;                                            // 0x0800(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bAutoCycle;                                               // 0x0808(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         CycleActor;                                               // 0x0809(0x0001) (Edit, Transient, IsPlainOldData)
	bool                                               bShowAction;                                              // 0x080A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRepeatAction;                                            // 0x080B(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         ReplayAction;                                             // 0x080C(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UGbxActionComponent>          ActionComponent;                                          // 0x0810(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class USpawnerComponent*>                   SpawnerList;                                              // 0x0818(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0828(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpawn.SpawnPreviewComponent");
		return ptr;
	}


	void OnReplayAction();
	void OnCycleActor(ECycleDirection Direction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
