#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Rakk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Rakk.BPI_Rakk_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Rakk_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Rakk.BPI_Rakk_C");
		return ptr;
	}


	void StopAttackLoopAudio();
	void StartAttackLoopAudio();
	void StopAttackAction();
	void StartAttackAction(class UClass* ActionClass);
	void ChromaticSwitchCooldown();
	void ChromaticSwitchWarmup();
	void SetBreathFXSwitch(bool Enabled);
	void TryChromaticSwitch();
	void SpreadDamageAura(class AActor* SpreadToActor);
	void SetDamageAuraActive(bool Active);
	void ImbueWithElement(EOakElementalType ElementalType, class AActor* Source, float Duration);
	void OnKilled();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
