#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x309 - 0x309)
// WidgetBlueprintGeneratedClass RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C
class URobItemListWidget_DialogItem_C : public UUICommonDialogItemBP_C
{
public:

	static class UClass* StaticClass();
	static class URobItemListWidget_DialogItem_C* GetDefaultObj();

	void BPI_IsListItem(bool* Return);
	void BPI_Decide(bool* _);
	void BPI_Focus(bool IsFast, bool* _);
	void BPI_OutFocus(bool IsFast, bool* _);
	void BPI_ResetAppearance(bool* _);
};

}


