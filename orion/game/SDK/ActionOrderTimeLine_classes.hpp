#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x410 - 0x2C0)
// WidgetBlueprintGeneratedClass ActionOrderTimeLine.ActionOrderTimeLine_C
class UActionOrderTimeLine_C : public UActionOrderTimeLineBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Change;                                            // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BLIND;                                             // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NextTurn;                                          // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UActionCharacterPanel_C*               ActionCharacterPanel;                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                ActionOrderAnnounce00;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                ActionOrderAnnounce01;                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                ActionOrderAnnounce02;                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                ActionOrderAnnounce03;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                ActionOrderAnnounce04;                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                ActionOrderAnnounce05;                             // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CurrentOrderTimeLine;                              // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_3;                                           // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_19;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_66;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                NextOrderAnnounce00;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                NextOrderAnnounce01;                               // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                NextOrderAnnounce02;                               // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                NextOrderAnnounce03;                               // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                NextOrderAnnounce04;                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionOrderAnnounce_C*                NextOrderAnnounce05;                               // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          NextOrderTimeLine;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          NextTurnText;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TurnText;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_Change;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UActionOrderIconBP_C*>          InterceptIconList;                                 // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UActionOrderAnnounce_C*>        NextAnnounceIconList;                              // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UActionOrderAnnounce_C*>        CurrentAnnounceIconList;                           // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UActionOrderIcon*>              OrderIconPool;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        ORDER_ICON_NUM;                                    // 0x3D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActionOrderIcon*>              ActiveCurrentIconList;                             // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UActionOrderIcon*>              ActiveNextIconList;                                // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        SUB_ORDER_ICON_NUM;                                // 0x3F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1456[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_SubActionOrderIcon_New_C*> SubOrderIconPool;                                  // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UActionOrderTimeLine_C* GetDefaultObj();

	void SetSelecterVisible();
	void PlayCloseSubIcon();
	void PlayOpenSubIcon();
	void PlayPartyChange();
	void DettachSubOrderIcon(class UWBP_SubActionOrderIcon_New_C* TargetIcon);
	void GetSubOrderIconFromPool(class UWBP_SubActionOrderIcon_New_C** OrderIcon);
	void UpdateSubActionOrderIcon(class ABattleCharacterBaseBP_C* ActiveCharacter);
	void End();
	void InitParam();
	bool CheckAttachIcon(class UActionOrderIcon* TargetIcon);
	void TransitionNextTurnToCurrentTurn(class UActionOrderIcon* TargetIcon);
	void DettachOrderIcon(class UActionOrderIcon* TargetIcon);
	void AttachOrderIcon(bool IsCurrent, class UActionOrderIcon** OrderIcon);
	void GetOrderIconFromPool(class UActionOrderIcon** OrderIcon);
	void UpdateCurrentOrderAnnounce(TArray<struct FActionOrderData>& NewOrder);
	void UpdateNextOrderAnnounce(TArray<struct FActionOrderData>& NewOrder);
	void InitOrderTimeLine(class UPanelWidget* TimeLineParent, bool IsNextTurn);
	void InitActionOrder();
	void ResetCurrentOrderIcon(TArray<struct FActionOrderData>& CurrentOrder);
	void UpdateNextOrderIcon(TArray<struct FActionOrderData>& NextOrder);
	void UpdateCurrentOrderIcon(TArray<struct FActionOrderData>& CurrentOrder);
	void UpdateActionOrderIcon(TArray<struct FActionOrderData>& ActionOrder);
	void Get_Action_Order_Icon_DEPLECATED(int32 Index, class UActionOrderIconBP_C** CurrentOrderIcon, class UActionOrderIconBP_C** NextOrderIcon);
	void UpdateActiveCharacterIcon(class ABattleCharacterBaseBP_C* ActiveCharacter);
	void ClearActionOrderAnnounce();
	void ClearActionCharacterPanel(bool IsClearSubCharacter);
	void PlayActionOrderBlind();
	void SetLanguage();
	void PlayNextTurn(float* WaitTime);
	void Construct();
	void Debug_AddOrderIcon(bool IsCurrent);
	void ExecuteUbergraph_ActionOrderTimeLine(int32 EntryPoint);
};

}


