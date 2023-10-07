#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x341 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C
class UWBP_FieldCommandPreviewPanelTemplate_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUICommonDialogItemBP_C*               Answer_01;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUICommonDialogItemBP_C*               Answer_02;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          AnswerArea;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CaptionRoot;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            CaptionSlot;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          CaptionText;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            DetailSlot;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TextArea;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUICommonDialogItemBP_C*>       AllButtonList;                                     // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUICommonDialogItemBP_C*>       ActiveButtonList;                                  // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentCursor;                                     // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFieldCommandPreviewPanelDecideAnswer> AnswerList;                                        // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HideCaption;                                       // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanelTemplate_C* GetDefaultObj();

	void SetupTemplateWithoutButton(class FText DetailText);
	void SetCaptionText(class FText InText);
	int32 GetActiveButtonNum();
	void RemoveCursor(bool Fast);
	void SetCursorToDefaultPos(bool IsFast);
	void MoveCursor(enum class EScrollDirection Dir);
	void UpdateCursor(int32 Index, bool IsFast);
	void SetupTemplate(class FText DetailText, TArray<class FText>& ButtonText, TArray<enum class EFieldCommandPreviewPanelDecideAnswer>& AnswerList);
	void CursorDown();
	void CursorUp();
	void Decide(enum class EFieldCommandPreviewPanelDecideAnswer* Answer);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate(int32 EntryPoint);
};

}


