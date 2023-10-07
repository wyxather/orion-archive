#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x330 - 0x2C8)
// WidgetBlueprintGeneratedClass WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C
class UWBP_FIeldCommandPreviewPanelBase_C : public UFieldCommandPreviewPanelBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CommonDialogBG_C*                  BP_CommonDialogBG;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FcName;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMJFieldCommandType               FieldCommandType;                                  // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_FieldCommandPreviewPanelTemplate_C* PanelTemplate;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDecideInPanel;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNPCStatusPartsWidget_C*               RightNpcStatusWidget;                              // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               LeftNpcStatusWidget;                               // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCFollowChangePartsWidget_C*         CaptionChangeWidget;                               // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RefreshPreviewWidget;                              // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_FIeldCommandPreviewPanelBase_C* GetDefaultObj();

	void GetCanPlayCloseSe(bool* CanPlay);
	void OnFinishFieldCommand();
	void GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow);
	void RefreshPanel();
	void Cancel();
	void CanCloseState(enum class EFieldCommandPreviewMenuState* NextState);
	void ToggleHelpWindow();
	void HelpWindowScrollAxis(float AxisValue);
	void SetSwapNpcWidget(class UNPCStatusPartsWidget_C* LeftNpcStatusWidget, class UNPCStatusPartsWidget_C* RightNpcStatusWidget, class UNPCFollowChangePartsWidget_C* CaptionChangeWidget);
	bool OpenSwapDialog(class FName DetailTextLabel, class FName ReleaseWaitingNpcNotice);
	void OnClosedSwapDialog(int32 SelectIndex);
	void GetFlow(class ABP_FCv2_FieldCommandFlowBase_C** Flow);
	void IsFocusablePanel(bool* Return);
	void OutFocus(bool IsFast);
	void Focus(bool IsFast);
	void CursorDown();
	void CursorUp();
	void Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam);
	void Close(bool IsFast);
	void Open(bool IsFast);
	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void GetFcType(enum class EMJFieldCommandType* Type);
	void Construct();
	void ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase(int32 EntryPoint);
	void RefreshPreviewWidget__DelegateSignature(class UWBP_FIeldCommandPreviewPanelBase_C* ExcludePanel);
	void OnDecideInPanel__DelegateSignature(enum class EFieldCommandPreviewPanelDecideAnswer Answer);
};

}


