#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3C8 - 0x2C0)
// WidgetBlueprintGeneratedClass ActionOrderIconBP.ActionOrderIconBP_C
class UActionOrderIconBP_C : public UActionOrderIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Flash;                                             // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Disappear;                                         // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IconBlindoff;                                      // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IconBlindon;                                       // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OrderChangeDebuff;                                 // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OrderChangeBuff;                                   // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SetVisible;                                        // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Break;                                             // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Unable;                                            // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOut;                                           // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             BLIND;                                             // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             CharacterIcon;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               FadeBorder;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Question;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Rain;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Base_BG;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             SelecterEffect;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SubIconRoot;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ThisTurnOutline;                                   // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableActionOrder;                                 // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PrevPosition;                                      // 0x374(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             NewPosition;                                       // 0x37C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMove;                                            // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CanvasPanel;                                       // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           MoveCurve;                                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFade;                                            // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          NextMoveCurve;                                     // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           BribeMoveCurve;                                    // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOrderChange;                                     // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBlind;                                           // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBreak;                                           // 0x3B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNextOrder;                                       // 0x3B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBribeCommand;                                    // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBribeTarget;                                     // 0x3B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSealActionCommand;                               // 0x3B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSealActionTarget;                                // 0x3B7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRain;                                            // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsQuestion;                                        // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_SubActionOrderIcon_New_C*         SubIcon;                                           // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActionOrderIconBP_C* GetDefaultObj();

	void ImmediateVisibleSubIcon();
	void ImmediateHiddenSubIcon();
	void DownSubIcon();
	void SetSubTargetVisible();
	bool ImmediateDettach();
	void CallbackTemporaryFadeFinish();
	void PlayTemporaryFadeIn();
	void PlayTemporaryFadeOut();
	void SetSelecterVisible();
	void GetSubIcon(class UWBP_SubActionOrderIcon_New_C** SubIcon);
	bool DettachSubIcon();
	void Attach_Sub_Icon(class ABattleCharacterBase* SubCharacter, bool Opened);
	bool End();
	void DebugInstantFadeIn();
	bool ResetParam();
	void CallbackFadeOutFinish();
	void CallbackDownFinish();
	void Debug_ApplyParam(class UTexture2D* OrderIcon, const struct FVector2D& IconUV, const struct FVector2D& SpriteSize, const struct FVector2D& CharaOffset, float Scale, float InvertX, const struct FVector2D& Foot, bool IsEnemy);
	void SetZOrder(int32 ZOrder);
	void CheckSpecialIcon(bool* Special);
	void SetQuestionMode(bool Enable);
	void SetRainMode(bool Enable);
	bool ImmediateHidden();
	void Setup_Action_Order_SealAction(bool IsSealActionCommand, bool IsSealActionTarget);
	void Setup_Action_Order_Bribe(bool IsBribeCommand, bool IsBribeTarget);
	void GetCanvasPosition(struct FVector2D* Position);
	void SetupActionOrderBlind(bool Enable, bool IsFast);
	void PlayOrderDeBuff(bool MoveIcon);
	void PlayOrderBuff(bool MoveIcon);
	void InstantFadeIn();
	void InstantFadeOut();
	void InitPosition(const struct FVector2D& Position);
	void CallbackFadeFinish();
	void PlayFadeIn();
	void PlayFadeOut();
	void SetCanvasPanelSlot(class UCanvasPanelSlot* Slot);
	void InitActionOrderIcon(bool ActionOrder, bool IsNext);
	enum class ESlateVisibility GetSelecterEffectVisibility();
	void GetCharacter(class ABattleCharacterBaseBP_C** Character);
	void SetCharacter(class ABattleCharacterBaseBP_C* Character);
	void MoveOrderIcon(const struct FVector2D& NewPosition, const struct FVector2D& InitPosition);
	void DownOrderIcon();
	void BreakOrderIcon();
	void OverTakeOrderIcon(const struct FVector2D& NewPosition);
	void BribeMoveOrderIcon(int32 IconIndex);
	void DisappearOrderIcon();
	void BattleMemberChangeMoveIcon(int32 IconIndex);
	void SubIconDownFinish();
	void ExecuteUbergraph_ActionOrderIconBP(int32 EntryPoint);
};

}


