#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3D8 - 0x368)
// WidgetBlueprintGeneratedClass FieldCommandWidgetBattle.FieldCommandWidgetBattle_C
class UFieldCommandWidgetBattle_C : public UFieldCommandWidgetBattleBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseFCMonster;                                    // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenFCMonster;                                     // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              MenuFooterRoot;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuHeaderRoot;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               NPCStatusPartsWidget;                              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFIELDCOMMAND_MONSTER_STATE       State;                                             // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideOpponent;                                     // 0x3A0(0x10)(Edit, BlueprintVisible)
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GuideFailedDialog;                                 // 0x3C0(0x10)(Edit, BlueprintVisible)
	bool                                         ExecFuncFinishFieldCommand;                        // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExecLearnAbility;                                  // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DialogInput;                                       // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFieldCommandWidgetBattle_C* GetDefaultObj();

	void On_Decide_Confirm_Ability_Dialog(int32 SelectCursorPosition, bool IsDecide);
	bool OpenConfirmAbilityDialog(TArray<int32>& SelectAbilityList);
	void IsExecLearnAbility(bool* ExecLearnAbility);
	bool OpenForgetAbilityDialog(class FName NPCLabel, TArray<int32>& SelectAbilityList);
	bool OpenLearnAbilityDialog(class FName NPCLabelName, bool IsAbilityFull);
	bool OpenFailedDialog(class FName NPCLabel);
	int32 GetDialogInput();
	bool OpenNPCDialog(class FName NPCLabel);
	void LearnAbilityCallback(int32 SelectIndex);
	void BattleFailedCallback(int32 SelectIndex);
	void BattleConfirmCallback(int32 SelectIndex);
	bool SetReference();
	void CloseSelectForgetAbility();
	void EventSelectedForGetAbility(int32 SelectCursorPosition, bool IsDecide);
	void OpenDialogCommon(class FName NPCLabel, class FText DialogText, TArray<class FText>& ButtonText, enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE ShowType);
	bool IsRunning();
	void CloseAnimation();
	void InitWidgetParts();
	void SetDialogStatus(class FName NPCLabel, enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE ShowType);
	void CloseOpponent();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
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
	void UpdateMain();
	void OnCloseFinish();
	void OnCursorUp();
	void ExecuteUbergraph_FieldCommandWidgetBattle(int32 EntryPoint);
};

}


