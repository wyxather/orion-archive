#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x4D8 - 0x410)
// BlueprintGeneratedClass UIManagerBP.UIManagerBP_C
class AUIManagerBP_C : public AKSUIManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 MainMenuPostProcess;                               // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EKSUIPartsKind, TSoftClassPtr<class UUserWidget>> WidgetPartsClassAssetId;                           // 0x428(0x50)(Edit, BlueprintVisible)
	TMap<enum class EKSUIKind, TSoftClassPtr<class UUserWidget>> WidgetClassAssetId;                                // 0x478(0x50)(Edit, BlueprintVisible)
	TArray<enum class EKSUIKind>                 GeneratedUIList;                                   // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AUIManagerBP_C* GetDefaultObj();

	void IsWidgetRunning(bool* IsRunning, enum class EKSUIKind Kind);
	bool CloseMenuCommon(enum class EKSUIKind Kind);
	bool ForceCloseMenuCommon(enum class EKSUIKind Kind);
	bool CloseDialog(bool* OutIsSelected, int32* OutFocusIndex);
	class UKSUserWidgetBase* OpenDialog(struct FKSUICommonDialogParam& InParam);
	TSoftClassPtr<class UUserWidget> GetPartsWidgetClass(enum class EKSUIPartsKind Kind);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void RefreshWidget();
	void ExecuteUbergraph_UIManagerBP(int32 EntryPoint);
};

}


