#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ActionOrderTimeLine.ActionOrderTimeLine_C
// (None)

class UClass* UActionOrderTimeLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionOrderTimeLine_C");

	return Clss;
}


// ActionOrderTimeLine_C ActionOrderTimeLine.Default__ActionOrderTimeLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionOrderTimeLine_C* UActionOrderTimeLine_C::GetDefaultObj()
{
	static class UActionOrderTimeLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionOrderTimeLine_C*>(UActionOrderTimeLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.SetSelecterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::SetSelecterVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "SetSelecterVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.PlayCloseSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::PlayCloseSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "PlayCloseSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.PlayOpenSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::PlayOpenSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "PlayOpenSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.PlayPartyChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::PlayPartyChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "PlayPartyChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.DettachSubOrderIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SubActionOrderIcon_New_C*TargetIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::DettachSubOrderIcon(class UWBP_SubActionOrderIcon_New_C* TargetIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "DettachSubOrderIcon");

	Params::UActionOrderTimeLine_C_DettachSubOrderIcon_Params Parms{};

	Parms.TargetIcon = TargetIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.GetSubOrderIconFromPool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_SubActionOrderIcon_New_C*OrderIcon                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::GetSubOrderIconFromPool(class UWBP_SubActionOrderIcon_New_C** OrderIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "GetSubOrderIconFromPool");

	Params::UActionOrderTimeLine_C_GetSubOrderIconFromPool_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateSubActionOrderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    ActiveCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::UpdateSubActionOrderIcon(class ABattleCharacterBaseBP_C* ActiveCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateSubActionOrderIcon");

	Params::UActionOrderTimeLine_C_UpdateSubActionOrderIcon_Params Parms{};

	Parms.ActiveCharacter = ActiveCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.InitParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::InitParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "InitParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.CheckAttachIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionOrderIcon*            TargetIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionOrderTimeLine_C::CheckAttachIcon(class UActionOrderIcon* TargetIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "CheckAttachIcon");

	Params::UActionOrderTimeLine_C_CheckAttachIcon_Params Parms{};

	Parms.TargetIcon = TargetIcon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.TransitionNextTurnToCurrentTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionOrderIcon*            TargetIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::TransitionNextTurnToCurrentTurn(class UActionOrderIcon* TargetIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "TransitionNextTurnToCurrentTurn");

	Params::UActionOrderTimeLine_C_TransitionNextTurnToCurrentTurn_Params Parms{};

	Parms.TargetIcon = TargetIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.DettachOrderIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionOrderIcon*            TargetIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::DettachOrderIcon(class UActionOrderIcon* TargetIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "DettachOrderIcon");

	Params::UActionOrderTimeLine_C_DettachOrderIcon_Params Parms{};

	Parms.TargetIcon = TargetIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.AttachOrderIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCurrent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActionOrderIcon*            OrderIcon                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::AttachOrderIcon(bool IsCurrent, class UActionOrderIcon** OrderIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "AttachOrderIcon");

	Params::UActionOrderTimeLine_C_AttachOrderIcon_Params Parms{};

	Parms.IsCurrent = IsCurrent;

	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.GetOrderIconFromPool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionOrderIcon*            OrderIcon                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::GetOrderIconFromPool(class UActionOrderIcon** OrderIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "GetOrderIconFromPool");

	Params::UActionOrderTimeLine_C_GetOrderIconFromPool_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateCurrentOrderAnnounce
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    NewOrder                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UActionOrderTimeLine_C::UpdateCurrentOrderAnnounce(TArray<struct FActionOrderData>& NewOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateCurrentOrderAnnounce");

	Params::UActionOrderTimeLine_C_UpdateCurrentOrderAnnounce_Params Parms{};

	Parms.NewOrder = NewOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateNextOrderAnnounce
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    NewOrder                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UActionOrderTimeLine_C::UpdateNextOrderAnnounce(TArray<struct FActionOrderData>& NewOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateNextOrderAnnounce");

	Params::UActionOrderTimeLine_C_UpdateNextOrderAnnounce_Params Parms{};

	Parms.NewOrder = NewOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.InitOrderTimeLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                TimeLineParent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNextTurn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderTimeLine_C::InitOrderTimeLine(class UPanelWidget* TimeLineParent, bool IsNextTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "InitOrderTimeLine");

	Params::UActionOrderTimeLine_C_InitOrderTimeLine_Params Parms{};

	Parms.TimeLineParent = TimeLineParent;
	Parms.IsNextTurn = IsNextTurn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.InitActionOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::InitActionOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "InitActionOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ResetCurrentOrderIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    CurrentOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UActionOrderTimeLine_C::ResetCurrentOrderIcon(TArray<struct FActionOrderData>& CurrentOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "ResetCurrentOrderIcon");

	Params::UActionOrderTimeLine_C_ResetCurrentOrderIcon_Params Parms{};

	Parms.CurrentOrder = CurrentOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateNextOrderIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    NextOrder                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UActionOrderTimeLine_C::UpdateNextOrderIcon(TArray<struct FActionOrderData>& NextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateNextOrderIcon");

	Params::UActionOrderTimeLine_C_UpdateNextOrderIcon_Params Parms{};

	Parms.NextOrder = NextOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateCurrentOrderIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    CurrentOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UActionOrderTimeLine_C::UpdateCurrentOrderIcon(TArray<struct FActionOrderData>& CurrentOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateCurrentOrderIcon");

	Params::UActionOrderTimeLine_C_UpdateCurrentOrderIcon_Params Parms{};

	Parms.CurrentOrder = CurrentOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateActionOrderIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    ActionOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UActionOrderTimeLine_C::UpdateActionOrderIcon(TArray<struct FActionOrderData>& ActionOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateActionOrderIcon");

	Params::UActionOrderTimeLine_C_UpdateActionOrderIcon_Params Parms{};

	Parms.ActionOrder = ActionOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.Get Action Order Icon_DEPLECATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionOrderIconBP_C*        CurrentOrderIcon                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionOrderIconBP_C*        NextOrderIcon                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::Get_Action_Order_Icon_DEPLECATED(int32 Index, class UActionOrderIconBP_C** CurrentOrderIcon, class UActionOrderIconBP_C** NextOrderIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "Get Action Order Icon_DEPLECATED");

	Params::UActionOrderTimeLine_C_Get_Action_Order_Icon_DEPLECATED_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentOrderIcon != nullptr)
		*CurrentOrderIcon = Parms.CurrentOrderIcon;

	if (NextOrderIcon != nullptr)
		*NextOrderIcon = Parms.NextOrderIcon;

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateActiveCharacterIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    ActiveCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::UpdateActiveCharacterIcon(class ABattleCharacterBaseBP_C* ActiveCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "UpdateActiveCharacterIcon");

	Params::UActionOrderTimeLine_C_UpdateActiveCharacterIcon_Params Parms{};

	Parms.ActiveCharacter = ActiveCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ClearActionOrderAnnounce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::ClearActionOrderAnnounce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "ClearActionOrderAnnounce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ClearActionCharacterPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsClearSubCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderTimeLine_C::ClearActionCharacterPanel(bool IsClearSubCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "ClearActionCharacterPanel");

	Params::UActionOrderTimeLine_C_ClearActionCharacterPanel_Params Parms{};

	Parms.IsClearSubCharacter = IsClearSubCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.PlayActionOrderBlind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::PlayActionOrderBlind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "PlayActionOrderBlind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.SetLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.PlayNextTurn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::PlayNextTurn(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "PlayNextTurn");

	Params::UActionOrderTimeLine_C_PlayNextTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActionOrderTimeLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.Debug_AddOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCurrent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionOrderTimeLine_C::Debug_AddOrderIcon(bool IsCurrent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "Debug_AddOrderIcon");

	Params::UActionOrderTimeLine_C_Debug_AddOrderIcon_Params Parms{};

	Parms.IsCurrent = IsCurrent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ExecuteUbergraph_ActionOrderTimeLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderTimeLine_C::ExecuteUbergraph_ActionOrderTimeLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderTimeLine_C", "ExecuteUbergraph_ActionOrderTimeLine");

	Params::UActionOrderTimeLine_C_ExecuteUbergraph_ActionOrderTimeLine_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


