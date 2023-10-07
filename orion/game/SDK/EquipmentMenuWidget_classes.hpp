#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x360 (0x6C8 - 0x368)
// WidgetBlueprintGeneratedClass EquipmentMenuWidget.EquipmentMenuWidget_C
class UEquipmentMenuWidget_C : public UEquipmentMenuWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListItemCharacterEqpWidget_C*         EqpCharacterList;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemParamWidget_C*                EqpParamList;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipmentAllCharaRecommendedWidget_C* EquipmentAllCharaRecommendedWidget;                // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget_C*                         ListEqp_Center;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget_C*                         ListEqp_Right;                                     // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInitialized;                                     // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1746[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         EquipPartList;                                     // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectedCategoryID_C;                              // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedItemIdInAll_C;                             // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedItemIdInAll_R;                             // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1747[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         EquipItemList;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          EquipItemNameList;                                 // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FListWidgetCategory>           EquipCategoryList;                                 // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EEQUIPMENT_PART                   SelectedEquipPart;                                 // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1748[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedCharacterID;                               // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectedNextEquipLabel;                            // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EquipItemBeforeSelect;                             // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EquipItemAfterSelect;                              // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterParam                       TempEquipParamBefore;                              // 0x410(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCharacterParam                       TempEquipParamAfter;                               // 0x444(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<int32>                                TempEquipParamIntBefore;                           // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                TempEquipParamIntAfter;                            // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SelectedCurrentWeaponLabel;                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          EquippedItemList;                                  // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FEquippedItemData>  EquippedItemData;                                  // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CENTER_LIST_ITEM_LAST;                             // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CENTER_LIST_ITEM_MAX;                              // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GuideData;                                         // 0x508(0x10)(Edit, BlueprintVisible)
	bool                                         IsPushedCenterList;                                // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPushedRightList;                                 // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBarMode;                                         // 0x51A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1749[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Sword;                             // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Lance;                             // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Dagger;                            // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Axe;                               // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Bow;                               // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Rod;                               // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Shield;                            // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Hat;                               // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Cloth;                             // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_LightHelm;                         // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_LightArmor;                        // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_HeavyHelmet;                       // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_HeavyArmor;                        // 0x5E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Accessory;                         // 0x5F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                SelectedCurrentWeaponParams;                       // 0x600(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMenuFooter_C*                         FooterUI;                                          // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GuideData_Plus;                                    // 0x618(0x10)(Edit, BlueprintVisible)
	enum class EEQUIPMENT_PART                   CurrentCursorEquipPart;                            // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_174A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RightListState;                                    // 0x62C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          TmpSelectedEquipItem;                              // 0x630(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Head;                              // 0x640(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEquipmentRecommendedData>     RecommendedList_Body;                              // 0x650(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GuideData_Fixed;                                   // 0x660(0x10)(Edit, BlueprintVisible)
	class FString                                DebugString;                                       // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CenterDefaultCursorPos;                            // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CenterCursorPos;                                   // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveCursorMin;                                     // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveCursorMax;                                     // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentInvMinus;                                 // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNextInvMinus;                                    // 0x691(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EEQUIPMENT_MENU_STATE             CharaRecomenndedEndState;                          // 0x692(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_RECOMENNDED_TYPE       Recomennded_Type;                                  // 0x693(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_174E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideCategoryData;                                 // 0x698(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideCategoryAllData;                              // 0x6A8(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideGuestCategoryData;                            // 0x6B8(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UEquipmentMenuWidget_C* GetDefaultObj();

	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void ApplyDuplicationSkipFlag(TArray<struct FEquipmentRecommendedCalcData>& SelectedItem, TArray<struct FEquipmentRecommendedCalcData>& DuplicationList);
	void SetCategoryGuide();
	void Chara_RecomenndedEquipment(enum class EEQUIPMENT_RECOMENNDED_TYPE RecomenndedType);
	void UpdateNextEquipAilment(class FName BeforeEquipItemLabel, class FName AfterItemLabel);
	void UpdateCurrentEquipAilment();
	void CloseRecommendedWidget_Inner();
	void ChangeCategoryCallback(bool IsPlus);
	void InitializeRecommendedWidget();
	void AddEquipmentList(TArray<struct FEquipmentRecommendedData>& OutRecommendedEquipList, class FName ItemId, struct FItemData& ItemData, int32 ItemNum);
	void OnDecideAllEquipmentMenuCallback(int32 Type);
	void OnClosedGuestCharaDialog(int32 SelectIndex);
	class FString Debug_GetStateInfoAsString();
	void RecommendedFinish();
	void ChangeCharaPartMenuFromAllEquip(int32 PlayerID, int32 CategoryIndex, int32 SelectPart);
	void GetCharacterID(TArray<int32>* CharaID);
	void FixedEquipment(int32 EquipIndex);
	void CalcJobIncrement(const struct FJobEvalautionValueData& Evalaution, const struct FEquipmentRecommendedData& EquipParam, float* Point);
	void SelectedEquipmentData(TArray<struct FEquipmentRecommendedCalcData>& CalcData, enum class EEQUIPMENT_PART EquipPart, int32* CharaID);
	void CheckDuplication(TArray<struct FEquipmentRecommendedCalcData>& CalcData, class FName CheckLabel, bool* Duplication, TArray<struct FEquipmentRecommendedCalcData>* Data);
	void Equip_Recommended();
	void CalcJobEvalaution(const struct FJobEvalautionValueData& Evalaution, const struct FEquipmentRecommendedData& EquipParam, float* EvalautionPoint);
	void TmpSelectedBestEquipment(int32 CharaID, enum class EEQUIPMENT_PART EquipPart, enum class EEquipmentCategory EquipCategory, float* EvalautionPoint, class FName* EquipLabel, bool* CanEquip);
	void UpdateAllCharaRecomennded();
	void Close_AllRecomennded_Widget();
	void RecommendedCursor(bool IsUp);
	void Recomennded_Callback(int32 SelectIndex);
	void RecommendedCancelCallback(int32 Type);
	void All_Recomment_Equip_Event();
	void CheckRecommendedAll();
	void CenterDecide(int32 EquipmentPartIndex);
	bool SetBarMode(bool IsBar);
	void EquipRecommendedCinfirmCallback(int32 SelectIndex);
	void EquipRemoveAllCallback(int32 SelectIndex);
	bool IsChangeStateCloseFinish();
	bool IsChangeStateOpenFinish();
	bool Init();
	void RefreshParamUI_ByNoWeapon();
	void RefreshPartyList();
	void SelectRecommendedAccessory(enum class EEQUIPMENT_PART EquipPart, TArray<struct FEquipmentRecommendedData>& RecommendedList, bool* Result);
	void SelectRecommendedArmor(enum class EEQUIPMENT_PART EquipPart, TArray<struct FEquipmentRecommendedData>& RecommendedList, bool SelectFromSameCategory, bool* Result);
	void EquipItem_Local(int32 CharacterID, enum class EEQUIPMENT_PART EquipPart, class FName ItemLabel, bool IsRemove);
	void SelectRecommendedWeapon(enum class EEQUIPMENT_PART EquipPart, TArray<struct FEquipmentRecommendedData>& RecommendedList, bool* Result);
	void CategorizeEquipmentItems(bool RemoveFixedEquip);
	void Equip_Recommended_DEPLECATED();
	bool IsClosingState(int32 State);
	void PushRightList();
	void PushCenterList();
	void CloseRightList();
	void CloseCenterList(bool IsPlayNullCloseAnim);
	void SetGuideUI(bool NotUsePlus);
	void UpdateEquipCharacterList();
	void UpdateSelectedCurrentWeaponName();
	void UpdateEquipListAll();
	void UpdateCurrentEquipmentParam();
	void UpdateEquipEffectParam_BeforeAfter();
	void CategoryPosToCharacterId(int32 CategoryCursorPos, int32* CharacterID);
	void Get_Equip_Effect_Params_Int_Array_DEPRICATED(int32 CharacterID, class FName CurrentWeaponLabel, TArray<int32>* Params);
	void UpdateEquipPartList();
	void GetEquipItemData(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, struct FItemData* ItemData, struct FItemDataForMenu* ItemDataForMenu, bool* Success);
	void CreateEquipItemList(enum class EEQUIPMENT_PART EquipmentPart, int32 CharacterID);
	void CreateCategoryData(TArray<struct FListWidgetCategory>& OutCategoryData);
	void SwitchToCenterList();
	void SwitchToRightList();
	void ListEvent_Right(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void ListEvent_Center(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void IsPlayingAnim(bool* IsPlaying);
	void SetupMenu();
	void CreateEquipPartList(TArray<struct FMJListWidgetItemData>& OutItemList, TArray<class FName>& OutEquippedList);
	void GetCurrentState_Local(enum class EEQUIPMENT_MENU_STATE* CurrentState);
	void OnEndState_Local(enum class EEQUIPMENT_MENU_STATE CurrentState, enum class EEQUIPMENT_MENU_STATE NextState);
	void OnBeginState_Local(enum class EEQUIPMENT_MENU_STATE PrevState, enum class EEQUIPMENT_MENU_STATE CurrentState);
	void OnUpdate_Local(enum class EEQUIPMENT_MENU_STATE CurrentState);
	void SetNextState_Local(enum class EEQUIPMENT_MENU_STATE NextState);
	bool IsRunning();
	void Close_Menu(bool IsPlayNullCloseAnim);
	void OpenMenu();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuDecide();
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
	void OutFocusMenu();
	void FocusMenu();
	void CursorUp();
	void CursorDown();
	void OnHelpMenu();
	void GetRightAxisX(float AxisValue);
	void GetRightAxisY(float AxisValue);
	void RBMenu();
	void GetLeftAxisX(float AxisValue);
	void GetLeftAxisY(float AxisValue);
	void RightAxisUp();
	void RightAxisDown();
	void RBMenuRelease();
	void GetGamePadAxisX(float AxisValue);
	void GetGamePadAxisY(float AxisValue);
	void SubMenu_WorldMapZoomIn();
	void SubMenu_WorldMapZoomOut();
	void SubMenu_WorldMapSlowCursorX(float AxisValue);
	void SubMenu_WorldMapSlowCursorY(float AxisValue);
	void OnMenuCancel();
	void OnCursorUp();
	void OnUpdateState(int32 CurrentState);
	void OnBeginState(int32 PrevState, int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void OnCloseFinish();
	void UpdateClosing();
	void UIOpen();
	void UIClose();
	void ExecuteUbergraph_EquipmentMenuWidget(int32 EntryPoint);
};

}


