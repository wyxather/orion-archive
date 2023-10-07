#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x3A4 - 0x358)
// WidgetBlueprintGeneratedClass PartyChat.PartyChat_C
class UPartyChat_C : public UPartyChatBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyChatCharacter_C*                 Character_01;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyChatCharacter_C*                 Character_02;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyChatCharacter_C*                 Character_03;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyChatCharacter_C*                 Character_04;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuHeader_C*                         MenuHeader_74;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPartyChatCharacter_C*>         CharacterList;                                     // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PartyChatId;                                       // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPartyChat_C* GetDefaultObj();

	bool OutFocusPartyChatCharactr(bool IsFast);
	bool FocusPartyChatCharactr(TArray<int32>& FocusCharacters, bool IsFast);
	bool VisibleBackGround(bool IsVisible);
	bool SetupPartyChatWidget(struct FPartyChat& PartyChatData, bool UseBackgroundImage);
	bool SetCharaDir(int32 Index, enum class EKSCharacterDir Dir);
	void GetCharacterPos(struct FVector2D* Pos, int32 Index);
	bool SetCharacterIndex(int32 Index, enum class EPlayableCharacterID Character, enum class EKSCharacterDir Dir);
	void SetCharacterDir(class UPartyChatCharacter_C* Character, int32 CharacterID, enum class EKSCharacterDir ActionDir);
	void Initialization();
	void Construct();
	void ExecuteUbergraph_PartyChat(int32 EntryPoint);
};

}


