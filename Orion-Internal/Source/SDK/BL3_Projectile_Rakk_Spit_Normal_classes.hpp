#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_Normal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Rakk_Spit_Normal.Projectile_Rakk_Spit_Normal_C
// 0x0008 (0x07E8 - 0x07E0)
class AProjectile_Rakk_Spit_Normal_C : public AProjectile_Rakk_Spit_C
{
public:
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Rakk_Spit_Normal.Projectile_Rakk_Spit_Normal_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
