#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTimeOfDay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent
struct ATimeOfDayActor_GetDirectionalLightComponent_Params
{
	class UDirectionalLightComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames
struct ATimeOfDayActor_EnumerateLayerNames_Params
{
	TArray<struct FName>                               OutLayerNames;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTimeOfDay.TimeOfDayActor.AddEventListener
struct ATimeOfDayActor_AddEventListener_Params
{
	class UObject*                                     InListener;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer
struct UTimeOfDayBlueprintLibrary_TransitionUpOneLayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer
struct UTimeOfDayBlueprintLibrary_TransitionToLayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ToLayer;                                                  // (Parm, ZeroConstructor)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer
struct UTimeOfDayBlueprintLibrary_TransitionDownOneLayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay
struct UTimeOfDayBlueprintLibrary_StartTimeOfDay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay
struct UTimeOfDayBlueprintLibrary_SetTimeOfDay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewTimeOfDay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay
struct UTimeOfDayBlueprintLibrary_PauseTimeOfDay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState
struct UTimeOfDayBlueprintLibrary_GetTimeOfDayState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ETimeOfDayState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay
struct UTimeOfDayBlueprintLibrary_GetTimeOfDay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener
struct UTimeOfDayBlueprintLibrary_AddTimeOfDayListener_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InListener;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay
struct UTimeOfDayComponent_SetUseCinematicTimeOfDay_Params
{
	bool                                               InUseCinematicTimeOfDay;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay
struct UTimeOfDayComponent_SetCinematicTimeOfDay_Params
{
	float                                              InCinematicTimeOfDay;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
