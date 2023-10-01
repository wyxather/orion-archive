#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VaRestPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VaRestPlugin.VaRestJsonObject.SetStringField
struct UVaRestJsonObject_SetStringField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	class FString                                      StringValue;                                              // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
struct UVaRestJsonObject_SetStringArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class FString>                              StringArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestJsonObject.SetObjectField
struct UVaRestJsonObject_SetObjectField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	class UVaRestJsonObject*                           JsonObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
struct UVaRestJsonObject_SetObjectArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class UVaRestJsonObject*>                   ObjectArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestJsonObject.SetNumberField
struct UVaRestJsonObject_SetNumberField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	float                                              Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
struct UVaRestJsonObject_SetNumberArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<float>                                      NumberArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestJsonObject.SetField
struct UVaRestJsonObject_SetField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	class UVaRestJsonValue*                            JsonValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.SetBoolField
struct UVaRestJsonObject_SetBoolField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
struct UVaRestJsonObject_SetBoolArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<bool>                                       BoolArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestJsonObject.SetArrayField
struct UVaRestJsonObject_SetArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class UVaRestJsonValue*>                    inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestJsonObject.Reset
struct UVaRestJsonObject_Reset_Params
{
};

// Function VaRestPlugin.VaRestJsonObject.RemoveField
struct UVaRestJsonObject_RemoveField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
struct UVaRestJsonObject_MergeJsonObject_Params
{
	class UVaRestJsonObject*                           InJsonObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overwrite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.HasField
struct UVaRestJsonObject_HasField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.GetStringField
struct UVaRestJsonObject_GetStringField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
struct UVaRestJsonObject_GetStringArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.GetObjectField
struct UVaRestJsonObject_GetObjectField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	class UVaRestJsonObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
struct UVaRestJsonObject_GetObjectArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class UVaRestJsonObject*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.GetNumberField
struct UVaRestJsonObject_GetNumberField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
struct UVaRestJsonObject_GetNumberArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.GetFieldNames
struct UVaRestJsonObject_GetFieldNames_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.GetField
struct UVaRestJsonObject_GetField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	class UVaRestJsonValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.GetBoolField
struct UVaRestJsonObject_GetBoolField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
struct UVaRestJsonObject_GetBoolArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.GetArrayField
struct UVaRestJsonObject_GetArrayField_Params
{
	class FString                                      FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class UVaRestJsonValue*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
struct UVaRestJsonObject_EncodeJsonToSingleString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.EncodeJson
struct UVaRestJsonObject_EncodeJson_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonObject.DecodeJson
struct UVaRestJsonObject_DecodeJson_Params
{
	class FString                                      JsonString;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
struct UVaRestJsonObject_ConstructJsonObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestJsonObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.IsNull
struct UVaRestJsonValue_IsNull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.GetTypeString
struct UVaRestJsonValue_GetTypeString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonValue.GetType
struct UVaRestJsonValue_GetType_Params
{
	TEnumAsByte<EVaJson>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
struct UVaRestJsonValue_ConstructJsonValueString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StringValue;                                              // (Parm, ZeroConstructor)
	class UVaRestJsonValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
struct UVaRestJsonValue_ConstructJsonValueObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestJsonObject*                           JsonObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestJsonValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
struct UVaRestJsonValue_ConstructJsonValueNumber_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestJsonValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
struct UVaRestJsonValue_ConstructJsonValueBool_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestJsonValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
struct UVaRestJsonValue_ConstructJsonValueArray_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UVaRestJsonValue*>                    inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVaRestJsonValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.AsString
struct UVaRestJsonValue_AsString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestJsonValue.AsObject
struct UVaRestJsonValue_AsObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.AsNumber
struct UVaRestJsonValue_AsNumber_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.AsBool
struct UVaRestJsonValue_AsBool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestJsonValue.AsArray
struct UVaRestJsonValue_AsArray_Params
{
	TArray<class UVaRestJsonValue*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestLibrary.PercentEncode
struct UVaRestLibrary_PercentEncode_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestLibrary.CallURL
struct UVaRestLibrary_CallURL_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      URL;                                                      // (Parm, ZeroConstructor)
	ERequestVerb                                       Verb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ERequestContentType                                ContentType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestJsonObject*                           VaRestJson;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestLibrary.Base64EncodeData
struct UVaRestLibrary_Base64EncodeData_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Dest;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestLibrary.Base64Encode
struct UVaRestLibrary_Base64Encode_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestLibrary.Base64DecodeData
struct UVaRestLibrary_Base64DecodeData_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Dest;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestLibrary.Base64Decode
struct UVaRestLibrary_Base64Decode_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	class FString                                      Dest;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.SetVerb
struct UVaRestRequestJSON_SetVerb_Params
{
	ERequestVerb                                       Verb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
struct UVaRestRequestJSON_SetStringRequestContent_Params
{
	class FString                                      Content;                                                  // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
struct UVaRestRequestJSON_SetResponseObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
struct UVaRestRequestJSON_SetRequestObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.SetHeader
struct UVaRestRequestJSON_SetHeader_Params
{
	class FString                                      HeaderName;                                               // (Parm, ZeroConstructor)
	class FString                                      HeaderValue;                                              // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
struct UVaRestRequestJSON_SetCustomVerb_Params
{
	class FString                                      Verb;                                                     // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestRequestJSON.SetContentType
struct UVaRestRequestJSON_SetContentType_Params
{
	ERequestContentType                                ContentType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
struct UVaRestRequestJSON_SetBinaryRequestContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
struct UVaRestRequestJSON_SetBinaryContentType_Params
{
	class FString                                      ContentType;                                              // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
struct UVaRestRequestJSON_ResetResponseData_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
struct UVaRestRequestJSON_ResetRequestData_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ResetData
struct UVaRestRequestJSON_ResetData_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.RemoveTag
struct UVaRestRequestJSON_RemoveTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.ProcessURL
struct UVaRestRequestJSON_ProcessURL_Params
{
	class FString                                      URL;                                                      // (Parm, ZeroConstructor)
};

// Function VaRestPlugin.VaRestRequestJSON.HasTag
struct UVaRestRequestJSON_HasTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.GetUrl
struct UVaRestRequestJSON_GetUrl_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestRequestJSON.GetStatus
struct UVaRestRequestJSON_GetStatus_Params
{
	ERequestStatus                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
struct UVaRestRequestJSON_GetResponseObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
struct UVaRestRequestJSON_GetResponseHeader_Params
{
	class FString                                      HeaderName;                                               // (ConstParm, Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
struct UVaRestRequestJSON_GetResponseCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
struct UVaRestRequestJSON_GetRequestObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
struct UVaRestRequestJSON_GetAllResponseHeaders_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
struct UVaRestRequestJSON_ConstructRequestExt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ERequestVerb                                       Verb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ERequestContentType                                ContentType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestRequestJSON*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
struct UVaRestRequestJSON_ConstructRequest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaRestRequestJSON*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaRestPlugin.VaRestRequestJSON.Cancel
struct UVaRestRequestJSON_Cancel_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ApplyURL
struct UVaRestRequestJSON_ApplyURL_Params
{
	class FString                                      URL;                                                      // (Parm, ZeroConstructor)
	class UVaRestJsonObject*                           Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function VaRestPlugin.VaRestRequestJSON.AddTag
struct UVaRestRequestJSON_AddTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
