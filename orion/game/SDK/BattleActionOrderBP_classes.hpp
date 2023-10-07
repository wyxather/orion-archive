#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3D8 - 0x318)
// BlueprintGeneratedClass BattleActionOrderBP.BattleActionOrderBP_C
class ABattleActionOrderBP_C : public ABattleActionOrder
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecCreateCurrentSubPartyInTurn;                   // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderTimeLine_C*                TimelineWidget;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNextAction;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAttachWithReplace;                               // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1309[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionOrderData>              CurrentSortOrderInMainParty;                       // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              CurrentSortOrderInSubParty;                        // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              NextSortOrderInSubParty;                           // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              NextSortOrderInMainParty;                          // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              CurrentBribeOrderInMainParty;                      // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              NextBribeOrderInMainParty;                         // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              CurrentBribeOrderInSubParty;                       // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FActionOrderData>              NextBribeOrderInSubParty;                          // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PlayerOrderMaxInCurrentTurn;                       // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainOrderNumInCurrentTurn;                         // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubOrderNumInCurrentTurn;                          // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionOrderData>              Saved_EstimateNextOrder;                           // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABattleActionOrderBP_C* GetDefaultObj();

	void SavedNextOrderChange();
	void MergeNextOrderChange();
	bool IsSettledOrderForEightBattle();
	bool UpdateNextOrderForDefeatChange();
	bool AddLastActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, struct FActionOrderData& CInsertOrder, int32* NInsetIndex);
	bool EndCharacterOrderForEightBattle();
	bool SubActionCharacterCount();
	bool AddNextOrderCharacter(class ABattleCharacterBase* CAddCharacter);
	bool RemoveActionOrderByIndex(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, int32 NRemoveIndex);
	void AssignCurrent();
	void AssignNext();
	bool InsertNextOrderForSubParty(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter);
	bool InsertCurrentOrderForSubParty(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter);
	void AdjustSubPartyOrder(TArray<struct FActionOrderData>& TargetSubPartyOrder, TArray<struct FActionOrderData>& OriginalMainPartyOrder, TArray<struct FActionOrderData>* ResultOrder);
	bool CreateMainPartyCharacterList(TArray<struct FActionOrderData>& AcOriginalOrder, TArray<struct FActionOrderData>& AcOrderResult);
	bool PlaySubIconCloseAnim(TArray<struct FActionOrderData>& OrderData);
	bool PlaySubIconOpenAnim(TArray<struct FActionOrderData>& OrderData);
	bool RemoveNextOrderForSubParty(class ABattleCharacterBase* CTargetCharacter);
	bool RemoveCurrentOrderForSubParty(class ABattleCharacterBase* CTargetCharacter);
	void Update_Sub_Icon(TArray<struct FActionOrderData>& TargetMainSortOrder, TArray<struct FActionOrderData>& TargetSubSortOrder, TArray<struct FActionOrderData>& OperationOrderData, bool IsNextOrder, bool OpenedSubIcon);
	bool CreateSubPartyCharacterList(TArray<class ABattleCharacterBase*>& AcSubPartyCharacter, TArray<struct FActionOrderData>& AcOrderResult, bool IsNextOrder);
	void Debug_OutputLog(bool Current);
	bool SetupSubPartyPlayer(TArray<class ABattleCharacterBase*>& AcSubPartyPlayer);
	bool ChangeBattleSubParty(class ABattleCharacterBase* CActiveCharacter, bool DefeatChange);
	bool CreateSubPartyOrder(TArray<class ABattleCharacterBase*>& AcSubPartyCharacter, TArray<struct FActionOrderData>& AcOriginalOrder, TArray<struct FActionOrderData>& AcOrderResult, TArray<struct FActionOrderData>& AcReserveList, TArray<struct FActionOrderData>& AcBribeOrderList, bool IsNextOrder);
	void PopOrder(class ABattleCharacterBase** CNextCharacter, struct FActionOrderData* CNextOrderData);
	void GetOrder(class ABattleCharacterBase** CNextCharacter, struct FActionOrderData* CNextOrderData);
	bool SetBattleFirstActionTurn(TArray<class ABattleCharacterBase*>& AcFirstActionCharacter);
	void GetEstimateActionOrderList(TArray<struct FActionOrderData>* AcCurrentOrder, TArray<struct FActionOrderData>* AcNextOrder);
	void GetActionOrderList(TArray<struct FActionOrderData>* AcCurrentOrder, TArray<struct FActionOrderData>* AcNextOrder);
	void UpdateCharacterIcon();
	bool SealActionOrder(class ABattleCharacterBase* CTarget, struct FActionOrderData* CTargetOrder, bool* bSealNextOrder);
	void SetEstimateActionOrderChange(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, bool bBuffOrder, bool* FindCharacter);
	bool ExecEstimateActionOrder(TArray<class ABattleCharacterBase*>& AcTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, int32 NMoveCount, bool bContainCurrentOrder, bool bContinueEstimate);
	bool SetNextOrderChange(class ABattleCharacterBase* CTargetCharacter);
	bool SetActionOrderChange(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter);
	bool SetCurrentOrderChange(class ABattleCharacterBase* CTargetCharacter);
	bool ResetNextOrderForIsOrderChange();
	bool ResetCurrentOrderForIsOrderChange();
	bool ResetActionOrderForIsOrderChange(TArray<struct FActionOrderData>& AcTargetOrder);
	bool ExecMoveNextOrder(enum class EACTION_ORDER_TYPE EType, int32 NMoveCount);
	bool ExecMoveCurrentOrder(enum class EACTION_ORDER_TYPE EType, int32 NMoveCount);
	bool RemoveBreakStyle();
	bool ReplaceActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, enum class EACTION_ORDER_TYPE EType, class ABattleCharacterBase* CReplaceCharacter, int32 NReplaceIndex, bool bReturnOrderToReserve, struct FActionOrderData* CReplaceOrder);
	bool BribeActionOrder(class ABattleCharacterBase* CEnforcer, class ABattleCharacterBase* CTarget, struct FActionOrderData* CReplaceOrder, struct FActionOrderData* CTargetOrder, bool* bReplaceNextOrder);
	bool RemoveActionOrderForEstimate(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter);
	bool RemoveActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, class ABattleCharacterBase* CTargetCharacter);
	bool ResetEstimateNextOrder();
	bool ResetEstimateCurrentOrder();
	bool FindCurrentOrderByCharacter(class ABattleCharacterBase* CTargetCharacter, TArray<struct FActionOrderData>* AcFindOrderList);
	bool FindNextOrderByCharacter(class ABattleCharacterBase* CTargetCharacter, TArray<struct FActionOrderData>* AcFindOrderList);
	bool ClearCurrentOrder();
	bool RemoveNextOrder(class ABattleCharacterBase* CTargetCharacter, bool bEverSince);
	bool RemoveCurrentOrder(class ABattleCharacterBase* CTargetCharacter);
	bool InsertNextOrder(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EType, float FDelay, bool bUseIcon);
	bool BreakActionOrder(class ABattleCharacterBase* CTargetCharacter);
	bool InsertCurrentOrder(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EType, float FDelay, bool bUseIcon);
	bool ChangeBattleTurn();
	bool CreateActionOrder(TArray<class ABattleCharacterBase*>& AcBattleCharacter, TArray<struct FActionOrderData>& AcOrderResult, TArray<struct FActionOrderData>& AcReserveList);
	bool IsCurrentOrderComplete();
	bool IsNextCharacterContinue(class ABattleCharacterBase* CCheckCharacter);
	bool IsNextCharacterCross();
	bool ResetCurrentCharacterWaitTime();
	bool UpdateNextOrder();
	bool SortPredicateByNextTime(struct FActionOrderData& CElementA, struct FActionOrderData& CElementB);
	bool SortPredicateByWaitTime(struct FActionOrderData& CElementA, struct FActionOrderData& CElementB);
	bool CheckShuffleEnable(const struct FActionOrderData& CTargetOrder);
	bool InitializeActionOrder(TArray<class ABattleCharacterBase*>& AcBattlePlayer, TArray<class ABattleCharacterBase*>& AcBattleEnemy, enum class EBATTLE_START_TYPE EStartType);
	bool SetupFirstTurnPlayer();
	bool InsertActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, struct FActionOrderData& CInsertOrder, int32* NInsetIndex);
	bool MoveActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, enum class EACTION_ORDER_TYPE EType, int32 NMoveCount, bool bIsNextOrder);
	bool RemoveBreakStyleOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList);
};

}


