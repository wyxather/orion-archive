#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RadarMap.RadarMap_C
// (None)

class UClass* URadarMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadarMap_C");

	return Clss;
}


// RadarMap_C RadarMap.Default__RadarMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadarMap_C* URadarMap_C::GetDefaultObj()
{
	static class URadarMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadarMap_C*>(URadarMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadarMap.RadarMap_C.OnResetHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::OnResetHiddenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "OnResetHiddenFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.RemoveIconFromListIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::RemoveIconFromListIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RemoveIconFromListIndex");

	Params::URadarMap_C_RemoveIconFromListIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMap.RadarMap_C.CheckOverlapSubIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRadarMapDisplayData        TargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void URadarMap_C::CheckOverlapSubIcon(int32 Key, const struct FRadarMapDisplayData& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "CheckOverlapSubIcon");

	Params::URadarMap_C_CheckOverlapSubIcon_Params Parms{};

	Parms.Key = Key;
	Parms.TargetData = TargetData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMap.RadarMap_C.ClacPositonKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Key                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::ClacPositonKey(struct FVector& Location, int32* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "ClacPositonKey");

	Params::URadarMap_C_ClacPositonKey_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = Parms.Key;

}


// Function RadarMap.RadarMap_C.AddIcon_PlacementSubStory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_PlacementSubStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_PlacementSubStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.ModifyLevelTriggerIcon_SubStory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::ModifyLevelTriggerIcon_SubStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "ModifyLevelTriggerIcon_SubStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "HideTemporaryInternal");

	Params::URadarMap_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMap.RadarMap_C.RefreshAllIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::RefreshAllIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RefreshAllIcon");

	Params::URadarMap_C_RefreshAllIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.RemoveAllIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::RemoveAllIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RemoveAllIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.RemoveIcon_AllLevelTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::RemoveIcon_AllLevelTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RemoveIcon_AllLevelTrigger");

	Params::URadarMap_C_RemoveIcon_AllLevelTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.RemoveIcon_AllFieldNpc
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::RemoveIcon_AllFieldNpc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RemoveIcon_AllFieldNpc");

	Params::URadarMap_C_RemoveIcon_AllFieldNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.ModifyLevelTriggerIcon_MainStory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::ModifyLevelTriggerIcon_MainStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "ModifyLevelTriggerIcon_MainStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.AddIcon_DelayedSpawnNpc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_DelayedSpawnNpc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_DelayedSpawnNpc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.AddIcon_LevelTrigger
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_LevelTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_LevelTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.AddIcon_PlacementMainStory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_PlacementMainStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_PlacementMainStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.AddIcon_FieldNpc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_FieldNpc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_FieldNpc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.AddIcon_EventTrigger
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_EventTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_EventTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.RemoveIcon_AllSubStoryEventTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::RemoveIcon_AllSubStoryEventTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RemoveIcon_AllSubStoryEventTrigger");

	Params::URadarMap_C_RemoveIcon_AllSubStoryEventTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.RemoveIcon_AllMapObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::RemoveIcon_AllMapObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RemoveIcon_AllMapObject");

	Params::URadarMap_C_RemoveIcon_AllMapObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.RefreshLevelTriggerIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::RefreshLevelTriggerIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "RefreshLevelTriggerIcon");

	Params::URadarMap_C_RefreshLevelTriggerIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.AddIcon_MapObject
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::AddIcon_MapObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon_MapObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.NextSwitch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadarMap_C::NextSwitch(bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "NextSwitch");

	Params::URadarMap_C_NextSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function RadarMap.RadarMap_C.CheckHiddenPointIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PointIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::CheckHiddenPointIcon(int32 PointIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "CheckHiddenPointIcon");

	Params::URadarMap_C_CheckHiddenPointIcon_Params Parms{};

	Parms.PointIndex = PointIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.AddIcon
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AttachIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DestinationLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERADARMAP_ICON_TYPE     IconType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERADARMAP_ICON_OBJ_TYPE ObjType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              LevelTriggerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextFieldName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetObjectName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TreasureIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameColor              GameColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameColor              RippleColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::AddIcon(int32* AttachIndex, class FName DestinationLabel, enum class ERADARMAP_ICON_TYPE IconType, enum class ERADARMAP_ICON_OBJ_TYPE ObjType, uint8 LevelTriggerID, class FName NextFieldName, class FName TargetObjectName, const struct FVector& Position, int32 TreasureIndex, enum class EGameColor GameColor, enum class EGameColor RippleColor, int32 TargetCharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "AddIcon");

	Params::URadarMap_C_AddIcon_Params Parms{};

	Parms.DestinationLabel = DestinationLabel;
	Parms.IconType = IconType;
	Parms.ObjType = ObjType;
	Parms.LevelTriggerID = LevelTriggerID;
	Parms.NextFieldName = NextFieldName;
	Parms.TargetObjectName = TargetObjectName;
	Parms.Position = Position;
	Parms.TreasureIndex = TreasureIndex;
	Parms.GameColor = GameColor;
	Parms.RippleColor = RippleColor;
	Parms.TargetCharaID = TargetCharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (AttachIndex != nullptr)
		*AttachIndex = Parms.AttachIndex;

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.CheckTreasureBoxIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TreasureIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::CheckTreasureBoxIcon(int32 TreasureIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "CheckTreasureBoxIcon");

	Params::URadarMap_C_CheckTreasureBoxIcon_Params Parms{};

	Parms.TreasureIndex = TreasureIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.ClearIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::ClearIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "ClearIcon");

	Params::URadarMap_C_ClearIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.SetRadarMapVisible
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::SetRadarMapVisible(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "SetRadarMapVisible");

	Params::URadarMap_C_SetRadarMapVisible_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.SetBackTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool URadarMap_C::SetBackTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "SetBackTitle");

	Params::URadarMap_C_SetBackTitle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RadarMap.RadarMap_C.GetEmptyIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TargetObjName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadarMapIconWidgets_C*      Array_Element                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IconListIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::GetEmptyIconWidget(class FName TargetObjName, class URadarMapIconWidgets_C** Array_Element, int32* IconListIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "GetEmptyIconWidget");

	Params::URadarMap_C_GetEmptyIconWidget_Params Parms{};

	Parms.TargetObjName = TargetObjName;

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;

	if (IconListIndex != nullptr)
		*IconListIndex = Parms.IconListIndex;

}


// Function RadarMap.RadarMap_C.GetMapChangeIconName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERADARMAP_ICON_TYPE     IconType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextFieldName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MapIconName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::GetMapChangeIconName(enum class ERADARMAP_ICON_TYPE IconType, class FName NextFieldName, int32 CharaID, class FName* MapIconName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "GetMapChangeIconName");

	Params::URadarMap_C_GetMapChangeIconName_Params Parms{};

	Parms.IconType = IconType;
	Parms.NextFieldName = NextFieldName;
	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (MapIconName != nullptr)
		*MapIconName = Parms.MapIconName;

}


// Function RadarMap.RadarMap_C.FrameIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::FrameIconColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "FrameIconColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.getAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::GetAngle(const struct FVector& StartPos, const struct FVector& TargetPos, float* Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "getAngle");

	Params::URadarMap_C_GetAngle_Params Parms{};

	Parms.StartPos = StartPos;
	Parms.TargetPos = TargetPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function RadarMap.RadarMap_C.GetZOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERADARMAP_ICON_TYPE     IconType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ZOrder                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::GetZOrder(enum class ERADARMAP_ICON_TYPE IconType, int32* ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "GetZOrder");

	Params::URadarMap_C_GetZOrder_Params Parms{};

	Parms.IconType = IconType;

	UObject::ProcessEvent(Func, &Parms);

	if (ZOrder != nullptr)
		*ZOrder = Parms.ZOrder;

}


// Function RadarMap.RadarMap_C.CreateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::CreateIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "CreateIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.GetPlayerIconPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   IconPos                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::GetPlayerIconPos(struct FVector2D* IconPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "GetPlayerIconPos");

	Params::URadarMap_C_GetPlayerIconPos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IconPos != nullptr)
		*IconPos = std::move(Parms.IconPos);

}


// Function RadarMap.RadarMap_C.UpdateIconPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::UpdateIconPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "UpdateIconPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.UpdatePlayerPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMap_C::UpdatePlayerPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "UpdatePlayerPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.GetShopIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ArrayElement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERADARMAP_ICON_TYPE     Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::GetShopIcon(class UObject* ArrayElement, bool* Success, struct FVector* Position, enum class ERADARMAP_ICON_TYPE* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "GetShopIcon");

	Params::URadarMap_C_GetShopIcon_Params Parms{};

	Parms.ArrayElement = ArrayElement;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function RadarMap.RadarMap_C.OnRefreshSpawnComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            ENoticeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 NoticeArgs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URadarMap_C::OnRefreshSpawnComplete(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "OnRefreshSpawnComplete");

	Params::URadarMap_C_OnRefreshSpawnComplete_Params Parms{};

	Parms.ENoticeType = ENoticeType;
	Parms.NoticeArgs = NoticeArgs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMap.RadarMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "Tick");

	Params::URadarMap_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMap.RadarMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URadarMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMap.RadarMap_C.ExecuteUbergraph_RadarMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMap_C::ExecuteUbergraph_RadarMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMap_C", "ExecuteUbergraph_RadarMap");

	Params::URadarMap_C_ExecuteUbergraph_RadarMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


