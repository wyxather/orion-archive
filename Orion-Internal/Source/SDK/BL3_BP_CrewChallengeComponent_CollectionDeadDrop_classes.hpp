#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_CollectionDeadDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C
// 0x0038 (0x0808 - 0x07D0)
class UBP_CrewChallengeComponent_CollectionDeadDrop_C : public UChallengeLevelActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)
	class AOakSpawner*                                 Spawner;                                                  // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ALootableObject*>                     Lootables;                                                // 0x07E0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UChallengesComponent*                        ChallComponent;                                           // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeActiveReference;                                 // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChallengeCompleteReference;                               // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C");
		return ptr;
	}


	void CheckChallengeState(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeActive, class UClass* ChallengeComplete, bool* IsActive);
	void ReceiveBeginPlay();
	void Setup_Challenge();
	void ChestUsed(const struct FUseEvent& UseEvent);
	void SpawnedChest(class ASpawner* Spawner, class AActor* Actor);
	void ChestUnlocked(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass);
	void ActiveOnLoad(class UChallengesComponent* ChallengeComponent);
	void CompleteOnLoad(class UChallengesComponent* Challenge_Component);
	void ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
