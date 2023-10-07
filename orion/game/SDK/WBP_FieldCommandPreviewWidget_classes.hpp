#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x498 - 0x360)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C
class UWBP_FieldCommandPreviewWidget_C : public UFieldCommandPreviewMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_FieldCommandPreviewWidget_Layout_C* WBP_FieldCommandPreviewWidget_Layout;              // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_FiledCommandPreviewTabIcon_C*> AllTabIconList;                                    // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_FiledCommandPreviewTabIcon_C*> VisibleTabIconList;                                // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AKSCharacterBase*                      Target_Npc;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FCv2_FieldCommandFlowBase_C*       WillExcecutionFlow;                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FCv2_FieldCommandFlowBase_C*> CurrentFlows;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class UClass*, class UWBP_FIeldCommandPreviewPanelBase_C*> AllPanelTable;                                     // 0x3B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<enum class EMJFieldCommandType, class UWBP_FIeldCommandPreviewPanelBase_C*> ActivePanelTable;                                  // 0x400(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABP_FCv2_FieldCommandFlowBase_C*> PrevFlows;                                         // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        PrevCursorIndex;                                   // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         Header;                                            // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         Footer;                                            // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_FIeldCommandPreviewPanelBase_C*> AllUnavailablePanelList;                           // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FGuideData>                    GuidData;                                          // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewWidget_C* GetDefaultObj();

	void OnHelpWindowScrollAxis(float AxisValue);
	void UpdateDescriptionPos();
	void UpdateDescriptionText(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void PostInputEvent();
	void GetSelectionFlow(class ABP_FCv2_FieldCommandFlowBase_C** Output);
	void OnToggleHelpWindow();
	void OnUpdatePlayerMoney(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void UpdateHeaderFooter(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void SetupHeaderAndFooter();
	void SaveLastState();
	int32 GetLastCursorIndex();
	void OnFinishFieldCommand();
	void OnStartFieldCommand();
	void SetWillExcecutionFlow(class ABP_FCv2_FieldCommandFlowBase_C* NewValue);
	void OnDecideEventFromPanel(enum class EFieldCommandPreviewPanelDecideAnswer Answer);
	void RefreshPreviewWidget(class UWBP_FIeldCommandPreviewPanelBase_C* ExcludePanel);
	void GetSelectingPanel(class UWBP_FIeldCommandPreviewPanelBase_C** Panels);
	void GetActivePanels(TArray<class UWBP_FIeldCommandPreviewPanelBase_C*>* Panels);
	void GetSelectingTabIcon(class UWBP_FiledCommandPreviewTabIcon_C** TabIcon);
	void GetWillExcecutionFlow(class ABP_FCv2_FieldCommandFlowBase_C** Flow);
	void PreOpenSetup(TArray<class ABP_FCv2_FieldCommandFlowBase_C*>& Flows);
	void OnEndState(enum class EFieldCommandPreviewMenuState CurrentState);
	void OnUpdateState(enum class EFieldCommandPreviewMenuState CurrentState);
	void OnBeginState(enum class EFieldCommandPreviewMenuState CurrentState);
	bool IsChangeStateOpenFinish();
	void UpdateTabCursor(int32 Index, bool IsFast);
	void MoveTabCursor(enum class EScrollDirection Dir);
	void Construct();
	void OnCursorUp_Internal();
	void OnCursorDown_Internal();
	void UIOpen();
	bool IsRunning();
	void OnDecide_Internal();
	void OnCancel_Internal();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
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
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuButtonY();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void HelpScrollAxis(float AxisaValue);
	void ExecuteUbergraph_WBP_FieldCommandPreviewWidget(int32 EntryPoint);
};

}


