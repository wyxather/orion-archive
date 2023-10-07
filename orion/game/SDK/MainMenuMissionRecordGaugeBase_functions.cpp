#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C
// (None)

class UClass* UMainMenuMissionRecordGaugeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuMissionRecordGaugeBase_C");

	return Clss;
}


// MainMenuMissionRecordGaugeBase_C MainMenuMissionRecordGaugeBase.Default__MainMenuMissionRecordGaugeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuMissionRecordGaugeBase_C* UMainMenuMissionRecordGaugeBase_C::GetDefaultObj()
{
	static class UMainMenuMissionRecordGaugeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuMissionRecordGaugeBase_C*>(UMainMenuMissionRecordGaugeBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.ResetRenderPhase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::ResetRenderPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "ResetRenderPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetRenderPhase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RenderPhase                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalPhases                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetRenderPhase(int32 RenderPhase, int32 TotalPhases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetRenderPhase");

	Params::UMainMenuMissionRecordGaugeBase_C_SetRenderPhase_Params Parms{};

	Parms.RenderPhase = RenderPhase;
	Parms.TotalPhases = TotalPhases;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Set Sub Mission OutFocus Font Size by Area
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::Set_Sub_Mission_OutFocus_Font_Size_by_Area()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "Set Sub Mission OutFocus Font Size by Area");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Set Sub Mission Focus Font Size by Area
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::Set_Sub_Mission_Focus_Font_Size_by_Area()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "Set Sub Mission Focus Font Size by Area");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetCursorVisibility");

	Params::UMainMenuMissionRecordGaugeBase_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.GetExtraMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsExtra                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::GetExtraMode(bool* IsExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "GetExtraMode");

	Params::UMainMenuMissionRecordGaugeBase_C_GetExtraMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsExtra != nullptr)
		*IsExtra = Parms.IsExtra;

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugeTextureByAreaId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetGaugeTextureByAreaId(int32 AreaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetGaugeTextureByAreaId");

	Params::UMainMenuMissionRecordGaugeBase_C_SetGaugeTextureByAreaId_Params Parms{};

	Parms.AreaID = AreaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetEmblemTextureByAreaId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetEmblemTextureByAreaId(int32 AreaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetEmblemTextureByAreaId");

	Params::UMainMenuMissionRecordGaugeBase_C_SetEmblemTextureByAreaId_Params Parms{};

	Parms.AreaID = AreaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetupMaterial
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetupReference
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetCouplingCharaNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OnestChara                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TwobdChara                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetCouplingCharaNameText(class FName OnestChara, class FName TwobdChara)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetCouplingCharaNameText");

	Params::UMainMenuMissionRecordGaugeBase_C_SetCouplingCharaNameText_Params Parms{};

	Parms.OnestChara = OnestChara;
	Parms.TwobdChara = TwobdChara;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugeTextureFromExtraStoryCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEXTRA_STORY_CATEGORY   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetGaugeTextureFromExtraStoryCategory(enum class EEXTRA_STORY_CATEGORY Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetGaugeTextureFromExtraStoryCategory");

	Params::UMainMenuMissionRecordGaugeBase_C_SetGaugeTextureFromExtraStoryCategory_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugeTextureByPlayerId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetGaugeTextureByPlayerId(enum class EPlayableCharacterID PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetGaugeTextureByPlayerId");

	Params::UMainMenuMissionRecordGaugeBase_C_SetGaugeTextureByPlayerId_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetAllCharaFlipbook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::SetAllCharaFlipbook()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetAllCharaFlipbook");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetFlipbookWithPair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FlipbookName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlipbookNamePair                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimationLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEXTRA_STORY_CATEGORY   ExtraStory                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetFlipbookWithPair(class FName FlipbookName, class FName FlipbookNamePair, bool AnimationLoop, enum class EEXTRA_STORY_CATEGORY ExtraStory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetFlipbookWithPair");

	Params::UMainMenuMissionRecordGaugeBase_C_SetFlipbookWithPair_Params Parms{};

	Parms.FlipbookName = FlipbookName;
	Parms.FlipbookNamePair = FlipbookNamePair;
	Parms.AnimationLoop = AnimationLoop;
	Parms.ExtraStory = ExtraStory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FlipbookName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimationLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetFlipbook(class FName FlipbookName, bool AnimationLoop, enum class EPlayableCharacterID CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetFlipbook");

	Params::UMainMenuMissionRecordGaugeBase_C_SetFlipbook_Params Parms{};

	Parms.FlipbookName = FlipbookName;
	Parms.AnimationLoop = AnimationLoop;
	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugePercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GaugePercent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetGaugePercent(float GaugePercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetGaugePercent");

	Params::UMainMenuMissionRecordGaugeBase_C_SetGaugePercent_Params Parms{};

	Parms.GaugePercent = GaugePercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::SetText(class FName TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetText");

	Params::UMainMenuMissionRecordGaugeBase_C_SetText_Params Parms{};

	Parms.TextLabel = TextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.TickUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::TickUpdate(float InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "TickUpdate");

	Params::UMainMenuMissionRecordGaugeBase_C_TickUpdate_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetFlipbookEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::SetFlipbookEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetFlipbookEnable");

	Params::UMainMenuMissionRecordGaugeBase_C_SetFlipbookEnable_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetSelectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::SetSelectMode(bool IsSelect, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetSelectMode");

	Params::UMainMenuMissionRecordGaugeBase_C_SetSelectMode_Params Parms{};

	Parms.IsSelect = IsSelect;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.UnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::UnEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "UnEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetupGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GaugePercent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseAnime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::SetupGauge(float GaugePercent, bool UseAnime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "SetupGauge");

	Params::UMainMenuMissionRecordGaugeBase_C_SetupGauge_Params Parms{};

	Parms.GaugePercent = GaugePercent;
	Parms.UseAnime = UseAnime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "Tick");

	Params::UMainMenuMissionRecordGaugeBase_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.OutFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "OutFocus");

	Params::UMainMenuMissionRecordGaugeBase_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeBase_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "Focus");

	Params::UMainMenuMissionRecordGaugeBase_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeBase_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.ExecuteUbergraph_MainMenuMissionRecordGaugeBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecordGaugeBase_C::ExecuteUbergraph_MainMenuMissionRecordGaugeBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeBase_C", "ExecuteUbergraph_MainMenuMissionRecordGaugeBase");

	Params::UMainMenuMissionRecordGaugeBase_C_ExecuteUbergraph_MainMenuMissionRecordGaugeBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


