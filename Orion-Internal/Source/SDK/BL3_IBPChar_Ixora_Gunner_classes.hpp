#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Ixora_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C
// 0x0000 (0x0028 - 0x0028)
class UIBPChar_Ixora_Gunner_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C");
		return ptr;
	}


	void SetGunnerHologramTemplate(class UParticleSystem* Template);
	void SetGunnerHologramVisible(bool Visible);
	void SetGunnerDeviceVisible(bool Visible);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
