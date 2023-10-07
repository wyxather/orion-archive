#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ShopTriggerBP.ShopTriggerBP_C
// (Actor)

class UClass* AShopTriggerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShopTriggerBP_C");

	return Clss;
}


// ShopTriggerBP_C ShopTriggerBP.Default__ShopTriggerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShopTriggerBP_C* AShopTriggerBP_C::GetDefaultObj()
{
	static class AShopTriggerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShopTriggerBP_C*>(AShopTriggerBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


