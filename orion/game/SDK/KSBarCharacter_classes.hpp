#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5B (0xBAC - 0xB51)
// BlueprintGeneratedClass KSBarCharacter.KSBarCharacter_C
class AKSBarCharacter_C : public AKSFieldCharacter_C
{
public:
	uint8                                        Pad_11C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsItemTalk;                                        // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemTalkEvent;                                     // 0xB68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                NormalTalkEvent;                                   // 0xB78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          ItemLabel;                                         // 0xB88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                ItemCnt;                                           // 0xB98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CharacterID;                                       // 0xBA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSBarCharacter_C* GetDefaultObj();

	bool CallTalkEvent();
	void CloseDialog(int32 SelectIndex);
	void ChangeCharacter(int32 CharacterID, const class FString& ItemTalkEvent, const class FString& NormalTalkEvent);
	bool CalcItemData();
	void SetupCharacter(int32 CharacterID, const class FString& ItemEventLabel, const class FString& NormalEventLabel, TArray<class FName>& ItemLabel, TArray<int32>& ItemCnt);
	void TalkEventFinish();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_KSBarCharacter(int32 EntryPoint);
};

}


