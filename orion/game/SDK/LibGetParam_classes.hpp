#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibGetParam.LibGetParam_C
class ULibGetParam_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibGetParam_C* GetDefaultObj();

	void GetGameParamToSlateColor(class FName RowName, class UObject* __WorldContext, struct FSlateColor* Min, struct FSlateColor* Max, struct FSlateColor* Init, struct FSlateColor* Param);
	void GetGameParamToStringArray(class FName RowName, class UObject* __WorldContext, TArray<class FString>* StringArray);
	void GetGameParamToFloatArray(class FName RowName, class UObject* __WorldContext, TArray<float>* FloatArray);
	void GetGameParamToIntArray(class FName RowName, class UObject* __WorldContext, TArray<int32>* IntArray);
	void GetBattleParamToString(class FName RowName, class UObject* __WorldContext, class FString* Min, class FString* Max, class FString* Init, class FString* Param);
	void GetGameParamToString(class FName RowName, class UObject* __WorldContext, class FString* Min, class FString* Max, class FString* Init, class FString* Param);
	void GetBattleParamToVector(class FName RowName, class UObject* __WorldContext, struct FVector* Param);
	void NotFindErrorPrint(const class FString& Label, class UObject* __WorldContext);
	void VarTypeErrorPrint(const class FString& Label, class UObject* __WorldContext);
	void GetBattleParamToByte(class FName RowName, class UObject* __WorldContext, uint8* Min, uint8* Max, uint8* Init, uint8* Param);
	void GetBattleParamToFloat(class FName RowName, class UObject* __WorldContext, float* Min, float* Max, float* Init, float* Param);
	void GetBattleParamToInt(class FName RowName, class UObject* __WorldContext, int32* Min, int32* Max, int32* Init, int32* Param);
	void GetGameParamToByte(class FName RowName, class UObject* __WorldContext, uint8* Min, uint8* Max, uint8* Init, uint8* Param);
	void GetGameParamToFloat(class FName RowName, class UObject* __WorldContext, float* Min, float* Max, float* Init, float* Param);
	void GetGameParamToInt(class FName RowName, class UObject* __WorldContext, int32* Min, int32* Max, int32* Init, int32* Param);
};

}


