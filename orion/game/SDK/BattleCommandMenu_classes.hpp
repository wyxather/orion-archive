#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x283 (0x543 - 0x2C0)
// WidgetBlueprintGeneratedClass BattleCommandMenu.BattleCommandMenu_C
class UBattleCommandMenu_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BoostLvMax;                                        // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BoostLv2;                                          // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BoostLv1;                                          // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BoostDefault;                                      // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Menu_OutFocus;                                     // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Menu_Focus;                                        // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Menu_Close;                                        // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Menu_Open;                                         // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBattleCommandBoostHelp_C*             BoostHelp;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CommandRoot;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_8;                                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_18;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_22;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_26;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_FrameLine;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem00;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem01;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem02;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem03;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem04;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem05;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem06;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCommandMenuItem_C*              MenuItem07;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuPanel;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MosterCountRoot;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               PostBoxSpace;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleStyleChange_C*                  PotentialityActionGuide;                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               PreBoxSpace;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_7;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_8;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattlePartyChangeGuide_C*         WBP_BattlePartyChangeGuide;                        // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCommandMenuItem>              CommandMenuItem;                                   // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        BoostLevel;                                        // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MenuIndex;                                         // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                ActiveIndexList;                                   // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         MenuOpen;                                          // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECOMMAND_MENU_TYPE                ReturnType;                                        // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1468[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleCommandMenuItem_C*>      MenuItemList;                                      // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class ECOMMAND_SUB_MENU_TYPE            ReturnSubType;                                     // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1469[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnOption;                                      // 0x414(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattlePlayerBP_C*                     PlayerHandler;                                     // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SubMenuName;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FloorIndex;                                        // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableBoostHelp;                                   // 0x434(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_146B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OffsetIndex;                                       // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorIndex;                                       // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableScrollBar;                                   // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_146C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MenuItemMax;                                       // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInvadeMode;                                      // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_146D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      SelectCommand;                                     // 0x450(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ECOMMAND_SUB_MENU_TYPE            SelectPreparationMaterial;                         // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMultiMonsterMenu;                                // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRestrictBoost;                                   // 0x542(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBattleCommandMenu_C* GetDefaultObj();

	void IsEnableScrollBar(bool* Enable);
	void GroupingAnimations();
	void OpenPotentialityActionMenu(class ABattlePlayerBP_C* PlayerParam);
	void UpdatePartyChangeUI(bool PartyChangeEnable);
	void Initialize_Party_Change(bool IsVisible);
	void GetPreparationCommandText(enum class ECOMMAND_SUB_MENU_TYPE SubMenuType, class FText* CommandText);
	void GetPreparationAttributeIcon(bool IsBattlePreparationMode, TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>* Array);
	void SetRestrictPotentialityAction(bool IsRestrict);
	void SetRestrictBoost(bool IsRestrict);
	void UpdateBoostHelp();
	void IsEquipedWeaponByAilment(enum class EAILMENT_TYPE AilmentType, bool* Found, enum class EWEAPON_CATEGORY* EquipmentCategory);
	void CheckSelectSwitchAttribute(bool* Result);
	void Get_Select_Menu_Item_Buttom_Positon(struct FVector2D* ViewportPosition, struct FVector2D* WidgetSize);
	void UpdatePreparationMenuItem(class ABattleCommandMenuActorBP_C* CommandMenuActor);
	void SetSelectPreparationMaterial(enum class ECOMMAND_SUB_MENU_TYPE SelectPreparationMaterial, bool UpdateMenuItem);
	void CheckSelectPreparation(bool* Result);
	void UpdateAddInfo(TArray<struct FCommandMenuItem>& MenuItem);
	void AddMonsterCountWidget(class UUserWidget* Widget);
	void SetEnableBoostHelp(bool EnableBoostHelp);
	void Initialize_Potentiality_Action_Text(bool IsVisible);
	void UpdatePotentialityActionUI(class ABattlePlayerBP_C* PlayerParam);
	void SetInvadeMode(bool InvadeMode);
	void GetCommandWidget(int32 Index, class UBattleCommandMenuItem_C** TextWidget);
	void AutoSelectMenuItem();
	void CursorLeft();
	void CursorRight();
	void UpdateScrollBar();
	void ResetMenuIndex();
	void GetAbilityCostText(class ABattlePlayerBP_C* Enforcer, const struct FAbilityDataBase& ABILITY, class FText AddText, class FText* Text);
	void MoveMenuCursor(int32 Value);
	void GetMenuIndex(int32* Index);
	void CheckActiveItem(bool* Result);
	void SetFloorIndex(int32 Floor);
	void GetSubMenuName(class FName* MenuName);
	void SetSubMenuName(class FName MenuName);
	void GetSelectIndex(int32* Index);
	void GetSelectCommandMenuItem(struct FCommandMenuItem* Command, bool* FindMenuItem);
	void CheckSelectNormalAttack(bool* Result);
	void ChangeAttributeIcon(int32 Index, bool Instant, bool DirNext);
	void SetPlayerHandler(class ABattlePlayerBP_C* Player);
	void MenuOutFocus();
	void MenuFocus();
	void InitializeMenuItem();
	void CloseCommandMenu();
	void Change_Boost_Level(int32 BoostLevel);
	void Cancel();
	void Decide(bool* OpenSubMenu);
	void CursorDown();
	void CursorUp();
	void CheckActiveMenuItem(const struct FCommandMenuItem& Item, int32 BoostLv, bool* Active);
	void UpdateMenuCursor();
	void UpdateMenuItem(bool UpdateActiveItem);
	void IsClose(bool* Close);
	void Get_Select_Command(enum class ECOMMAND_MENU_TYPE* Type, enum class ECOMMAND_SUB_MENU_TYPE* SubType, struct FAbilityDataBase* Command, class FName* Option);
	void OpenCommandMenu(TArray<struct FCommandMenuItem>& CommandItem, class FName InitTargetCommand, enum class ECOMMAND_SUB_MENU_TYPE MenuType, bool* OpenSuccess);
	void SetCommandMenuVisible(bool Visible);
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
	void Construct();
	void ExecuteUbergraph_BattleCommandMenu(int32 EntryPoint);
};

}


