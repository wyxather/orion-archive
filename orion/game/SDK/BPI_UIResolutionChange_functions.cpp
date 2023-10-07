#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_UIResolutionChange.BPI_UIResolutionChange_C
// (None)

class UClass* IBPI_UIResolutionChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_UIResolutionChange_C");

	return Clss;
}


// BPI_UIResolutionChange_C BPI_UIResolutionChange.Default__BPI_UIResolutionChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_UIResolutionChange_C* IBPI_UIResolutionChange_C::GetDefaultObj()
{
	static class IBPI_UIResolutionChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_UIResolutionChange_C*>(IBPI_UIResolutionChange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_UIResolutionChange.BPI_UIResolutionChange_C.OnResolutionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_UIResolutionChange_C::OnResolutionChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_UIResolutionChange_C", "OnResolutionChange");



	UObject::ProcessEvent(Func, nullptr);

}

}


