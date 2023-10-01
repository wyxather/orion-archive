#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionUsable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionUsable.IO_MissionUsable_C
// 0x0128 (0x0730 - 0x0608)
class AIO_MissionUsable_C : public AMission_InteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (Transient, DuplicateTransient)
	class UBP_IO_LootSpawnComponent_C*                 BP_IO_LootSpawnComponent;                                 // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            LootSocket;                                               // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    MissionUsableStartedUse;                                  // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MissionUsableFinishedUse;                                 // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MissionUsableIsUsable;                                    // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FMissionEventReference                      MissionEventToSendOnUse;                                  // 0x0678(0x0010) (Edit, BlueprintVisible)
	class AController*                                 LastUserController;                                       // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumState_MissionUsable>               MissionUsableState;                                       // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	float                                              LootSpawnDelay;                                           // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemPoolListInterface*                      ItemPool;                                                 // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LootSocketName;                                           // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULootSpawnPatternData*                       SpawnPattern;                                             // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AGbxLevelSequenceActor*                      GBXLevelSequenceToPlayOnUse;                              // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    MissionUsable_SequenceFinished;                           // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              GBXLevelSequenceDelay;                                    // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	struct FMissionEventReference                      MissionEventToSendWhenSequenceIsFinished_;                // 0x06D0(0x0010) (Edit, BlueprintVisible)
	struct FMissionObjectiveReference                  SequenceFailsafeObjective;                                // 0x06E0(0x0030) (Edit, BlueprintVisible)
	bool                                               SequenceIsMissionSafe;                                    // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              TimeToSpawnLootOver;                                      // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttachLoot;                                               // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseMissionLootFailsafe;                                   // 0x0719(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnLateJoin_GoToEndAndStop;                                // 0x071A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x071B(0x0005) MISSED OFFSET
	class UGbxCondition*                               Cond_MissionUsableState_NewEnumerator1;                   // 0x0720(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MissionUsableState_NewEnumerator2;                   // 0x0728(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionUsable.IO_MissionUsable_C");
		return ptr;
	}


	void SetLastUser(class AController* Controller);
	void CheckForMissionSequenceFailsafe();
	void UserConstructionScript();
	void SetUsableState(TEnumAsByte<Enum_MissionUsableState> State);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void PrimaryUse();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void SecondaryUse();
	void Play_Feedback_Used();
	void Play_Feedback_UsableDefault();
	void Play_Feedback_InUse();
	void Play_Feedback_Usable();
	void __UserState_MissionUsableState_1(bool bFromLoad);
	void __UserState_MissionUsableState_2(bool bFromLoad);
	void __UserState_MissionUsableState_3(bool bFromLoad);
	void BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable();
	void ExecuteUbergraph_IO_MissionUsable(int EntryPoint);
	void MissionUsable_SequenceFinished__DelegateSignature();
	void MissionUsableIsUsable__DelegateSignature();
	void MissionUsableFinishedUse__DelegateSignature();
	void MissionUsableStartedUse__DelegateSignature(class AController* UserController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
