#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// WidgetBlueprintGeneratedClass WBP_AcqListViewWidget.WBP_AcqListViewWidget_C
class UWBP_AcqListViewWidget_C : public UAcqListViewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_AcqListViewWidget_C* GetDefaultObj();

	void SetScrollOffset(float ScrollOffset);
	void UpdateSelectedItem(int32 Index, struct FIntPoint& DisplayRange);
	void PagingCursor(uint8 Dir);
	void OnPaging_Internal(uint8 Dir);
	int32 GetSelectedIndex();
	TArray<class UAcqListViewEntryItemBase*> GetEntryItems();
	void OnCancel_Internal();
	void OnDecide_Internal();
	void Setup(TArray<class UAcqListViewEntryItemBase*>& EntryItems);
	void SetSelectedIndex(int32 Index);
	class UAcqListView* GetListView();
	int32 GetEntryItemNum();
	void SetEntryItems(TArray<class UAcqListViewEntryItemBase*>& EntryItems);
	void ClearEntryItems();
	void MoveCursor(uint8 Dir);
	void OnCursorDown_Internal();
	void OnCursorUp_Internal();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
	void OnPlusButton();
	void OnMinusButton();
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnAnyButton();
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void ChangeTimeZone();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void OnAnyKey();
	void PreConstruct(bool IsDesignTime);
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnListPaging(bool IsLeftInput);
	void ExecuteUbergraph_WBP_AcqListViewWidget(int32 EntryPoint);
};

}


