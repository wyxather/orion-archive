#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass Flashback.Flashback_C
// (None)

class UClass* UFlashback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Flashback_C");

	return Clss;
}


// Flashback_C Flashback.Default__Flashback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlashback_C* UFlashback_C::GetDefaultObj()
{
	static class UFlashback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlashback_C*>(UFlashback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Flashback.Flashback_C.GetFlashBackSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFlashbackSequence      NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlashback_C::GetFlashBackSequence(enum class EFlashbackSequence* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Flashback_C", "GetFlashBackSequence");

	Params::UFlashback_C_GetFlashBackSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function Flashback.Flashback_C.InitFlashback
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BackColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFlashback_C::InitFlashback(float Alpha, class UTexture2D* Texture, const struct FLinearColor& BackColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Flashback_C", "InitFlashback");

	Params::UFlashback_C_InitFlashback_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.Texture = Texture;
	Parms.BackColor = BackColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Flashback.Flashback_C.UpdateMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFlashback_C::UpdateMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Flashback_C", "UpdateMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Flashback.Flashback_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlashback_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Flashback_C", "Tick");

	Params::UFlashback_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flashback.Flashback_C.ExecuteUbergraph_Flashback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlashback_C::ExecuteUbergraph_Flashback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Flashback_C", "ExecuteUbergraph_Flashback");

	Params::UFlashback_C_ExecuteUbergraph_Flashback_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


