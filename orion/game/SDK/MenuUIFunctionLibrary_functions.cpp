#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass MenuUIFunctionLibrary.MenuUIFunctionLibrary_C
// (None)

class UClass* UMenuUIFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuUIFunctionLibrary_C");

	return Clss;
}


// MenuUIFunctionLibrary_C MenuUIFunctionLibrary.Default__MenuUIFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuUIFunctionLibrary_C* UMenuUIFunctionLibrary_C::GetDefaultObj()
{
	static class UMenuUIFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuUIFunctionLibrary_C*>(UMenuUIFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorDecrementLoop_New
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DecrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUIFunctionLibrary_C::UICursorDecrementLoop_New(int32 Cursor, int32 DecrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorDecrementLoop_New");

	Params::UMenuUIFunctionLibrary_C_UICursorDecrementLoop_New_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.DecrementValue = DecrementValue;
	Parms.CursorMin = CursorMin;
	Parms.CursorMax = CursorMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorIncrementLoop_Ex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IncrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUIFunctionLibrary_C::UICursorIncrementLoop_Ex(int32 Cursor, int32 IncrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorIncrementLoop_Ex");

	Params::UMenuUIFunctionLibrary_C_UICursorIncrementLoop_Ex_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.IncrementValue = IncrementValue;
	Parms.CursorMin = CursorMin;
	Parms.CursorMax = CursorMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

	if (IsLoop != nullptr)
		*IsLoop = Parms.IsLoop;

}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorDecrementLoop_Ex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DecrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUIFunctionLibrary_C::UICursorDecrementLoop_Ex(int32 Cursor, int32 DecrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorDecrementLoop_Ex");

	Params::UMenuUIFunctionLibrary_C_UICursorDecrementLoop_Ex_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.DecrementValue = DecrementValue;
	Parms.CursorMin = CursorMin;
	Parms.CursorMax = CursorMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

	if (IsLoop != nullptr)
		*IsLoop = Parms.IsLoop;

}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorIncrementLoop
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IncrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLooped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUIFunctionLibrary_C::UICursorIncrementLoop(int32 Cursor, int32 IncrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLooped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorIncrementLoop");

	Params::UMenuUIFunctionLibrary_C_UICursorIncrementLoop_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.IncrementValue = IncrementValue;
	Parms.CursorMin = CursorMin;
	Parms.CursorMax = CursorMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

	if (IsLooped != nullptr)
		*IsLooped = Parms.IsLooped;

}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorDecrementLoop
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DecrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLooped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUIFunctionLibrary_C::UICursorDecrementLoop(int32 Cursor, int32 DecrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLooped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorDecrementLoop");

	Params::UMenuUIFunctionLibrary_C_UICursorDecrementLoop_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.DecrementValue = DecrementValue;
	Parms.CursorMin = CursorMin;
	Parms.CursorMax = CursorMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

	if (IsLooped != nullptr)
		*IsLooped = Parms.IsLooped;

}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorIncrement
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IncrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUIFunctionLibrary_C::UICursorIncrement(int32 Cursor, int32 IncrementValue, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorIncrement");

	Params::UMenuUIFunctionLibrary_C_UICursorIncrement_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.IncrementValue = IncrementValue;
	Parms.CursorMax = CursorMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

}


// Function MenuUIFunctionLibrary.MenuUIFunctionLibrary_C.UICursorDecrement
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DecrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCursor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUIFunctionLibrary_C::UICursorDecrement(int32 Cursor, int32 DecrementValue, int32 CursorMin, class UObject* __WorldContext, int32* NewCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuUIFunctionLibrary_C", "UICursorDecrement");

	Params::UMenuUIFunctionLibrary_C_UICursorDecrement_Params Parms{};

	Parms.Cursor = Cursor;
	Parms.DecrementValue = DecrementValue;
	Parms.CursorMin = CursorMin;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCursor != nullptr)
		*NewCursor = Parms.NewCursor;

}

}


