#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x490 - 0x358)
// WidgetBlueprintGeneratedClass FieldCommandMenu.FieldCommandMenu_C
class UFieldCommandMenu_C : public UFieldCommandMenuBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FieldCommandMenuClose;                             // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FieldCommandMenuOpen;                              // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFieldCommandMenuItemPanel_C*          FC1;                                               // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFieldCommandMenuItemPanel_C*          FC2;                                               // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFieldCommandMenuItemPanel_C*          FC3;                                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFieldCommandMenuItemPanel_C*          FC4;                                               // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFieldCommandMenuItemPanel_C*          FC5;                                               // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ShowVerticalBox;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Window;                                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFieldCommandMenuItemPanel_C*>  CommandList;                                       // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentCursor;                                     // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawLeft;                                          // 0x3BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFIELDCOMMAND_MENUITEM_STATE      State;                                             // 0x3BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1621[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMJFieldCommandType>       CurrentCommand;                                    // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AKSCharacterBase*                      TargetCharacter;                                   // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCursorUpdate;                                    // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1622[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EMJFieldCommandType, class UFieldCommandMenuItemPanel_C*> AllCommandList;                                    // 0x3E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<enum class EMJFieldCommandType, class FName> TextID;                                            // 0x430(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFieldCommandMenuItemPanel_C*>  ActiveCommandList;                                 // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UFieldCommandMenu_C* GetDefaultObj();

	void SetHelpWindowPosition(class UUserWidget* TargetWidget);
	void UpdateHelpWindow(int32 CursorIndex);
	void ToggleHelpWindow();
	bool CheckUniqueCommandFlow();
	bool IsInputEnableMode();
	void SetupCommandPanel(class UFieldCommandMenuItemPanel_C* Panel, enum class EMJFieldCommandType FCType);
	void UniqueMenuOpenRequest(enum class EREQUEST_RESULT Result);
	bool Close(bool StateCheck);
	bool Open(class AKSCharacterBase* TargetChara, bool DrawLeft, TArray<enum class EMJFieldCommandType>& CommandList);
	bool SetReference();
	bool IsRunning();
	void CommandDecide();
	void UpdateWindowPosition();
	void UpdateCursor(int32 NewCursor, bool Fast);
	void CursorDown();
	void CursorUp();
	void Cancel();
	void Decide();
	void SetupCommand(TArray<enum class EMJFieldCommandType>& Array, bool* IsSuccess);
	void AllHideMenu();
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
	void OnAnyKey();
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void OnMenuButtonX();
	void OnCursorRight();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnCursorLeft();
	void OnCursorDown();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorUp();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuButtonY();
	void UIClose();
	void UIOpen();
	void HelpScrollAxis(float AxisaValue);
	void ExecuteUbergraph_FieldCommandMenu(int32 EntryPoint);
};

}


