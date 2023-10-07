#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C
// (None)

class UClass* UWBP_3DWorldMapWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapWidget_C");

	return Clss;
}


// WBP_3DWorldMapWidget_C WBP_3DWorldMapWidget.Default__WBP_3DWorldMapWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapWidget_C* UWBP_3DWorldMapWidget_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapWidget_C*>(UWBP_3DWorldMapWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.UpdateGlobe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::UpdateGlobe(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "UpdateGlobe");

	Params::UWBP_3DWorldMapWidget_C_UpdateGlobe_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.IsClosing
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapWidget_C::IsClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "IsClosing");

	Params::UWBP_3DWorldMapWidget_C_IsClosing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.IsOpening
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapWidget_C::IsOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "IsOpening");

	Params::UWBP_3DWorldMapWidget_C_IsOpening_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.CloseWorldMapInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::CloseWorldMapInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "CloseWorldMapInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.AppendArray
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuideData>          ArrayA                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGuideData>          ArrayB                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGuideData>          Array                                                            (Parm, OutParm)

void UWBP_3DWorldMapWidget_C::AppendArray(TArray<struct FGuideData>& ArrayA, TArray<struct FGuideData>& ArrayB, TArray<struct FGuideData>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "AppendArray");

	Params::UWBP_3DWorldMapWidget_C_AppendArray_Params Parms{};

	Parms.ArrayA = ArrayA;
	Parms.ArrayB = ArrayB;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.IsFastTraveling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapWidget_C::IsFastTraveling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "IsFastTraveling");

	Params::UWBP_3DWorldMapWidget_C_IsFastTraveling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidget_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "DecideMenu");

	Params::UWBP_3DWorldMapWidget_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidget_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "CancelMenu");

	Params::UWBP_3DWorldMapWidget_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.GetAutoRotateSpeed
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::GetAutoRotateSpeed(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "GetAutoRotateSpeed");

	Params::UWBP_3DWorldMapWidget_C_GetAutoRotateSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.RefreshFooterGuide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::RefreshFooterGuide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "RefreshFooterGuide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnDeselectIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::OnDeselectIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "OnDeselectIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnSelectIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::OnSelectIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "OnSelectIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.MakeFooterGuideData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldMapTable              SelectedIconData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FGuideData>          NewParam                                                         (Parm, OutParm)

void UWBP_3DWorldMapWidget_C::MakeFooterGuideData(enum class EWorldMapZoomType ZoomType, const struct FWorldMapTable& SelectedIconData, TArray<struct FGuideData>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "MakeFooterGuideData");

	Params::UWBP_3DWorldMapWidget_C_MakeFooterGuideData_Params Parms{};

	Parms.ZoomType = ZoomType;
	Parms.SelectedIconData = SelectedIconData;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SetFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuFooter_C*               Footer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::SetFooter(class UMenuFooter_C* Footer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "SetFooter");

	Params::UWBP_3DWorldMapWidget_C_SetFooter_Params Parms{};

	Parms.Footer = Footer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OpenWorldMapInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::OpenWorldMapInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "OpenWorldMapInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SetSetectedIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorldMapIconBase*           SelectedIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::SetSetectedIcon(class UWorldMapIconBase* SelectedIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "SetSetectedIcon");

	Params::UWBP_3DWorldMapWidget_C_SetSetectedIcon_Params Parms{};

	Parms.SelectedIcon = SelectedIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.UpdateCursorSnap
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::UpdateCursorSnap(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "UpdateCursorSnap");

	Params::UWBP_3DWorldMapWidget_C_UpdateCursorSnap_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnClosedFastTravelFailedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::OnClosedFastTravelFailedDialog(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "OnClosedFastTravelFailedDialog");

	Params::UWBP_3DWorldMapWidget_C_OnClosedFastTravelFailedDialog_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnClosedFastTravelConfirmDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::OnClosedFastTravelConfirmDialog(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "OnClosedFastTravelConfirmDialog");

	Params::UWBP_3DWorldMapWidget_C_OnClosedFastTravelConfirmDialog_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.DecideIcon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::DecideIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "DecideIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.CreateMapIconInstance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::CreateMapIconInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "CreateMapIconInstance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "Tick");

	Params::UWBP_3DWorldMapWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "GetLeftAxisX");

	Params::UWBP_3DWorldMapWidget_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "GetLeftAxisY");

	Params::UWBP_3DWorldMapWidget_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidget_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "SubMenu_WorldMapSlowCursorX");

	Params::UWBP_3DWorldMapWidget_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "SubMenu_WorldMapSlowCursorY");

	Params::UWBP_3DWorldMapWidget_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.ExecuteUbergraph_WBP_3DWorldMapWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidget_C::ExecuteUbergraph_WBP_3DWorldMapWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidget_C", "ExecuteUbergraph_WBP_3DWorldMapWidget");

	Params::UWBP_3DWorldMapWidget_C_ExecuteUbergraph_WBP_3DWorldMapWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


