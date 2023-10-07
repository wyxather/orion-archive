#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_BarCharacter.BPI_BarCharacter_C
// (None)

class UClass* IBPI_BarCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_BarCharacter_C");

	return Clss;
}


// BPI_BarCharacter_C BPI_BarCharacter.Default__BPI_BarCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_BarCharacter_C* IBPI_BarCharacter_C::GetDefaultObj()
{
	static class IBPI_BarCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_BarCharacter_C*>(IBPI_BarCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


