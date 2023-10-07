#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapWidgetFrameImage.WBP_3DWorldMapWidgetFrameImage_C
// (None)

class UClass* UWBP_3DWorldMapWidgetFrameImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapWidgetFrameImage_C");

	return Clss;
}


// WBP_3DWorldMapWidgetFrameImage_C WBP_3DWorldMapWidgetFrameImage.Default__WBP_3DWorldMapWidgetFrameImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapWidgetFrameImage_C* UWBP_3DWorldMapWidgetFrameImage_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapWidgetFrameImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapWidgetFrameImage_C*>(UWBP_3DWorldMapWidgetFrameImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapWidgetFrameImage.WBP_3DWorldMapWidgetFrameImage_C.PlayCloseAnim_PlayerSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetFrameImage_C::PlayCloseAnim_PlayerSelect(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetFrameImage_C", "PlayCloseAnim_PlayerSelect");

	Params::UWBP_3DWorldMapWidgetFrameImage_C_PlayCloseAnim_PlayerSelect_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetFrameImage.WBP_3DWorldMapWidgetFrameImage_C.PlayOpenAnim_PlayerSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetFrameImage_C::PlayOpenAnim_PlayerSelect(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetFrameImage_C", "PlayOpenAnim_PlayerSelect");

	Params::UWBP_3DWorldMapWidgetFrameImage_C_PlayOpenAnim_PlayerSelect_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetFrameImage.WBP_3DWorldMapWidgetFrameImage_C.PlayCloseAnim_WorldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetFrameImage_C::PlayCloseAnim_WorldMap(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetFrameImage_C", "PlayCloseAnim_WorldMap");

	Params::UWBP_3DWorldMapWidgetFrameImage_C_PlayCloseAnim_WorldMap_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetFrameImage.WBP_3DWorldMapWidgetFrameImage_C.PlayOpenAnim_WorldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetFrameImage_C::PlayOpenAnim_WorldMap(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetFrameImage_C", "PlayOpenAnim_WorldMap");

	Params::UWBP_3DWorldMapWidgetFrameImage_C_PlayOpenAnim_WorldMap_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}

}


