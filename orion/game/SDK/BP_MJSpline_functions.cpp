#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_MJSpline.BP_MJSpline_C
// (Actor)

class UClass* ABP_MJSpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MJSpline_C");

	return Clss;
}


// BP_MJSpline_C BP_MJSpline.Default__BP_MJSpline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MJSpline_C* ABP_MJSpline_C::GetDefaultObj()
{
	static class ABP_MJSpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MJSpline_C*>(ABP_MJSpline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MJSpline.BP_MJSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJSpline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJSpline_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


