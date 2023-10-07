#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4D8 - 0x4D8)
// WidgetBlueprintGeneratedClass MonsterListWidget_Listitem.MonsterListWidget_Listitem_C
class UMonsterListWidget_Listitem_C : public UListItemWidget_Col3_2_C
{
public:

	static class UClass* StaticClass();
	static class UMonsterListWidget_Listitem_C* GetDefaultObj();

	void BPI_ResetAppearance(bool IsFast, bool* _);
	void BPI_Decide(bool* IsDecided);
	void BPI_Focus(bool IsFast, bool* _);
	void BPI_OutFocus(bool IsFast, bool* _);
	void BPI_OnRight(bool IsFast, bool* _);
	void BPI_OnLeft(bool IsFast, bool* _);
};

}


