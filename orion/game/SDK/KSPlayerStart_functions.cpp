#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSPlayerStart.KSPlayerStart_C
// (Actor)

class UClass* AKSPlayerStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSPlayerStart_C");

	return Clss;
}


// KSPlayerStart_C KSPlayerStart.Default__KSPlayerStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSPlayerStart_C* AKSPlayerStart_C::GetDefaultObj()
{
	static class AKSPlayerStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSPlayerStart_C*>(AKSPlayerStart_C::StaticClass()->DefaultObject);

	return Default;
}

}


