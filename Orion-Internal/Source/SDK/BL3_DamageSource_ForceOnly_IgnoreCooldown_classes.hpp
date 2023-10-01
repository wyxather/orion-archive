#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_ForceOnly_IgnoreCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_ForceOnly_IgnoreCooldown.DamageSource_ForceOnly_IgnoreCooldown_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_ForceOnly_IgnoreCooldown_C : public UDamageSource_ForceOnly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_ForceOnly_IgnoreCooldown.DamageSource_ForceOnly_IgnoreCooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
