#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x29D - 0x268)
// WidgetBlueprintGeneratedClass ArrowButtonWBP.ArrowButtonWBP_C
class UArrowButtonWBP_C : public UArrowButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             ArrowLeft;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             ArrowRight;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Text;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          ItemTextList;                                      // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ItemIndex;                                         // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnablePreset;                                      // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UArrowButtonWBP_C* GetDefaultObj();

	void SetPreset(bool Enable);
	void SetTextList(TArray<class FName>& TextList);
	void SetIndex(int32 ItemIndex);
	void GetIndex(int32* Index);
	void InputRight();
	void InputLeft();
	void UpdateText();
	void Init();
	void OnInputRight();
	void OnInputLeft();
	void InitExWidget();
	void ExecuteUbergraph_ArrowButtonWBP(int32 EntryPoint);
};

}


