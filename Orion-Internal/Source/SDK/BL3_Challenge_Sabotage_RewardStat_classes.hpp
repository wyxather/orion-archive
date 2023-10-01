#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_RewardStat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Sabotage_RewardStat.Challenge_Sabotage_RewardStat_C
// 0x0018 (0x0278 - 0x0260)
class UChallenge_Sabotage_RewardStat_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         NPCMailRow;                                               // 0x0268(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Sabotage_RewardStat.Challenge_Sabotage_RewardStat_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Sabotage_RewardStat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
