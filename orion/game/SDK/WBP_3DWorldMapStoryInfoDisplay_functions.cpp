#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C
// (None)

class UClass* UWBP_3DWorldMapStoryInfoDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapStoryInfoDisplay_C");

	return Clss;
}


// WBP_3DWorldMapStoryInfoDisplay_C WBP_3DWorldMapStoryInfoDisplay.Default__WBP_3DWorldMapStoryInfoDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapStoryInfoDisplay_C* UWBP_3DWorldMapStoryInfoDisplay_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapStoryInfoDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapStoryInfoDisplay_C*>(UWBP_3DWorldMapStoryInfoDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetForceHidden
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetForceHidden(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetForceHidden");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetForceHidden_Params Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.InitIsFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::InitIsFocus(enum class EWorldMapZoomType ZoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "InitIsFocus");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_InitIsFocus_Params Parms{};

	Parms.ZoomType = ZoomType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.ChangeUIFocus
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFocus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapStoryInfoDisplay_C::ChangeUIFocus(bool IsFocus, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "ChangeUIFocus");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_ChangeUIFocus_Params Parms{};

	Parms.IsFocus = IsFocus;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.GetCharacterIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconImage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::GetCharacterIcon(enum class EPlayableCharacterID CharacterID, class UTexture2D** IconImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "GetCharacterIcon");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_GetCharacterIcon_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (IconImage != nullptr)
		*IconImage = Parms.IconImage;

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetSubIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetSubIcon");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetSubIcon_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCharacterIcon2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetCharacterIcon2(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetCharacterIcon2");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetCharacterIcon2_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCharacterIcon1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetCharacterIcon1(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetCharacterIcon1");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetCharacterIcon1_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetOneLineText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetOneLineText(class FName InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetOneLineText");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetOneLineText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NameAndChapter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RecommendLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OneLineText                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CharacterIcon1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CharacterIcon2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SubIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupVisibility(bool NameAndChapter, bool RecommendLevel, bool OneLineText, bool CharacterIcon1, bool CharacterIcon2, bool SubIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupVisibility");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetupVisibility_Params Parms{};

	Parms.NameAndChapter = NameAndChapter;
	Parms.RecommendLevel = RecommendLevel;
	Parms.OneLineText = OneLineText;
	Parms.CharacterIcon1 = CharacterIcon1;
	Parms.CharacterIcon2 = CharacterIcon2;
	Parms.SubIcon = SubIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupEpilogueStory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupEpilogueStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupEpilogueStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupMerchantStory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapDestinationData    WorldMapDestinationData                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupMerchantStory(const struct FWorldMapDestinationData& WorldMapDestinationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupMerchantStory");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetupMerchantStory_Params Parms{};

	Parms.WorldMapDestinationData = WorldMapDestinationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupOverAllFinalStory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupOverAllFinalStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupOverAllFinalStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupCouplingStory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapDestinationData    WorldMapDestinationData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupCouplingStory(struct FWorldMapDestinationData& WorldMapDestinationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupCouplingStory");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetupCouplingStory_Params Parms{};

	Parms.WorldMapDestinationData = WorldMapDestinationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupExtraStory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupExtraStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupExtraStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupMainStory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapDestinationData    WorldMapDestinationData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetupMainStory(struct FWorldMapDestinationData& WorldMapDestinationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetupMainStory");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetupMainStory_Params Parms{};

	Parms.WorldMapDestinationData = WorldMapDestinationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapDestinationData    StoryInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_3DWorldMapStoryInfoDisplay_C::Setup(struct FWorldMapDestinationData& StoryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "Setup");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_Setup_Params Parms{};

	Parms.StoryInfo = StoryInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.StopLoopAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoDisplay_C::StopLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "StopLoopAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.StartLoopAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoDisplay_C::StartLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "StartLoopAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetRecommendationLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetRecommendationLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetRecommendationLevel");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetRecommendationLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCapter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetCapter(class FName InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetCapter");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetCapter_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCharacterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::SetCharacterName(class FName CharacterText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "SetCharacterName");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_SetCharacterName_Params Parms{};

	Parms.CharacterText = CharacterText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapStoryInfoDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapStoryInfoDisplay_C::ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapStoryInfoDisplay_C", "ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay");

	Params::UWBP_3DWorldMapStoryInfoDisplay_C_ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


