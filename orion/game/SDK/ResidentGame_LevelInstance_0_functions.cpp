#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ResidentGame_LevelInstance_0.ResidentGame_C
// (Actor)

class UClass* AResidentGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResidentGame_C");

	return Clss;
}


// ResidentGame_C ResidentGame_LevelInstance_0.Default__ResidentGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AResidentGame_C* AResidentGame_C::GetDefaultObj()
{
	static class AResidentGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AResidentGame_C*>(AResidentGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


