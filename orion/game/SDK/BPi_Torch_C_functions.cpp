#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Torch_C.BPi_Torch_C_C
// (Actor)

class UClass* ABPi_Torch_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Torch_C_C");

	return Clss;
}


// BPi_Torch_C_C BPi_Torch_C.Default__BPi_Torch_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Torch_C_C* ABPi_Torch_C_C::GetDefaultObj()
{
	static class ABPi_Torch_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Torch_C_C*>(ABPi_Torch_C_C::StaticClass()->DefaultObject);

	return Default;
}

}


