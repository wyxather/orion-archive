#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_RichEventPivotActor.BP_RichEventPivotActor_C
// (Actor)

class UClass* ABP_RichEventPivotActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichEventPivotActor_C");

	return Clss;
}


// BP_RichEventPivotActor_C BP_RichEventPivotActor.Default__BP_RichEventPivotActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RichEventPivotActor_C* ABP_RichEventPivotActor_C::GetDefaultObj()
{
	static class ABP_RichEventPivotActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RichEventPivotActor_C*>(ABP_RichEventPivotActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


