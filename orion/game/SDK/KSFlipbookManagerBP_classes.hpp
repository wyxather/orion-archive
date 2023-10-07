#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x250 - 0x248)
// BlueprintGeneratedClass KSFlipbookManagerBP.KSFlipbookManagerBP_C
class AKSFlipbookManagerBP_C : public AKSFlipbookManager
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSFlipbookManagerBP_C* GetDefaultObj();

	bool GetMissionFlipbookData(class FName FlipbookName, struct FKSUIFlipbookData& FlipbookData);
	bool GetMissionSpriteData(class FName SpriteName, struct FKSSpriteData& SpriteData);
	bool GetCharacterData(class FName CharacterName, struct FKSCharaFlipbook& CharacterData);
	void GetCharacterTexAssetPtrs(class FName CharacterName, TArray<TSoftObjectPtr<class UTexture2D>>* OutTexAssetPtrs);
	bool GetCharacterFlipbookNames(class FName CharacterName, TArray<class FName>& FlipbookNames);
	bool ContainsFlipbookData(class FName FlipbookName);
	bool GetFlipbookData(class FName FlipbookName, struct FKSFlipbookData& FlipbookData);
	bool GetSpriteData(class FName SpriteName, struct FKSSpriteData& SpriteData);
};

}


