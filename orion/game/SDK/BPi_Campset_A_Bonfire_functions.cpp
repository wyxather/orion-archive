#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Campset_A_Bonfire.BPi_Campset_A_Bonfire_C
// (Actor)

class UClass* ABPi_Campset_A_Bonfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Campset_A_Bonfire_C");

	return Clss;
}


// BPi_Campset_A_Bonfire_C BPi_Campset_A_Bonfire.Default__BPi_Campset_A_Bonfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Campset_A_Bonfire_C* ABPi_Campset_A_Bonfire_C::GetDefaultObj()
{
	static class ABPi_Campset_A_Bonfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Campset_A_Bonfire_C*>(ABPi_Campset_A_Bonfire_C::StaticClass()->DefaultObject);

	return Default;
}

}


