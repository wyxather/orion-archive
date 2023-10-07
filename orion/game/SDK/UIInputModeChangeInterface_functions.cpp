#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass UIInputModeChangeInterface.UIInputModeChangeInterface_C
// (None)

class UClass* IUIInputModeChangeInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIInputModeChangeInterface_C");

	return Clss;
}


// UIInputModeChangeInterface_C UIInputModeChangeInterface.Default__UIInputModeChangeInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUIInputModeChangeInterface_C* IUIInputModeChangeInterface_C::GetDefaultObj()
{
	static class IUIInputModeChangeInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUIInputModeChangeInterface_C*>(IUIInputModeChangeInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIInputModeChangeInterface.UIInputModeChangeInterface_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIInputModeChangeInterface_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIInputModeChangeInterface_C", "ChangeInputMode");

	Params::IUIInputModeChangeInterface_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}

}


