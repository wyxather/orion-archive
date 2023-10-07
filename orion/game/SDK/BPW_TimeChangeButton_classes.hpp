#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass BPW_TimeChangeButton.BPW_TimeChangeButton_C
class UBPW_TimeChangeButton_C : public UTimeChangeButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UKSTextBlock*                          MainText;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPW_TimeChangeButton_C* GetDefaultObj();

	void BPW_TimeChangeButton_AutoGenFunc();
	void RefreshText();
	void Construct();
	void ChangeInputMode(enum class EKSUseInputType Type);
	void ExecuteUbergraph_BPW_TimeChangeButton(int32 EntryPoint);
};

}


