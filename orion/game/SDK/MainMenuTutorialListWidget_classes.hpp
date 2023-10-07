#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3F0 - 0x3A0)
// WidgetBlueprintGeneratedClass MainMenuTutorialListWidget.MainMenuTutorialListWidget_C
class UMainMenuTutorialListWidget_C : public UMainMenuListWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemWidgetClose;                                   // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ItemWidgetOpen;                                    // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UListWidget_C*                         ListWidget;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDataTableTutorialList>        NowListItem;                                       // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    ListGuideData;                                     // 0x3D0(0x10)(Edit, BlueprintVisible)
	TArray<struct FTutorialFlagPart>             DebugListItem;                                     // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMainMenuTutorialListWidget_C* GetDefaultObj();

	void SetupFooterUI(class UMenuFooter_C* FooterUI);
	void CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory);
	void CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem);
	void TutorialListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void ExecuteUbergraph_MainMenuTutorialListWidget(int32 EntryPoint);
};

}


