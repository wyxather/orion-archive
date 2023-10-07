#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x4D8 - 0x3E8)
// WidgetBlueprintGeneratedClass GuildMenuWidget.GuildMenuWidget_C
class UGuildMenuWidget_C : public UGuildMenuBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      GuildMenuReOpen;                                   // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      GuildMenuFadeIn;                                   // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      GuildMenuListClose;                                // 0x400(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      GuildMenuListOpen;                                 // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGuildLicenseMissionWidget_C*          GuildLicenseCertification;                         // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildSubMenuList_C*                   GuildSubMenuList;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_01;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_02;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_03;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainMenuPanel;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuFooterRoot;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuHeaderRoot;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Panel_GuildMenuList;                               // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerStatusPanel_C*                  PlayerStatusPanel;                                 // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMainMenuItemPanel_C*>          MainMenuList;                                      // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CursorPositionMax;                                 // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorPosition;                                    // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCursorUpdate;                                    // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_170C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMainMenuItemPanel_C*>          AllMainMenuList;                                   // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class EGUILD_MENU_STATE                 State;                                             // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstFlow;                                       // 0x491(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_170D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ExecEventLabel;                                    // 0x494(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGUILD_MENU_STATE                 EventFinishedNextState;                            // 0x49C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReOpenFlag;                                        // 0x49D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_170E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GuildId;                                           // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        COUNTER;                                           // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LicenseIndex;                                      // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         Header;                                            // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         Footer;                                            // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    NormalGuideData;                                   // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AKSFieldNPCCharacter_C*                GuildNPC;                                          // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGuildMenuWidget_C* GetDefaultObj();

	void AfterLicenseAcquire(bool* IsClose);
	void LicenseAcquireDialog();
	void GetJobID(int32* JobID);
	void IsRequiredAbility(bool* IsMoney);
	void ResetParam();
	void GetNeedMoney(int32* Need_Money);
	void IsRequiredMoney(bool* IsMoney);
	void CheckHeaderFooterAddChild();
	void SetFooterText(TArray<struct FGuideData>& GuideData);
	void SetHeaderText();
	void SetupHeaderFooter();
	void PlayReOpenAnim();
	void EventRequestSetReOpenLicenseMenu(enum class EREQUEST_RESULT Result);
	void PlayFadeInAnim();
	void EventRequestSetReOpenSubMenu(enum class EREQUEST_RESULT Result);
	void EventRequestSetGetLicense(enum class EREQUEST_RESULT Result);
	void GetRequiredItemText(class FText* ItemName);
	void GetTalkLabel(TArray<class FName>* Label);
	void ReOpenSubMenu();
	void ReOpenLicenseMenu();
	void GetLicense();
	void UpdateEventView();
	void SubMenuDecide();
	void GetCompleteEvent(class FName* EventLabel);
	void ConfirmCallback(int32 SelectIndex);
	void AcquiredCallback(int32 SelectIndex);
	void LicenseMenuDecide();
	void OpenConfirmDialog();
	void OpenAcquiredDialog();
	void SubMenuCursorDown();
	void SubMenuCursorUp();
	void FirstTaskUnCleared();
	void FirstTaskClear();
	void TaskClear(int32 Index);
	bool IsChangeStateCloseFinish();
	void Close();
	bool ReOpenGuildMenu();
	bool GetReOpenFlag();
	void EventRequest(enum class EREQUEST_RESULT Result);
	void CheckFirstFlowEvent();
	void OpenSubList();
	void OpenLicenseMenu();
	bool IsRunning();
	bool IsChangeStateOpenFinish();
	void TransfromFromTop();
	void OnCancel();
	void OnDecide();
	void SetState(enum class EGUILD_MENU_STATE NextState);
	void UpdateState();
	void Open();
	bool SetReference();
	bool Init();
	void SetupMenuList();
	void Construct();
	void IsCancelAnimationPlaying(bool* IsPlaying);
	void InitGuildListIcon();
	void StopAllPanelAnim();
	void DefaultAnim();
	void SetCursorPosFromState(enum class EMAINMENUSTATE MainMenuState, bool AnimFast);
	void SetCursorPosition(int32 CursorPosition);
	void NowSelectFocus();
	void NowSelectOutFocus();
	void GetSelectData(class UMainMenuItemPanel_C** Item);
	void NowSelectCancel();
	void NowSelectDecide();
	void CursorDown();
	void Cursor_Up();
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
	void OnCursorDownRepeat();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorUpRepeat();
	void OnOpenFinish();
	void UpdateOpening();
	void OnCloseFinish();
	void UpdateClosing();
	void UpdateMain();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void UIOpen();
	void UIClose();
	void ExecuteUbergraph_GuildMenuWidget(int32 EntryPoint);
};

}


