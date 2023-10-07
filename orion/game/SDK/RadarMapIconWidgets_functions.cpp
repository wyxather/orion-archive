#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RadarMapIconWidgets.RadarMapIconWidgets_C
// (None)

class UClass* URadarMapIconWidgets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadarMapIconWidgets_C");

	return Clss;
}


// RadarMapIconWidgets_C RadarMapIconWidgets.Default__RadarMapIconWidgets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadarMapIconWidgets_C* URadarMapIconWidgets_C::GetDefaultObj()
{
	static class URadarMapIconWidgets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadarMapIconWidgets_C*>(URadarMapIconWidgets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.OutsideFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::OutsideFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "OutsideFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetIconSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::SetIconSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "SetIconSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetLevelTriggerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameColor              IconColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapIconWidgets_C::SetLevelTriggerIcon(enum class EGameColor IconColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "SetLevelTriggerIcon");

	Params::URadarMapIconWidgets_C_SetLevelTriggerIcon_Params Parms{};

	Parms.IconColor = IconColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.GetObjectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERADARMAP_ICON_OBJ_TYPE Obj_Type                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapIconWidgets_C::GetObjectType(enum class ERADARMAP_ICON_OBJ_TYPE* Obj_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "GetObjectType");

	Params::URadarMapIconWidgets_C_GetObjectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Obj_Type != nullptr)
		*Obj_Type = Parms.Obj_Type;

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.GetIconType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERADARMAP_ICON_TYPE     IconType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapIconWidgets_C::GetIconType(enum class ERADARMAP_ICON_TYPE* IconType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "GetIconType");

	Params::URadarMapIconWidgets_C_GetIconType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IconType != nullptr)
		*IconType = Parms.IconType;

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.ResetIconParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::ResetIconParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "ResetIconParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::SetIconColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "SetIconColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.ResetAnimIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::ResetAnimIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "ResetAnimIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.Initialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::Initialization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "Initialization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.IsEndLoopAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadarMapIconWidgets_C::IsEndLoopAnimation(class UWidgetAnimation* Animation, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "IsEndLoopAnimation");

	Params::URadarMapIconWidgets_C_IsEndLoopAnimation_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.GetCurrentTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapIconWidgets_C::GetCurrentTime(class UWidgetAnimation* Animation, float* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "GetCurrentTime");

	Params::URadarMapIconWidgets_C_GetCurrentTime_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetAnimationIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInAnima                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadarMapIconWidgets_C::SetAnimationIcon(bool IsInAnima)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "SetAnimationIcon");

	Params::URadarMapIconWidgets_C_SetAnimationIcon_Params Parms{};

	Parms.IsInAnima = IsInAnima;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetupIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRadarMapIconParam          IconParam                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapIconWidgets_C::SetupIcon(class UTexture2D* Texture, const struct FRadarMapIconParam& IconParam, class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "SetupIcon");

	Params::URadarMapIconWidgets_C_SetupIcon_Params Parms{};

	Parms.Texture = Texture;
	Parms.IconParam = IconParam;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URadarMapIconWidgets_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapIconWidgets.RadarMapIconWidgets_C.ExecuteUbergraph_RadarMapIconWidgets
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapIconWidgets_C::ExecuteUbergraph_RadarMapIconWidgets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapIconWidgets_C", "ExecuteUbergraph_RadarMapIconWidgets");

	Params::URadarMapIconWidgets_C_ExecuteUbergraph_RadarMapIconWidgets_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


