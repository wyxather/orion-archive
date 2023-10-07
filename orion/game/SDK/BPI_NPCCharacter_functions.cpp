#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_NPCCharacter.BPI_NPCCharacter_C
// (None)

class UClass* IBPI_NPCCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCCharacter_C");

	return Clss;
}


// BPI_NPCCharacter_C BPI_NPCCharacter.Default__BPI_NPCCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCCharacter_C* IBPI_NPCCharacter_C::GetDefaultObj()
{
	static class IBPI_NPCCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCCharacter_C*>(IBPI_NPCCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


