#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCommandMenuItem.BattleCommandMenuItem_C
// (None)

class UClass* UBattleCommandMenuItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCommandMenuItem_C");

	return Clss;
}


// BattleCommandMenuItem_C BattleCommandMenuItem.Default__BattleCommandMenuItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleCommandMenuItem_C* UBattleCommandMenuItem_C::GetDefaultObj()
{
	static class UBattleCommandMenuItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleCommandMenuItem_C*>(UBattleCommandMenuItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleCommandMenuItem_C::SetCommandTextColor(const struct FSlateColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetCommandTextColor");

	Params::UBattleCommandMenuItem_C_SetCommandTextColor_Params Parms{};

	Parms.TextColor = TextColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.StopAllFocusAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::StopAllFocusAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "StopAllFocusAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetEnchantAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenuItem_C::SetEnchantAttribute(enum class EATTRIBUTE_TYPE Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetEnchantAttribute");

	Params::UBattleCommandMenuItem_C_SetEnchantAttribute_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetAddInfoWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EABILITY_COST_TYPE      CostType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenuItem_C::SetAddInfoWidth(enum class EABILITY_COST_TYPE CostType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetAddInfoWidth");

	Params::UBattleCommandMenuItem_C_SetAddInfoWidth_Params Parms{};

	Parms.CostType = CostType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.CheckSwitchAttributeEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenuItem_C::CheckSwitchAttributeEnable(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "CheckSwitchAttributeEnable");

	Params::UBattleCommandMenuItem_C_CheckSwitchAttributeEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.InstantCommandOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::InstantCommandOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "InstantCommandOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.ClearCommandAttribute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EABILITY_COST_TYPE      CostType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenuItem_C::ClearCommandAttribute(enum class EABILITY_COST_TYPE CostType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "ClearCommandAttribute");

	Params::UBattleCommandMenuItem_C_ClearCommandAttribute_Params Parms{};

	Parms.CostType = CostType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AllSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CollapsedAddInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenuItem_C::SetCommandSize(float AllSize, float TextSize, bool CollapsedAddInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetCommandSize");

	Params::UBattleCommandMenuItem_C_SetCommandSize_Params Parms{};

	Parms.AllSize = AllSize;
	Parms.TextSize = TextSize;
	Parms.CollapsedAddInfo = CollapsedAddInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.ChangeCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DirNext                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SwitchAnim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenuItem_C::ChangeCommandAttribute(int32 Index, bool Instant, bool DirNext, bool SwitchAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "ChangeCommandAttribute");

	Params::UBattleCommandMenuItem_C_ChangeCommandAttribute_Params Parms{};

	Parms.Index = Index;
	Parms.Instant = Instant;
	Parms.DirNext = DirNext;
	Parms.SwitchAnim = SwitchAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.PrevCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::PrevCommandAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "PrevCommandAttribute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.NextCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::NextCommandAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "NextCommandAttribute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AutoScroll                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SwitchAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CommandDisable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenuItem_C::SetCommandAttribute(TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>& Attribute, bool AutoScroll, bool SwitchAttribute, bool CommandDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetCommandAttribute");

	Params::UBattleCommandMenuItem_C_SetCommandAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.AutoScroll = AutoScroll;
	Parms.SwitchAttribute = SwitchAttribute;
	Parms.CommandDisable = CommandDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Usable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenuItem_C::SetCommandEnable(bool Usable, bool Disable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetCommandEnable");

	Params::UBattleCommandMenuItem_C_SetCommandEnable_Params Parms{};

	Parms.Usable = Usable;
	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.MenuOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::MenuOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "MenuOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.MenuFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::MenuFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "MenuFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.CommandOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenuItem_C::CommandOutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "CommandOutFocus");

	Params::UBattleCommandMenuItem_C_CommandOutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.CommandFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::CommandFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "CommandFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CommandText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        AddInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EABILITY_COST_TYPE      CostType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenuItem_C::SetCommandText(class FText CommandText, class FText AddInfo, class FText BoostLv, enum class EABILITY_COST_TYPE CostType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "SetCommandText");

	Params::UBattleCommandMenuItem_C_SetCommandText_Params Parms{};

	Parms.CommandText = CommandText;
	Parms.AddInfo = AddInfo;
	Parms.BoostLv = BoostLv;
	Parms.CostType = CostType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.PlayFocusAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenuItem_C::PlayFocusAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "PlayFocusAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuItem.BattleCommandMenuItem_C.ExecuteUbergraph_BattleCommandMenuItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenuItem_C::ExecuteUbergraph_BattleCommandMenuItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuItem_C", "ExecuteUbergraph_BattleCommandMenuItem");

	Params::UBattleCommandMenuItem_C_ExecuteUbergraph_BattleCommandMenuItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


