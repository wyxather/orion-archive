#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass ListColumnWidget_SepLine.ListColumnWidget_SepLine_C
class UListColumnWidget_SepLine_C : public UKSListColumnWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             SepLine;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UListColumnWidget_SepLine_C* GetDefaultObj();

	void SetText_Column3(class FName Col1, class FName Col2, class FName Col3);
	void ExecuteUbergraph_ListColumnWidget_SepLine(int32 EntryPoint);
};

}


