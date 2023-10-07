#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialBG.UITutorialBG_C
// (None)

class UClass* UUITutorialBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialBG_C");

	return Clss;
}


// UITutorialBG_C UITutorialBG.Default__UITutorialBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialBG_C* UUITutorialBG_C::GetDefaultObj()
{
	static class UUITutorialBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialBG_C*>(UUITutorialBG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialBG.UITutorialBG_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialBG_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialBG_C", "IsPlayingAnim");

	Params::UUITutorialBG_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function UITutorialBG.UITutorialBG_C.PlayEpilogueAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialBG_C::PlayEpilogueAnimation(bool* Play)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialBG_C", "PlayEpilogueAnimation");

	Params::UUITutorialBG_C_PlayEpilogueAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Play != nullptr)
		*Play = Parms.Play;

}


// Function UITutorialBG.UITutorialBG_C.Set UIFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focus                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEpilouge                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialBG_C::Set_UIFocus(bool Focus, bool Fast, bool IsEpilouge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialBG_C", "Set UIFocus");

	Params::UUITutorialBG_C_Set_UIFocus_Params Parms{};

	Parms.Focus = Focus;
	Parms.Fast = Fast;
	Parms.IsEpilouge = IsEpilouge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorialBG.UITutorialBG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialBG_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialBG_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialBG.UITutorialBG_C.PlayEpilogueAnim_Inner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorialBG_C::PlayEpilogueAnim_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialBG_C", "PlayEpilogueAnim_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialBG.UITutorialBG_C.ExecuteUbergraph_UITutorialBG
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialBG_C::ExecuteUbergraph_UITutorialBG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialBG_C", "ExecuteUbergraph_UITutorialBG");

	Params::UUITutorialBG_C_ExecuteUbergraph_UITutorialBG_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


