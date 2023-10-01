#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_VarkidShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_VarkidShared.BPI_VarkidShared_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_VarkidShared_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_VarkidShared.BPI_VarkidShared_C");
		return ptr;
	}


	void Varkid_NonTechDeath();
	void Varkid_BreathAttackStop();
	void Varkid_BreathAttackStart();
	void Varkid_GetElement(EOakElementalType* VarkidElement);
	void Varkid_DestroyRibbon();
	void Varkid_DisableRibbon();
	void Varkid_EnableRibbon();
	void Varkid_HasNavForEvolve(bool* Result);
	void VarkidPod_Burst();
	void VarkidPod_HideBody();
	void Varkid_AddPoisonScreenFX(class UScreenParticleManagerComponent* PlayerScreenFXManager);
	void Varkid_IsFlying(bool IsFlying);
	void Varkid_TargetChanged(class AActor* TargetActor);
	void Varkid_SetBurrowed(bool IsBurrowed);
	void Varkid_GetIsInPod(bool* IsInPod_);
	void VarkidPod_PodAppears();
	void Varkid_Evolve(TEnumAsByte<Enum_VarkidEvolution> EvolveTo, class USpawnOptionData* CustomSpawnOption, class UGbxUIName* CustomPodUIName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
