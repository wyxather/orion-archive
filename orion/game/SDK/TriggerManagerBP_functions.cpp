#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TriggerManagerBP.TriggerManagerBP_C
// (Actor)

class UClass* ATriggerManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TriggerManagerBP_C");

	return Clss;
}


// TriggerManagerBP_C TriggerManagerBP.Default__TriggerManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATriggerManagerBP_C* ATriggerManagerBP_C::GetDefaultObj()
{
	static class ATriggerManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATriggerManagerBP_C*>(ATriggerManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


