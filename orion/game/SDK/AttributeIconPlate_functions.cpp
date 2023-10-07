#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass AttributeIconPlate.AttributeIconPlate_C
// (None)

class UClass* UAttributeIconPlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeIconPlate_C");

	return Clss;
}


// AttributeIconPlate_C AttributeIconPlate.Default__AttributeIconPlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeIconPlate_C* UAttributeIconPlate_C::GetDefaultObj()
{
	static class UAttributeIconPlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeIconPlate_C*>(UAttributeIconPlate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AttributeIconPlate.AttributeIconPlate_C.OverrideAttributeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_COMMAND_ATTRIBUTE_ICONBaseAttributeIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         OverrideAttributeColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttributeIconPlate_C::OverrideAttributeColor(enum class EBATTLE_COMMAND_ATTRIBUTE_ICON BaseAttributeIcon, enum class EATTRIBUTE_TYPE OverrideAttributeColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "OverrideAttributeColor");

	Params::UAttributeIconPlate_C_OverrideAttributeColor_Params Parms{};

	Parms.BaseAttributeIcon = BaseAttributeIcon;
	Parms.OverrideAttributeColor = OverrideAttributeColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttributeIconPlate.AttributeIconPlate_C.SetEnchantAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EATTRIBUTE_TYPE         AttributeType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttributeIconPlate_C::SetEnchantAttribute(enum class EATTRIBUTE_TYPE AttributeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "SetEnchantAttribute");

	Params::UAttributeIconPlate_C_SetEnchantAttribute_Params Parms{};

	Parms.AttributeType = AttributeType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttributeIconPlate.AttributeIconPlate_C.ChangeCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DirNext                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SwitchAnimation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttributeIconPlate_C::ChangeCommandAttribute(int32 Index, bool Instant, bool DirNext, bool SwitchAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "ChangeCommandAttribute");

	Params::UAttributeIconPlate_C_ChangeCommandAttribute_Params Parms{};

	Parms.Index = Index;
	Parms.Instant = Instant;
	Parms.DirNext = DirNext;
	Parms.SwitchAnimation = SwitchAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttributeIconPlate.AttributeIconPlate_C.PrevCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::PrevCommandAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "PrevCommandAttribute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.NextCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::NextCommandAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "NextCommandAttribute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.SetCommandAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>Attibute                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AutoScroll                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SwitchAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CommandDisable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttributeIconPlate_C::SetCommandAttribute(TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>& Attibute, bool AutoScroll, bool SwitchAttribute, bool CommandDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "SetCommandAttribute");

	Params::UAttributeIconPlate_C_SetCommandAttribute_Params Parms{};

	Parms.Attibute = Attibute;
	Parms.AutoScroll = AutoScroll;
	Parms.SwitchAttribute = SwitchAttribute;
	Parms.CommandDisable = CommandDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttributeIconPlate.AttributeIconPlate_C.SetVisibilityArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttributeIconPlate_C::SetVisibilityArrow(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "SetVisibilityArrow");

	Params::UAttributeIconPlate_C_SetVisibilityArrow_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttributeIconPlate.AttributeIconPlate_C.StartIconMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::StartIconMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "StartIconMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.EndIconMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::EndIconMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "EndIconMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.StartAutoIconMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::StartAutoIconMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "StartAutoIconMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.SetIconTexutreList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributeIconPlate_C::SetIconTexutreList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "SetIconTexutreList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AttributeIconPlate.AttributeIconPlate_C.ExecuteUbergraph_AttributeIconPlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttributeIconPlate_C::ExecuteUbergraph_AttributeIconPlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AttributeIconPlate_C", "ExecuteUbergraph_AttributeIconPlate");

	Params::UAttributeIconPlate_C_ExecuteUbergraph_AttributeIconPlate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


