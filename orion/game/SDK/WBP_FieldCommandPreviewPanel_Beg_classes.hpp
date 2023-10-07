#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x368 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C
class UWBP_FieldCommandPreviewPanel_Beg_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	class UPurchaselistWidget_C*                 PurchaselistWidget;                                // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         ShopItemList;                                      // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                PurchaseIndexList;                                 // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPurchaseItemInfoData>         PurchaseItemInfoList;                              // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Beg_C* GetDefaultObj();

	void GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow);
	void ToggleHelpWindow();
	void BegItemExec(struct FPurchaseItemInfoData& PurchaseItemInfoData);
	void Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam);
	void CursorDown();
	void CursorUp();
	void OutFocus(bool IsFast);
	void Focus(bool IsFast);
	void IsFocusablePanel(bool* Return);
	void OnSelectItemEvent(int32 SelectCursorPosition);
	void SetupBegList();
	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
};

}


