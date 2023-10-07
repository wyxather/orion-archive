#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PotentialityActionGage.PotentialityActionGage_C
// (None)

class UClass* UPotentialityActionGage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PotentialityActionGage_C");

	return Clss;
}


// PotentialityActionGage_C PotentialityActionGage.Default__PotentialityActionGage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPotentialityActionGage_C* UPotentialityActionGage_C::GetDefaultObj()
{
	static class UPotentialityActionGage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPotentialityActionGage_C*>(UPotentialityActionGage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PotentialityActionGage.PotentialityActionGage_C.Setup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayableCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPotentialityActionGage_C::Setup(enum class EPlayableCharacterID PlayableCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "Setup");

	Params::UPotentialityActionGage_C_Setup_Params Parms{};

	Parms.PlayableCharacterId = PlayableCharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PotentialityActionGage.PotentialityActionGage_C.SetupMaterial
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialityActionGage_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PotentialityActionGage.PotentialityActionGage_C.PlayOpenAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialityActionGage_C::PlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "PlayOpenAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PotentialityActionGage.PotentialityActionGage_C.PlayCloseAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialityActionGage_C::PlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "PlayCloseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PotentialityActionGage.PotentialityActionGage_C.OnRevival
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialityActionGage_C::OnRevival()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "OnRevival");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PotentialityActionGage.PotentialityActionGage_C.OnDead
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialityActionGage_C::OnDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "OnDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PotentialityActionGage.PotentialityActionGage_C.UpdateGage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValueUp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSkipAnimation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPotentialityActionGage_C::UpdateGage(float InValue, bool IsValueUp, bool IsSkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "UpdateGage");

	Params::UPotentialityActionGage_C_UpdateGage_Params Parms{};

	Parms.InValue = InValue;
	Parms.IsValueUp = IsValueUp;
	Parms.IsSkipAnimation = IsSkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PotentialityActionGage.PotentialityActionGage_C.SetValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSkipAnim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPotentialityActionGage_C::SetValue(float CurrentValue, float MaxValue, bool IsSkipAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "SetValue");

	Params::UPotentialityActionGage_C_SetValue_Params Parms{};

	Parms.CurrentValue = CurrentValue;
	Parms.MaxValue = MaxValue;
	Parms.IsSkipAnim = IsSkipAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PotentialityActionGage.PotentialityActionGage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPotentialityActionGage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "PreConstruct");

	Params::UPotentialityActionGage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PotentialityActionGage.PotentialityActionGage_C.ExecuteUbergraph_PotentialityActionGage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPotentialityActionGage_C::ExecuteUbergraph_PotentialityActionGage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionGage_C", "ExecuteUbergraph_PotentialityActionGage");

	Params::UPotentialityActionGage_C_ExecuteUbergraph_PotentialityActionGage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


