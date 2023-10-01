#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_MoxxiGunReward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Sabotage_MoxxiGunReward.Challenge_Sabotage_MoxxiGunReward_C
// 0x0018 (0x0290 - 0x0278)
class UChallenge_Sabotage_MoxxiGunReward_C : public UChallenge_Sabotage_RewardStat_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         NPCMailRowFootnote;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Sabotage_MoxxiGunReward.Challenge_Sabotage_MoxxiGunReward_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Sabotage_MoxxiGunReward(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
