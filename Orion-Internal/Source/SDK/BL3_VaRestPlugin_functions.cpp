// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VaRestPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VaRestPlugin.VaRestJsonObject.SetStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// class FString                  StringValue                    (Parm, ZeroConstructor)

void UVaRestJsonObject::SetStringField(const class FString& FieldName, const class FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetStringField");

	UVaRestJsonObject_SetStringField_Params params;
	params.FieldName = FieldName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<class FString>          StringArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestJsonObject::SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetStringArrayField");

	UVaRestJsonObject_SetStringArrayField_Params params;
	params.FieldName = FieldName;
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestJsonObject::SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetObjectField");

	UVaRestJsonObject_SetObjectField_Params params;
	params.FieldName = FieldName;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<class UVaRestJsonObject*> ObjectArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestJsonObject::SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField");

	UVaRestJsonObject_SetObjectArrayField_Params params;
	params.FieldName = FieldName;
	params.ObjectArray = ObjectArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetNumberField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// float                          Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestJsonObject::SetNumberField(const class FString& FieldName, float Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetNumberField");

	UVaRestJsonObject_SetNumberField_Params params;
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<float>                  NumberArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestJsonObject::SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField");

	UVaRestJsonObject_SetNumberArrayField_Params params;
	params.FieldName = FieldName;
	params.NumberArray = NumberArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// class UVaRestJsonValue*        JsonValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestJsonObject::SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetField");

	UVaRestJsonObject_SetField_Params params;
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetBoolField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestJsonObject::SetBoolField(const class FString& FieldName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetBoolField");

	UVaRestJsonObject_SetBoolField_Params params;
	params.FieldName = FieldName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<bool>                   BoolArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestJsonObject::SetBoolArrayField(const class FString& FieldName, TArray<bool> BoolArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField");

	UVaRestJsonObject_SetBoolArrayField_Params params;
	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.SetArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<class UVaRestJsonValue*> inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestJsonObject::SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetArrayField");

	UVaRestJsonObject_SetArrayField_Params params;
	params.FieldName = FieldName;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.Reset
// (Final, Native, Public, BlueprintCallable)

void UVaRestJsonObject::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.Reset");

	UVaRestJsonObject_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.RemoveField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)

void UVaRestJsonObject::RemoveField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.RemoveField");

	UVaRestJsonObject_RemoveField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       InJsonObject                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overwrite                      (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.MergeJsonObject");

	UVaRestJsonObject_MergeJsonObject_Params params;
	params.InJsonObject = InJsonObject;
	params.Overwrite = Overwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestJsonObject.HasField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestJsonObject::HasField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.HasField");

	UVaRestJsonObject_HasField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetStringField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestJsonObject::GetStringField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetStringField");

	UVaRestJsonObject_GetStringField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UVaRestJsonObject::GetStringArrayField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetStringArrayField");

	UVaRestJsonObject_GetStringArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetObjectField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetObjectField");

	UVaRestJsonObject_GetObjectField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<class UVaRestJsonObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField");

	UVaRestJsonObject_GetObjectArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetNumberField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVaRestJsonObject::GetNumberField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetNumberField");

	UVaRestJsonObject_GetNumberField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UVaRestJsonObject::GetNumberArrayField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField");

	UVaRestJsonObject_GetNumberArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetFieldNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UVaRestJsonObject::GetFieldNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetFieldNames");

	UVaRestJsonObject_GetFieldNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonValue* UVaRestJsonObject::GetField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetField");

	UVaRestJsonObject_GetField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetBoolField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestJsonObject::GetBoolField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetBoolField");

	UVaRestJsonObject_GetBoolField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UVaRestJsonObject::GetBoolArrayField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField");

	UVaRestJsonObject_GetBoolArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  FieldName                      (Parm, ZeroConstructor)
// TArray<class UVaRestJsonValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const class FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetArrayField");

	UVaRestJsonObject_GetArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString");

	UVaRestJsonObject_EncodeJsonToSingleString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.EncodeJson
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestJsonObject::EncodeJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.EncodeJson");

	UVaRestJsonObject_EncodeJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.DecodeJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  JsonString                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestJsonObject::DecodeJson(const class FString& JsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.DecodeJson");

	UVaRestJsonObject_DecodeJson_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonObject* UVaRestJsonObject::STATIC_ConstructJsonObject(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject");

	UVaRestJsonObject_ConstructJsonObject_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.IsNull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestJsonValue::IsNull()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.IsNull");

	UVaRestJsonValue_IsNull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.GetTypeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestJsonValue::GetTypeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.GetTypeString");

	UVaRestJsonValue_GetTypeString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EVaJson>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EVaJson> UVaRestJsonValue::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.GetType");

	UVaRestJsonValue_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StringValue                    (Parm, ZeroConstructor)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString");

	UVaRestJsonValue_ConstructJsonValueString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject");

	UVaRestJsonValue_ConstructJsonValueObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Number                         (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber");

	UVaRestJsonValue_ConstructJsonValueNumber_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool");

	UVaRestJsonValue_ConstructJsonValueBool_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UVaRestJsonValue*> inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray");

	UVaRestJsonValue_ConstructJsonValueArray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestJsonValue::AsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsString");

	UVaRestJsonValue_AsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsObject");

	UVaRestJsonValue_AsObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVaRestJsonValue::AsNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsNumber");

	UVaRestJsonValue_AsNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestJsonValue::AsBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsBool");

	UVaRestJsonValue_AsBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVaRestJsonValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsArray");

	UVaRestJsonValue_AsArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.PercentEncode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Source                         (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestLibrary::STATIC_PercentEncode(const class FString& Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.PercentEncode");

	UVaRestLibrary_PercentEncode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.CallURL
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  URL                            (Parm, ZeroConstructor)
// ERequestVerb                   Verb                           (Parm, ZeroConstructor, IsPlainOldData)
// ERequestContentType            ContentType                    (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestJsonObject*       VaRestJson                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestLibrary::STATIC_CallURL(class UObject* WorldContextObject, const class FString& URL, ERequestVerb Verb, ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.CallURL");

	UVaRestLibrary_CallURL_Params params;
	params.WorldContextObject = WorldContextObject;
	params.URL = URL;
	params.Verb = Verb;
	params.ContentType = ContentType;
	params.VaRestJson = VaRestJson;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestLibrary.Base64EncodeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  Dest                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestLibrary::STATIC_Base64EncodeData(TArray<unsigned char> Data, class FString* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64EncodeData");

	UVaRestLibrary_Base64EncodeData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64Encode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Source                         (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestLibrary::STATIC_Base64Encode(const class FString& Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64Encode");

	UVaRestLibrary_Base64Encode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64DecodeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Source                         (Parm, ZeroConstructor)
// TArray<unsigned char>          Dest                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestLibrary::STATIC_Base64DecodeData(const class FString& Source, TArray<unsigned char>* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64DecodeData");

	UVaRestLibrary_Base64DecodeData_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64Decode
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Source                         (Parm, ZeroConstructor)
// class FString                  Dest                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestLibrary::STATIC_Base64Decode(const class FString& Source, class FString* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64Decode");

	UVaRestLibrary_Base64Decode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.SetVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERequestVerb                   Verb                           (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestRequestJSON::SetVerb(ERequestVerb Verb)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetVerb");

	UVaRestRequestJSON_SetVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Content                        (Parm, ZeroConstructor)

void UVaRestRequestJSON::SetStringRequestContent(const class FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent");

	UVaRestRequestJSON_SetStringRequestContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetResponseObject");

	UVaRestRequestJSON_SetResponseObject_Params params;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetRequestObject");

	UVaRestRequestJSON_SetRequestObject_Params params;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  HeaderName                     (Parm, ZeroConstructor)
// class FString                  HeaderValue                    (Parm, ZeroConstructor)

void UVaRestRequestJSON::SetHeader(const class FString& HeaderName, const class FString& HeaderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetHeader");

	UVaRestRequestJSON_SetHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Verb                           (Parm, ZeroConstructor)

void UVaRestRequestJSON::SetCustomVerb(const class FString& Verb)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb");

	UVaRestRequestJSON_SetCustomVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERequestContentType            ContentType                    (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestRequestJSON::SetContentType(ERequestContentType ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetContentType");

	UVaRestRequestJSON_SetContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVaRestRequestJSON::SetBinaryRequestContent(TArray<unsigned char> Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent");

	UVaRestRequestJSON_SetBinaryRequestContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ContentType                    (Parm, ZeroConstructor)

void UVaRestRequestJSON::SetBinaryContentType(const class FString& ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType");

	UVaRestRequestJSON_SetBinaryContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
// (Final, Native, Public, BlueprintCallable)

void UVaRestRequestJSON::ResetResponseData()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetResponseData");

	UVaRestRequestJSON_ResetResponseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
// (Final, Native, Public, BlueprintCallable)

void UVaRestRequestJSON::ResetRequestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetRequestData");

	UVaRestRequestJSON_ResetRequestData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.ResetData
// (Final, Native, Public, BlueprintCallable)

void UVaRestRequestJSON::ResetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetData");

	UVaRestRequestJSON_ResetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVaRestRequestJSON::RemoveTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.RemoveTag");

	UVaRestRequestJSON_RemoveTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ProcessURL
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                  URL                            (Parm, ZeroConstructor)

void UVaRestRequestJSON::ProcessURL(const class FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ProcessURL");

	UVaRestRequestJSON_ProcessURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVaRestRequestJSON::HasTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.HasTag");

	UVaRestRequestJSON_HasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestRequestJSON::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetUrl");

	UVaRestRequestJSON_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERequestStatus                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERequestStatus UVaRestRequestJSON::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetStatus");

	UVaRestRequestJSON_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseObject");

	UVaRestRequestJSON_GetResponseObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  HeaderName                     (ConstParm, Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVaRestRequestJSON::GetResponseHeader(const class FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader");

	UVaRestRequestJSON_GetResponseHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVaRestRequestJSON::GetResponseCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseCode");

	UVaRestRequestJSON_GetResponseCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetRequestObject");

	UVaRestRequestJSON_GetRequestObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders");

	UVaRestRequestJSON_GetAllResponseHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// ERequestVerb                   Verb                           (Parm, ZeroConstructor, IsPlainOldData)
// ERequestContentType            ContentType                    (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestRequestJSON*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestRequestJSON* UVaRestRequestJSON::STATIC_ConstructRequestExt(class UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt");

	UVaRestRequestJSON_ConstructRequestExt_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Verb = Verb;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UVaRestRequestJSON*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVaRestRequestJSON* UVaRestRequestJSON::STATIC_ConstructRequest(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ConstructRequest");

	UVaRestRequestJSON_ConstructRequest_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.Cancel
// (Final, Native, Public, BlueprintCallable)

void UVaRestRequestJSON::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.Cancel");

	UVaRestRequestJSON_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaRestPlugin.VaRestRequestJSON.ApplyURL
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  URL                            (Parm, ZeroConstructor)
// class UVaRestJsonObject*       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UVaRestRequestJSON::ApplyURL(const class FString& URL, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UVaRestJsonObject** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ApplyURL");

	UVaRestRequestJSON_ApplyURL_Params params;
	params.URL = URL;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VaRestPlugin.VaRestRequestJSON.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UVaRestRequestJSON::AddTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.AddTag");

	UVaRestRequestJSON_AddTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
