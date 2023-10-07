#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibFieldCommandUIUtil.LibFieldCommandUIUtil_C
// (None)

class UClass* ULibFieldCommandUIUtil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibFieldCommandUIUtil_C");

	return Clss;
}


// LibFieldCommandUIUtil_C LibFieldCommandUIUtil.Default__LibFieldCommandUIUtil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibFieldCommandUIUtil_C* ULibFieldCommandUIUtil_C::GetDefaultObj()
{
	static class ULibFieldCommandUIUtil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibFieldCommandUIUtil_C*>(ULibFieldCommandUIUtil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.GetHelpWindowGuide
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuideData                  Guide                                                            (Parm, OutParm, NoDestructor)

void ULibFieldCommandUIUtil_C::GetHelpWindowGuide(class UObject* __WorldContext, struct FGuideData* Guide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "GetHelpWindowGuide");

	Params::ULibFieldCommandUIUtil_C_GetHelpWindowGuide_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Guide != nullptr)
		*Guide = std::move(Parms.Guide);

}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.GetFcIconColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFieldCommandCategory   FcCategory                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Color                                                            (Parm, OutParm)

void ULibFieldCommandUIUtil_C::GetFcIconColor(enum class EFieldCommandCategory FcCategory, class UObject* __WorldContext, struct FSlateColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "GetFcIconColor");

	Params::ULibFieldCommandUIUtil_C_GetFcIconColor_Params Parms{};

	Parms.FcCategory = FcCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.SetNPCStatusWidget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNpcPropertyComponent*       NpcProperty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     StatusWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommandUIUtil_C::SetNPCStatusWidget(class UNpcPropertyComponent* NpcProperty, class UNPCStatusPartsWidget_C* StatusWidget, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "SetNPCStatusWidget");

	Params::ULibFieldCommandUIUtil_C_SetNPCStatusWidget_Params Parms{};

	Parms.NpcProperty = NpcProperty;
	Parms.StatusWidget = StatusWidget;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowTwoNpcDialogWithPlayerStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNpcPropertyComponent*       LeftNpcProperty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     LeftNpcStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNpcPropertyComponent*       RightNpcProperty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     RightNpcWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerStatusPanel_C*        PlayerStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCFollowChangePartsWidget_C*ChangeCaptionWidgfet                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Detail                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 OnClosedCallback                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommandUIUtil_C::OpenFollowTwoNpcDialogWithPlayerStatus(class UNpcPropertyComponent* LeftNpcProperty, class UNPCStatusPartsWidget_C* LeftNpcStatus, class UNpcPropertyComponent* RightNpcProperty, class UNPCStatusPartsWidget_C* RightNpcWidget, class UPlayerStatusPanel_C* PlayerStatus, class UNPCFollowChangePartsWidget_C* ChangeCaptionWidgfet, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "OpenFollowTwoNpcDialogWithPlayerStatus");

	Params::ULibFieldCommandUIUtil_C_OpenFollowTwoNpcDialogWithPlayerStatus_Params Parms{};

	Parms.LeftNpcProperty = LeftNpcProperty;
	Parms.LeftNpcStatus = LeftNpcStatus;
	Parms.RightNpcProperty = RightNpcProperty;
	Parms.RightNpcWidget = RightNpcWidget;
	Parms.PlayerStatus = PlayerStatus;
	Parms.ChangeCaptionWidgfet = ChangeCaptionWidgfet;
	Parms.Detail = Detail;
	Parms.Button = Button;
	Parms.OnClosedCallback = OnClosedCallback;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowTwoNpcDialog
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNpcPropertyComponent*       LeftNpcProperty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     LeftNpcStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNpcPropertyComponent*       RightNpcProperty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     RightNpcWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCFollowChangePartsWidget_C*ChangeCaptionWidgfet                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Detail                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 OnClosedCallback                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommandUIUtil_C::OpenFollowTwoNpcDialog(class UNpcPropertyComponent* LeftNpcProperty, class UNPCStatusPartsWidget_C* LeftNpcStatus, class UNpcPropertyComponent* RightNpcProperty, class UNPCStatusPartsWidget_C* RightNpcWidget, class UNPCFollowChangePartsWidget_C* ChangeCaptionWidgfet, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "OpenFollowTwoNpcDialog");

	Params::ULibFieldCommandUIUtil_C_OpenFollowTwoNpcDialog_Params Parms{};

	Parms.LeftNpcProperty = LeftNpcProperty;
	Parms.LeftNpcStatus = LeftNpcStatus;
	Parms.RightNpcProperty = RightNpcProperty;
	Parms.RightNpcWidget = RightNpcWidget;
	Parms.ChangeCaptionWidgfet = ChangeCaptionWidgfet;
	Parms.Detail = Detail;
	Parms.Button = Button;
	Parms.OnClosedCallback = OnClosedCallback;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowNpcDialogWithPlayerStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNpcPropertyComponent*       NpcProperty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     NpcStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerStatusPanel_C*        PlayerStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Detail                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 OnClosedCallback                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommandUIUtil_C::OpenFollowNpcDialogWithPlayerStatus(class UNpcPropertyComponent* NpcProperty, class UNPCStatusPartsWidget_C* NpcStatus, class UPlayerStatusPanel_C* PlayerStatus, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "OpenFollowNpcDialogWithPlayerStatus");

	Params::ULibFieldCommandUIUtil_C_OpenFollowNpcDialogWithPlayerStatus_Params Parms{};

	Parms.NpcProperty = NpcProperty;
	Parms.NpcStatus = NpcStatus;
	Parms.PlayerStatus = PlayerStatus;
	Parms.Detail = Detail;
	Parms.Button = Button;
	Parms.OnClosedCallback = OnClosedCallback;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowNpcDialog
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNpcPropertyComponent*       NpcProperty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     NpcStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Detail                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 OnClosedCallback                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommandUIUtil_C::OpenFollowNpcDialog(class UNpcPropertyComponent* NpcProperty, class UNPCStatusPartsWidget_C* NpcStatus, class FText Detail, TArray<class FText>& Button, FDelegateProperty_ OnClosedCallback, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommandUIUtil_C", "OpenFollowNpcDialog");

	Params::ULibFieldCommandUIUtil_C_OpenFollowNpcDialog_Params Parms{};

	Parms.NpcProperty = NpcProperty;
	Parms.NpcStatus = NpcStatus;
	Parms.Detail = Detail;
	Parms.Button = Button;
	Parms.OnClosedCallback = OnClosedCallback;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


