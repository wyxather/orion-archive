#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Chandelier_A_Indoor_AlwaysFire_Indoor.BP_Chandelier_A_Indoor_AlwaysFire_Indoor_C
// (Actor)

class UClass* ABP_Chandelier_A_Indoor_AlwaysFire_Indoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chandelier_A_Indoor_AlwaysFire_Indoor_C");

	return Clss;
}


// BP_Chandelier_A_Indoor_AlwaysFire_Indoor_C BP_Chandelier_A_Indoor_AlwaysFire_Indoor.Default__BP_Chandelier_A_Indoor_AlwaysFire_Indoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chandelier_A_Indoor_AlwaysFire_Indoor_C* ABP_Chandelier_A_Indoor_AlwaysFire_Indoor_C::GetDefaultObj()
{
	static class ABP_Chandelier_A_Indoor_AlwaysFire_Indoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chandelier_A_Indoor_AlwaysFire_Indoor_C*>(ABP_Chandelier_A_Indoor_AlwaysFire_Indoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


