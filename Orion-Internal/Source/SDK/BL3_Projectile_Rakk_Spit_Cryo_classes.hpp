#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_Cryo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Rakk_Spit_Cryo.Projectile_Rakk_Spit_Cryo_C
// 0x0010 (0x07F0 - 0x07E0)
class AProjectile_Rakk_Spit_Cryo_C : public AProjectile_Rakk_Spit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Rakk_Spit_Cryo.Projectile_Rakk_Spit_Cryo_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Projectile_Rakk_Spit_Cryo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
