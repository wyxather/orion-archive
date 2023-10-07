#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x600 - 0x428)
// WidgetBlueprintGeneratedClass UICommonDialogBP.UICommonDialogBP_C
class UUICommonDialogBP_C : public UCommonDialog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseDialogAnimation;                              // 0x430(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenDialogAnimation;                               // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUICommonDialogItemBP_C*               Answer_01;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUICommonDialogItemBP_C*               Answer_02;                                         // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUICommonDialogItemBP_C*               Answer_03;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUICommonDialogItemBP_C*               Answer_04;                                         // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          AnswerArea;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CommonDialogBG_C*                  BP_CommonDialogBG;                                 // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CaptionAttachVertical;                             // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               CaptionSpacer;                                     // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          CaptionText;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CaptionVertical;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DetailAttachVertical;                              // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               DetailSpacer;                                      // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_LineSet;                                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerStatusPanel_C*                  PlayerStatusPanel;                                 // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SelectWidgetArea;                                  // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Separation;                                        // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TextArea;                                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKSUICommonDialogParam                NowParam;                                          // 0x4C8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EDIALOG_STATE                     DialogStatus;                                      // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAnswer;                                         // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUICommonDialogItemBP_C*>       ButtonList;                                        // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        FocusIndex;                                        // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnswerNum;                                         // 0x544(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           TmpCaptionAttach;                                  // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           TmpDetailAttach;                                   // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DefaultDecideSe;                                   // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DefaultCancelSe;                                   // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          SelectSE;                                          // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseCustomSE;                                       // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCursorUpdate;                                    // 0x581(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    DialogGuide;                                       // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuideData                            DialogGuideCancel;                                 // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FGuideData>                    SingleButtonDialogGuide;                           // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            CommonDialogClose;                                 // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsOldRoute;                                        // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F20[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   SelectWidgetList;                                  // 0x5D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        WaitCounter;                                       // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F21[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFinishedWaitTime;                                // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUICommonDialogBP_C* GetDefaultObj();

	void RereshAfterLanguage();
	void SelectButton(int32 buttonIdx);
	void UpdateWaitCounter();
	void OnFinishWaitTime();
	bool ClosePlayerMoney();
	bool OpenPlayerMoney();
	void CheckSpecialParform();
	void RemoveSelectWidget();
	void AttachToSelectWidget();
	bool ButtonVisible(bool Visible);
	bool SettingSelectSE(TArray<class FName>& SelectSE);
	bool CloseDialog();
	bool IsChangeStateOpenFinish();
	bool IsChangeStateCloseFinish();
	bool SetReference();
	void SetupDialog();
	bool OpenDialog(struct FMJUICommonDialogParam& Param);
	void ResetSelect();
	void SetSelectSE(TArray<class FName>& SelectSE);
	void DetachWidget(bool DetachCaption, bool DetachDetail);
	bool IsRunning();
	void DetailAttachWidget(class UUserWidget* DetailAttachWidget, bool AttachOnTop);
	void CaptionAttachWidget(class UUserWidget* CaptionAttachWidget, bool AttachOnTop, bool UseSeparation);
	void GetDialogParam(struct FKSUICommonDialogParam* NowParam);
	void IsDialogOpen(bool* IsOpen);
	void GetSelectData(bool* IsSelected, int32* FocusIndex);
	void DialogCancel(bool* IsCancel);
	void DialogDecide(bool* IsDecide);
	void CursorUpdate(int32 New_Cursor, bool Fast, bool* MoveCursor);
	void CursorDown(bool* MoveCursor);
	void CursorUp(bool* MoveCursor);
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
	void OnOpenFinish();
	void OnCloseFinish();
	void UpdateOpening();
	void UpdateClosing();
	void OnCursorLeft();
	void OnCursorDown();
	void OnCursorUp();
	void UpdateMain();
	void Construct();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void ExecuteUbergraph_UICommonDialogBP(int32 EntryPoint);
	void OnFinishedWaitTime__DelegateSignature();
	void CommonDialogClose__DelegateSignature(int32 SelectCursor);
};

}


