#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class JSONQuery.JsonFieldData
class UJsonFieldData : public UObject
{
public:
	uint8                                        Pad_1FA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGetResult;                                       // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UJsonFieldData* GetDefaultObj();

	class FString ToString();
	class UJsonFieldData* SetStringArray(const class FString& Key, const TArray<class FString>& Data);
	class UJsonFieldData* SetString(const class FString& Key, const class FString& Value);
	class UJsonFieldData* SetObjectArray(const class FString& Key, const TArray<class UJsonFieldData*>& ArrayData);
	class UJsonFieldData* SetObject(const class FString& Key, class UJsonFieldData* ObjectData);
	class UJsonFieldData* SetNullArray(const class FString& Key, int32& Length);
	class UJsonFieldData* SetNull(const class FString& Key);
	class UJsonFieldData* SetIntArray(const class FString& Key, const TArray<int32>& Data);
	class UJsonFieldData* SetInt(const class FString& Key, int32 Value);
	class UJsonFieldData* SetFloatArray(const class FString& Key, const TArray<float>& Data);
	class UJsonFieldData* SetFloat(const class FString& Key, float Value);
	class UJsonFieldData* SetBoolean(const class FString& Key, bool Value);
	class UJsonFieldData* SetBoolArray(const class FString& Key, const TArray<bool>& Data);
	void PostRequestWithFile(const class FString& FilePath, const class FString& URL);
	void PostRequest(const class FString& URL);
	bool HasField(const class FString& Key);
	TArray<class FString> GetStringArray(const class FString& Key, bool* Success);
	class FString GetString(const class FString& Key, bool* Success);
	class UJsonFieldData* GetRequest(const class FString& URL);
	TArray<class FString> GetObjectKeys();
	TArray<class UJsonFieldData*> GetObjectArray(const class FString& Key, bool* Success);
	class UJsonFieldData* GetObject(const class FString& Key, bool* Success);
	bool GetIsNull(const class FString& Key, bool* FieldExists);
	TArray<int32> GetIntArray(const class FString& Key, bool* Success);
	int32 GetInt(const class FString& Key, bool* Success);
	TArray<float> GetFloatArray(const class FString& Key, bool* Success);
	float GetFloat(const class FString& Key, bool* Success);
	TArray<bool> GetBoolArray(const class FString& Key, bool* Success);
	bool GetBool(const class FString& Key, bool* Success);
	bool FromString(const class FString& DataString);
	bool FromFile(const class FString& FilePath);
	class UJsonFieldData* Create();
};

}


