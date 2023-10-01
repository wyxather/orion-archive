#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_VaultReward_TrueGuardian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C
// 0x0008 (0x0268 - 0x0260)
class UChallenge_VaultReward_TrueGuardian_C : public UChallenge_VaultReward_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C");
		return ptr;
	}


	void CompletedAllPlotMissions();
	void SetBinds(class UChallengesComponent* ChallengeComponent);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_Challenge_VaultReward_TrueGuardian(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
