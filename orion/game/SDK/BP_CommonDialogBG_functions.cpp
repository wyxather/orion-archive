#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CommonDialogBG.BP_CommonDialogBG_C
// (None)

class UClass* UBP_CommonDialogBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CommonDialogBG_C");

	return Clss;
}


// BP_CommonDialogBG_C BP_CommonDialogBG.Default__BP_CommonDialogBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CommonDialogBG_C* UBP_CommonDialogBG_C::GetDefaultObj()
{
	static class UBP_CommonDialogBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CommonDialogBG_C*>(UBP_CommonDialogBG_C::StaticClass()->DefaultObject);

	return Default;
}

}


