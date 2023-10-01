#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_SM_DAL_Torrent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_SM_DAL_Torrent.LightProjectile_SM_DAL_Torrent_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_SM_DAL_Torrent_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_SM_DAL_Torrent.LightProjectile_SM_DAL_Torrent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
