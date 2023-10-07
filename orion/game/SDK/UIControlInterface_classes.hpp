#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UIControlInterface.UIControlInterface_C
class IUIControlInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUIControlInterface_C* GetDefaultObj();

	void OnAnyKey();
	void HelpScrollAxis(float AxisaValue);
	void ChangeStatusLeft();
	void ChangeStatusRight();
	void WorldMapSlowCursorY(float AxisValue);
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapZoomOut();
	void WorldMapZoomIn();
	void ChangeTimeZone();
	void OnMenuRightDownRepeat();
	void OnMenuRightUpRepeat();
	void OnMenuLTrigger();
	void OnMenuRTrigger();
	void OnListPaging(bool IsLeftInput);
	void OnAnyButton();
	void OnCursorRightRelease();
	void OnCursorLeftRelease();
	void OnCursorDownRelease();
	void OnCursorUpRelease();
	void OnGamePadAxisY(float AxisValue);
	void OnGamePadAxisX(float AxisValue);
	void OnMenuRBRelease();
	void OnRightAxisDown();
	void OnRightAxisUp();
	void OnMinusButton();
	void OnPlusButton();
	void OnLeftAxisY(float AxisValue);
	void OnLeftAxisX(float AxisValue);
	void OnMenuRStickButton();
	void OnMenuLStickButton();
	void OnRightAxisY(float AxisValue);
	void OnRightAxisX(float AxisValue);
	void OnMenuButtonSelectRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuRBRepeat();
	void OnMenuLBRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuCancelRepeat();
	void OnMenuDecideRepeat();
	void OnCursorRightRepeat();
	void OnCursorLeftRepeat();
	void OnCursorDownRepeat();
	void OnCursorUpRepeat();
	void OnMenuButtonSelect();
	void OnMenuButtonStart();
	void OnMenuRB();
	void OnMenuLB();
	void OnMenuButtonY();
	void OnMenuButtonX();
	void OnMenuCancel();
	void OnMenuDecide();
	void OnCursorRight();
	void OnCursorLeft();
	void OnCursorDown();
	void OnCursorUp();
};

}


