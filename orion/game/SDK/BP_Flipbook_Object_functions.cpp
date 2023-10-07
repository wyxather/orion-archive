#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Flipbook_Object.BP_Flipbook_Object_C
// (Actor)

class UClass* ABP_Flipbook_Object_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flipbook_Object_C");

	return Clss;
}


// BP_Flipbook_Object_C BP_Flipbook_Object.Default__BP_Flipbook_Object_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Flipbook_Object_C* ABP_Flipbook_Object_C::GetDefaultObj()
{
	static class ABP_Flipbook_Object_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Flipbook_Object_C*>(ABP_Flipbook_Object_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flipbook_Object.BP_Flipbook_Object_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Flipbook_Object_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Flipbook_Object_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


