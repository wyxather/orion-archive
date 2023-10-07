#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C
class IBPI_MonsterListWidgetFocusableItem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MonsterListWidgetFocusableItem_C* GetDefaultObj();

	void BPI_ResetAppearance(bool IsFast, bool* _);
	void BPI_OnLeft(bool IsFast, bool* _);
	void BPI_OnRight(bool IsFast, bool* _);
	void BPI_OutFocus(bool IsFast, bool* _);
	void BPI_Focus(bool IsFast, bool* _);
	void BPI_Decide(bool* IsDecided);
};

}


