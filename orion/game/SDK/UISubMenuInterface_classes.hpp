#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UISubMenuInterface.UISubMenuInterface_C
class IUISubMenuInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUISubMenuInterface_C* GetDefaultObj();

	void SubMenu_WorldMapSlowCursorY(float AxisValue);
	void SubMenu_WorldMapSlowCursorX(float AxisValue);
	void SubMenu_WorldMapZoomOut();
	void SubMenu_WorldMapZoomIn();
	void GetGamePadAxisY(float AxisValue);
	void GetGamePadAxisX(float AxisValue);
	void RBMenuRelease();
	void RightAxisDown();
	void RightAxisUp();
	void GetLeftAxisY(float AxisValue);
	void GetLeftAxisX(float AxisValue);
	void RBMenu();
	void GetRightAxisY(float AxisValue);
	void GetRightAxisX(float AxisValue);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void OnHelpMenu();
	void CancelMenu(bool* ReturnState);
	void DecideMenu(bool* NextState);
	void CursorLeft(bool* MenuCancel);
	void CursorRight(bool* MenuDecide);
	void CursorDown();
	void CursorUp();
	void FocusMenu();
	void OutFocusMenu();
	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
};

}


