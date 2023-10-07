#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_OrderIconInterface.BPI_OrderIconInterface_C
// (None)

class UClass* IBPI_OrderIconInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_OrderIconInterface_C");

	return Clss;
}


// BPI_OrderIconInterface_C BPI_OrderIconInterface.Default__BPI_OrderIconInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_OrderIconInterface_C* IBPI_OrderIconInterface_C::GetDefaultObj()
{
	static class IBPI_OrderIconInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_OrderIconInterface_C*>(IBPI_OrderIconInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_OrderIconInterface.BPI_OrderIconInterface_C.SubIconDownFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_OrderIconInterface_C::SubIconDownFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_OrderIconInterface_C", "SubIconDownFinish");



	UObject::ProcessEvent(Func, nullptr);

}

}


