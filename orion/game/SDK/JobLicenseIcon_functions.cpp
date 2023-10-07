#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobLicenseIcon.JobLicenseIcon_C
// (None)

class UClass* UJobLicenseIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobLicenseIcon_C");

	return Clss;
}


// JobLicenseIcon_C JobLicenseIcon.Default__JobLicenseIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobLicenseIcon_C* UJobLicenseIcon_C::GetDefaultObj()
{
	static class UJobLicenseIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobLicenseIcon_C*>(UJobLicenseIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobLicenseIcon.JobLicenseIcon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobLicenseIcon_C::SetIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobLicenseIcon_C", "SetIcon");

	Params::UJobLicenseIcon_C_SetIcon_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}

}


