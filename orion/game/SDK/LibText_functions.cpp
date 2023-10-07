#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibText.LibText_C
// (None)

class UClass* ULibText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibText_C");

	return Clss;
}


// LibText_C LibText.Default__LibText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibText_C* ULibText_C::GetDefaultObj()
{
	static class ULibText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibText_C*>(ULibText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibText.LibText_C.ConvFontImageText_Language
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ImageTextName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_Language(class FName ImageTextName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_Language");

	Params::ULibText_C_ConvFontImageText_Language_Params Parms{};

	Parms.ImageTextName = ImageTextName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_US
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BaseKeyName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_US(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_US");

	Params::ULibText_C_ConvFontImageText_US_Params Parms{};

	Parms.BaseKeyName = BaseKeyName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_UK
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BaseKeyName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_UK(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_UK");

	Params::ULibText_C_ConvFontImageText_UK_Params Parms{};

	Parms.BaseKeyName = BaseKeyName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_FR
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BaseKeyName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_FR(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_FR");

	Params::ULibText_C_ConvFontImageText_FR_Params Parms{};

	Parms.BaseKeyName = BaseKeyName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_ES
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BaseKeyName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_ES(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_ES");

	Params::ULibText_C_ConvFontImageText_ES_Params Parms{};

	Parms.BaseKeyName = BaseKeyName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_DE
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BaseKeyName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_DE(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_DE");

	Params::ULibText_C_ConvFontImageText_DE_Params Parms{};

	Parms.BaseKeyName = BaseKeyName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_IT
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ImageTextName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_IT(class FName ImageTextName, class UObject* __WorldContext, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_IT");

	Params::ULibText_C_ConvFontImageText_IT_Params Parms{};

	Parms.ImageTextName = ImageTextName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LibText.LibText_C.ConvFontImageText_GetControllerKey
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BaseKeyName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        OutKeyName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_GetControllerKey(class FName BaseKeyName, class UObject* __WorldContext, bool* OutFound, class FName* OutKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_GetControllerKey");

	Params::ULibText_C_ConvFontImageText_GetControllerKey_Params Parms{};

	Parms.BaseKeyName = BaseKeyName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFound != nullptr)
		*OutFound = Parms.OutFound;

	if (OutKeyName != nullptr)
		*OutKeyName = Parms.OutKeyName;

}


// Function LibText.LibText_C.ConvFontImageText_Controller
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ImageTextName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        OutName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibText_C::ConvFontImageText_Controller(class FName ImageTextName, class UObject* __WorldContext, bool* Found, class FName* OutName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText_Controller");

	Params::ULibText_C_ConvFontImageText_Controller_Params Parms{};

	Parms.ImageTextName = ImageTextName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (OutName != nullptr)
		*OutName = Parms.OutName;

}


// Function LibText.LibText_C.ConvFontImageText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ImageTextName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)

void ULibText_C::ConvFontImageText(class FName ImageTextName, class UObject* __WorldContext, class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibText_C", "ConvFontImageText");

	Params::ULibText_C_ConvFontImageText_Params Parms{};

	Parms.ImageTextName = ImageTextName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}

}


