#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// Class MJRawInput.MJRawInputFunctionLibrary
// (None)

class UClass* UMJRawInputFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MJRawInputFunctionLibrary");

	return Clss;
}


// MJRawInputFunctionLibrary MJRawInput.Default__MJRawInputFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMJRawInputFunctionLibrary* UMJRawInputFunctionLibrary::GetDefaultObj()
{
	static class UMJRawInputFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMJRawInputFunctionLibrary*>(UMJRawInputFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MJRawInput.MJRawInputFunctionLibrary.GetRegisteredDevices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FRegisteredDeviceInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRegisteredDeviceInfo> UMJRawInputFunctionLibrary::GetRegisteredDevices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MJRawInputFunctionLibrary", "GetRegisteredDevices");

	Params::UMJRawInputFunctionLibrary_GetRegisteredDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MJRawInput.MJRawInputSettings
// (None)

class UClass* UMJRawInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MJRawInputSettings");

	return Clss;
}


// MJRawInputSettings MJRawInput.Default__MJRawInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMJRawInputSettings* UMJRawInputSettings::GetDefaultObj()
{
	static class UMJRawInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMJRawInputSettings*>(UMJRawInputSettings::StaticClass()->DefaultObject);

	return Default;
}

}


