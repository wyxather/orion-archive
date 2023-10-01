#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantSaveGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RemnantSaveGame.BP_RemnantSaveGame_C
// 0x006A (0x0112 - 0x00A8)
class UBP_RemnantSaveGame_C : public URemnantSaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimePlayed;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FText                                       QuestLabel;                                               // 0x00B8(0x0018) (Edit, BlueprintVisible, SaveGame)
	struct FText                                       Difficulty;                                               // 0x00D0(0x0018) (Edit, BlueprintVisible, SaveGame)
	TSoftObjectPtr<class UTexture2D>                   LocationImage;                                            // 0x00E8(0x0028) (Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	bool                                               AwardedSurvivorBag;                                       // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               ConsumedSurvivorBag;                                      // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantSaveGame.BP_RemnantSaveGame_C");
		return ptr;
	}


	void UpdateSaveInfo(class UGameInstanceGunfire** GameInstance);
	void UpdateTimePlayed(float* DeltaTime);
	void PreCommit(class UPersistenceManager** PersistenceManager);
	void ExecuteUbergraph_BP_RemnantSaveGame(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
