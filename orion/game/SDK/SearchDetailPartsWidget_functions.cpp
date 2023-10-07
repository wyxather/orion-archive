#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass SearchDetailPartsWidget.SearchDetailPartsWidget_C
// (None)

class UClass* USearchDetailPartsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SearchDetailPartsWidget_C");

	return Clss;
}


// SearchDetailPartsWidget_C SearchDetailPartsWidget.Default__SearchDetailPartsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USearchDetailPartsWidget_C* USearchDetailPartsWidget_C::GetDefaultObj()
{
	static class USearchDetailPartsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USearchDetailPartsWidget_C*>(USearchDetailPartsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ReplaceFontStyleTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)

void USearchDetailPartsWidget_C::ReplaceFontStyleTag(const class FString& InputText, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "ReplaceFontStyleTag");

	Params::USearchDetailPartsWidget_C_ReplaceFontStyleTag_Params Parms{};

	Parms.InputText = InputText;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ReplaceColorTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)

void USearchDetailPartsWidget_C::ReplaceColorTag(const class FString& Body, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "ReplaceColorTag");

	Params::USearchDetailPartsWidget_C_ReplaceColorTag_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ApplyHistoryColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USearchDetailPartsWidget_C::ApplyHistoryColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "ApplyHistoryColor");

	Params::USearchDetailPartsWidget_C_ApplyHistoryColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.RefreshHistoryText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USearchDetailPartsWidget_C::RefreshHistoryText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "RefreshHistoryText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.RemoveColorTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)

void USearchDetailPartsWidget_C::RemoveColorTag(const class FString& Body, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "RemoveColorTag");

	Params::USearchDetailPartsWidget_C_RemoveColorTag_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.SetTextAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USearchDetailPartsWidget_C::SetTextAlpha(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "SetTextAlpha");

	Params::USearchDetailPartsWidget_C_SetTextAlpha_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ChangeLanguageProc
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void USearchDetailPartsWidget_C::ChangeLanguageProc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "ChangeLanguageProc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.GetInformationData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                InfoIDList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FNPCHearInfoDataBase>InfoDataList                                                     (Parm, OutParm)

void USearchDetailPartsWidget_C::GetInformationData(TArray<class FName>& InfoIDList, TArray<struct FNPCHearInfoDataBase>* InfoDataList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "GetInformationData");

	Params::USearchDetailPartsWidget_C_GetInformationData_Params Parms{};

	Parms.InfoIDList = InfoIDList;

	UObject::ProcessEvent(Func, &Parms);

	if (InfoDataList != nullptr)
		*InfoDataList = std::move(Parms.InfoDataList);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.SetupSearchDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAlreadyCompleted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USearchDetailPartsWidget_C::SetupSearchDetail(class FName NPCLabel, bool IsAlreadyCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "SetupSearchDetail");

	Params::USearchDetailPartsWidget_C_SetupSearchDetail_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.IsAlreadyCompleted = IsAlreadyCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USearchDetailPartsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "Tick");

	Params::USearchDetailPartsWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USearchDetailPartsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USearchDetailPartsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "PreConstruct");

	Params::USearchDetailPartsWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ExecuteUbergraph_SearchDetailPartsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USearchDetailPartsWidget_C::ExecuteUbergraph_SearchDetailPartsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SearchDetailPartsWidget_C", "ExecuteUbergraph_SearchDetailPartsWidget");

	Params::USearchDetailPartsWidget_C_ExecuteUbergraph_SearchDetailPartsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


