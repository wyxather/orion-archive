#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Merchant_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Merchant_Base.Character_Merchant_Base_C
// 0x00D7 (0x0D09 - 0x0C32)
class ACharacter_Merchant_Base_C : public ACharacter_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C32(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMap_Remnant_C*                          MiniMap_Remnant;                                          // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCraftingComponent*                          Crafting;                                                 // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDisplayInfoComponent_C*                     DisplayInfoComponent1;                                    // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Generated;                                                // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C59(0x0007) MISSED OFFSET
	class USpawnTable*                                 SpawnTable;                                               // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnList                                  SpawnList;                                                // 0x0C68(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSpawnEntry                                 SpawnLoad;                                                // 0x0C78(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MinutesBeforeInventoryRefresh;                            // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastGenerationSeed;                                       // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnList                                  PreviousSpawnList;                                        // 0x0CF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	bool                                               UseHostLevel;                                             // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Merchant_Base.Character_Merchant_Base_C");
		return ptr;
	}


	void GetItemSpawnTags(TArray<struct FName>* Tags);
	void GetLevel(int* Out);
	void GetRandomSeed(int* Seed);
	void Generate();
	void OnLoaded_8FC16AA04430CE125AFE78B043C14005(class UClass** Loaded);
	void OnLoaded_57B56CA34F9C75CB4271589095AF3F85(class UClass** Loaded);
	void LoadAndAdd();
	void ReceiveBeginPlay();
	void RemovePreviousVendorOptions();
	void ExecuteUbergraph_Character_Merchant_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
