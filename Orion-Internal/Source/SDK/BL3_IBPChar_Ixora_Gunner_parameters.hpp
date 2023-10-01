#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Ixora_Gunner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramTemplate
struct UIBPChar_Ixora_Gunner_C_SetGunnerHologramTemplate_Params
{
	class UParticleSystem*                             Template;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramVisible
struct UIBPChar_Ixora_Gunner_C_SetGunnerHologramVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerDeviceVisible
struct UIBPChar_Ixora_Gunner_C_SetGunnerDeviceVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
