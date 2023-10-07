#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x461 - 0x3A0)
// WidgetBlueprintGeneratedClass MainMenuAbilityListWidget.MainMenuAbilityListWidget_C
class UMainMenuAbilityListWidget_C : public UMainMenuListWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemWidgetClose;                                   // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ItemWidgetOpen;                                    // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UListWidget_C*                         ListWidget;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGuideData>                    ListGuideData;                                     // 0x3C0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    CharacterAllSelectGuide;                           // 0x3D0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    CharacterSelectGuide;                              // 0x3E0(0x10)(Edit, BlueprintVisible)
	int32                                        SelectDataIndex;                                   // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityUserID;                                     // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyCharacterList_C*                 PartyList;                                         // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAbilityDataBase>              NowListAbility;                                    // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TargetAll;                                         // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1709[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                PartyEffectItem;                                   // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMainMenuAilmentData>          CharacterUseAilment;                               // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMenuFooter_C*                         TmpFooterUI;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMainMenuAilmentData                  PartyUseAilment;                                   // 0x440(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         TempHasCompensationMagic;                          // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMainMenuAbilityListWidget_C* GetDefaultObj();

	void UpdateAbilityTarget(struct FAbilityDataBase& ABILITY, bool OutFocusFast);
	void CancelEvent();
	void DecideEvent();
	void SetPartyList(class UPartyCharacterList_C* PartyListUI);
	enum class ELIST_ITEM_STATUS CheckSelectAbility(const struct FAbilityDataBase& AbilityData, const struct FSavePlayerCharacterData& CharaData, bool HasCompensationMagic);
	void CreateListItemCommon(struct FSavePlayerCharacterData& CharacterData, TArray<struct FJobLearnAbility>& JobAbility, TArray<bool>& AcquisitionFlag, int32 CategoryType, TArray<struct FMJListWidgetItemData>* ListWidgetItemData, TArray<struct FAbilityDataBase>* AbilityList);
	void UseSelectAbility();
	void UpdateUseAilment();
	void SetupFooterUICharacterList(bool IsAllSelect);
	void SetupFooterUIAbilityList();
	void SetFooterUI(class UMenuFooter_C* FooterUI);
	void SetAbilityUseMode();
	void AbilityListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem);
	void CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory);
	void UpdateOpening();
	void UpdateMain();
	void OnOpenFinish();
	void UpdateClosing();
	void OnCloseFinish();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void MenuCursorUp();
	void MenuCursorDown();
	void UIOpen();
	void MenuDecide();
	void MenuCancel();
	void ExecuteUbergraph_MainMenuAbilityListWidget(int32 EntryPoint);
};

}


