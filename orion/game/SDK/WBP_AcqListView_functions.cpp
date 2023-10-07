#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass WBP_AcqListView.WBP_AcqListView_C
// (None)

class UClass* UWBP_AcqListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AcqListView_C");

	return Clss;
}


// WBP_AcqListView_C WBP_AcqListView.Default__WBP_AcqListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AcqListView_C* UWBP_AcqListView_C::GetDefaultObj()
{
	static class UWBP_AcqListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AcqListView_C*>(UWBP_AcqListView_C::StaticClass()->DefaultObject);

	return Default;
}

}


