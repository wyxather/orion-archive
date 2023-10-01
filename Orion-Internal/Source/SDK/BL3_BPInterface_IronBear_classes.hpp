#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_IronBear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInterface_IronBear.BPInterface_IronBear_C
// 0x0000 (0x0028 - 0x0028)
class UBPInterface_IronBear_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInterface_IronBear.BPInterface_IronBear_C");
		return ptr;
	}


	void IronBear_DoMeleeAttack();
	void ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation);
	void SetBubbleShieldFXModOverrideEnabled(bool Enabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
