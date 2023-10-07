#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass Btl_SinExpose_LevelInstance_7.Btl_SinExpose_C
// (Actor)

class UClass* ABtl_SinExpose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Btl_SinExpose_C");

	return Clss;
}


// Btl_SinExpose_C Btl_SinExpose_LevelInstance_7.Default__Btl_SinExpose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABtl_SinExpose_C* ABtl_SinExpose_C::GetDefaultObj()
{
	static class ABtl_SinExpose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABtl_SinExpose_C*>(ABtl_SinExpose_C::StaticClass()->DefaultObject);

	return Default;
}

}


