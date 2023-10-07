#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_WorldMapPivotComponentV2_Ship.BP_WorldMapPivotComponentV2_Ship_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_WorldMapPivotComponentV2_Ship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldMapPivotComponentV2_Ship_C");

	return Clss;
}


// BP_WorldMapPivotComponentV2_Ship_C BP_WorldMapPivotComponentV2_Ship.Default__BP_WorldMapPivotComponentV2_Ship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WorldMapPivotComponentV2_Ship_C* UBP_WorldMapPivotComponentV2_Ship_C::GetDefaultObj()
{
	static class UBP_WorldMapPivotComponentV2_Ship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WorldMapPivotComponentV2_Ship_C*>(UBP_WorldMapPivotComponentV2_Ship_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WorldMapPivotComponentV2_Ship.BP_WorldMapPivotComponentV2_Ship_C.UpdateShipPosition
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WorldMapPivotComponentV2_Ship_C::UpdateShipPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapPivotComponentV2_Ship_C", "UpdateShipPosition");



	UObject::ProcessEvent(Func, nullptr);

}

}


