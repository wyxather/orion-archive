#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_QuestReward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTreeNode_QuestReward.EventTreeNode_QuestReward_C
// 0x0020 (0x0088 - 0x0068)
class UEventTreeNode_QuestReward_C : public UEventTreeNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	ERemnantQuestRewardType                            RewardType;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	class USpawnTable*                                 SpawnTable;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Tag;                                                      // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_QuestReward.EventTreeNode_QuestReward_C");
		return ptr;
	}


	void Begin(class UEventTreeComponent** Component);
	void ExecuteUbergraph_EventTreeNode_QuestReward(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
