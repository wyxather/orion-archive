#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C
// (None)

class UClass* UWBP_3DWorldMapAreaLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapAreaLabel_C");

	return Clss;
}


// WBP_3DWorldMapAreaLabel_C WBP_3DWorldMapAreaLabel.Default__WBP_3DWorldMapAreaLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapAreaLabel_C* UWBP_3DWorldMapAreaLabel_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapAreaLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapAreaLabel_C*>(UWBP_3DWorldMapAreaLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.SetEncounterLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapAreaLabel_C::SetEncounterLevel(int32 LevelId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "SetEncounterLevel");

	Params::UWBP_3DWorldMapAreaLabel_C_SetEncounterLevel_Params Parms{};

	Parms.LevelId = LevelId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Override Map Name And Encounter Level If Flag Enable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWorldMapNameOverride>WorldMapTable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_3DWorldMapAreaLabel_C::Override_Map_Name_And_Encounter_Level_If_Flag_Enable(TArray<struct FWorldMapNameOverride>& WorldMapTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "Override Map Name And Encounter Level If Flag Enable");

	Params::UWBP_3DWorldMapAreaLabel_C_Override_Map_Name_And_Encounter_Level_If_Flag_Enable_Params Parms{};

	Parms.WorldMapTable = WorldMapTable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.GetOverlapArea
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_3DWorldMapAreaLabel_C::GetOverlapArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "GetOverlapArea");

	Params::UWBP_3DWorldMapAreaLabel_C_GetOverlapArea_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InPosition                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapAreaLabel_C::SetPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "SetPosition");

	Params::UWBP_3DWorldMapAreaLabel_C_SetPosition_Params Parms{};

	Parms.InPosition = InPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.IsOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapAreaLabel_C::IsOpen(bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "IsOpen");

	Params::UWBP_3DWorldMapAreaLabel_C_IsOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.SetTextData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapTable              WorldMapTable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_3DWorldMapAreaLabel_C::SetTextData(struct FWorldMapTable& WorldMapTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "SetTextData");

	Params::UWBP_3DWorldMapAreaLabel_C_SetTextData_Params Parms{};

	Parms.WorldMapTable = WorldMapTable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Close Area UI if Needed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPlayedAnim                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapAreaLabel_C::Close_Area_UI_if_Needed(bool Fast, bool* IsPlayedAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "Close Area UI if Needed");

	Params::UWBP_3DWorldMapAreaLabel_C_Close_Area_UI_if_Needed_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayedAnim != nullptr)
		*IsPlayedAnim = Parms.IsPlayedAnim;

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Open Area UI if Needed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapTable              WorldMapTable                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Unreached                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPlayedAnim                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapAreaLabel_C::Open_Area_UI_if_Needed(const struct FWorldMapTable& WorldMapTable, bool Unreached, bool Fast, bool* IsPlayedAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "Open Area UI if Needed");

	Params::UWBP_3DWorldMapAreaLabel_C_Open_Area_UI_if_Needed_Params Parms{};

	Parms.WorldMapTable = WorldMapTable;
	Parms.Unreached = Unreached;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayedAnim != nullptr)
		*IsPlayedAnim = Parms.IsPlayedAnim;

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapAreaLabel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.ExecuteUbergraph_WBP_3DWorldMapAreaLabel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapAreaLabel_C::ExecuteUbergraph_WBP_3DWorldMapAreaLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapAreaLabel_C", "ExecuteUbergraph_WBP_3DWorldMapAreaLabel");

	Params::UWBP_3DWorldMapAreaLabel_C_ExecuteUbergraph_WBP_3DWorldMapAreaLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


