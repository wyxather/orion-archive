#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C
// (None)

class UClass* UWBP_3DWorldMapStoryInfoText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapStoryInfoText_C");

	return Clss;
}


// WBP_3DWorldMapStoryInfoText_C WBP_3DWorldMapStoryInfoText.Default__WBP_3DWorldMapStoryInfoText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapStoryInfoText_C* UWBP_3DWorldMapStoryInfoText_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapStoryInfoText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapStoryInfoText_C*>(UWBP_3DWorldMapStoryInfoText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetTextOneline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OneLineText                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetTextOneline(class FName OneLineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetTextOneline");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetTextOneline_Params Parms{};

	Parms.OneLineText = OneLineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetTextOneLineVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetTextOneLineVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetTextOneLineVisibility");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetTextOneLineVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetRecommentLevelGroupVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetRecommentLevelGroupVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetRecommentLevelGroupVisibility");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetRecommentLevelGroupVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetNameAndCapterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetNameAndCapterVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetNameAndCapterVisibility");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetNameAndCapterVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetRecommendationLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetRecommendationLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetRecommendationLevel");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetRecommendationLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetCapter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetCapter(class FName InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetCapter");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetCapter_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetCharacterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::SetCharacterName(class FName CharacterText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "SetCharacterName");

	Params::UWBP_3DWorldMapStoryInfoText_C_SetCharacterName_Params Parms{};

	Parms.CharacterText = CharacterText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.ExecuteUbergraph_WBP_3DWorldMapStoryInfoText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoText_C::ExecuteUbergraph_WBP_3DWorldMapStoryInfoText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoText_C", "ExecuteUbergraph_WBP_3DWorldMapStoryInfoText");

	Params::UWBP_3DWorldMapStoryInfoText_C_ExecuteUbergraph_WBP_3DWorldMapStoryInfoText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


