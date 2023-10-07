#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_BillboardSM_Candle_A.BPi_BillboardSM_Candle_A_C
// (Actor)

class UClass* ABPi_BillboardSM_Candle_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_BillboardSM_Candle_A_C");

	return Clss;
}


// BPi_BillboardSM_Candle_A_C BPi_BillboardSM_Candle_A.Default__BPi_BillboardSM_Candle_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_BillboardSM_Candle_A_C* ABPi_BillboardSM_Candle_A_C::GetDefaultObj()
{
	static class ABPi_BillboardSM_Candle_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_BillboardSM_Candle_A_C*>(ABPi_BillboardSM_Candle_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


