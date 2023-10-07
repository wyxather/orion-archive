#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x488 - 0x488)
// WidgetBlueprintGeneratedClass RobItemListWidget_Listitem.RobItemListWidget_Listitem_C
class URobItemListWidget_Listitem_C : public UListItemWidget_Col2_4_C
{
public:

	static class UClass* StaticClass();
	static class URobItemListWidget_Listitem_C* GetDefaultObj();

	void BPI_Decide(bool* _);
	void BPI_Focus(bool IsFast, bool* _);
	void BPI_OutFocus(bool IsFast, bool* _);
	void BPI_ResetAppearance(bool* _);
	void BPI_IsListItem(bool* Return);
};

}


