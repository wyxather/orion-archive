#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Torch_B.BPi_Torch_B_C
// (Actor)

class UClass* ABPi_Torch_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Torch_B_C");

	return Clss;
}


// BPi_Torch_B_C BPi_Torch_B.Default__BPi_Torch_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Torch_B_C* ABPi_Torch_B_C::GetDefaultObj()
{
	static class ABPi_Torch_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Torch_B_C*>(ABPi_Torch_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


