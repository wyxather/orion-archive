#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass Persistent.Persistent_C
// (Actor)

class UClass* APersistent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Persistent_C");

	return Clss;
}


// Persistent_C Persistent.Default__Persistent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APersistent_C* APersistent_C::GetDefaultObj()
{
	static class APersistent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APersistent_C*>(APersistent_C::StaticClass()->DefaultObject);

	return Default;
}

}


