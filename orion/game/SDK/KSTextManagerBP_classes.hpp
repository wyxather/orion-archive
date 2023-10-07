#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3C8 - 0x308)
// BlueprintGeneratedClass KSTextManagerBP.KSTextManagerBP_C
class AKSTextManagerBP_C : public AKSTextManager
{
public:
	class UTextOperationComponent*               TextOperation;                                     // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UDataTable>>     LoadTextRef;                                       // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                       LoadedObject;                                      // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                       TextVoiceObject;                                   // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UDataTable>>     GameTextAsset;                                     // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UDataTable>>     TalkTextAsset;                                     // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UDataTable>>     TalkVoiceAsset;                                    // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UDataTable>             ItemTextInfoAsset;                                 // 0x378(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UDataTable>             CharaTextInfoAsset;                                // 0x3A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSTextManagerBP_C* GetDefaultObj();

	void IsReady(bool* Result);
	void GetTalkVoiceTable(enum class EKSLanguage Language, TSoftObjectPtr<class UDataTable>* Table);
	void GetTalkTextTable(enum class EKSLanguage Language, TSoftObjectPtr<class UDataTable>* Table);
	void GetGameTextTable(enum class EKSLanguage Language, TSoftObjectPtr<class UDataTable>* DataTable);
	void CbLoadTextVoice(TArray<class UObject*>& TextVoiceObject);
	bool LoadTextVoice(enum class EKSLanguage ELang);
	void CbLoadText(TArray<class UObject*>& LoadData);
	bool LoadText(enum class EKSLanguage ELang);
	void UserConstructionScript();
};

}


