#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Beckon_Minion_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_Beckon_Minion_Projectile.Mod_Beckon_Minion_Projectile_C
// 0x0000 (0x0498 - 0x0498)
class AMod_Beckon_Minion_Projectile_C : public AWasteland_Skull_Projectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Beckon_Minion_Projectile.Mod_Beckon_Minion_Projectile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
