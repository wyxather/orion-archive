#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C
// (None)

class UClass* UWBP_PartnerDetailWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartnerDetailWidget_C");

	return Clss;
}


// WBP_PartnerDetailWidget_C WBP_PartnerDetailWidget.Default__WBP_PartnerDetailWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartnerDetailWidget_C* UWBP_PartnerDetailWidget_C::GetDefaultObj()
{
	static class UWBP_PartnerDetailWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartnerDetailWidget_C*>(UWBP_PartnerDetailWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.GetPartnerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EHUNTER_PARTNER_ID      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerDetailWidget_C::GetPartnerName(enum class EHUNTER_PARTNER_ID Type, class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartnerDetailWidget_C", "GetPartnerName");

	Params::UWBP_PartnerDetailWidget_C_GetPartnerName_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.Setup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHUNTER_PARTNER_ID      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerDetailWidget_C::Setup(enum class EHUNTER_PARTNER_ID NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartnerDetailWidget_C", "Setup");

	Params::UWBP_PartnerDetailWidget_C_Setup_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.OnFinishCloseAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerDetailWidget_C::OnFinishCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartnerDetailWidget_C", "OnFinishCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerDetailWidget_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartnerDetailWidget_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHUNTER_PARTNER_ID      PartnerID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerDetailWidget_C::Open(enum class EHUNTER_PARTNER_ID PartnerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartnerDetailWidget_C", "Open");

	Params::UWBP_PartnerDetailWidget_C_Open_Params Parms{};

	Parms.PartnerID = PartnerID;

	UObject::ProcessEvent(Func, &Parms);

}

}


