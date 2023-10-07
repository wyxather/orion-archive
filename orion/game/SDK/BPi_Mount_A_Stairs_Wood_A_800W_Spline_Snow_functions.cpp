#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow.BPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C
// (Actor)

class UClass* ABPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C");

	return Clss;
}


// BPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C BPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow.Default__BPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C* ABPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C::GetDefaultObj()
{
	static class ABPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C*>(ABPi_Mount_A_Stairs_Wood_A_800W_Spline_Snow_C::StaticClass()->DefaultObject);

	return Default;
}

}


