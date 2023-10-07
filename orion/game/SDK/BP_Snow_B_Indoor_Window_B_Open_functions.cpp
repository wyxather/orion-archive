#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Snow_B_Indoor_Window_B_Open.BP_Snow_B_Indoor_Window_B_Open_C
// (Actor)

class UClass* ABP_Snow_B_Indoor_Window_B_Open_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Snow_B_Indoor_Window_B_Open_C");

	return Clss;
}


// BP_Snow_B_Indoor_Window_B_Open_C BP_Snow_B_Indoor_Window_B_Open.Default__BP_Snow_B_Indoor_Window_B_Open_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Snow_B_Indoor_Window_B_Open_C* ABP_Snow_B_Indoor_Window_B_Open_C::GetDefaultObj()
{
	static class ABP_Snow_B_Indoor_Window_B_Open_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Snow_B_Indoor_Window_B_Open_C*>(ABP_Snow_B_Indoor_Window_B_Open_C::StaticClass()->DefaultObject);

	return Default;
}

}


