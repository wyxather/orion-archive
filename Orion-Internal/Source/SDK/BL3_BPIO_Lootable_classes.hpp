#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable.BPIO_Lootable_C
// 0x00CC (0x08B4 - 0x07E8)
class ABPIO_Lootable_C : public ALootableObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E8(0x0008) (Transient, DuplicateTransient)
	class ULightAudioComponent*                        LightAudio;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavBoxComponent*                         GbxNavBox;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakLootableComponent*                       Loot;                                                     // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Mesh_Chest1;                                              // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 OnChestOpenedAudio;                                       // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 OnChestOpeningAudio;                                      // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 OnChestClosedAudio;                                       // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 OnChestClosingAudio;                                      // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 OnChestLockedAudio;                                       // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 ManagedAudioLoop;                                         // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesLoopingAudio;                                         // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasStartedManagedLoop;                                    // 0x0859(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x085A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Opened;                                                // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_AnyLootTaken;                                          // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_AllLootTaken;                                          // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_Opening;                                               // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UGameStatData*>                       LootableStats;                                            // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Audio_LoopTransitionTime;                                 // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable.BPIO_Lootable_C");
		return ptr;
	}


	void PlayAudio();
	void UserConstructionScript();
	void OnLocked();
	void OnEnabling();
	void OnEnabled();
	void OnDisabling();
	void OnDisabled();
	void OnAllPickupsDetached_Event(class ADroppedInventoryItemPickup* Pickup, class AActor* PickedUpBy);
	void OnPickupDetached_Event_1(class ADroppedInventoryItemPickup* Pickup, class AActor* PickedUpBy);
	void ReceiveBeginPlay();
	void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ExecuteUbergraph_BPIO_Lootable(int EntryPoint);
	void On_Opening__DelegateSignature();
	void On_AllLootTaken__DelegateSignature(class ADroppedInventoryItemPickup* PickedUpItem);
	void On_AnyLootTaken__DelegateSignature(class ADroppedInventoryItemPickup* PickedUpItem);
	void On_Opened__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
