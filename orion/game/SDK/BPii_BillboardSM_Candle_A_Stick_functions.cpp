#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPii_BillboardSM_Candle_A_Stick.BPii_BillboardSM_Candle_A_Stick_C
// (Actor)

class UClass* ABPii_BillboardSM_Candle_A_Stick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPii_BillboardSM_Candle_A_Stick_C");

	return Clss;
}


// BPii_BillboardSM_Candle_A_Stick_C BPii_BillboardSM_Candle_A_Stick.Default__BPii_BillboardSM_Candle_A_Stick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPii_BillboardSM_Candle_A_Stick_C* ABPii_BillboardSM_Candle_A_Stick_C::GetDefaultObj()
{
	static class ABPii_BillboardSM_Candle_A_Stick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPii_BillboardSM_Candle_A_Stick_C*>(ABPii_BillboardSM_Candle_A_Stick_C::StaticClass()->DefaultObject);

	return Default;
}

}


