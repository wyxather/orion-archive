#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandMonsterProcess.FieldCommandMonsterProcess_C
// (None)

class UClass* UFieldCommandMonsterProcess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandMonsterProcess_C");

	return Clss;
}


// FieldCommandMonsterProcess_C FieldCommandMonsterProcess.Default__FieldCommandMonsterProcess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandMonsterProcess_C* UFieldCommandMonsterProcess_C::GetDefaultObj()
{
	static class UFieldCommandMonsterProcess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandMonsterProcess_C*>(UFieldCommandMonsterProcess_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandMonsterProcess.FieldCommandMonsterProcess_C.SetProcessItemText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextItemName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ItemNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMonsterProcess_C::SetProcessItemText(class FName ItemLabel, class FText TextItemName, int32 ItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMonsterProcess_C", "SetProcessItemText");

	Params::UFieldCommandMonsterProcess_C_SetProcessItemText_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.TextItemName = TextItemName;
	Parms.ItemNum = ItemNum;

	UObject::ProcessEvent(Func, &Parms);

}

}


