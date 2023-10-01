#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DmgType_Vampyr_HealArmor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Vampyr_HealArmor.DmgType_Vampyr_HealArmor_C
// 0x0000 (0x0150 - 0x0150)
class UDmgType_Vampyr_HealArmor_C : public UDmgType_Shock_Impact_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Vampyr_HealArmor.DmgType_Vampyr_HealArmor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
