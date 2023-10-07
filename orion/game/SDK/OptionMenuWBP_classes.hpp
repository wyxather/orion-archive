#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C8 (0x830 - 0x368)
// WidgetBlueprintGeneratedClass OptionMenuWBP.OptionMenuWBP_C
class UOptionMenuWBP_C : public UOptionMenuWBPBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          CategoryBox;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              FooterUIRoot;                                      // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Frame_R_1;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeaderUIRoot;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        IconBox;                                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image;                                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_2;                                           // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_3;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_4;                                           // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_5;                                           // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_68;                                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            OptItemScrollBox;                                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OptItemVerticalBox;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightWidgetTop;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             TitleImage;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TitleText;                                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UListItemWidget_Opt_Base*>      OptionItemList;                                    // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CursorIndex;                                       // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FOptionItemLabelSet> CaptionTextLabels;                                 // 0x428(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FOptionItemLabelSet> GaugeTextLabels;                                   // 0x478(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FOptionItemLabelSet> ToggleTextLabels;                                  // 0x4C8(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FOptionItemLabelSet> ButtonTextLabels;                                  // 0x518(0x50)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideData;                                         // 0x568(0x10)(Edit, BlueprintVisible)
	bool                                         ChangedLanguage;                                   // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EOPTION_ITEM_KIND, class UUserWidget*> OptionExWidget;                                    // 0x580(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<enum class EOPTION_ITEM_KIND>         OptionKindArray;                                   // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SaveTimer;                                         // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromTitleScene;                                    // 0x5E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsModified;                                        // 0x5E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         MainMenuFooter;                                    // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOPTION_ITEM_KIND, class UMJListItemWidget*> OptionWidget;                                      // 0x5F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsVoiceJA;                                         // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInitialized;                                     // 0x641(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FListWidgetCategory>           ListWidgetCategory;                                // 0x648(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UListCategoryWidget_C*>         CategoryWidgetList;                                // 0x658(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CategoryCursorPos;                                 // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OptionMenuListGame;                                // 0x670(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          OptionMenuListController;                          // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          OptionMenuListKeyboard;                            // 0x690(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          OptionMenuListMouse;                               // 0x6A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EOPTION_ITEM_KIND, class UUserWidget*> OptionExWidget_All;                                // 0x6B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<enum class EOPTION_ITEM_KIND, class UListItemWidget_Opt_Base*> OptionWidget_All;                                  // 0x700(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<enum class EOPTION_ITEM_KIND>         OptionKindArray_All;                               // 0x750(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMJListItemWidget*>             OptionItemList_All;                                // 0x760(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class EOPTION_ITEM_KIND                 SelectedOptionKind;                                // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KeyConfigInnnerState;                              // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        KeyConfigChangeCount;                              // 0x778(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OptionMenuListGraphics;                            // 0x780(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          OptionMenuListSound;                               // 0x790(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSavingSystemData;                                // 0x7A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ResolutionQuality;                                 // 0x7A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ViewDistanceQuality;                               // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShaderQuality;                                     // 0x7AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FoliageQuality;                                    // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                TempSystemParam;                                   // 0x7B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                TempSystemFlag;                                    // 0x7C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIntPoint                             TemporaryWindowReso;                               // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       TemporaryWindowMode;                               // 0x7E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSLanguage                       TemproraryLanguage;                                // 0x7E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                TempKeyConfigParam;                                // 0x7E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideChangeData;                                   // 0x7F8(0x10)(Edit, BlueprintVisible)
	bool                                         ModifiedKeyConfig;                                 // 0x808(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsApplyDialogOpenFinish;                           // 0x809(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EOPTION_MENU_STATE                ApplyEndState;                                     // 0x80A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         HeaderUI;                                          // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  ConfigStartDecideKey;                              // 0x818(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOptionMenuWBP_C* GetDefaultObj();

	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void UpdateWindowResolution();
	void UpdateFrameRate();
	void GetItemIndexFromWindowMode(enum class EWindowMode WindowMode, int32* Index);
	void SetupHeaderUI();
	void ResetGuideData();
	void ApplyFinishDialogCallback(int32 SelectIndex);
	void StartApplyParam();
	void ApplyDialogOpenFinish();
	void OpenApplyDialog();
	void IsModifired(bool* Modifired);
	void IsIgnoreInputLeftRight(int32 CursorIndex, bool* Ignore);
	void TemporarySetKeyConfigParam_Inner(enum class EKSKeyConfigElement Type, int32 Value);
	void GetKeyNameFromTemporary(enum class EKSKeyConfigElement Type, class FName* KeyName);
	void InitializePreset();
	void SetModified(bool Modified, bool ModifiedKeyConfig);
	void RefreshOptionParam();
	void ApplyConfirmDialogCallback(int32 SelectIndex);
	void Open_Apply_Confirm_Dialog();
	void TemporaryGetKeyConfigParam(enum class EKSKeyConfigElement Type, int32* Param);
	void TemporarySetKeyConfigParam(enum class EKSKeyConfigElement Type, const struct FKey& Value, bool* IsApply);
	void ResetGraphicsOptions();
	void ResetSoundOptions();
	void ResetGameOptions();
	void IsEnablePreset(bool* Enable);
	void TemporaryGetFlag(enum class EKSSaveDataFlagType Type, bool* Flag);
	void TemporaryGetParam(enum class EKSSaveDataParamType Type, int32* Param);
	void ApplySystemDataToTempraryData(enum class EOPTION_ITEM_KIND OptionType);
	void OnButtonY();
	void TemporarySetFlag(enum class EKSSaveDataFlagType Type, bool Value);
	void TemporarySetParam(enum class EKSSaveDataParamType Type, int32 Value);
	void InitializeTemporarySaveData();
	void RestoreOtherGraphicsSetting();
	void SetGraphicsSetting();
	void RunAutoGraphicsSetting();
	void CheckPresetEnable();
	void Apply_Graphics_Preset();
	void ApplyOptionTemporaryData_Inner(enum class EOPTION_ITEM_KIND OptionType);
	void ApplyLetterSize();
	void GetWindowModeFromItemIndex(int32 Index, enum class EWindowMode* WindowMode);
	void SetWindowResolution();
	void OnFinishSystemData(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	void OnResetOptions();
	class FName GetCategoryDescriptionText(int32 Index);
	void GetCategoryName(int32 Category, class FName* TextLabel);
	void Refresh_Title_Icon();
	void ResetToDefaultKeyConfig(enum class EKSKeyConfigType Type);
	void ApplyKeyConfigToSystemData();
	void CanDisplayKey(const struct FKey& Key, bool* CanDisplay);
	void UpdateKeyConfig();
	void ReflectionKeyConfigInfo();
	void OnCancel();
	void Get_Key_Config_Element_From_Option_Iten_Kind(enum class EOPTION_ITEM_KIND Kind, enum class EKSKeyConfigElement* NewParam);
	void ResetCategoryFocus();
	void PreparePartsWidgetAll();
	void GetOptionMenuList(int32 Index, TArray<class FName>* MenuList);
	void ClearList();
	void UpdateOptionMenuItem(int32 Index);
	void FocusCategory(int32 NewCategoryPos);
	void OutFocusCategory(int32 SelectID, bool IsFast);
	void UpdateCategoryFocus(int32 NextPos);
	void ChangeCategory(bool IsUp);
	void InputDown();
	void InputUp();
	void AddCategoryPart(const struct FListWidgetCategory& CategoryData);
	void AddCategoryTab();
	void InitCategoryTab();
	bool SetFromTitleScene(bool FromTitleScene);
	void IsSaving(bool* Saving);
	bool SetReference();
	bool Init();
	void RefreshVoiceResource();
	void GetOptionItemWidget(enum class EOPTION_ITEM_KIND OptionKind, class UMJListItemWidget** Value);
	void RefreshAllOptionItem();
	bool IsClosingState(int32 State);
	void Set_Guide_UI();
	void OnDecideOption();
	void UpdateAllText();
	void ApplyOptionToTemporaryData(enum class EOPTION_ITEM_KIND OptionType, bool* Apply);
	void ApplyAllOptionToExWidget();
	void ApplyOptionToExWidget(enum class EOPTION_ITEM_KIND OptionId);
	void SendLRToExWidget(bool IsLeft);
	void MoveCursor(bool ToUp);
	void PlayAnim(class UWidgetAnimation* Anim);
	void ResetFocus();
	void OutFocusItem(int32 ItemIndex);
	void FocusItem(int32 ItemIndex);
	void SetCursorPos(int32 NewPos);
	void IsPlayingAnim(bool* IsPlaying);
	void SetupMenu();
	void GetCurrentState_Local(enum class EOPTION_MENU_STATE* CurrentState);
	void OnEndState_Local(enum class EOPTION_MENU_STATE CurrentState, enum class EOPTION_MENU_STATE NextState);
	void OnBginState_Local(enum class EOPTION_MENU_STATE PrevState, enum class EOPTION_MENU_STATE CurrentState);
	void OnUpdate_Local(enum class EOPTION_MENU_STATE CurrentState);
	void SetNextState_Local(enum class EOPTION_MENU_STATE NextState);
	bool IsRunning();
	void CloseMenu();
	void OpenMenu();
	void ChangeInputMode(enum class EKSUseInputType Type);
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
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuButtonY();
	void OnUpdateState(int32 CurrentState);
	void OnBeginState(int32 PrevState, int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void UIOpen();
	void UIClose();
	void ExecuteUbergraph_OptionMenuWBP(int32 EntryPoint);
};

}


