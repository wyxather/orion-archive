#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C
class UMainMenuRecordStoryMissionIcon_C : public UUserWidget
{
public:
	class UWidgetAnimation*                      OutFocus;                                          // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             StoryMissionIcon;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewEventDispatcher_0;                              // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UMainMenuRecordStoryMissionIcon_C* GetDefaultObj();

	void Set();
	void PlayOutFocus(bool IsFast);
	void PlayFocus(bool IsFast);
	void SetEnable(bool Enable);
	void SetTexutre(enum class EMISSIONRECORD_TYPE Type);
	void NewEventDispatcher_0__DelegateSignature();
};

}


