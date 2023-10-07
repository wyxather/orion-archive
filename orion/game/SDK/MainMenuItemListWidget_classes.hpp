#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x420 (0x7C0 - 0x3A0)
// WidgetBlueprintGeneratedClass MainMenuItemListWidget.MainMenuItemListWidget_C
class UMainMenuItemListWidget_C : public UMainMenuListWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemWidgetClose;                                   // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ItemWidgetOpen;                                    // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UListWidget_C*                         ListWidget;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGuideData>                    ListGuideData;                                     // 0x3C0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    CharacterAllSelectGuide;                           // 0x3D0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    CharacterSelectGuide;                              // 0x3E0(0x10)(Edit, BlueprintVisible)
	class UPartyCharacterList_C*                 PartyList;                                         // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         TmpFooterUI;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBackPackItemData>             BackpackItemList;                                  // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectItemIndexInList;                             // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1718[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBackPackItemData>             ItemDataInList;                                    // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemData                             SelectItemDB;                                      // 0x428(0x120)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseItemAll;                                        // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1719[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                PartyEffectItem;                                   // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMainMenuAilmentData>          CharacterUseAilment;                               // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMainMenuAilmentData                  PartyUseAilment;                                   // 0x570(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          GrowParamType;                                     // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                GrowParamNum;                                      // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  UseItemName;                                       // 0x5B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TargetCharacterName;                               // 0x5C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        UseAfterItemNum;                                   // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BeforeCurrentCategory;                             // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEquipParamBeforeAfter>        EquipParamsBeforeAfter;                            // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SelectedEquipItemLabel;                            // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategoryData                 ItemCategory;                                      // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   EquipmentPart;                                     // 0x601(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_171A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 CanEquipChara;                                     // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FEquippedItemData>  Equipped_Item_Data;                                // 0x618(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        EquipPocessCount;                                  // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterParam                       BeforeParam;                                       // 0x66C(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FAilmentCharacterParam                AilmentTargetParam;                                // 0x6A0(0xD)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_171B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterParam                       AfterParam;                                        // 0x6B0(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_171C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    ListGuideDataToAcce;                               // 0x6E8(0x10)(Edit, BlueprintVisible)
	bool                                         IsAccessory;                                       // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_171D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    CharacterSelectGuideToAcce;                        // 0x700(0x10)(Edit, BlueprintVisible)
	int32                                        AccesorySlotIndex;                                 // 0x710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_171E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FMJListWidgetItemData>    HPAilmentList;                                     // 0x718(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, struct FMJListWidgetItemData>    MPAilmentList;                                     // 0x768(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SelectItemLabel;                                   // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMainMenuItemListWidget_C* GetDefaultObj();

	void AvaiableRecoveryItem();
	void CheckHPMPAilment(struct FMJListWidgetItemData& TargetListData, struct FItemData& TargetItemData, int32 Index);
	void PlayHolyTorchEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void NarrationNoteFinishCallback();
	void SetEquipmentPart(enum class EEquipmentCategory EquipCategory);
	void ChangeAccesorySlot();
	void StartEvent();
	void Fixed_Remove_Confilm_Finish_Callback(int32 SelectIndex);
	void OpenFixedRemoveConfirmDialog(int32 CharaID);
	void ChangeAccesoryGuideText();
	void OpenMaxParameterDialog();
	void GetParamText(const struct FCharacterParam& CharaParam, const struct FAilmentCharacterParam& AilmentParam, int32 CharaID, class FText* ParamText);
	void UpdateEquippedItemData();
	void CloseEquipItem();
	void CalcEquipParamBeforeAfter();
	bool Is_Selected_Equipment_Item();
	void EquipSelectedItem();
	void SettingEquipParam(class FName ItemLabel);
	void ResetEquipParam();
	void UpdateEquipParam();
	void FocusEvent(int32 CategoryIdx, int32 ItemIdxInAll);
	void DecideItemEvent(int32 CategoryIdx, int32 ItemIdxInAll);
	void CallCreateListItem();
	void OpenGuestUnAvalableDialog();
	void OnClosedSpecialItemFailedDialog(int32 SelectIndex);
	void GetAdcancedAbilityFinishCallback(int32 SelectIndex);
	void RefreshList();
	void OnSpecialItemUsed_PlayEvent(enum class EREQUEST_RESULT Result);
	void UseSpecialItem();
	void EndUseItem(int32 NewParam);
	void OpenSCPMaxDialog();
	void UpdateItemTarget(const struct FItemData& InputPin);
	void CloseUseItem();
	void TickEvent();
	void OpenAilmentDialog(int32 CharaID, bool* ShowDialog);
	void AilmentDialogSetting(const struct FAilment& Ailment, int32 Type, bool* ExecGrow);
	void CancelEvent();
	void DecideEvent();
	enum class ELIST_ITEM_STATUS CheckSelectItemUsable(struct FItemData& ItemData, class FName ItemLabel);
	void CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem);
	void CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory);
	void SetupFooterUICharacterList(bool IsAllSelect);
	void SetupFooterUIItemList();
	void SetFooterUI(class UMenuFooter_C* FooterUI);
	void SetPartyList(class UPartyCharacterList_C* PartyList);
	void UseSelectItem();
	void SetItemUseMode();
	void UpdateUseAilment();
	void ItemListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void UpdateMain();
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateClosing();
	void OnCloseFinish();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void MenuCursorUp();
	void MenuCursorDown();
	void CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void MenuDecide();
	void MenuCancel();
	void UIOpen();
	void MenuStart();
	void ExecuteUbergraph_MainMenuItemListWidget(int32 EntryPoint);
};

}


