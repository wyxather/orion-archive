#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionDamageable.IO_MissionDamageable_C
// 0x0120 (0x0728 - 0x0608)
class AIO_MissionDamageable_C : public AMission_InteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (Transient, DuplicateTransient)
	class UUsableComponent*                            Usable;                                                   // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_IO_LootSpawnComponent_C*                 BP_IO_LootSpawnComponent;                                 // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            LootSpawnSocket;                                          // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakHitRegionComponent*                      OakHitRegion;                                             // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_0F85D07A4B5A262EE6BABB90D9998913;   // 0x0660(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0F85D07A4B5A262EE6BABB90D9998913;   // 0x0664(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    MissionDamageableDestroyed;                               // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MissionDamageableIsDamageable;                            // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EIO_MissionDamageable_States>          MissionDamageableState;                                   // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	struct FMissionEventReference                      MissionEventToSendOnDestruction;                          // 0x0698(0x0010) (Edit, BlueprintVisible)
	bool                                               DamageableOnlyByPlayerControllers;                        // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyBasedOnNumberOfHits;                               // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x06AA(0x0002) MISSED OFFSET
	int                                                NumberOfRequiredHits;                                     // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HitsReceived;                                             // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 MeshComponentArray;                                       // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    MissionDamageableTookDamage;                              // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UConditionalDamageModifier*>          CustomConditionalDamageModifier;                          // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DelayBetweenDesructionAndSpawningLoot;                    // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UItemPoolListInterface*                      ItemPool;                                                 // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LootSocketName;                                           // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULootSpawnPatternData*                       LootSpawnPattern;                                         // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBetweenAcceptingHits;                                // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToSpawnLootOver;                                      // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAcceptHits;                                         // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttachLoot;                                               // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseMissionLootFailsafe;                                   // 0x0712(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0713(0x0005) MISSED OFFSET
	class UGbxCondition*                               Cond_MissionDamageableState_NewEnumerator1;               // 0x0718(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MissionDamageableState_NewEnumerator2;               // 0x0720(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionDamageable.IO_MissionDamageable_C");
		return ptr;
	}


	void SetDamageableGlowValue(float Value__0_1_);
	void SetMissionDamageableState(TEnumAsByte<Enum_MissionDamageableState> DamageableState);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ReceiveBeginPlay();
	void FlashMaterialsOnHit();
	void PlayFeedback_Destroying();
	void PlayFeedback_Destroyed();
	void PlayFeedback_Damageable();
	void PlayFeedback_Default();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void __UserState_MissionDamageableState_1(bool bFromLoad);
	void __UserState_MissionDamageableState_2(bool bFromLoad);
	void __UserState_MissionDamageableState_3(bool bFromLoad);
	void MissionDamageableTookNonZeroDamage_Multicast(int NumberOfTimesHit);
	void ExecuteUbergraph_IO_MissionDamageable(int EntryPoint);
	void MissionDamageableTookDamage__DelegateSignature(int NumberOfTimesHit);
	void MissionDamageableIsDamageable__DelegateSignature();
	void MissionDamageableDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
