#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_MJBillboardComponent.BP_MJBillboardComponent_C
// (SceneComponent)

class UClass* UBP_MJBillboardComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MJBillboardComponent_C");

	return Clss;
}


// BP_MJBillboardComponent_C BP_MJBillboardComponent.Default__BP_MJBillboardComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MJBillboardComponent_C* UBP_MJBillboardComponent_C::GetDefaultObj()
{
	static class UBP_MJBillboardComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MJBillboardComponent_C*>(UBP_MJBillboardComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


