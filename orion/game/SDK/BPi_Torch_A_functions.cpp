#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Torch_A.BPi_Torch_A_C
// (Actor)

class UClass* ABPi_Torch_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Torch_A_C");

	return Clss;
}


// BPi_Torch_A_C BPi_Torch_A.Default__BPi_Torch_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Torch_A_C* ABPi_Torch_A_C::GetDefaultObj()
{
	static class ABPi_Torch_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Torch_A_C*>(ABPi_Torch_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


