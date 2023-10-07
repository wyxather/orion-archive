#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x309 - 0x2C0)
// WidgetBlueprintGeneratedClass ToggleButtonWBP.ToggleButtonWBP_C
class UToggleButtonWBP_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             BottunBg;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToggleButtonItem_C*                   ToggleButtonItem_01;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToggleButtonItem_C*                   ToggleButtonItem_02;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  ToggleText_True;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ToggleText_False;                                  // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleSwitch;                                      // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BDC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangeValue;                                     // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsFocus;                                           // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UToggleButtonWBP_C* GetDefaultObj();

	void Focus(bool IsFast);
	void OutFocus(bool IsFast);
	void SetValue(bool ToggleSwitch);
	void GetToggleStatus(bool* ToggleSwitch);
	void SwitchToggle();
	void UpdateToggle(bool IsFast);
	void UpdateText();
	void Init();
	void OnInputRight();
	void OnInputLeft();
	void InitExWidget();
	void ResetAppearance();
	void ExecuteUbergraph_ToggleButtonWBP(int32 EntryPoint);
	void OnChangeValue__DelegateSignature(bool Value);
};

}


