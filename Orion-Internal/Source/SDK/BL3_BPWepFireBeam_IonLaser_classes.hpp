#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireBeam_IonLaser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C
// 0x0010 (0x0948 - 0x0938)
class UBPWepFireBeam_IonLaser_C : public UWeaponFireBeamComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      LightProjectile;                                          // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyUseStarted_Event();
	void NotifyUseFinished_Event();
	void EvaluateShot();
	void K2_OnDeactivated();
	void ExecuteUbergraph_BPWepFireBeam_IonLaser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
