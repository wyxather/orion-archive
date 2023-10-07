#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Tree_J_S.BP_Tree_J_S_C
// (Actor)

class UClass* ABP_Tree_J_S_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tree_J_S_C");

	return Clss;
}


// BP_Tree_J_S_C BP_Tree_J_S.Default__BP_Tree_J_S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Tree_J_S_C* ABP_Tree_J_S_C::GetDefaultObj()
{
	static class ABP_Tree_J_S_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Tree_J_S_C*>(ABP_Tree_J_S_C::StaticClass()->DefaultObject);

	return Default;
}

}


