#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewWidget_Layout.WBP_FieldCommandPreviewWidget_Layout_C
// (None)

class UClass* UWBP_FieldCommandPreviewWidget_Layout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewWidget_Layout_C");

	return Clss;
}


// WBP_FieldCommandPreviewWidget_Layout_C WBP_FieldCommandPreviewWidget_Layout.Default__WBP_FieldCommandPreviewWidget_Layout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewWidget_Layout_C* UWBP_FieldCommandPreviewWidget_Layout_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewWidget_Layout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewWidget_Layout_C*>(UWBP_FieldCommandPreviewWidget_Layout_C::StaticClass()->DefaultObject);

	return Default;
}

}


