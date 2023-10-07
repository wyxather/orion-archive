#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C
// (None)

class UClass* UWBP_SubActionOrderIcon_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SubActionOrderIcon_New_C");

	return Clss;
}


// WBP_SubActionOrderIcon_New_C WBP_SubActionOrderIcon_New.Default__WBP_SubActionOrderIcon_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SubActionOrderIcon_New_C* UWBP_SubActionOrderIcon_New_C::GetDefaultObj()
{
	static class UWBP_SubActionOrderIcon_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SubActionOrderIcon_New_C*>(UWBP_SubActionOrderIcon_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetParentObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ParentWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::SetParentObject(class UUserWidget* ParentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "SetParentObject");

	Params::UWBP_SubActionOrderIcon_New_C_SetParentObject_Params Parms{};

	Parms.ParentWidget = ParentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetSelecterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::SetSelecterVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "SetSelecterVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayCloseAnimToLastFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::PlayCloseAnimToLastFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayCloseAnimToLastFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayOpenAnimToLastFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::PlayOpenAnimToLastFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayOpenAnimToLastFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::PlayCloseAnim(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayCloseAnim");

	Params::UWBP_SubActionOrderIcon_New_C_PlayCloseAnim_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.DebugInstantFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::DebugInstantFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "DebugInstantFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.ResetParam
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_SubActionOrderIcon_New_C::ResetParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "ResetParam");

	Params::UWBP_SubActionOrderIcon_New_C_ResetParam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.CallbackFadeOutFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::CallbackFadeOutFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "CallbackFadeOutFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.CallbackDownFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::CallbackDownFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "CallbackDownFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Debug_ApplyParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SpriteSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Foot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnemy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::Debug_ApplyParam(class UTexture2D* OrderIcon, const struct FVector2D& IconUV, const struct FVector2D& SpriteSize, const struct FVector2D& CharaOffset, float Scale, float InvertX, const struct FVector2D& Foot, bool IsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "Debug_ApplyParam");

	Params::UWBP_SubActionOrderIcon_New_C_Debug_ApplyParam_Params Parms{};

	Parms.OrderIcon = OrderIcon;
	Parms.IconUV = IconUV;
	Parms.SpriteSize = SpriteSize;
	Parms.CharaOffset = CharaOffset;
	Parms.Scale = Scale;
	Parms.InvertX = InvertX;
	Parms.Foot = Foot;
	Parms.IsEnemy = IsEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetZOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ZOrder                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::SetZOrder(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "SetZOrder");

	Params::UWBP_SubActionOrderIcon_New_C_SetZOrder_Params Parms{};

	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.ImmediateHidden
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_SubActionOrderIcon_New_C::ImmediateHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "ImmediateHidden");

	Params::UWBP_SubActionOrderIcon_New_C_ImmediateHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Setup Action Order SealAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSealActionCommand                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSealActionTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::Setup_Action_Order_SealAction(bool IsSealActionCommand, bool IsSealActionTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "Setup Action Order SealAction");

	Params::UWBP_SubActionOrderIcon_New_C_Setup_Action_Order_SealAction_Params Parms{};

	Parms.IsSealActionCommand = IsSealActionCommand;
	Parms.IsSealActionTarget = IsSealActionTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Setup Action Order Bribe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBribeCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsBribeTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::Setup_Action_Order_Bribe(bool IsBribeCommand, bool IsBribeTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "Setup Action Order Bribe");

	Params::UWBP_SubActionOrderIcon_New_C_Setup_Action_Order_Bribe_Params Parms{};

	Parms.IsBribeCommand = IsBribeCommand;
	Parms.IsBribeTarget = IsBribeTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.GetCanvasPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::GetCanvasPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "GetCanvasPosition");

	Params::UWBP_SubActionOrderIcon_New_C_GetCanvasPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetupActionOrderBlind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::SetupActionOrderBlind(bool Enable, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "SetupActionOrderBlind");

	Params::UWBP_SubActionOrderIcon_New_C_SetupActionOrderBlind_Params Parms{};

	Parms.Enable = Enable;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayOrderDeBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::PlayOrderDeBuff(bool MoveIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayOrderDeBuff");

	Params::UWBP_SubActionOrderIcon_New_C_PlayOrderDeBuff_Params Parms{};

	Parms.MoveIcon = MoveIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayOrderBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::PlayOrderBuff(bool MoveIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayOrderBuff");

	Params::UWBP_SubActionOrderIcon_New_C_PlayOrderBuff_Params Parms{};

	Parms.MoveIcon = MoveIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.InstantFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::InstantFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "InstantFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.InstantFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::InstantFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "InstantFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.InitPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::InitPosition(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "InitPosition");

	Params::UWBP_SubActionOrderIcon_New_C_InitPosition_Params Parms{};

	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.CallbackFadeFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::CallbackFadeFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "CallbackFadeFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "PlayFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetCanvasPanelSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::SetCanvasPanelSlot(class UCanvasPanelSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "SetCanvasPanelSlot");

	Params::UWBP_SubActionOrderIcon_New_C_SetCanvasPanelSlot_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.InitActionOrderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActionOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNext                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SubActionOrderIcon_New_C::InitActionOrderIcon(bool ActionOrder, bool IsNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "InitActionOrderIcon");

	Params::UWBP_SubActionOrderIcon_New_C_InitActionOrderIcon_Params Parms{};

	Parms.ActionOrder = ActionOrder;
	Parms.IsNext = IsNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.GetSelecterEffectVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_SubActionOrderIcon_New_C::GetSelecterEffectVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "GetSelecterEffectVisibility");

	Params::UWBP_SubActionOrderIcon_New_C_GetSelecterEffectVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.GetCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::GetCharacter(class ABattleCharacterBaseBP_C** Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "GetCharacter");

	Params::UWBP_SubActionOrderIcon_New_C_GetCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::SetCharacter(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "SetCharacter");

	Params::UWBP_SubActionOrderIcon_New_C_SetCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.MoveOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   InitPosition                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::MoveOrderIcon(const struct FVector2D& NewPosition, const struct FVector2D& InitPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "MoveOrderIcon");

	Params::UWBP_SubActionOrderIcon_New_C_MoveOrderIcon_Params Parms{};

	Parms.NewPosition = NewPosition;
	Parms.InitPosition = InitPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.DownOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::DownOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "DownOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.BreakOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::BreakOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "BreakOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.OverTakeOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::OverTakeOrderIcon(const struct FVector2D& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "OverTakeOrderIcon");

	Params::UWBP_SubActionOrderIcon_New_C_OverTakeOrderIcon_Params Parms{};

	Parms.NewPosition = NewPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.BribeMoveOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::BribeMoveOrderIcon(int32 IconIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "BribeMoveOrderIcon");

	Params::UWBP_SubActionOrderIcon_New_C_BribeMoveOrderIcon_Params Parms{};

	Parms.IconIndex = IconIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.DisappearOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionOrderIcon_New_C::DisappearOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "DisappearOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.ExecuteUbergraph_WBP_SubActionOrderIcon_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionOrderIcon_New_C::ExecuteUbergraph_WBP_SubActionOrderIcon_New(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionOrderIcon_New_C", "ExecuteUbergraph_WBP_SubActionOrderIcon_New");

	Params::UWBP_SubActionOrderIcon_New_C_ExecuteUbergraph_WBP_SubActionOrderIcon_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


