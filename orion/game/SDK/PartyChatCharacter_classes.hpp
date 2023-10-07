#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D (0x2ED - 0x2C0)
// WidgetBlueprintGeneratedClass PartyChatCharacter.PartyChatCharacter_C
class UPartyChatCharacter_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OutFocusAnim;                                      // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FocusAnim;                                         // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFBImage*                              Character;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FBPart_C*                         WBP_FBPart;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PlayableCharacterId;                               // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFocus;                                           // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPartyChatCharacter_C* GetDefaultObj();

	void GetNoReadThiefLabel(int32 CharacterID, class FName* LabelName);
	void PartyChatCharacter_AutoGenFunc(TArray<class UObject*>& ObjList);
	void CheckThiefSisterEvent(int32 PartyChatId, bool* Enable);
	void SetCharacterThief(int32 CharacterID, enum class EKSCharacterDir ActionDir, int32 PartyChatId);
	void Focus(bool IsFocus, bool IsFast);
	void GetCharacterID(int32* CharacterID);
	void SetCharacter(int32 CharacterID, enum class EKSCharacterDir ActionDir, int32 PartyChatId);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PartyChatCharacter(int32 EntryPoint);
};

}


