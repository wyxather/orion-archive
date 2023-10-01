// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxPerfAnalytics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryVector(const class FString& Key, const struct FVector& Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryVector_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// class FString                  Value                          (Parm, ZeroConstructor)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryString(const class FString& Key, const class FString& Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryString_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// struct FRotator                Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryRotator(const class FString& Key, const struct FRotator& Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryRotator_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryInt(const class FString& Key, int Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryInt_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryFloat(const class FString& Key, float Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryFloat_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// unsigned char                  Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryByte(const class FString& Key, unsigned char Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryByte_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues      StatArray                      (Parm, OutParm, ReferenceParm)
// class FString                  Key                            (Parm, ZeroConstructor)
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ESetTelemetryValue             Opt                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FK2TelemetryValues      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryBool(const class FString& Key, bool Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool");

	UGbxTelemetryBlueprintLibrary_SetNamedTelemetryBool_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Opt = Opt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatArray != nullptr)
		*StatArray = params.StatArray;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  EventName                      (Parm, ZeroConstructor)
// struct FK2EventRef             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2EventRef UGbxTelemetryBlueprintLibrary::STATIC_MakeTelemetryEventRef(const class FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef");

	UGbxTelemetryBlueprintLibrary_MakeTelemetryEventRef_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FK2EventRef             EventRef                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxTelemetryBlueprintLibrary::STATIC_IsValid(const struct FK2EventRef& EventRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid");

	UGbxTelemetryBlueprintLibrary_IsValid_Params params;
	params.EventRef = EventRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                  EventContext                   (Parm, ZeroConstructor)
// struct FK2TelemetryValues      Values                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (Parm, IsPlainOldData)
// bool                           bRunOnClient                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxTelemetryBlueprintLibrary::STATIC_EmitTelemetryValues(const class FString& EventContext, const struct FK2TelemetryValues& Values, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues");

	UGbxTelemetryBlueprintLibrary_EmitTelemetryValues_Params params;
	params.EventContext = EventContext;
	params.Values = Values;
	params.WorldContextObject = WorldContextObject;
	params.Guid = Guid;
	params.bRunOnClient = bRunOnClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FK2EventRef             Event                          (Parm)
// class FString                  EventContext                   (Parm, ZeroConstructor)
// class UObject*                 EventContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventInstigatorObject          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (Parm, IsPlainOldData)
// bool                           bRunOnClient                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxTelemetryBlueprintLibrary::STATIC_EmitTelemetryEvent(const struct FK2EventRef& Event, const class FString& EventContext, class UObject* EventContextObject, class UObject* EventInstigatorObject, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent");

	UGbxTelemetryBlueprintLibrary_EmitTelemetryEvent_Params params;
	params.Event = Event;
	params.EventContext = EventContext;
	params.EventContextObject = EventContextObject;
	params.EventInstigatorObject = EventInstigatorObject;
	params.WorldContextObject = WorldContextObject;
	params.Guid = Guid;
	params.bRunOnClient = bRunOnClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  EventName                      (Parm, ZeroConstructor)
// class FString                  TableDesc                      (Parm, ZeroConstructor)
// struct FK2EventRef             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FK2EventRef UGbxTelemetryBlueprintLibrary::STATIC_DefineTelemetryEventRef(const class FString& EventName, const class FString& TableDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef");

	UGbxTelemetryBlueprintLibrary_DefineTelemetryEventRef_Params params;
	params.EventName = EventName;
	params.TableDesc = TableDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
