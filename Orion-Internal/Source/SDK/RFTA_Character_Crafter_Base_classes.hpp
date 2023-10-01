#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Crafter_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Crafter_Base.Character_Crafter_Base_C
// 0x00CE (0x0D00 - 0x0C32)
class ACharacter_Crafter_Base_C : public ACharacter_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C32(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMap_Remnant_C*                          MiniMap_Remnant;                                          // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCraftingComponent*                          Crafting;                                                 // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                               // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Generated;                                                // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C59(0x0007) MISSED OFFSET
	class USpawnTable*                                 SpawnTable;                                               // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnList                                  SpawnList;                                                // 0x0C68(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSpawnEntry                                 SpawnLoad;                                                // 0x0C78(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               OverrideTags;                                             // 0x0CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Crafter_Base.Character_Crafter_Base_C");
		return ptr;
	}


	void CheckItemsPostAdd();
	void GetItemSpawnTags(TArray<struct FName>* Out);
	void Generate();
	void OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA(class UClass** Loaded);
	void LoadAndAdd();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Character_Crafter_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
