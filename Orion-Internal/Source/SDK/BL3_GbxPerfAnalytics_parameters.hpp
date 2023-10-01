#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxPerfAnalytics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryVector_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryString_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryRotator_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	struct FRotator                                    Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryInt_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryFloat_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryByte_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryBool_Params
{
	struct FK2TelemetryValues                          StatArray;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESetTelemetryValue                                 Opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FK2TelemetryValues                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef
struct UGbxTelemetryBlueprintLibrary_MakeTelemetryEventRef_Params
{
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	struct FK2EventRef                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid
struct UGbxTelemetryBlueprintLibrary_IsValid_Params
{
	struct FK2EventRef                                 EventRef;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues
struct UGbxTelemetryBlueprintLibrary_EmitTelemetryValues_Params
{
	class FString                                      EventContext;                                             // (Parm, ZeroConstructor)
	struct FK2TelemetryValues                          Values;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (Parm, IsPlainOldData)
	bool                                               bRunOnClient;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent
struct UGbxTelemetryBlueprintLibrary_EmitTelemetryEvent_Params
{
	struct FK2EventRef                                 Event;                                                    // (Parm)
	class FString                                      EventContext;                                             // (Parm, ZeroConstructor)
	class UObject*                                     EventContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventInstigatorObject;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (Parm, IsPlainOldData)
	bool                                               bRunOnClient;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef
struct UGbxTelemetryBlueprintLibrary_DefineTelemetryEventRef_Params
{
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	class FString                                      TableDesc;                                                // (Parm, ZeroConstructor)
	struct FK2EventRef                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
