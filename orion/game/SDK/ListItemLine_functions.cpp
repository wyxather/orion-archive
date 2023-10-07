#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemLine.ListItemLine_C
// (None)

class UClass* UListItemLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemLine_C");

	return Clss;
}


// ListItemLine_C ListItemLine.Default__ListItemLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemLine_C* UListItemLine_C::GetDefaultObj()
{
	static class UListItemLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemLine_C*>(UListItemLine_C::StaticClass()->DefaultObject);

	return Default;
}

}


