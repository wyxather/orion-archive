#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_FalconStrike_Damage_Nuke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_FalconStrike_Damage_Nuke.Init_FalconStrike_Damage_Nuke_C
// 0x0000 (0x0030 - 0x0030)
class UInit_FalconStrike_Damage_Nuke_C : public UInit_IronBearHardpoint_DamageCalc_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_FalconStrike_Damage_Nuke.Init_FalconStrike_Damage_Nuke_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
