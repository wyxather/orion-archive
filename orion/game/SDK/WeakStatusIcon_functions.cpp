#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WeakStatusIcon.WeakStatusIcon_C
// (None)

class UClass* UWeakStatusIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeakStatusIcon_C");

	return Clss;
}


// WeakStatusIcon_C WeakStatusIcon.Default__WeakStatusIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeakStatusIcon_C* UWeakStatusIcon_C::GetDefaultObj()
{
	static class UWeakStatusIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeakStatusIcon_C*>(UWeakStatusIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeakStatusIcon.WeakStatusIcon_C.SetCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakStatusIcon_C::SetCounter(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "SetCounter");

	Params::UWeakStatusIcon_C_SetCounter_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakStatusIcon.WeakStatusIcon_C.Set Poison Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Opened                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakStatusIcon_C::Set_Poison_Icon(class UTexture2D* Icon, int32 Index, bool Opened, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "Set Poison Icon");

	Params::UWeakStatusIcon_C_Set_Poison_Icon_Params Parms{};

	Parms.Icon = Icon;
	Parms.Index = Index;
	Parms.Opened = Opened;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakStatusIcon.WeakStatusIcon_C.SetIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeakStatusIcon_C::SetIconVisible(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "SetIconVisible");

	Params::UWeakStatusIcon_C_SetIconVisible_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakStatusIcon.WeakStatusIcon_C.SetWeakLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeakStatusIcon_C::SetWeakLock(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "SetWeakLock");

	Params::UWeakStatusIcon_C_SetWeakLock_Params Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakStatusIcon.WeakStatusIcon_C.StopAttributeFlash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakStatusIcon_C::StopAttributeFlash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "StopAttributeFlash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakStatusIcon.WeakStatusIcon_C.PlayAttributeFlash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakStatusIcon_C::PlayAttributeFlash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "PlayAttributeFlash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakStatusIcon.WeakStatusIcon_C.AttributeClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakStatusIcon_C::AttributeClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "AttributeClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakStatusIcon.WeakStatusIcon_C.AttributeOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Preparation2nd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeakStatusIcon_C::AttributeOpen(bool Preparation2nd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "AttributeOpen");

	Params::UWeakStatusIcon_C_AttributeOpen_Params Parms{};

	Parms.Preparation2nd = Preparation2nd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakStatusIcon.WeakStatusIcon_C.SetAttributeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Opened                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeakStatusIcon_C::SetAttributeIcon(class UTexture2D* Icon, int32 Index, bool Opened, bool Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakStatusIcon_C", "SetAttributeIcon");

	Params::UWeakStatusIcon_C_SetAttributeIcon_Params Parms{};

	Parms.Icon = Icon;
	Parms.Index = Index;
	Parms.Opened = Opened;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}

}


