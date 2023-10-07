#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Tree_J_L.BP_Tree_J_L_C
// (Actor)

class UClass* ABP_Tree_J_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tree_J_L_C");

	return Clss;
}


// BP_Tree_J_L_C BP_Tree_J_L.Default__BP_Tree_J_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Tree_J_L_C* ABP_Tree_J_L_C::GetDefaultObj()
{
	static class ABP_Tree_J_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Tree_J_L_C*>(ABP_Tree_J_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


