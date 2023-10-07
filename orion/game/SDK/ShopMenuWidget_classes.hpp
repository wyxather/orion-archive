#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x790 (0xAF8 - 0x368)
// WidgetBlueprintGeneratedClass ShopMenuWidget.ShopMenuWidget_C
class UShopMenuWidget_C : public UShopMenuWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseFromRelationship;                             // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToRelationshipMode;                                // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideTopMenu;                                       // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowTopMenu;                                       // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CloseShopMenu;                                // 0x390(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_OpenShopMenu;                                 // 0x398(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBarImproveRelationship_C*             BarImproveRelationship;                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ContentBody;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainMenu;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PartyPanelRoot;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget_C*                         ProductList;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USelectItemNumWidget_C*                SelectItemNumWidget_70;                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  TopMenu_00;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  TopMenu_01;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  TopMenu_02;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  TopMenu_03;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  TopMenu_04;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  TopMenu_05;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1765[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TopMenuSelectId;                                   // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMainMenuItemPanel_C*>          TopMenuItemList;                                   // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                  ShopLabel;                                         // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESHOPMENU_MODE                    ShopMode;                                          // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1766[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedCategoryIdx;                               // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedItemIdInAll;                               // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TradeCount;                                        // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ProductLabelsAll;                                  // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class ESHOPMENU_MODE>            TopShopCommands;                                   // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Arms;                                 // 0x458(0x10)(Edit, BlueprintVisible)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Tools;                                // 0x468(0x10)(Edit, BlueprintVisible)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Anything;                             // 0x478(0x10)(Edit, BlueprintVisible)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Inn;                                  // 0x488(0x10)(Edit, BlueprintVisible)
	class USelectItemNumWidget_C*                SelectItemNum;                                     // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             SelectedItemData;                                  // 0x4A0(0x120)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMJListWidgetItemData>         ProductItemsAll;                                   // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FListWidgetCategory>           CategoryArray;                                     // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Inn_CharNum;                                       // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Inn_TotalPrice;                                    // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FShopInfoData                         ShopInfoData;                                      // 0x5E8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMJListWidgetItemData                 SelectedProductData;                               // 0x618(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PossessionMax;                                     // 0x6D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedItemPrice;                                 // 0x6D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FEquippedItemData>  EquippedItemData;                                  // 0x6D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SelectedItemLabel;                                 // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEquipParamBeforeAfter>        EquipParamsBeforeAfter;                            // 0x730(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          BeforeEquipmentLabel;                              // 0x740(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          AfterEquipmentLabel;                               // 0x750(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EEquipmentCategory                SelectedEquipmentCategory;                         // 0x760(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1767[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Inn_FadeState;                                     // 0x764(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GuideShop;                                         // 0x768(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideInn;                                          // 0x778(0x10)(Edit, BlueprintVisible)
	float                                        WaitTimer;                                         // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsContinuouslyTradeFailedSE;                       // 0x78C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1768[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyCharacterList_C*                 PartsPartyList;                                    // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Inn_BasePrice;                                     // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultBar;                                        // 0x7AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1769[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideBar;                                          // 0x7B0(0x10)(Edit, BlueprintVisible)
	int32                                        Relationship_State;                                // 0x7C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      CurrentMenuAnim;                                   // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CloseAnimation;                                    // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ErrorMsg_Buy;                                      // 0x7D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  QcEqp_ItemLabel;                                   // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 QcEqp_CanEquip;                                    // 0x7F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        QcEqp_PossessCount;                                // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             QcEqp_ItemData;                                    // 0x810(0x120)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        QcEqp_CursorUpDown;                                // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QcEqp_CursorPos;                                   // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QcEqp_EnableEquipCount;                            // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   QcEqp_EquipPart;                                   // 0x93C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemNumForSale;                                    // 0x940(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TradeCountAllowLoop;                               // 0x944(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_176D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TradeMaxCount;                                     // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTradeCountLimit;                                 // 0x94C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SkipSelectNum;                                     // 0x94D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FromNPC;                                           // 0x94E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_176E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideQuickEqp;                                     // 0x950(0x10)(Edit, BlueprintVisible)
	bool                                         IsExBar;                                           // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_176F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_ExBar;                                // 0x968(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideExBar;                                        // 0x978(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GuideTop;                                          // 0x988(0x10)(Edit, BlueprintVisible)
	bool                                         IsReturnTopMenu;                                   // 0x998(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1770[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DialogSelectIndex;                                 // 0x99C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_LinerShip;                            // 0x9A0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    Guide_LinerShip;                                   // 0x9B0(0x10)(Edit, BlueprintVisible)
	TArray<class UMainMenuItemPanel_C*>          ActiveMenuItemList;                                // 0x9C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        LinerShip_State;                                   // 0x9D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LinerShip_TotalPrice;                              // 0x9D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinerShipRouteData>           LinerShip_RouteList;                               // 0x9D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ELevelTriggerID                   LinerShip_LevelTriggerID;                          // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1771[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpActMerchantResult                  LinerShip_Result;                                  // 0x9F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMenuHeaderFooter_C*                   HeaderFooter;                                      // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Animal_Inn;                           // 0xA48(0x10)(Edit, BlueprintVisible)
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Animal_Tools;                         // 0xA58(0x10)(Edit, BlueprintVisible)
	bool                                         QcEqp_IsAccessory;                                 // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1772[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GuideQuickEqpToAcce;                               // 0xA70(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentAccesorySlotIndex;                          // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EINN_SequenceState                INNSequenceState;                                  // 0xA84(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1773[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        INN_FadeOutTime;                                   // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        INN_DirectionTime;                                 // 0xA8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        INN_FadeInTime;                                    // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1774[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPurchaseItemInfoData>         PurchaseItemsAll;                                  // 0xA98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGiftData                             RecieveGiftData;                                   // 0xAA8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESHOPMENU_RECEIVE_GIFT_STATE      ReceiveGiftState;                                  // 0xAD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1775[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FailedReceiveGiftItem;                             // 0xAE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UShopMenuWidget_C* GetDefaultObj();

	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void UpdateReceiveGiftState();
	void OnClosedPreOrderGiftSuccessDialog(int32 SelectIndex);
	void OnClosedPreOrderGiftOrverDialog(int32 SelectIndex);
	void OnClosedPreOrderGiftCompletedDialog(int32 SelectIndex);
	void OnClosedPreOrderGiftConfirmDialog(int32 SelectIndex);
	void StartMenuMode_PreOrderGift();
	void MakeBarCommands(TArray<enum class ESHOPMENU_MODE>* ShopCommands_Bar);
	void GetSelectedPurchaseItemData(struct FPurchaseItemInfoData* Output);
	void SetINNSequenceState(enum class EINN_SequenceState NewParam);
	void ResetEquipParam();
	void OpenRemoveFixedEquipPartDialog(int32 CharaID);
	void Set_Equipment_Part_from_Item_Category(enum class EEquipmentCategory EquipCategory);
	void FocusListEvent();
	void QcEqp_ChangeAccesorySlot();
	void MenuStart();
	void GetMenuItemEnable(enum class ESHOPMENU_MODE Mode, bool* Enable);
	bool Is_Party_Status_Show();
	void Check_Marchant_Action(bool* Exec);
	void TutorialCloseFinish();
	void RemoveFixedConfirmDialogCallback(int32 SelectIndex);
	void SetTutorialEnd();
	void OpenAnimalInnDialog();
	void AnimalBuyConfirmDialog();
	void IsAnimalShop(bool* IsAnimalShop);
	void Check_Animal_Shop_Finish();
	void CompleteTrade_FromAnimalBuy(int32 Num);
	void StartMenuMode_Animal_Buy();
	bool IsPlayingMenuItemAnimaton();
	void CallbackLinerShipNotification(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void RequestLevelChangeByLinerShip(enum class EREQUEST_RESULT Result);
	void UpdateState_LinerShip();
	void StartMenuMode_LinerShip();
	void SetupTopMenuItemList_LinerShip();
	void SetupTopMenuItem_LinerShip(int32 ListItemIndex, enum class ESHOPMENU_MODE MenuMode);
	void SetupTopMenuItemList();
	void SetupTopMenuItem(int32 ListItemIndex, enum class ESHOPMENU_MODE MenuMode);
	void GetTopMenuActiveItem(int32 Index, class UMainMenuItemPanel_C** SelectedMenuItem);
	void MenuListDefaultAnim();
	void NowSelectCancel();
	void NowSelectDecide();
	void MenuIconInit_DEPRECATED(enum class ESHOPMENU_MODE MenuMode);
	void EquipChangeConfirmCallback(int32 SelectIndex);
	void InnConfirmCallback(int32 SelectIndex);
	void BuySellConfirmCallback(int32 SelectIndex);
	bool IsChangeStateOpenFinish();
	bool SetReference();
	bool IsChangeStateCloseFinish();
	void RefreshTopTitle();
	void OpenCommon();
	void RefreshSellItemWidget();
	void RefreshSelectNumArror();
	void CalcTradeMaxForSell(int32* FixedTradeCount);
	void CalcTradeMaxForBuy(int32* FixedTradeCount);
	void OnBeginState_ShopSelectTrade();
	void IsMenuSelectable(enum class ESHOPMENU_MODE ShopMode, bool* IsSelectable);
	void DisplayDebugInfo();
	void QcEqp_OnDecide();
	void QcEqp_FocusCursor();
	void PrepareQuickEquipment();
	bool QcEqp_MoveCursor(int32 MoveValue);
	void OnBegin_BuyEquipment();
	void OnEnd_BuyEquipment();
	void OnBegin_BuyEquipConfirm();
	bool CanAnyEquipItem();
	void OnUpdate_ShopConfirm();
	void OnUpdate_BuyEquipConfirm();
	void ModifyListCaption();
	void OpenTradeErrorDialog();
	void PlayMenuAnimation(class UWidgetAnimation* NewAnimation);
	void UpdateRelationshipState();
	void GetPrevState_Local(enum class ESHOPMENU_STATE* CurrentState);
	bool IsClosingState(int32 State);
	void OnBegin_CloseState();
	void CloseAll();
	void StartMenuMode_RelationShip();
	void StartMenuMode_Story();
	void StartMenuMode_ChangeMember();
	void StartMenuMode_Equip();
	void StartMenuMode_Sell(bool* Success);
	void StartMenuMode_Buy();
	void InitPartsWidget();
	void FullRecovery_MainMember();
	void SetGuideUI(bool ForceTopGuide);
	void SetCategoryDataByMode(bool IsBuy, bool IsAnimal);
	void UpdateInnState();
	void RefreshTopMenuFocus(int32 SelectedIndex);
	void UpdateTopMenuUI();
	void UpdateOuterUI();
	void ResetPartyPanel();
	void UpdateEquipParamWidget();
	void Calc_Equip_Param_Before_After();
	void UpdateEquippedItemData();
	bool IsRunning();
	void GetCurrentState_Local(enum class ESHOPMENU_STATE* CurrentState);
	void SetNextState_Local(enum class ESHOPMENU_STATE NextState);
	void OnEndState_Local(enum class ESHOPMENU_STATE CurrentState, enum class ESHOPMENU_STATE NextState);
	void OnBeginState_Local(enum class ESHOPMENU_STATE PrevState, enum class ESHOPMENU_STATE CurrentState);
	void OnUpdate_Local(enum class ESHOPMENU_STATE CurrentState);
	void StartMenuMode_Inn();
	void AddCategories();
	void CreateCategoryData(bool IsBuy);
	void LimitTradeItemNum(bool IsCountup, int32 Count);
	void UpdatePossessionItemNum(int32 ItemIdx, TArray<struct FMJListWidgetItemData>& WidgetItems, TArray<class FName>& ItemLabels);
	void SetupShopInfo(class FName ShopLabel);
	void CreateBackpackItemAll();
	void GetSelectedItemLabel(class FName* ItemLabel);
	void CompleteTrade(bool* IsCompleted);
	void GetSelectedProductData(struct FMJListWidgetItemData* Product);
	void GetSelectedItemData(struct FItemData* Item);
	void ListEventCallback(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void ChangeState_Confirm();
	void ChangeState_SelectNum(bool* CanTrade);
	void CreateShopCategoryAll(class FName ShopLabel, bool IsAnimalShop);
	void UpdateTopMenuFocus(int32 NewIndex, bool IsUp);
	void InitShopMenu();
	void MenuCancel();
	void MenuDecide();
	void MenuSelectItem(bool IsUp);
	bool Is_Playing_All_Animation_();
	void OnEnd_CloseState();
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
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonSelect();
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
	void OnMenuCancel();
	void OnMenuDecide();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorRightRepeat();
	void OnCursorLeftRepeat();
	void OnCursorUp();
	void OnCursorRight();
	void OnCursorLeft();
	void OnCursorDown();
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnMenuButtonStart();
	void OnUpdateState(int32 CurrentState);
	void OnBeginState(int32 PrevState, int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void Construct();
	void UIClose();
	void UIOpen();
	void SetParam(class FName ShopLabel, bool ForceDefaultBar, bool FromNPC);
	void OpenExBar();
	void ExecuteUbergraph_ShopMenuWidget(int32 EntryPoint);
};

}


