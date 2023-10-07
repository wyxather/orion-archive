#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x380 - 0x260)
// WidgetBlueprintGeneratedClass ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C
class UListWidgetJobAbilityWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListColumnWidget_Col1_3_C*            ListCaption;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_4_C*              SupportAbility01;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_4_C*              SupportAbility02;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_4_C*              SupportAbility03;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_4_C*              SupportAbility04;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UListItemWidget_Col1_4_C*>      ListItems;                                         // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FJobData                              JobData;                                           // 0x2A0(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectIndex;                                       // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BeforeIndex;                                       // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         ItemList;                                          // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UListWidgetJobAbilityWidget_C* GetDefaultObj();

	void GetItemListWidget(TArray<class UMJListItemWidget*>* ListWidget);
	void GetItemList(TArray<struct FMJListWidgetItemData>* ItemList);
	void GetItemLength(int32* Length);
	void EnableSelect(bool* Enable);
	void OnCursorUp(bool* End);
	void OnCursorDown(bool* End);
	void PlayOutFocus(int32 Index);
	void PlayFocus(int32 Index);
	void UpdateSelectCursor(bool IsUp);
	void ShowHelpText();
	void SetCharacterData(struct FSavePlayerCharacterData& CharacterData, bool ShowSecondJob);
	void SetSupportAbility(struct FJobData& JobData, TArray<bool>& AcquisitionData, int32 CharaID);
	void SetListCaption(class FName CaptionText);
	void SetupText();
	void Construct();
	void MostTop();
	void MostBottom();
	void Setup();
	void OutSelect();
	void ReOpenHelpWindow();
	void SetSelectIndex(int32 Index);
	void ExecuteUbergraph_ListWidgetJobAbilityWidget(int32 EntryPoint);
};

}


