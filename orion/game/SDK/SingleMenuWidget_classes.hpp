#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3B0 - 0x370)
// WidgetBlueprintGeneratedClass SingleMenuWidget.SingleMenuWidget_C
class USingleMenuWidget_C : public USingleMenuWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SingleMenuClose;                                   // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SingleMenuOpen;                                    // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              ContentBody;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuHeader_C*                         HeaderWidget;                                      // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         FooterWidget;                                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSUserWidgetBase*                     SceneWidget;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuHeaderFooter_C*                   HeaderFooter;                                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USingleMenuWidget_C* GetDefaultObj();

	bool EventFieldCommandBattleOpen(class FName NPCLabel);
	bool StorySelectOpen(class FName WorldMapLabel);
	void EndStateEvent(int32 CurrentState);
	void UpdateEvent(int32 CurrentState);
	void BeginStateEvent(int32 CurrentState);
	bool IsRunning();
	void CloseEvent();
	void InitUIParts();
	void OpenEvent();
	void OnBeginState(int32 PrevState, int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void OnUpdateState(int32 CurrentState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void UIClose();
	void ExecuteUbergraph_SingleMenuWidget(int32 EntryPoint);
};

}


