#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibGetParam.LibGetParam_C
// (None)

class UClass* ULibGetParam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibGetParam_C");

	return Clss;
}


// LibGetParam_C LibGetParam.Default__LibGetParam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibGetParam_C* ULibGetParam_C::GetDefaultObj()
{
	static class ULibGetParam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibGetParam_C*>(ULibGetParam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibGetParam.LibGetParam_C.GetGameParamToSlateColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Min                                                              (Parm, OutParm)
// struct FSlateColor                 Max                                                              (Parm, OutParm)
// struct FSlateColor                 Init                                                             (Parm, OutParm)
// struct FSlateColor                 Param                                                            (Parm, OutParm)

void ULibGetParam_C::GetGameParamToSlateColor(class FName RowName, class UObject* __WorldContext, struct FSlateColor* Min, struct FSlateColor* Max, struct FSlateColor* Init, struct FSlateColor* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToSlateColor");

	Params::ULibGetParam_C_GetGameParamToSlateColor_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = std::move(Parms.Min);

	if (Max != nullptr)
		*Max = std::move(Parms.Max);

	if (Init != nullptr)
		*Init = std::move(Parms.Init);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function LibGetParam.LibGetParam_C.GetGameParamToStringArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              StringArray                                                      (Parm, OutParm)

void ULibGetParam_C::GetGameParamToStringArray(class FName RowName, class UObject* __WorldContext, TArray<class FString>* StringArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToStringArray");

	Params::ULibGetParam_C_GetGameParamToStringArray_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (StringArray != nullptr)
		*StringArray = std::move(Parms.StringArray);

}


// Function LibGetParam.LibGetParam_C.GetGameParamToFloatArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      FloatArray                                                       (Parm, OutParm)

void ULibGetParam_C::GetGameParamToFloatArray(class FName RowName, class UObject* __WorldContext, TArray<float>* FloatArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToFloatArray");

	Params::ULibGetParam_C_GetGameParamToFloatArray_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FloatArray != nullptr)
		*FloatArray = std::move(Parms.FloatArray);

}


// Function LibGetParam.LibGetParam_C.GetGameParamToIntArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      IntArray                                                         (Parm, OutParm)

void ULibGetParam_C::GetGameParamToIntArray(class FName RowName, class UObject* __WorldContext, TArray<int32>* IntArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToIntArray");

	Params::ULibGetParam_C_GetGameParamToIntArray_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IntArray != nullptr)
		*IntArray = std::move(Parms.IntArray);

}


// Function LibGetParam.LibGetParam_C.GetBattleParamToString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Min                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Max                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Init                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Param                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ULibGetParam_C::GetBattleParamToString(class FName RowName, class UObject* __WorldContext, class FString* Min, class FString* Max, class FString* Init, class FString* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetBattleParamToString");

	Params::ULibGetParam_C_GetBattleParamToString_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = std::move(Parms.Min);

	if (Max != nullptr)
		*Max = std::move(Parms.Max);

	if (Init != nullptr)
		*Init = std::move(Parms.Init);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function LibGetParam.LibGetParam_C.GetGameParamToString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Min                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Max                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Init                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Param                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ULibGetParam_C::GetGameParamToString(class FName RowName, class UObject* __WorldContext, class FString* Min, class FString* Max, class FString* Init, class FString* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToString");

	Params::ULibGetParam_C_GetGameParamToString_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = std::move(Parms.Min);

	if (Max != nullptr)
		*Max = std::move(Parms.Max);

	if (Init != nullptr)
		*Init = std::move(Parms.Init);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function LibGetParam.LibGetParam_C.GetBattleParamToVector
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetBattleParamToVector(class FName RowName, class UObject* __WorldContext, struct FVector* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetBattleParamToVector");

	Params::ULibGetParam_C_GetBattleParamToVector_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function LibGetParam.LibGetParam_C.NotFindErrorPrint
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::NotFindErrorPrint(const class FString& Label, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "NotFindErrorPrint");

	Params::ULibGetParam_C_NotFindErrorPrint_Params Parms{};

	Parms.Label = Label;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGetParam.LibGetParam_C.VarTypeErrorPrint
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::VarTypeErrorPrint(const class FString& Label, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "VarTypeErrorPrint");

	Params::ULibGetParam_C_VarTypeErrorPrint_Params Parms{};

	Parms.Label = Label;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGetParam.LibGetParam_C.GetBattleParamToByte
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Init                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetBattleParamToByte(class FName RowName, class UObject* __WorldContext, uint8* Min, uint8* Max, uint8* Init, uint8* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetBattleParamToByte");

	Params::ULibGetParam_C_GetBattleParamToByte_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;

	if (Init != nullptr)
		*Init = Parms.Init;

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibGetParam.LibGetParam_C.GetBattleParamToFloat
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Init                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetBattleParamToFloat(class FName RowName, class UObject* __WorldContext, float* Min, float* Max, float* Init, float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetBattleParamToFloat");

	Params::ULibGetParam_C_GetBattleParamToFloat_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;

	if (Init != nullptr)
		*Init = Parms.Init;

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibGetParam.LibGetParam_C.GetBattleParamToInt
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Init                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetBattleParamToInt(class FName RowName, class UObject* __WorldContext, int32* Min, int32* Max, int32* Init, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetBattleParamToInt");

	Params::ULibGetParam_C_GetBattleParamToInt_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;

	if (Init != nullptr)
		*Init = Parms.Init;

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibGetParam.LibGetParam_C.GetGameParamToByte
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Init                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetGameParamToByte(class FName RowName, class UObject* __WorldContext, uint8* Min, uint8* Max, uint8* Init, uint8* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToByte");

	Params::ULibGetParam_C_GetGameParamToByte_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;

	if (Init != nullptr)
		*Init = Parms.Init;

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibGetParam.LibGetParam_C.GetGameParamToFloat
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Init                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetGameParamToFloat(class FName RowName, class UObject* __WorldContext, float* Min, float* Max, float* Init, float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToFloat");

	Params::ULibGetParam_C_GetGameParamToFloat_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;

	if (Init != nullptr)
		*Init = Parms.Init;

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibGetParam.LibGetParam_C.GetGameParamToInt
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Init                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGetParam_C::GetGameParamToInt(class FName RowName, class UObject* __WorldContext, int32* Min, int32* Max, int32* Init, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGetParam_C", "GetGameParamToInt");

	Params::ULibGetParam_C_GetGameParamToInt_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;

	if (Init != nullptr)
		*Init = Parms.Init;

	if (Param != nullptr)
		*Param = Parms.Param;

}

}


