#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C
// (None)

class UClass* UWBP_3DWorldMapIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapIcon_C");

	return Clss;
}


// WBP_3DWorldMapIcon_C WBP_3DWorldMapIcon.Default__WBP_3DWorldMapIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapIcon_C* UWBP_3DWorldMapIcon_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapIcon_C*>(UWBP_3DWorldMapIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.GetOverlapArea
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_3DWorldMapIcon_C::GetOverlapArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "GetOverlapArea");

	Params::UWBP_3DWorldMapIcon_C_GetOverlapArea_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.InitIsFocusOfStoryInfoDisplays
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapIcon_C::InitIsFocusOfStoryInfoDisplays(enum class EWorldMapZoomType ZoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "InitIsFocusOfStoryInfoDisplays");

	Params::UWBP_3DWorldMapIcon_C_InitIsFocusOfStoryInfoDisplays_Params Parms{};

	Parms.ZoomType = ZoomType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.StartStoryInfoDisplayAnimIfNeeded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapIcon_C::StartStoryInfoDisplayAnimIfNeeded(enum class EWorldMapZoomType ZoomType, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "StartStoryInfoDisplayAnimIfNeeded");

	Params::UWBP_3DWorldMapIcon_C_StartStoryInfoDisplayAnimIfNeeded_Params Parms{};

	Parms.ZoomType = ZoomType;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.SetupStoryInfoDisplays
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWorldMapDestinationData>StoryList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_3DWorldMapIcon_C::SetupStoryInfoDisplays(TArray<struct FWorldMapDestinationData>& StoryList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "SetupStoryInfoDisplays");

	Params::UWBP_3DWorldMapIcon_C_SetupStoryInfoDisplays_Params Parms{};

	Parms.StoryList = StoryList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.HideAllStoryInfoWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapIcon_C::HideAllStoryInfoWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "HideAllStoryInfoWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.InitVisibility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapIcon_C::InitVisibility(enum class EWorldMapZoomType ZoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "InitVisibility");

	Params::UWBP_3DWorldMapIcon_C_InitVisibility_Params Parms{};

	Parms.ZoomType = ZoomType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.StartIcconVisibilityTransitionByZoomType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapIcon_C::StartIcconVisibilityTransitionByZoomType(enum class EWorldMapZoomType ZoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "StartIcconVisibilityTransitionByZoomType");

	Params::UWBP_3DWorldMapIcon_C_StartIcconVisibilityTransitionByZoomType_Params Parms{};

	Parms.ZoomType = ZoomType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.SetupIconColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapIcon_C::SetupIconColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "SetupIconColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.SetupIconImage
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapIcon_C::SetupIconImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "SetupIconImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.ExecuteUbergraph_WBP_3DWorldMapIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapIcon_C::ExecuteUbergraph_WBP_3DWorldMapIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapIcon_C", "ExecuteUbergraph_WBP_3DWorldMapIcon");

	Params::UWBP_3DWorldMapIcon_C_ExecuteUbergraph_WBP_3DWorldMapIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


