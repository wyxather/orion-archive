#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass ListColumnWidget_Col1_2.ListColumnWidget_Col1_2_C
class UListColumnWidget_Col1_2_C : public UKSListColumnWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UKSTextBlock*                          Column1_Title;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UListColumnWidget_Col1_2_C* GetDefaultObj();

	void TextBranchByPlatform(class FName Label, class FName* NewParam1);
	void SetText_Column3(class FName Col1, class FName Col2, class FName Col3);
	void SetText_Column1(class FName Col1);
	void ExecuteUbergraph_ListColumnWidget_Col1_2(int32 EntryPoint);
};

}


