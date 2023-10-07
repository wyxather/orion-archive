#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Snow_Mansion_A_Indoor_Window_A.BP_Snow_Mansion_A_Indoor_Window_A_C
// (Actor)

class UClass* ABP_Snow_Mansion_A_Indoor_Window_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Snow_Mansion_A_Indoor_Window_A_C");

	return Clss;
}


// BP_Snow_Mansion_A_Indoor_Window_A_C BP_Snow_Mansion_A_Indoor_Window_A.Default__BP_Snow_Mansion_A_Indoor_Window_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Snow_Mansion_A_Indoor_Window_A_C* ABP_Snow_Mansion_A_Indoor_Window_A_C::GetDefaultObj()
{
	static class ABP_Snow_Mansion_A_Indoor_Window_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Snow_Mansion_A_Indoor_Window_A_C*>(ABP_Snow_Mansion_A_Indoor_Window_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


