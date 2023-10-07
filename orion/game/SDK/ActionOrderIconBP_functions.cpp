#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ActionOrderIconBP.ActionOrderIconBP_C
// (None)

class UClass* UActionOrderIconBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionOrderIconBP_C");

	return Clss;
}


// ActionOrderIconBP_C ActionOrderIconBP.Default__ActionOrderIconBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionOrderIconBP_C* UActionOrderIconBP_C::GetDefaultObj()
{
	static class UActionOrderIconBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionOrderIconBP_C*>(UActionOrderIconBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionOrderIconBP.ActionOrderIconBP_C.ImmediateVisibleSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::ImmediateVisibleSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "ImmediateVisibleSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.ImmediateHiddenSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::ImmediateHiddenSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "ImmediateHiddenSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.DownSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::DownSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "DownSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetSubTargetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::SetSubTargetVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetSubTargetVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.ImmediateDettach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionOrderIconBP_C::ImmediateDettach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "ImmediateDettach");

	Params::UActionOrderIconBP_C_ImmediateDettach_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.CallbackTemporaryFadeFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::CallbackTemporaryFadeFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "CallbackTemporaryFadeFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayTemporaryFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::PlayTemporaryFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "PlayTemporaryFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayTemporaryFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::PlayTemporaryFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "PlayTemporaryFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetSelecterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::SetSelecterVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetSelecterVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.GetSubIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_SubActionOrderIcon_New_C*SubIcon                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::GetSubIcon(class UWBP_SubActionOrderIcon_New_C** SubIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "GetSubIcon");

	Params::UActionOrderIconBP_C_GetSubIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubIcon != nullptr)
		*SubIcon = Parms.SubIcon;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.DettachSubIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionOrderIconBP_C::DettachSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "DettachSubIcon");

	Params::UActionOrderIconBP_C_DettachSubIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.Attach Sub Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        SubCharacter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Opened                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::Attach_Sub_Icon(class ABattleCharacterBase* SubCharacter, bool Opened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "Attach Sub Icon");

	Params::UActionOrderIconBP_C_Attach_Sub_Icon_Params Parms{};

	Parms.SubCharacter = SubCharacter;
	Parms.Opened = Opened;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.End
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionOrderIconBP_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "End");

	Params::UActionOrderIconBP_C_End_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.DebugInstantFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::DebugInstantFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "DebugInstantFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.ResetParam
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionOrderIconBP_C::ResetParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "ResetParam");

	Params::UActionOrderIconBP_C_ResetParam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.CallbackFadeOutFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::CallbackFadeOutFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "CallbackFadeOutFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.CallbackDownFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::CallbackDownFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "CallbackDownFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.Debug_ApplyParam
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

void UActionOrderIconBP_C::Debug_ApplyParam(class UTexture2D* OrderIcon, const struct FVector2D& IconUV, const struct FVector2D& SpriteSize, const struct FVector2D& CharaOffset, float Scale, float InvertX, const struct FVector2D& Foot, bool IsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "Debug_ApplyParam");

	Params::UActionOrderIconBP_C_Debug_ApplyParam_Params Parms{};

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


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetZOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ZOrder                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::SetZOrder(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetZOrder");

	Params::UActionOrderIconBP_C_SetZOrder_Params Parms{};

	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.CheckSpecialIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Special                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::CheckSpecialIcon(bool* Special)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "CheckSpecialIcon");

	Params::UActionOrderIconBP_C_CheckSpecialIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Special != nullptr)
		*Special = Parms.Special;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetQuestionMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::SetQuestionMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetQuestionMode");

	Params::UActionOrderIconBP_C_SetQuestionMode_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetRainMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::SetRainMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetRainMode");

	Params::UActionOrderIconBP_C_SetRainMode_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.ImmediateHidden
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionOrderIconBP_C::ImmediateHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "ImmediateHidden");

	Params::UActionOrderIconBP_C_ImmediateHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.Setup Action Order SealAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSealActionCommand                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSealActionTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::Setup_Action_Order_SealAction(bool IsSealActionCommand, bool IsSealActionTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "Setup Action Order SealAction");

	Params::UActionOrderIconBP_C_Setup_Action_Order_SealAction_Params Parms{};

	Parms.IsSealActionCommand = IsSealActionCommand;
	Parms.IsSealActionTarget = IsSealActionTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.Setup Action Order Bribe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBribeCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsBribeTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::Setup_Action_Order_Bribe(bool IsBribeCommand, bool IsBribeTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "Setup Action Order Bribe");

	Params::UActionOrderIconBP_C_Setup_Action_Order_Bribe_Params Parms{};

	Parms.IsBribeCommand = IsBribeCommand;
	Parms.IsBribeTarget = IsBribeTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.GetCanvasPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::GetCanvasPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "GetCanvasPosition");

	Params::UActionOrderIconBP_C_GetCanvasPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetupActionOrderBlind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::SetupActionOrderBlind(bool Enable, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetupActionOrderBlind");

	Params::UActionOrderIconBP_C_SetupActionOrderBlind_Params Parms{};

	Parms.Enable = Enable;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayOrderDeBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::PlayOrderDeBuff(bool MoveIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "PlayOrderDeBuff");

	Params::UActionOrderIconBP_C_PlayOrderDeBuff_Params Parms{};

	Parms.MoveIcon = MoveIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayOrderBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::PlayOrderBuff(bool MoveIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "PlayOrderBuff");

	Params::UActionOrderIconBP_C_PlayOrderBuff_Params Parms{};

	Parms.MoveIcon = MoveIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.InstantFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::InstantFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "InstantFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.InstantFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::InstantFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "InstantFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.InitPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::InitPosition(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "InitPosition");

	Params::UActionOrderIconBP_C_InitPosition_Params Parms{};

	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.CallbackFadeFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::CallbackFadeFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "CallbackFadeFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "PlayFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "PlayFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetCanvasPanelSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::SetCanvasPanelSlot(class UCanvasPanelSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetCanvasPanelSlot");

	Params::UActionOrderIconBP_C_SetCanvasPanelSlot_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.InitActionOrderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActionOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNext                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderIconBP_C::InitActionOrderIcon(bool ActionOrder, bool IsNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "InitActionOrderIcon");

	Params::UActionOrderIconBP_C_InitActionOrderIcon_Params Parms{};

	Parms.ActionOrder = ActionOrder;
	Parms.IsNext = IsNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.GetSelecterEffectVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UActionOrderIconBP_C::GetSelecterEffectVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "GetSelecterEffectVisibility");

	Params::UActionOrderIconBP_C_GetSelecterEffectVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.GetCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::GetCharacter(class ABattleCharacterBaseBP_C** Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "GetCharacter");

	Params::UActionOrderIconBP_C_GetCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::SetCharacter(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SetCharacter");

	Params::UActionOrderIconBP_C_SetCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.MoveOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   InitPosition                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::MoveOrderIcon(const struct FVector2D& NewPosition, const struct FVector2D& InitPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "MoveOrderIcon");

	Params::UActionOrderIconBP_C_MoveOrderIcon_Params Parms{};

	Parms.NewPosition = NewPosition;
	Parms.InitPosition = InitPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.DownOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::DownOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "DownOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.BreakOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::BreakOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "BreakOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.OverTakeOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::OverTakeOrderIcon(const struct FVector2D& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "OverTakeOrderIcon");

	Params::UActionOrderIconBP_C_OverTakeOrderIcon_Params Parms{};

	Parms.NewPosition = NewPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.BribeMoveOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::BribeMoveOrderIcon(int32 IconIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "BribeMoveOrderIcon");

	Params::UActionOrderIconBP_C_BribeMoveOrderIcon_Params Parms{};

	Parms.IconIndex = IconIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.DisappearOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::DisappearOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "DisappearOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.BattleMemberChangeMoveIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::BattleMemberChangeMoveIcon(int32 IconIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "BattleMemberChangeMoveIcon");

	Params::UActionOrderIconBP_C_BattleMemberChangeMoveIcon_Params Parms{};

	Parms.IconIndex = IconIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.SubIconDownFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderIconBP_C::SubIconDownFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "SubIconDownFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderIconBP.ActionOrderIconBP_C.ExecuteUbergraph_ActionOrderIconBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderIconBP_C::ExecuteUbergraph_ActionOrderIconBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderIconBP_C", "ExecuteUbergraph_ActionOrderIconBP");

	Params::UActionOrderIconBP_C_ExecuteUbergraph_ActionOrderIconBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


