#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass GuildSubMenuList.GuildSubMenuList_C
// (None)

class UClass* UGuildSubMenuList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuildSubMenuList_C");

	return Clss;
}


// GuildSubMenuList_C GuildSubMenuList.Default__GuildSubMenuList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuildSubMenuList_C* UGuildSubMenuList_C::GetDefaultObj()
{
	static class UGuildSubMenuList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuildSubMenuList_C*>(UGuildSubMenuList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuildSubMenuList.GuildSubMenuList_C.GetAcquisitionJobAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildSubMenuList_C::GetAcquisitionJobAbility(int32* JobID, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "GetAcquisitionJobAbility");

	Params::UGuildSubMenuList_C_GetAcquisitionJobAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobID != nullptr)
		*JobID = Parms.JobID;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GuildSubMenuList.GuildSubMenuList_C.GetCurrentIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildSubMenuList_C::GetCurrentIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "GetCurrentIndex");

	Params::UGuildSubMenuList_C_GetCurrentIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GuildSubMenuList.GuildSubMenuList_C.SetupText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildSubMenuList_C::SetupText(TArray<class FName>& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "SetupText");

	Params::UGuildSubMenuList_C_SetupText_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildSubMenuList.GuildSubMenuList_C.ReOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::ReOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "ReOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ActiveFlag                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::IsActive(bool* ActiveFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "IsActive");

	Params::UGuildSubMenuList_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActiveFlag != nullptr)
		*ActiveFlag = Parms.ActiveFlag;

}


// Function GuildSubMenuList.GuildSubMenuList_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "GetCursorPosition");

	Params::UGuildSubMenuList_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function GuildSubMenuList.GuildSubMenuList_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "CursorRight");

	Params::UGuildSubMenuList_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function GuildSubMenuList.GuildSubMenuList_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "CursorLeft");

	Params::UGuildSubMenuList_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function GuildSubMenuList.GuildSubMenuList_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "DecideMenu");

	Params::UGuildSubMenuList_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function GuildSubMenuList.GuildSubMenuList_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "CancelMenu");

	Params::UGuildSubMenuList_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function GuildSubMenuList.GuildSubMenuList_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildSubMenuList_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "GetMenuRelativePos");

	Params::UGuildSubMenuList_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function GuildSubMenuList.GuildSubMenuList_C.ChangeSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::ChangeSelectIndex(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "ChangeSelectIndex");

	Params::UGuildSubMenuList_C_ChangeSelectIndex_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildSubMenuList.GuildSubMenuList_C.CusorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::CusorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "CusorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.CusorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::CusorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "CusorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::OutFocus(int32 Index, bool IsUp, bool AnimFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "OutFocus");

	Params::UGuildSubMenuList_C_OutFocus_Params Parms{};

	Parms.Index = Index;
	Parms.IsUp = IsUp;
	Parms.AnimFast = AnimFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildSubMenuList.GuildSubMenuList_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::Focus(bool IsUp, bool AnimFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "Focus");

	Params::UGuildSubMenuList_C_Focus_Params Parms{};

	Parms.IsUp = IsUp;
	Parms.AnimFast = AnimFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildSubMenuList.GuildSubMenuList_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::Open(bool ReOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "Open");

	Params::UGuildSubMenuList_C_Open_Params Parms{};

	Parms.ReOpen = ReOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildSubMenuList.GuildSubMenuList_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildSubMenuList_C::PlayOpenAnim(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "PlayOpenAnim");

	Params::UGuildSubMenuList_C_PlayOpenAnim_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildSubMenuList.GuildSubMenuList_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGuildSubMenuList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildSubMenuList.GuildSubMenuList_C.ExecuteUbergraph_GuildSubMenuList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildSubMenuList_C::ExecuteUbergraph_GuildSubMenuList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildSubMenuList_C", "ExecuteUbergraph_GuildSubMenuList");

	Params::UGuildSubMenuList_C_ExecuteUbergraph_GuildSubMenuList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


