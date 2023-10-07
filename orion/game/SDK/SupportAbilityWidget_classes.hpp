#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass SupportAbilityWidget.SupportAbilityWidget_C
class USupportAbilityWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListColumnWidget_Col1_C*              ListColumn;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_C*                SupportAbilityWidget00;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_C*                SupportAbilityWidget01;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_C*                SupportAbilityWidget02;                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_C*                SupportAbilityWidget03;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ListFocus;                                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F32[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UListItemWidget_Col1_C*>        SupportAbilityWidgetList;                          // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FText>                          EquipSkillDetailText;                              // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HelpVisible;                                       // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGuest;                                           // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F34[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Character_ID;                                      // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USupportAbilityWidget_C* GetDefaultObj();

	void IsHelpVisible(bool* HelpVisible);
	void UpdateHelp();
	void SetupHelp(bool HelpVisible);
	void SwitchHelp();
	void GetSlotNum(int32* SlotNum);
	void SetSelectDecide();
	void UpdateCursor(int32 NewCursor, bool SelectDecide, bool UnSelectReset, bool IsFast, bool* IsMove);
	void GetCursorPos(int32* CursorPos);
	void Set_Support_Ability(int32 AbilityID, class UListItemWidget_Col1_C* Target, class FText* DetailText);
	void SetupText();
	void CursorDown(bool* IsSuccess);
	void CursorUp(bool* IsSuccess);
	void OutFocus();
	void Focus(bool IsFast);
	void Setup_Widget(struct FSavePlayerCharacterData& CharacterData, bool IsGuestCharacter);
	void Construct();
	void ExecuteUbergraph_SupportAbilityWidget(int32 EntryPoint);
};

}


