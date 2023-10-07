#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass JobSpecialMoveListPanel.JobSpecialMoveListPanel_C
class UJobSpecialMoveListPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListItemWidget_Col1_4_C*              ListItemWidget_Col1_4_01;                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemWidget_Col1_4_C*              ListItemWidget_Col1_4_02;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_SpecialMove;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UListItemWidget_Col1_4_C*>      ItemList;                                          // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        SelectIndex;                                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_166F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         WidgetItemList;                                    // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UJobSpecialMoveListPanel_C* GetDefaultObj();

	void GetItemListWidget(TArray<class UMJListItemWidget*>* ListWidget);
	void GetItemList(TArray<struct FMJListWidgetItemData>* ItemList);
	void GetItemLength(int32* Length);
	void OnCursorDown(bool* End);
	void OnCursorUp(bool* End);
	void EnableSelect(bool* Enable);
	void OpenHelpText(int32 Index);
	void SetParam(int32 PlayerID);
	void PlayFocus(int32 Index);
	void PlayOutFocus(int32 Index);
	void Construct();
	void Setup();
	void MostTop();
	void MostBottom();
	void OutSelect();
	void ReOpenHelpWindow();
	void SetSelectIndex(int32 Index);
	void ExecuteUbergraph_JobSpecialMoveListPanel(int32 EntryPoint);
};

}


