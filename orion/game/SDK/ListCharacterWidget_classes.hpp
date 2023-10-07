#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x189 (0x4F1 - 0x368)
// WidgetBlueprintGeneratedClass ListCharacterWidget.ListCharacterWidget_C
class UListCharacterWidget_C : public UListCharacterWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MenuClose;                                         // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MenuOpen;                                          // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCharactersGridPanel_C*                CharactersGridPanel;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuFooterRoot;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PartyPanelRoot;                                    // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCancelEnd;                                       // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F49[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPartyCharacterPanel_C*>        CharacterPanel;                                    // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FSavePlayerCharacterData>      SubCharacterDataList;                              // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SubSelectCursorIndex;                              // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubCharacterMaxCount;                              // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubLastRowItemNum;                                 // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubRowNum;                                         // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChangeCharacterID_1;                               // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DeclsionSubCursorIndex;                            // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubCurrentColumnIdx;                               // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubCurrentRowItemNum;                              // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectMainType;                                  // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MainCharacterMaxCount;                             // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainSelectCursorIndex;                             // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DeclsionMainCursorIndex;                           // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChangeCharacterID_2;                               // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTimer;                                         // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChangedParty;                                    // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPartyCharacterPanel_SelectBack_C*> SelectPanel;                                       // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        SubPrevFocusedCursorIdx;                           // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainPrevFocusedCursorIdx;                          // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopSelectSe;                                    // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      ChangeAnimation_1;                                 // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChangeAnimation_2;                                 // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyCharacterList_C*                 PartyCharacterList;                                // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAddFriendMode;                                   // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EPARTYCHANGE_CHARACTERCHANGE_STATE ChangeAnimeState;                                  // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPARTYCHANGE_FADE_STATE           FadeState;                                         // 0x442(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F4E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorNo;                                           // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Step_ErrorMsg;                                     // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ErrorCharacterID;                                  // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRefreshPartyCharacter;                           // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMenuPaused;                                      // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSelectMainType_Prev;                             // 0x452(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F50[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MainSelectCursorIndex_Prev;                        // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubSelectCursorIndex_Prev;                         // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                BackupMainMember;                                  // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                BackupSubMember;                                   // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPlayableCharacterID              NewMemberCharacterID;                              // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideData_0;                                       // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideData_1;                                       // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideData_2;                                       // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideData_3;                                       // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideData_4;                                       // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DialogSelectIndex;                                 // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIgnoreFadeOnCloseWidget;                         // 0x4DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F53[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyCharacterPanel_C*                TargetAnimWidget_1;                                // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyCharacterPanel_C*                TargetAnimWidget_2;                                // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Bar;                                            // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UListCharacterWidget_C* GetDefaultObj();

	enum class ELIST_CHARACTER_CHANGE_STATE GetState();
	void PreCloseAction(bool* Can_Close);
	void RemoveGuideData(TArray<struct FGuideData>& TargetData, enum class ECONTROL_GUIDE_BUTTON_TYPE Type, TArray<struct FGuideData>* OutData);
	void SetIsOpenInBar(bool IsBar);
	void IsFrameAnimationFinish(bool* Finish);
	void Debug_DecideUI(int32 Param);
	void SetIsRefreshPartyCharacter(bool IsRefreshPartyCharacter);
	class UOverlay* GetMenuFooterRoot();
	class UOverlay* GetPartyPanelRool();
	void SetIsIgnoreFadeOnCloseWidget(bool IsIgnoreFade);
	bool SetupJoinNewMember(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID);
	void RemoveCharacterConfirmCallback(int32 SelectIndex);
	bool Init();
	void CanGetOutOfMainMember_1stSelect(int32 MainMemberID, bool* IsSelectable);
	void IsNewCharacterInMainMember(enum class EPlayableCharacterID CharacterID, bool* Find);
	void Setup_Join_New_Member_OLD(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID);
	void TransitionToConfirmRemoveCharacter();
	void InitCursor();
	void RedoFromCharacterSelect();
	void Update_ConfirmRemoveCharacter();
	void Update_CharacterSelect();
	void Update_Fade();
	void CheckSubMemberPlayingMainMission(TArray<int32>* PlayingSubMembers);
	void PlaySeByLabel(class FName SELabel, bool IsStopSelectSe);
	void MoveCursorAfterSelect1stChara();
	void Update_ErrorMsg();
	void SelectCharacter_Second(bool* Result);
	void SelectCharacter_First(bool* Result);
	void CanGetOutOfMainMember(int32 MainMemberID, bool* IsSelectable);
	void RefreshMainMember();
	void Update_CharacterChangeAnime();
	void PlaySE(enum class EMENU_SE_TYPE SeType, bool IsStopSelectSe);
	void SelectAnima(int32 Index);
	void IsCursorSelect(int32 StateType, bool* IsSelect);
	bool IsRunning();
	void SetGuideUI();
	void DecideMainSelectCursor(int32 Add, int32 AddDirection);
	void AllRefrash(TArray<int32>& MainMember, TArray<int32>& SubMember);
	void RefreshSelectCursor();
	void InitParam();
	void UpdateButtonY(bool* Rersult);
	void UpdateMainSelectCursor(bool ForceAnim);
	void UpdateCancel();
	void SetSubNowRowColumn();
	void DecideSubSelectCursor(int32 Add, int32 AddDirection);
	void UpdateDecide(bool* Result);
	void AddLeftRightSelectCursor(int32 Add);
	void SetSubRowColumn();
	void AddUpDownSelectCursor(int32 Add);
	void UpdateSubSelectCursor(bool ForceAnim);
	bool IsClosingState(int32 State);
	void SetSubMemberPanel(int32 Index, const struct FSavePlayerCharacterData& CharacterData);
	void Update_Select();
	void EndStateEvent(int32 CurrentState);
	void BeginStateEvent(int32 CurrentState);
	void UpdateEvent(int32 CurrentState);
	void CloseEvent();
	void InitUIParts();
	void OpenEvent();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
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
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuCancel();
	void OnMenuDecide();
	void OnMenuButtonY();
	void OnBeginState(int32 PrevState, int32 CurrentState);
	void OnUpdateState(int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void UIClose();
	void OnCloseFinish();
	void ExecuteUbergraph_ListCharacterWidget(int32 EntryPoint);
};

}


