#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_WorldMapPivotComponentV2.BP_WorldMapPivotComponentV2_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_WorldMapPivotComponentV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldMapPivotComponentV2_C");

	return Clss;
}


// BP_WorldMapPivotComponentV2_C BP_WorldMapPivotComponentV2.Default__BP_WorldMapPivotComponentV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WorldMapPivotComponentV2_C* UBP_WorldMapPivotComponentV2_C::GetDefaultObj()
{
	static class UBP_WorldMapPivotComponentV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WorldMapPivotComponentV2_C*>(UBP_WorldMapPivotComponentV2_C::StaticClass()->DefaultObject);

	return Default;
}

}


