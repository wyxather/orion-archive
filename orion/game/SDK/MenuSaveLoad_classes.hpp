#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x44C - 0x370)
// WidgetBlueprintGeneratedClass MenuSaveLoad.MenuSaveLoad_C
class UMenuSaveLoad_C : public UMenuSaveLoadBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              FooterUIRoot;                                      // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeaderUIRoot;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomListView*                       SaveDataList;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_263[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CursorIndex;                                       // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSaveMode;                                        // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_264[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideSave;                                         // 0x3B0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideLoad;                                         // 0x3C0(0x10)(Edit, BlueprintVisible)
	bool                                         FromDebugMenu;                                     // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LoadSuccess;                                       // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_265[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LoadedLevelID;                                     // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTimer;                                         // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AcceptControl;                                     // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_266[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSSaveSlotName                   SelectedSlotName;                                  // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstFocus;                                        // 0x3F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_267[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKSSaveSystem*                         TargetSystemData;                                  // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESAVELOAD_RESULT                  SaveLoadResult;                                    // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_268[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USaveDataObject*>               NormalSaveDataListObject;                          // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USaveDataObject*>               AutoSaveDataList;                                  // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USaveDataObject*>               AllSlotData;                                       // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SaveLoadSelectIndex;                               // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScrollOffset;                                      // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ViewIndex;                                         // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BeforeIndex;                                       // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSSaveSlotName                   BeforeSlotName;                                    // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InSavingSystemData;                                // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InSavingGameData;                                  // 0x44A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InLoadingGameData;                                 // 0x44B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMenuSaveLoad_C* GetDefaultObj();

	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	class UKSSaveSystem* GetTargetSystemData();
	void OnLoadedSystemData(const class FString& SlotName, int32 UserIndex, class UKSSaveSystem* SystemData);
	void OnFinishLoadGame(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame);
	void OnFinishSaveSystemData(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	void OnFinishSaveGame(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	void FocusToSelectedSlot_New(bool AnimateScroll, bool IsUp, bool SetOffset);
	void GetSlotCount(int32* Count);
	void SaveLoadConfimCallback(int32 SelectIndex);
	void SaveFinishCallback(int32 SelectIndex);
	bool OpenMenu(bool IsSaveMode, bool FromDebugMenu);
	void GetResult(enum class ESAVELOAD_RESULT* Result);
	void GetCurrentSelectWidget(class UMenuSaveLoadSlot_C** Slot);
	void SavingCallback(int32 SelectIndex);
	void GetAllSlotLength(int32* Length);
	void GetAllSlotData(int32 Index, class USaveDataObject** SlotData);
	void AllClearListItem();
	void Set_Slot_Name_To_Cousor_Index();
	bool Init();
	void GetSlotdata(enum class EKSSaveSlotName SlotNo, struct FKSSaveSlotData* OutSlotData, bool* IsSuccess);
	void FocusToSelectedSlot(bool AnimateScroll, bool SetOffset);
	void CreateSlotUI();
	bool IsClosingState(int32 State);
	void InitWidgetParts();
	void CanControl(bool* CanControl);
	void ReleaseSelf();
	void MakeMainMissionClearFlag(int32* ClearFlag);
	void ResetMenuUI();
	void ResetSlotUI();
	void UpdateSlotUI(enum class EKSSaveSlotName SlotName);
	void DecideMenu_Inner();
	void ResetFocus();
	void SetCursorPos(int32 NewPos, bool IsUp, bool IsLoop);
	bool IsRunning();
	void MoveCursor(bool ToUp);
	void SetNextState_Local(enum class ESAVELOAD_STATE NextState);
	void GetCurrentState_Local(enum class ESAVELOAD_STATE* CurrentState);
	void CancelMenu_Inner();
	void CloseMenu_Inner();
	void OpenMenu_Inner();
	void OnEndState_Local(enum class ESAVELOAD_STATE CurrentState, enum class ESAVELOAD_STATE NextState);
	void OnBeginState_Local(enum class ESAVELOAD_STATE PrevState, enum class ESAVELOAD_STATE CurrentState);
	void OnUpdate_Local(enum class ESAVELOAD_STATE CurrentState);
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
	void OutFocusMenu();
	void FocusMenu();
	void CursorUp();
	void CursorDown();
	void OnHelpMenu();
	void GetRightAxisX(float AxisValue);
	void GetRightAxisY(float AxisValue);
	void RBMenu();
	void GetLeftAxisX(float AxisValue);
	void GetLeftAxisY(float AxisValue);
	void RightAxisUp();
	void RightAxisDown();
	void RBMenuRelease();
	void GetGamePadAxisX(float AxisValue);
	void GetGamePadAxisY(float AxisValue);
	void SubMenu_WorldMapZoomIn();
	void SubMenu_WorldMapZoomOut();
	void SubMenu_WorldMapSlowCursorX(float AxisValue);
	void SubMenu_WorldMapSlowCursorY(float AxisValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnUpdateState(int32 CurrentState);
	void OnBeginState(int32 PrevState, int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void UIOpen();
	void UIClose();
	void OnMenuCancel();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuDecide();
	void Destruct();
	void ExecuteUbergraph_MenuSaveLoad(int32 EntryPoint);
};

}


