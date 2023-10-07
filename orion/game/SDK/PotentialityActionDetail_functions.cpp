#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PotentialityActionDetail.PotentialityActionDetail_C
// (None)

class UClass* UPotentialityActionDetail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PotentialityActionDetail_C");

	return Clss;
}


// PotentialityActionDetail_C PotentialityActionDetail.Default__PotentialityActionDetail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPotentialityActionDetail_C* UPotentialityActionDetail_C::GetDefaultObj()
{
	static class UPotentialityActionDetail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPotentialityActionDetail_C*>(UPotentialityActionDetail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PotentialityActionDetail.PotentialityActionDetail_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPotentialityActionDetail_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionDetail_C", "SetReference");

	Params::UPotentialityActionDetail_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PotentialityActionDetail.PotentialityActionDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPotentialityActionDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionDetail_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PotentialityActionDetail.PotentialityActionDetail_C.ExecuteUbergraph_PotentialityActionDetail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPotentialityActionDetail_C::ExecuteUbergraph_PotentialityActionDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PotentialityActionDetail_C", "ExecuteUbergraph_PotentialityActionDetail");

	Params::UPotentialityActionDetail_C_ExecuteUbergraph_PotentialityActionDetail_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


