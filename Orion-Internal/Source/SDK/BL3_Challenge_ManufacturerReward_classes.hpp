#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_ManufacturerReward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_ManufacturerReward.Challenge_ManufacturerReward_C
// 0x0020 (0x0280 - 0x0260)
class UChallenge_ManufacturerReward_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	TArray<struct FDataTableRowHandle>                 NPCMailDataRowHandles;                                    // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGameStatData*                               RewardStat;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_ManufacturerReward.Challenge_ManufacturerReward_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_ManufacturerReward(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
