#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibFieldCommandUIUtil.LibFieldCommandUIUtil_C
class ULibFieldCommandUIUtil_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibFieldCommandUIUtil_C* GetDefaultObj();

	void GetHelpWindowGuide(class UObject* __WorldContext, struct FGuideData* Guide);
	void GetFcIconColor(enum class EFieldCommandCategory FcCategory, class UObject* __WorldContext, struct FSlateColor* Color);
	void SetNPCStatusWidget(class UNpcPropertyComponent* NpcProperty, class UNPCStatusPartsWidget_C* StatusWidget, class UObject* __WorldContext, bool* Success);
	void OpenFollowTwoNpcDialogWithPlayerStatus(class UNpcPropertyComponent* LeftNpcProperty, class UNPCStatusPartsWidget_C* LeftNpcStatus, class UNpcPropertyComponent* RightNpcProperty, class UNPCStatusPartsWidget_C* RightNpcWidget, class UPlayerStatusPanel_C* PlayerStatus, class UNPCFollowChangePartsWidget_C* ChangeCaptionWidgfet, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext);
	void OpenFollowTwoNpcDialog(class UNpcPropertyComponent* LeftNpcProperty, class UNPCStatusPartsWidget_C* LeftNpcStatus, class UNpcPropertyComponent* RightNpcProperty, class UNPCStatusPartsWidget_C* RightNpcWidget, class UNPCFollowChangePartsWidget_C* ChangeCaptionWidgfet, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext);
	void OpenFollowNpcDialogWithPlayerStatus(class UNpcPropertyComponent* NpcProperty, class UNPCStatusPartsWidget_C* NpcStatus, class UPlayerStatusPanel_C* PlayerStatus, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext);
	void OpenFollowNpcDialog(class UNpcPropertyComponent* NpcProperty, class UNPCStatusPartsWidget_C* NpcStatus, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext);
};

}


