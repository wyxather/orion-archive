#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x109 (0x461 - 0x358)
// WidgetBlueprintGeneratedClass MainMenuWidget.MainMenuWidget_C
class UMainMenuWidget_C : public UMainMenuBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MainMenuClose;                                     // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MainMenuOpen;                                      // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_3DWorldMapWidget_C*               ThreeDWorldMapWidget;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Black;                                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_32;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuEtcWidget_C*                  MainMenuEtcWidget;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuList_C*                       MainMenuList;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuFooterRoot;                                    // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuHeaderRoot;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MissionRecordRoot;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNowPlayingStoryPanel_C*               NowPlayingStoryPanel;                              // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PartyPanelRoot;                                    // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMAINMENUSTATE                    MainState;                                         // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      CurrentAnimation;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMAINMENU_SEQ_STATE               SeqState;                                          // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1731[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuidData;                                          // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ChangeFormationFirst;                              // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRequestChangeFormat;                             // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1732[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    ChangeFormationGuid;                               // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPartyCharacterList_C*                 PartsPartyList;                                    // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMAINMENUSTATE                    CloseMenuState;                                    // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFastWorldMap;                                    // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowAbilityMenu;                                   // 0x41A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MissionReOpen;                                     // 0x41B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1733[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuidSubMenuData;                                   // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseChangeFormation;                                // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1734[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuidDataNotFormation;                              // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BackToMissionRecord;                               // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1735[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocalState;                                        // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMAINMENUSTATE                    StartState;                                        // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BackToTitle;                                       // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1736[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeaderFooter_C*                   HeaderFooter;                                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InputFrame;                                        // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMainMenuWidget_C* GetDefaultObj();

	bool PreCloseActionFromPartyChat();
	void EndState(enum class EMAINMENUSTATE State);
	void BeginState(enum class EMAINMENUSTATE State);
	void Construct();
	class FString Debug_GetStateInfoAsString();
	void ReOpenCommonUI();
	void GetCurrentWidget(class UKSUserWidgetBase** CurrentWidget);
	void ClosingStackCheck(bool* IsClosing);
	class UMainMenuListBase* GetMainMenuList();
	void SequenceRequestCallback(enum class EREQUEST_RESULT Result);
	void HideRadarMap();
	bool CanMainMenuClose();
	bool PreCloseAction();
	bool OpenMissionRecordReOpen();
	bool OpenFastWorldMap();
	void IsFastWorldMapMode(bool* FastWorldMapMode);
	void BackTitleCallback(int32 SelectIndex);
	void QuitGameCallBack(int32 SelectIndex);
	void BindFinishCallback(class UKSUserWidgetBase* WidgetBase);
	void UnBindFinishCallback(class UKSUserWidgetBase* TargetWidgetBase);
	void CloseFinishCallback();
	void SetStartState(enum class EMAINMENUSTATE StartState);
	bool Init();
	bool IsChangeStateCloseFinish();
	bool IsChangeStateOpenFinish();
	bool SetReference();
	void OnRButtonRelease();
	void CheckSaving(bool* Saving);
	void CheckShowAbilityMenu();
	void RightAxisDown();
	void RightAxisUp();
	void LeftAxisY(float AxisYValue, bool Gamepad);
	void LeftAxisX(float AxisXValue, bool Gamepad);
	void CheckSubmenuPlayingAnim(bool* IsPlaying);
	void CheckEventPreview(bool* IsEventPreview);
	void InitPartsWidget();
	void FastClose();
	void ChangeFormationCancel(bool PlaySE, bool IsSelectAnima);
	void RequestChangeFormation(int32 ChangePartyIndex1, int32 ChangePartyIndex2, bool* IsSuccess);
	void MenuY();
	void ChangeStateMain();
	void CursorRight();
	void CursorLeft();
	bool IsRunning();
	void UpdateProc();
	void CheckWidgetPlayingAnim(bool* IsPlaying);
	void OnRButton();
	void RightAxisY(float AxisYValue);
	void RightAxisX(float AxisXValue);
	void CloseMenu();
	void OnLButton();
	void PlayAnim(class UWidgetAnimation* InAnimation, bool IsFast);
	void PostChangeMainState();
	void PreChangeMainState(enum class EMAINMENUSTATE NextState);
	void Close();
	void Open();
	void ChangeMainState(enum class EMAINMENUSTATE NewState);
	void CursorUp();
	void Cancel();
	void Decide();
	void CursorDown();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
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
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnPlusButton();
	void OnMinusButton();
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnAnyButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void ChangeTimeZone();
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void OnAnyKey();
	void UpdateMain();
	void OnCloseFinish();
	void OnOpenFinish();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuLB();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuRB();
	void UIOpen();
	void UIClose();
	void OnCursorRightRepeat();
	void OnCursorLeftRepeat();
	void OnMenuButtonY();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void ClsoeWorldMap();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ExecuteUbergraph_MainMenuWidget(int32 EntryPoint);
};

}


