#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_ATL_PS_SpiritOfMaya_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_ATL_PS_SpiritOfMaya.Damage_ATL_PS_SpiritOfMaya_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_ATL_PS_SpiritOfMaya_C : public UDamage_Grenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_ATL_PS_SpiritOfMaya.Damage_ATL_PS_SpiritOfMaya_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
