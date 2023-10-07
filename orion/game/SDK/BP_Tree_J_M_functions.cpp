#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Tree_J_M.BP_Tree_J_M_C
// (Actor)

class UClass* ABP_Tree_J_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tree_J_M_C");

	return Clss;
}


// BP_Tree_J_M_C BP_Tree_J_M.Default__BP_Tree_J_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Tree_J_M_C* ABP_Tree_J_M_C::GetDefaultObj()
{
	static class ABP_Tree_J_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Tree_J_M_C*>(ABP_Tree_J_M_C::StaticClass()->DefaultObject);

	return Default;
}

}


