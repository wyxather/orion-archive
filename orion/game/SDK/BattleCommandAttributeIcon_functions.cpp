#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCommandAttributeIcon.BattleCommandAttributeIcon_C
// (None)

class UClass* UBattleCommandAttributeIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCommandAttributeIcon_C");

	return Clss;
}


// BattleCommandAttributeIcon_C BattleCommandAttributeIcon.Default__BattleCommandAttributeIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleCommandAttributeIcon_C* UBattleCommandAttributeIcon_C::GetDefaultObj()
{
	static class UBattleCommandAttributeIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleCommandAttributeIcon_C*>(UBattleCommandAttributeIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCommandAttributeIcon.BattleCommandAttributeIcon_C.PlayAttributeSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandAttributeIcon_C::PlayAttributeSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandAttributeIcon_C", "PlayAttributeSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandAttributeIcon.BattleCommandAttributeIcon_C.SetCommandAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         EnchantAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandAttributeIcon_C::SetCommandAttribute(class UTexture2D* IconTexture, enum class EATTRIBUTE_TYPE EnchantAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandAttributeIcon_C", "SetCommandAttribute");

	Params::UBattleCommandAttributeIcon_C_SetCommandAttribute_Params Parms{};

	Parms.IconTexture = IconTexture;
	Parms.EnchantAttribute = EnchantAttribute;

	UObject::ProcessEvent(Func, &Parms);

}

}


