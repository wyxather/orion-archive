#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Salvage_Reward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Salvage_Reward.Challenge_Salvage_Reward_C
// 0x0060 (0x02C0 - 0x0260)
class UChallenge_Salvage_Reward_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FOakNPCMailDataEntry                        SalvageChallengeReward;                                   // 0x0268(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Salvage_Reward.Challenge_Salvage_Reward_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Salvage_Reward(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
