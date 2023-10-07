#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x385 (0x5D5 - 0x250)
// BlueprintGeneratedClass BattleCommandMenuActorBP.BattleCommandMenuActorBP_C
class ABattleCommandMenuActorBP_C : public ABattleCommandMenuActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       WidgetPivot;                                       // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostLevel;                                        // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OpenFlag;                                          // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              LoopEffect_Character;                              // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattlePlayerBP_C*                     PlayerHandle;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HelpWindowOpen;                                    // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleTargetSelectBP_C*               TargetSelect;                                      // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputWrapper_C*                       InputWrapper;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_MENU_STEP                Step;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_MENU_STEP                StepPrev;                                          // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F90[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleCommandMenu_C*                  CommandMainMenu;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCommandMenu_C*                  CommandSecondMenu;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCommandMenu_C*                  CommandThirdMenu;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCommandMenuItem>              MainMenuItem;                                      // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              UniqueMenuItem;                                    // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              FirstJobMenuItem;                                  // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              ItemMenuItem;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              MaterialAMenuItem;                                 // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ECOMMAND_MENU_TYPE                SelectCommandType;                                 // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoostSEHandle;                                     // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScreenPosition;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCommandMenuItem>              InvadeMenuItem;                                    // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              MaterialBMenuItem;                                 // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              SupporterMenuItem;                                 // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              SecondJobMenuItem;                                 // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBattleCommandHelpWindow_C*            CommandMenuHelp;                                   // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableItem;                                      // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectCommandIndex;                                // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCommandMenuItem>              WeaponMenuItem;                                    // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEnableMaterialA;                                 // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEnableMaterialB;                                 // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F93[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePreparationHelpWindow_C*        MenuHelpWindow;                                    // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreparationHelpWindowOpen;                         // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEnableWeapon;                                    // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F94[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCommandMenuItem>              MercenaryMenuItem;                                 // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEnableRevive;                                    // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F95[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMonsterStatusCaptionPartsWidget_C*    TameMonsterHelp;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MoneyHelpWindowOpen;                               // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECOMMAND_SUB_MENU_TYPE            CurrentSubMenuType;                                // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpenBribeMoneyWindow;                            // 0x3B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCursorUpdate;                                    // 0x3B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FEquippedItemData>  CharacterEquipmentList;                            // 0x3B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBackPackItemData>             BattleItemList;                                    // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCommandMenuItem>              LearningMenuItem;                                  // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEnableLearning;                                  // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPotentialityActionDetail_C*           PotentialityActionUI;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DialogSelectIndex;                                 // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnablePOTRecovery;                               // 0x43C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_ENCOUNT_TYPE              BattleMode;                                        // 0x43D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableBoost;                                     // 0x43E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      SelectCommand;                                     // 0x440(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsMultiMonsterMode;                                // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MultiMonsterMax;                                   // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleMultiMonsterCount_C*            MonsterCount;                                      // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_SUB_MENU_TYPE            SelectPreparationMenuType;                         // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreparationMaterialMax;                            // 0x544(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPreparationMode;                                 // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPreparationSpread;                               // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPreparationBuildUp;                              // 0x54A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPotentialityAction;                              // 0x54B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCommandMenuItem>              POTActionMenuItem;                                 // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAbilitySetDataBase                   PreparationCommandSet;                             // 0x560(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Use_Grow_Magic_Buff;                               // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SelectInventorItemLabel;                           // 0x5CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpenMoneyWithCommandMenuItem;                    // 0x5D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattleCommandMenuActorBP_C* GetDefaultObj();

	void CheckItemUseEnableForCreate(class FName ItemLabel, TArray<struct FAilmentHandler>& AilmentList, bool* Permit);
	void UpdateBribeMenuPosition();
	void UpdateActionOrderAnnounceAGIUpSelfDown();
	void UpdateActionOrderAnnounceAllAGIUp();
	void UpdateHelpWindow_Inner(const struct FCommandMenuItem& SelectCommand);
	void UpdateHelpWindowPosition(bool IsIgnoreUpdateFlip);
	void CloseOtherUI();
	void UpdatePrepareHelpMenu(const struct FCommandMenuItem& SelectCommand);
	void UpdatePartyChangeUI();
	void CheckLegendWeapon(class FName SpecialItemLabel, bool* IsLegendWeapon);
	void CreateDefaultMenuItemFromInvadeData(class FName InvadeDataLabel, TArray<struct FCommandMenuItem>& MenuItemList, bool UsedOnceMonster, class FName CommandID);
	void UpdatePrepareMenuPosition();
	void CancelPreparationMode(bool* Result);
	void IsEquipRestrictWeapon(struct FAbilitySetDataBase& AbilitySet, class ABattleCharacterBase* Enforcer, bool* IsEquip);
	void CheckCommandSealingListForItem(class ABattleCharacterBase* CEnforceer, const struct FItemData& CItemData, enum class EACTION_COMMAND_USEABLE* ECommandUseable);
	void CheckCommandSealingListForInvade(class ABattleCharacterBase* CEnforceer, const struct FInvadeData& CInvadeData, enum class EACTION_COMMAND_USEABLE* ECommandUseable);
	void CheckJobMenuEnable(bool* Emable);
	void CheckCommandSealingList(class ABattleCharacterBase* CEnforceer, const struct FAbilitySetDataBase& CAbilitySet, enum class EACTION_COMMAND_USEABLE* ECommandUseable);
	void SetupCommandSealingList();
	bool IsGagMode(const struct FCommandMenuItem& SelectedCommandMenuItem);
	void UpdateMenuLayer();
	void PlayBoostSE(int32 PlayBoostLv);
	bool OffPotentialityAction();
	bool OnPotentialityAction();
	void UpdatePreparationMode();
	void StartPreparationMode(int32 Count, bool* Result);
	void RemovePreparationMaterial(bool* PreparationModeFinish);
	void Check_Preparation_Material_Enable(class FName PreparationMaterialID, int32 MaterialNum, bool* Permit, int32* ItemCount);
	void AddPreparationMaterial(class FName Option, bool* ContinueSelectMaterial);
	void Get_Selected_Monster_Count(class FName MonsterID, int32* Count);
	void UpdateMonsterCommandList();
	void UpdateMultiMonsterMode();
	void StartMultiMonsterMode(int32 Count);
	void RemoveMultiMonster(bool* MultiModeFinish);
	void AddMultiMonster(class FName Option, bool* ContinueSelectMonster);
	void Check_Invade_Monster_Enable(class FName InvadeMonsterID, bool* Permit);
	void GetOptionDataList(TArray<class FName>* AstrOptionDataList, class FName* StrUseActionLabel);
	void CreateDefaultMenuItemFromActionSet(class FName AbilitySetName, TArray<struct FCommandMenuItem>& MenuItemList, bool CommandEnable, bool NormalAttack, bool CommandSeal, bool LearningAbility, bool SuperMagic, bool HyperMagic, bool PotentialityActionAbility);
	void SetupSpecialActionMenuItem(int32 PlayerID);
	void TameMonsterConfirmCallback(int32 SelectIndex);
	void UpdatePotentialityActionUI();
	void CreateDefaultMenuItemFromItem(TArray<struct FCommandMenuItem>& AddItemList, struct FItemData& ItemData, enum class ECOMMAND_MENU_TYPE MenuType, enum class ECOMMAND_SUB_MENU_TYPE SubMenuType, class FName Option, class FText AddInfo, bool Useable, int32 Count, bool CommandSeal);
	void UpdateBackPackItemList();
	void AutoSelectCommandMenu();
	void GetHelpWindowOpen(bool* Open);
	void ChangeTargetSelectStep();
	void UpdateActionOrderAnnounce();
	void CheckCommandEnable(class ABattlePlayerBP_C* Enforcer, const struct FAbilitySetDataBase& AbilitySet, const struct FAbilityDataBase& ABILITY, bool NormalAttack, bool* Useable, bool* Disable);
	void RemoveBoostEffect(bool bWeatherEnd);
	void CheckCommandCost(class ABattlePlayerBP_C* Enforcer, const struct FAbilityDataBase& Command, bool* Enable);
	void CreateWeaponThrowCommand(const struct FAbilityDataBase& DefaultAbility, class FName AbilityLabel, class FName WeaponName, struct FAbilityDataBase* Command);
	void GetMenuIndex(int32* MenuIndex);
	void Check_Command_Target_Change(struct FAbilityDataBase& Command, bool* Result, struct FAbilityDataBase* ReturnCommand);
	void CheckItemUseEnable(class FName ItemLabel, TArray<struct FAilmentHandler>& AilmentList, bool* Permit);
	void Initialize_Battle_Start(enum class EBATTLE_ENCOUNT_TYPE BattleMode);
	void ReadyCommandMenu();
	void UpdateHelpWindow();
	void OnCloseHelp();
	void OnOpenHelp();
	void CursorLeft();
	void CursorRight();
	void CheckItemMenuOpen(bool* Permit);
	void CheckCallSupporterExec(bool* Permit);
	TArray<struct FCommandMenuItem> GetSubMenuList(enum class ECOMMAND_SUB_MENU_TYPE Index);
	void CreateSpecialMenuItem(class ABattlePlayerBP_C* Player);
	void UpdateMenuPosition(bool IsIgnoreUpdateFlip);
	void RemoveCommandMenu();
	void CheckSelectTarget(const struct FAbilityDataBase& Command, bool* Continue, bool* Permit);
	void GetBoostLevel(int32* BoostLevel);
	void CheckCommandExec(const struct FAbilityDataBase& Command, bool* Permit);
	void DecideMenuItem(enum class ECOMMAND_MENU_TYPE Type, const struct FAbilityDataBase& Command, class FName Option);
	void CreateItemMenuItem();
	void CreateAbilityMenuItem(class ABattlePlayerBP_C* Player);
	void CreateMainMenuItem(class ABattlePlayerBP_C* Player);
	void Get_Select_Command(enum class ECOMMAND_MENU_TYPE* Type, struct FAbilityDataBase* Command, bool* UseGrowMagicBuff);
	void CursorDown();
	void CursorUp();
	void ConfirmCommand();
	void OnBoostChange(bool Add);
	void OnCancel();
	void OnDecide();
	void IsClose(bool* Close);
	void Close();
	void Open(class ABattlePlayerBP_C* Player);
	void InitializeCommandMenu(class ABattleTargetSelectBP_C* TargetSelectBP);
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
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
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void OnAnyKey();
	void ChangeBoostLevel(int32 BoostLevel, bool AddLevel);
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuRB();
	void OnMenuLB();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void ConfirmDialogPermit();
	void ConfirmDialogCancel();
	void OnMenuButtonY();
	void OnMenuButtonX();
	void UpdateCommandMenu();
	void WaitConfirmDialog();
	void ReceiveTick(float DeltaSeconds);
	void OnListPaging(bool IsLeftInput);
	void OnMinusButton();
	void HelpScrollAxis(float AxisaValue);
	void ChangeTimeZone();
	void ExecuteUbergraph_BattleCommandMenuActorBP(int32 EntryPoint);
};

}


