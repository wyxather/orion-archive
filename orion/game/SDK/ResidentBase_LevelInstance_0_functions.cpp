#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ResidentBase_LevelInstance_0.ResidentBase_C
// (Actor)

class UClass* AResidentBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResidentBase_C");

	return Clss;
}


// ResidentBase_C ResidentBase_LevelInstance_0.Default__ResidentBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AResidentBase_C* AResidentBase_C::GetDefaultObj()
{
	static class AResidentBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AResidentBase_C*>(AResidentBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


