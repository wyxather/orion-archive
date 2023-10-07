#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x2E9 - 0x2C0)
// WidgetBlueprintGeneratedClass MenuHeader.MenuHeader_C
class UMenuHeader_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HeaderClose;                                       // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HeaderOpen;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Background;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          CaptionText;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMenuHeader_C* GetDefaultObj();

	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void SetGameText_FormatText(class FName FormatTextLabel, class FName TextLabel);
	void Set_Game_TextLabel(class FName In_Label);
	void ResetAnimaion();
	void SetText(class FText In_Text);
	void InitWidgetData();
	void OpenWidget();
	void CloseWidget();
	void ExecuteUbergraph_MenuHeader(int32 EntryPoint);
};

}


