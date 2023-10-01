#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VaRestPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VaRestPlugin.VaRestJsonObject
// 0x0010 (0x0038 - 0x0028)
class UVaRestJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRestPlugin.VaRestJsonObject");
		return ptr;
	}


	void SetStringField(const class FString& FieldName, const class FString& StringValue);
	void SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray);
	void SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
	void SetNumberField(const class FString& FieldName, float Number);
	void SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray);
	void SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetBoolField(const class FString& FieldName, bool InValue);
	void SetBoolArrayField(const class FString& FieldName, TArray<bool> BoolArray);
	void SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*> inArray);
	void Reset();
	void RemoveField(const class FString& FieldName);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const class FString& FieldName);
	class FString GetStringField(const class FString& FieldName);
	TArray<class FString> GetStringArrayField(const class FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const class FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const class FString& FieldName);
	float GetNumberField(const class FString& FieldName);
	TArray<float> GetNumberArrayField(const class FString& FieldName);
	TArray<class FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const class FString& FieldName);
	bool GetBoolField(const class FString& FieldName);
	TArray<bool> GetBoolArrayField(const class FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const class FString& FieldName);
	class FString EncodeJsonToSingleString();
	class FString EncodeJson();
	bool DecodeJson(const class FString& JsonString);
	class UVaRestJsonObject* STATIC_ConstructJsonObject(class UObject* WorldContextObject);
};


// Class VaRestPlugin.VaRestJsonValue
// 0x0010 (0x0038 - 0x0028)
class UVaRestJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRestPlugin.VaRestJsonValue");
		return ptr;
	}


	bool IsNull();
	class FString GetTypeString();
	TEnumAsByte<EVaJson> GetType();
	class UVaRestJsonValue* STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue);
	class UVaRestJsonValue* STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	class UVaRestJsonValue* STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	class UVaRestJsonValue* STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray);
	class FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};


// Class VaRestPlugin.VaRestLibrary
// 0x0000 (0x0028 - 0x0028)
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRestPlugin.VaRestLibrary");
		return ptr;
	}


	class FString STATIC_PercentEncode(const class FString& Source);
	void STATIC_CallURL(class UObject* WorldContextObject, const class FString& URL, ERequestVerb Verb, ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback);
	bool STATIC_Base64EncodeData(TArray<unsigned char> Data, class FString* Dest);
	class FString STATIC_Base64Encode(const class FString& Source);
	bool STATIC_Base64DecodeData(const class FString& Source, TArray<unsigned char>* Dest);
	bool STATIC_Base64Decode(const class FString& Source, class FString* Dest);
};


// Class VaRestPlugin.VaRestRequestJSON
// 0x0190 (0x01B8 - 0x0028)
class UVaRestRequestJSON : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRequestComplete;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestFail;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET
	class FString                                      ResponseContent;                                          // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bIsValidJsonResponse;                                     // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0099(0x000F) MISSED OFFSET
	class UVaRestJsonObject*                           RequestJsonObj;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET
	class UVaRestJsonObject*                           ResponseJsonObj;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x00E8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRestPlugin.VaRestRequestJSON");
		return ptr;
	}


	void SetVerb(ERequestVerb Verb);
	void SetStringRequestContent(const class FString& Content);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	void SetCustomVerb(const class FString& Verb);
	void SetContentType(ERequestContentType ContentType);
	void SetBinaryRequestContent(TArray<unsigned char> Content);
	void SetBinaryContentType(const class FString& ContentType);
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	int RemoveTag(const struct FName& Tag);
	void ProcessURL(const class FString& URL);
	bool HasTag(const struct FName& Tag);
	class FString GetUrl();
	ERequestStatus GetStatus();
	class UVaRestJsonObject* GetResponseObject();
	class FString GetResponseHeader(const class FString& HeaderName);
	int GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<class FString> GetAllResponseHeaders();
	class UVaRestRequestJSON* STATIC_ConstructRequestExt(class UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType);
	class UVaRestRequestJSON* STATIC_ConstructRequest(class UObject* WorldContextObject);
	void Cancel();
	void ApplyURL(const class FString& URL, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UVaRestJsonObject** Result);
	void AddTag(const struct FName& Tag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
