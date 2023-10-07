#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C
// (None)

class UClass* UListItemCharacterEqpWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemCharacterEqpWidget_C");

	return Clss;
}


// ListItemCharacterEqpWidget_C ListItemCharacterEqpWidget.Default__ListItemCharacterEqpWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemCharacterEqpWidget_C* UListItemCharacterEqpWidget_C::GetDefaultObj()
{
	static class UListItemCharacterEqpWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemCharacterEqpWidget_C*>(UListItemCharacterEqpWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemCharacterEqpWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.RefreshCharacterFlipbook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFBImage*                    TargetImage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemCharacterEqpWidget_C::RefreshCharacterFlipbook(class UFBImage* TargetImage, int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "RefreshCharacterFlipbook");

	Params::UListItemCharacterEqpWidget_C_RefreshCharacterFlipbook_Params Parms{};

	Parms.TargetImage = TargetImage;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.SetVisibleAllCharacterByBitMask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VisibleBitMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemCharacterEqpWidget_C::SetVisibleAllCharacterByBitMask(int32 VisibleBitMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "SetVisibleAllCharacterByBitMask");

	Params::UListItemCharacterEqpWidget_C_SetVisibleAllCharacterByBitMask_Params Parms{};

	Parms.VisibleBitMask = VisibleBitMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.SetVisibleAllCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       VisibleList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemCharacterEqpWidget_C::SetVisibleAllCharacter(TArray<bool>& VisibleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "SetVisibleAllCharacter");

	Params::UListItemCharacterEqpWidget_C_SetVisibleAllCharacter_Params Parms{};

	Parms.VisibleList = VisibleList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.HideAllCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemCharacterEqpWidget_C::HideAllCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "HideAllCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemCharacterEqpWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemCharacterEqpWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "Tick");

	Params::UListItemCharacterEqpWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.ExecuteUbergraph_ListItemCharacterEqpWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemCharacterEqpWidget_C::ExecuteUbergraph_ListItemCharacterEqpWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemCharacterEqpWidget_C", "ExecuteUbergraph_ListItemCharacterEqpWidget");

	Params::UListItemCharacterEqpWidget_C_ExecuteUbergraph_ListItemCharacterEqpWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


