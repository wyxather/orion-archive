#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_MaterialTimeline.BP_MaterialTimeline_C
// (None)

class UClass* UBP_MaterialTimeline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MaterialTimeline_C");

	return Clss;
}


// BP_MaterialTimeline_C BP_MaterialTimeline.Default__BP_MaterialTimeline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MaterialTimeline_C* UBP_MaterialTimeline_C::GetDefaultObj()
{
	static class UBP_MaterialTimeline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MaterialTimeline_C*>(UBP_MaterialTimeline_C::StaticClass()->DefaultObject);

	return Default;
}

}


