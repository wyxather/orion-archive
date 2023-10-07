#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemSpacer.ListItemSpacer_C
// (None)

class UClass* UListItemSpacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemSpacer_C");

	return Clss;
}


// ListItemSpacer_C ListItemSpacer.Default__ListItemSpacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemSpacer_C* UListItemSpacer_C::GetDefaultObj()
{
	static class UListItemSpacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemSpacer_C*>(UListItemSpacer_C::StaticClass()->DefaultObject);

	return Default;
}

}


