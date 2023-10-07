#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C
class IBPI_RobItemListWidgetFocusableItem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_RobItemListWidgetFocusableItem_C* GetDefaultObj();

	void BPI_IsListItem(bool* Return);
	void BPI_ResetAppearance(bool* _);
	void BPI_OutFocus(bool IsFast, bool* _);
	void BPI_Focus(bool IsFast, bool* _);
	void BPI_Decide(bool* _);
};

}


