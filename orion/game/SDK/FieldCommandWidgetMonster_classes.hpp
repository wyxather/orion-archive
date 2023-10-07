#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10C (0x46C - 0x360)
// WidgetBlueprintGeneratedClass FieldCommandWidgetMonster.FieldCommandWidgetMonster_C
class UFieldCommandWidgetMonster_C : public UFieldCommandWidgetMonsterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseFCMonster;                                    // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenFCMonster;                                     // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFieldCommandMonsterProcess_C*         FieldCommandMonsterProcess;                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuFooterRoot;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuHeaderRoot;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMonsterListWidget_C*                  MonsterList;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMonsterStatusCaptionPartsWidget_C*    MonsterStatusCaptionPartsWidget;                   // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MonsterUI;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFIELDCOMMAND_MONSTER_STATE       State;                                             // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_471[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         EnemiesInfoList;                                   // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectList;                                        // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattleMode;                                        // 0x3C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ReleaseMonsterList;                                // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideOpponent;                                     // 0x3D8(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideFCReleaseList;                                // 0x3E8(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideBattleRelease;                                // 0x3F8(0x10)(Edit, BlueprintVisible)
	TArray<struct FInvadeData>                   EnemyDataList;                                     // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GuideBattleReleaseSingle;                          // 0x428(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideFCReleaseListSingle;                          // 0x438(0x10)(Edit, BlueprintVisible)
	bool                                         ExecLearnAbility;                                  // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_488[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMonsterListData>              ShowMonsterList;                                   // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DialogInput;                                       // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  WillPlayEventLabel;                                // 0x464(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFieldCommandWidgetMonster_C* GetDefaultObj();

	void MonsterReleaseCallback_OnTameCancel(int32 SelectIndex);
	void ProcessMonsterCallback_OnTameCancel(int32 SelectIndex);
	void OpenProcessItemConfirmDialog_OnTameCancel();
	void MonsterProcessCallback_OnTameCancel(int32 SelectIndex);
	void OpenTameCancelDialog(const struct FInvadeData& InvadeData);
	void OpenProcessConfirmDialog(struct FInvadeData& InvadeData, bool IsNewMonsterInbattle);
	void PlayProcessEnemyEvent(enum class EREQUEST_RESULT Result);
	void OnCloseFinish();
	void GetStartableProcessEnemyEventLabel(class FName* EventLabel);
	void RequestLoadMonsterResources();
	void RefreshMonsterList();
	void GetSelectedMonsterProcessItemData(class FName* ItemLabel, class FText* ItemName, int32* ProcessNum);
	void GetMonsterProcessItemData(struct FInvadeData& InvadeData, class FName* ItemLabel, class FText* ItemName, int32* ProcessNum);
	void OpenProcessItemDialog();
	void GetProcessItemData(struct FInvadeData* Out_Row);
	void ReleaseSelectedMonster();
	void GetProcessItemID(class FName* ProcessedItem);
	void GetRemainCallCount(int32* CallCount);
	void ExecProcessItem();
	void IsEnableProcessItem(int32 ListItemIndex, bool* Enable);
	void IsEnableProcessItemByInvadeData(struct FInvadeData& InvadeData, bool* Enable);
	void ProcessMonsterCallback(int32 SelectIndex);
	void GetReleaseMonsterList(TArray<int32>* ReleaseMonsterList);
	bool CloseMonsterReleaseDialog();
	bool OpenMonsterReleaseDialogInBattle(TArray<struct FMonsterListData>& ShowMonsterList);
	bool OpenMonsterReleaseDialog(TArray<struct FMonsterListData>& ShowMonsterList);
	int32 GetDialogInput();
	void MonsterReleaseCallback(int32 SelectIndex);
	bool SetReference();
	void ListBind(int32 SelectedCursor);
	bool IsRunning();
	void CloseAnimation_old();
	void InitWidgetParts();
	void CloseListCommon();
	void CancelList();
	void CloseMonsterStatus();
	void ListSelectEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
	void CloseOpponent();
	void OpenReleaseDialog(TArray<struct FMonsterListData>& ShowMonsterList);
	void MakeMonsterListData(TArray<struct FMonsterListData>& ShowMonsterList);
	void OnCursorUp();
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
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void ExecuteUbergraph_FieldCommandWidgetMonster(int32 EntryPoint);
};

}


