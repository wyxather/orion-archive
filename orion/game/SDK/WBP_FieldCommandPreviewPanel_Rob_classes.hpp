#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C
class UWBP_FieldCommandPreviewPanel_Rob_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	class URobItemListWidget_C*                  RobItemListWidget;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          Un_Acquired_Items_for_Rob;                         // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Rob_C* GetDefaultObj();

	void IsAllItemOverMaxCount(TArray<class FName>& ItemLabels, bool* Return);
	void GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow);
	void Open(bool IsFast);
	void ToggleHelpWindow();
	void OnClosedFailedDialog(int32 SelectIndex);
	void OnClosedConfirmDialog(int32 SelectIndex);
	class FText MakeItemListText(class FName NPC_Label);
	void OnSelectItem(int32 SelectCursorPosition);
	void Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam);
	void CursorDown();
	void CursorUp();
	void OutFocus(bool IsFast);
	void Focus(bool IsFast);
	void MakeListItemData(class FName NPCLabel, TArray<struct FMJListWidgetItemData>* ItemListData, TArray<class FName>* UnAcquiredItemsForRob);
	void SetupNpcStatus();
	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void IsFocusablePanel(bool* Return);
};

}


