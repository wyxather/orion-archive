#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Cine_TheVaultDoor_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cine_TheVaultDoor_A.SequenceDirector_C
// 0x0000 (0x0030 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cine_TheVaultDoor_A.SequenceDirector_C");
		return ptr;
	}


	void SequenceEvent_1();
	void FadeHordeLoop(class AActor** Actor);
	void ForceFadeOut();
	void PlayerEquipSword(class AActor** Target);
	void Call_DisableInput_1(class ABP_DirectionalLightning_C** Target);
	void ResetClothFemale(class UObject** Target);
	void ResetClothMale(class UObject** Object);
	void CallLightning(class UObject** Object);
	void ResetMaterials(class UObject** TargetObject);
	void DissolveCharacter(class UObject** Target);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
