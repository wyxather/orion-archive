#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass InputWrapper.InputWrapper_C
class UInputWrapper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetActor;                                       // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInputWrapper_C* GetDefaultObj();

	void PopInput(class AActor** Target);
	void PushInput(class AActor* Target);
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
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
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void OnAnyKey();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuCancelRepeat();
	void OnMenuDecideRepeat();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void OnListPaging(bool IsLeftInput);
	void OnMenuLTrigger();
	void OnMinusButton();
	void HelpScrollAxis(float AxisaValue);
	void OnMenuRTrigger();
	void OnMenuButtonSelect();
	void OnMenuButtonStart();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuCancel();
	void OnMenuDecide();
	void OnMenuLB();
	void OnMenuRB();
	void OnCursorDown();
	void OnCursorUp();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void OnPlusButton();
	void ChangeTimeZone();
	void ExecuteUbergraph_InputWrapper(int32 EntryPoint);
};

}


