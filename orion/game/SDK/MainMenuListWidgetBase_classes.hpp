#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x3A0 - 0x358)
// WidgetBlueprintGeneratedClass MainMenuListWidgetBase.MainMenuListWidgetBase_C
class UMainMenuListWidgetBase_C : public UKSUserWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FMJListWidgetItemData>         ListWidgetItem;                                    // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FListWidgetCategory>           ListWidgetCategory;                                // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMAINMENU_SEQ_BASE                State;                                             // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPush;                                            // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UListWidget_C*                         BaseListWidget;                                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WidgetOpenAnim;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WidgetCloseAnim;                                   // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMainMenuListWidgetBase_C* GetDefaultObj();

	void MenuStart();
	bool IsChangeStateCloseFinish();
	bool IsChangeStateOpenFinish();
	bool SetReference();
	bool IsRunning();
	void MenuCancel();
	void MenuDecide();
	void CallCreateListItem();
	void CallCreateCategory();
	void CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void SetListObject(class UListWidget_C* ListWidget, class UWidgetAnimation* WidgetOpenAnim, class UWidgetAnimation* WidgetCloseAnim);
	void ListWidgetPushPop(bool IsPush);
	void ConstructEvent(bool UseCategory, enum class ELIST_NUM_UNIT_TYPE NumUnitType);
	void MenuCursorDown();
	void MenuCursorUp();
	bool IsActive();
	void BaseTickEvent();
	void BaseListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory);
	void CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem);
	void MenuClose();
	void MenuOpen();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
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
	void OnListPaging(bool IsLeftInput);
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
	void UpdateOpening();
	void UpdateMain();
	void UpdateClosing();
	void OnOpenFinish();
	void OnCloseFinish();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnCursorUp();
	void OnCursorLeft();
	void OnCursorDown();
	void UIOpen();
	void UIClose();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuButtonStart();
	void ExecuteUbergraph_MainMenuListWidgetBase(int32 EntryPoint);
};

}


