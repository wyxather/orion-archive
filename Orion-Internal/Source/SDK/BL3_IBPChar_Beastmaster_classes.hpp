#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Beastmaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBPChar_Beastmaster.IBPChar_Beastmaster_C
// 0x0000 (0x0028 - 0x0028)
class UIBPChar_Beastmaster_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Beastmaster.IBPChar_Beastmaster_C");
		return ptr;
	}


	void TryForceSpawnPetAtLocation(const struct FVector& Location, bool* bRes);
	void SetNewPetThreatScale(float NewScale);
	void PlayPetAudioCallAndResponse(TEnumAsByte<Enum_BeastmasterDialogAction> DialogType);
	void GetCurrentPet(class AOakCharacter** res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
