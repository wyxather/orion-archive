#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_PlayerCharacter.BPI_PlayerCharacter_C
// (None)

class UClass* IBPI_PlayerCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlayerCharacter_C");

	return Clss;
}


// BPI_PlayerCharacter_C BPI_PlayerCharacter.Default__BPI_PlayerCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlayerCharacter_C* IBPI_PlayerCharacter_C::GetDefaultObj()
{
	static class IBPI_PlayerCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlayerCharacter_C*>(IBPI_PlayerCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


