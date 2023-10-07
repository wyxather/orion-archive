#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TalkText_DeepThink.TalkText_DeepThink_C
// (None)

class UClass* UTalkText_DeepThink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalkText_DeepThink_C");

	return Clss;
}


// TalkText_DeepThink_C TalkText_DeepThink.Default__TalkText_DeepThink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalkText_DeepThink_C* UTalkText_DeepThink_C::GetDefaultObj()
{
	static class UTalkText_DeepThink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalkText_DeepThink_C*>(UTalkText_DeepThink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TalkText_DeepThink.TalkText_DeepThink_C.InitAnim
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_DeepThink_C::InitAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "InitAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.ReplaceTextTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutText                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UTalkText_DeepThink_C::ReplaceTextTag(const class FString& Text, class FString* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "ReplaceTextTag");

	Params::UTalkText_DeepThink_C_ReplaceTextTag_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.SetRetainerParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_DeepThink_C::SetRetainerParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "SetRetainerParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.GetTextSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TextSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_DeepThink_C::GetTextSize(int32 Index, struct FVector2D* TextSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "GetTextSize");

	Params::UTalkText_DeepThink_C_GetTextSize_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (TextSize != nullptr)
		*TextSize = std::move(Parms.TextSize);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.UpdatePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Translation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_DeepThink_C::UpdatePosition(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "UpdatePosition");

	Params::UTalkText_DeepThink_C_UpdatePosition_Params Parms{};

	Parms.Translation = Translation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_DeepThink_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "Tick");

	Params::UTalkText_DeepThink_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTalkText_DeepThink_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText_DeepThink.TalkText_DeepThink_C.ExecuteUbergraph_TalkText_DeepThink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_DeepThink_C::ExecuteUbergraph_TalkText_DeepThink(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_DeepThink_C", "ExecuteUbergraph_TalkText_DeepThink");

	Params::UTalkText_DeepThink_C_ExecuteUbergraph_TalkText_DeepThink_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


