#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x378 - 0x260)
// WidgetBlueprintGeneratedClass MenuFooter.MenuFooter_C
class UMenuFooter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FooterClose;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FooterOpen;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             bgBack;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BgBox;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             BgLine;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        GuideItemList;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          HelpText;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HelpTextOverlay;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               LeftSpacer;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuGuideItem_C*                      MenuGuideItem00;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuGuideItem_C*                      MenuGuideItem01;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuGuideItem_C*                      MenuGuideItem02;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuGuideItem_C*                      MenuGuideItem03;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuGuideItem_C*                      MenuGuideItem04;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuGuideItem_C*                      MenuGuideItem05;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        BGSize;                                            // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftSpaceSize;                                     // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightSpaceSize;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HelpTextSize;                                      // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTextMove;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveTextOffset;                                    // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HelpTextAreaSize;                                  // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlaySlot*                          HelpTextSlot;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      HelpTextOverlaySlot;                               // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTime;                                          // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMenuGuideItem_C*>              MenuGuideList;                                     // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FGuideData>                    MenuGuide;                                         // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class ECONTROL_GUIDE_BUTTON_TYPE> HideButtonType;                                    // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    PushGude;                                          // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         WidgetInit;                                        // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HelpIndex;                                         // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HelpOpen;                                          // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECONTROL_GUIDE_BUTTON_TYPE> PushHideButton;                                    // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMenuFooter_C* GetDefaultObj();

	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void TextBranchByPlatform(class FName Label, class FName* OutLabel);
	void GetCurrentGuideData(TArray<struct FGuideData>* OutGuideData);
	void SetHelpGameTextLabel(class FName InText);
	void PushGuideData(TArray<struct FGuideData>& PushGudeData);
	void SetHideButtonType(TArray<enum class ECONTROL_GUIDE_BUTTON_TYPE>& ButtonType);
	void RefreshGuideData(TArray<struct FGuideData>& Data);
	void ClearPushGuideData();
	void HelpUpdate();
	void ChangeText(int32 GuideID, class FName NewTextLabe);
	void InitWidget();
	void PopGudeData();
	void RefreshHideButtonType(bool RefreshTypeOnly);
	void SetVisibleTextAndGuide(bool IsVisible);
	void ResetAnimation();
	void SetTextOffset(float Offset);
	void UpdateMoveText(float DeltaTime);
	void CheckMoveText();
	void CalcHelpTextSize();
	void CalcRightSpaceSize();
	void CalcLeftSpaceSize();
	void CalcMoveTextInfo();
	void SetHelpText(class FText InText);
	void Construct();
	void OpenWidget();
	void CloseWidget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ChangeInputMode(enum class EKSUseInputType Type);
	void InitWidgetData();
	void ExecuteUbergraph_MenuFooter(int32 EntryPoint);
};

}


