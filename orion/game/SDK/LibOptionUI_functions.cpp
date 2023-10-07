#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibOptionUI.LibOptionUI_C
// (None)

class UClass* ULibOptionUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibOptionUI_C");

	return Clss;
}


// LibOptionUI_C LibOptionUI.Default__LibOptionUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibOptionUI_C* ULibOptionUI_C::GetDefaultObj()
{
	static class ULibOptionUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibOptionUI_C*>(ULibOptionUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibOptionUI.LibOptionUI_C.CreateOptionMenuItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionItemData             OptionItemData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListItemWidget_Opt_Base*    Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibOptionUI_C::CreateOptionMenuItem(struct FOptionItemData& OptionItemData, class UObject* __WorldContext, class UListItemWidget_Opt_Base** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibOptionUI_C", "CreateOptionMenuItem");

	Params::ULibOptionUI_C_CreateOptionMenuItem_Params Parms{};

	Parms.OptionItemData = OptionItemData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}

}


