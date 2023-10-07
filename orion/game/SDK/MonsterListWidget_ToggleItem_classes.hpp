#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4A0 - 0x498)
// WidgetBlueprintGeneratedClass MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C
class UMonsterListWidget_ToggleItem_C : public UListItemWidget_Opt2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMonsterListWidget_ToggleItem_C* GetDefaultObj();

	void BPI_ResetAppearance(bool IsFast, bool* _);
	void BPI_Decide(bool* IsDecided);
	void BPI_Focus(bool IsFast, bool* _);
	void BPI_OutFocus(bool IsFast, bool* _);
	void BPI_OnRight(bool IsFast, bool* _);
	void BPI_OnLeft(bool IsFast, bool* _);
	void SetValue(bool ToggleSwitch);
	void Construct();
	void OnChangeValue(bool Value);
	void ExecuteUbergraph_MonsterListWidget_ToggleItem(int32 EntryPoint);
};

}


