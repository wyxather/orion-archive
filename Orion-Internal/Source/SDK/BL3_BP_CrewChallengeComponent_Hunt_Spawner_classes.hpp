#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Hunt_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C
// 0x0018 (0x07E8 - 0x07D0)
class UBP_CrewChallengeComponent_Hunt_Spawner_C : public UChallengeLevelActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)
	class AOakSpawner*                                 Spawner;                                                  // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USpawnOptionData*                            ChallengeComplete_Spawn;                                  // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Setup_Challenge();
	void ChallengeSpawner_AllDead(class ASpawner* Spawner);
	void PlayerEnterChallengeArea(class UChallengesComponent* PlayerChallenges);
	void ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
