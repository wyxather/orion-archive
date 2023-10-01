#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LootableDestructible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LootableDestructible.BP_LootableDestructible_C
// 0x0019 (0x0559 - 0x0540)
class ABP_LootableDestructible_C : public ABP_DestructibleGameplayAndNetworkRelevant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakLootableComponent*                       Loot;                                                     // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSpawnedLootAlready;                                      // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootableDestructible.BP_LootableDestructible_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_BP_LootableDestructible(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
