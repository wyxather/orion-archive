#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF7 (0x3B7 - 0x2C0)
// WidgetBlueprintGeneratedClass FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C
class UFieldCommandMenuItemPanel_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MenuItemOutFocus;                                  // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MenuItemDecide;                                    // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MenuItemFocus;                                     // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Background;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             CursorIcon;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Blood;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Icon;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Icon_Imp;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Icon_Purchase_Comp;                                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               IconBorder;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image;                                             // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_47;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             LIne;                                              // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Text;                                              // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Text_Darkening;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TextBorder;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFIELDCOMMAND_MENUITEM_STATE      State;                                             // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          GameTextList;                                      // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NowShowTextIndex;                                  // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NormalIconColor;                                   // 0x364(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          WorseningIconColor;                                // 0x374(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NormalBGColor;                                     // 0x384(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          WorseningBGColor;                                  // 0x394(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnUsedIconColor;                                   // 0x3A4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnusedFlag;                                        // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFieldCommandCategory             Fc_Category;                                       // 0x3B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Death_Match;                                    // 0x3B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFieldCommandMenuItemPanel_C* GetDefaultObj();

	void GetFcCategory(enum class EFieldCommandCategory* Fc_Category);
	void SetDeathMatchMode(bool IsDeathMatch);
	void SetIconTexture(enum class EMJFieldCommandType FCType);
	void IsUnused(bool* IsUnused);
	void SetUse(bool IsBadConnection, bool IsValid, bool IsGrayOut, bool IsComplete, enum class EFieldCommandCategory FcCategory);
	void AddTextList(class FText AddText);
	void SetShowTextIndex(int32 ShowIndex, bool* Success);
	void SetTextList(TArray<class FText>& TextList, int32 ShowIndex, bool* Success);
	void Init();
	void GetCursorPosition(struct FVector2D* Position);
	void Decide();
	void OutFocus(bool Fast);
	void Focus();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
	void OnPlusButton();
	void OnMinusButton();
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnAnyButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void ChangeTimeZone();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void OnAnyKey();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_FieldCommandMenuItemPanel(int32 EntryPoint);
};

}


